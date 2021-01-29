// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildResource.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2018 <emf4cpp@inchron.com>
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

#include "BuildResource.hpp"
#include <kdm/build/AbstractBuildElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/build/BuildPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BuildResource.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::build;

// Default constructor
BuildResource::BuildResource()
{

    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::core::KDMEntity_ptr, -1, false, false >(this,
                    ::kdm::build::BuildPackage::_instance()->getBuildResource__implementation()));
    m_groupedBuild.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::build::AbstractBuildElement_ptr, -1, false, false >(
                    this,
                    ::kdm::build::BuildPackage::_instance()->getBuildResource__groupedBuild()));
    m_buildElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::build::AbstractBuildElement_ptr, -1, true, false >(
                    this,
                    ::kdm::build::BuildPackage::_instance()->getBuildResource__buildElement()));

    /*PROTECTED REGION ID(BuildResourceImpl__BuildResourceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BuildResource::~BuildResource()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& BuildResource::getImplementation() const
{
    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& BuildResource::getImplementation()
{
    return *m_implementation;
}

const ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& BuildResource::getGroupedBuild() const
{
    return *m_groupedBuild;
}

::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& BuildResource::getGroupedBuild()
{
    return *m_groupedBuild;
}

const ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& BuildResource::getBuildElement() const
{
    return *m_buildElement;
}

::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& BuildResource::getBuildElement()
{
    return *m_buildElement;
}

