// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceSet.cpp
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ResourceSet.hpp"

#include <mapping/EListImpl.hpp>

#include "URIConverter.hpp"

namespace ecorecpp {
namespace resource {

ResourceSet& ResourceSet::getInstance() {
	static ResourceSet instance;
	return instance;
}

ResourceSet::ResourceSet()
	: _uriConverter(nullptr),
	  _resourceRegistry(nullptr),
	  _resources(std::make_shared<::ecorecpp::mapping::EListImpl<Resource_ptr>>()) {
}

/** Cleanup a ResourceSet.
 *
 * A Resource de-registers itself from the ResourceSet. To avoid invalid
 * iterators when deleting the _resource container, we first iterate over a
 * copy of the container and de-register the ResourceSet from the Resources.
 *
 * Afterwards the _resource container is empty. If tmpCopy now holds the only
 * smart-pointer instance for a Resource, the Resource will be deleted, to.
 */
ResourceSet::~ResourceSet() {
	std::vector<Resource_ptr> tmpCopy;
	for (auto r : *_resources)
		tmpCopy.push_back(r);

	for (auto r : tmpCopy)
		r->setResourceSet(nullptr);
}

::ecorecpp::mapping::EList<Resource_ptr>& ResourceSet::getResources() {
	return *_resources;
}

Resource_ptr ResourceSet::createResource(const QUrl& uri) {
	Resource::Factory::Registry* registry = getResourceFactoryRegistry();
	if (!registry)
		throw std::logic_error("No factory registry found!");

	Resource::Factory* factory = registry->getFactory(uri);
	if (!factory)
		throw std::logic_error("No resource factory found!");

	Resource_ptr resource = factory->createResource(uri);
	resource->setResourceSet(this);
	getResources().push_back(resource);
	return resource;
}

Resource_ptr ResourceSet::createResource(const QUrl& uri,
		const std::string& contentType) {
	throw std::logic_error("Not yet implemented!");
	return Resource_ptr();
}

::ecore::EObject_ptr ResourceSet::getEObject(const QUrl& uri, bool loadOnDemand) {
	Resource_ptr resource = getResource(uri, loadOnDemand);
	if (resource)
		return resource->getEObject(uri.fragment().toStdString());

	return ::ecore::EObject_ptr();
}

URIConverter* ResourceSet::getURIConverter() {
	if (!_uriConverter)
		_uriConverter.reset(new URIConverter());

	return _uriConverter.get();
}

void ResourceSet::setURIConverter(const URIConverter& conv) {
	_uriConverter.reset(new URIConverter(conv));
}

Resource_ptr ResourceSet::getResource(const QUrl& uri, bool loadOnDemand) {
//1. Normalize uri:
	QUrl normalizedUri(uri);
	normalizedUri = getURIConverter()->normalize(uri);

//2. Try to find resource in existing resources:
	for (const auto& res : *_resources) {
		if ( getURIConverter()->normalize(res->getURI()).matches(
					normalizedUri, QUrl::RemoveFragment | QUrl::RemoveQuery) ) {
			if (loadOnDemand && !res->isLoaded())
				res->load();
			return res;
		}
	}

//3. Delegate URI resolving to elsewhere (not implemented)

//4. create and load resource if demanded:
	if (!loadOnDemand)
		return nullptr;

	Resource_ptr res = createResource(normalizedUri);
	if (res)
		res->load();

	return res;
}

::ecorecpp::util::TreeIterator<::ecore::EObject_ptr> ResourceSet::getAllContents() {
	::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type retList =
			std::make_shared<::ecorecpp::mapping::EListImpl<::ecore::EObject_ptr>>();

	for ( auto res : getResources() ) {
		retList->insert_all(*res->getContents());
	}

	return ::ecorecpp::util::TreeIterator<::ecore::EObject_ptr>(retList);
};

Resource::Factory::Registry* ResourceSet::getResourceFactoryRegistry() const {
	//1. If a ResourceSet local registry exists, return.
	if (_resourceRegistry)
		return _resourceRegistry.get();

	//2. Else return global registry
	return &Resource::Factory::Registry::getInstance();
}

void ResourceSet::setResourceFactoryRegistry(Resource::Factory::Registry* reg) {
	_resourceRegistry.reset(reg);
}

} // resource
} // ecorecpp
