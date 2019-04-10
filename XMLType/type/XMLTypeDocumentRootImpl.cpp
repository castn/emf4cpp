// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/XMLTypeDocumentRootImpl.cpp
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

#include "XMLTypeDocumentRoot.hpp"
#include <type/TypePackage.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <type/ProcessingInstruction.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(XMLTypeDocumentRootImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

void XMLTypeDocumentRoot::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_xMLNSPrefixMap->size(); i++)
    {
        (*m_xMLNSPrefixMap)[i]->_initialize();
    }
    for (size_t i = 0; i < m_xSISchemaLocation->size(); i++)
    {
        (*m_xSISchemaLocation)[i]->_initialize();
    }
    for (size_t i = 0; i < m_processingInstruction->size(); i++)
    {
        (*m_processingInstruction)[i]->_initialize();
    }

    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject XMLTypeDocumentRoot::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(m_mixed.size());
        for (size_t _i = 0; _i < m_mixed.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], m_mixed[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
        _any = m_xMLNSPrefixMap->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
        _any = m_xSISchemaLocation->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void XMLTypeDocumentRoot::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED:
    {
        ::ecore::EFeatureMapEntry _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                > ::fromAny(_newValue, _t0);
        ::type::XMLTypeDocumentRoot::addMixed(_t0);
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::type::XMLTypeDocumentRoot::getXMLNSPrefixMap().clear();
        ::type::XMLTypeDocumentRoot::getXMLNSPrefixMap().insert_all(*_t0);
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::type::XMLTypeDocumentRoot::getXSISchemaLocation().clear();
        ::type::XMLTypeDocumentRoot::getXSISchemaLocation().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean XMLTypeDocumentRoot::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED:
        return m_mixed.size();
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
        return m_xMLNSPrefixMap && m_xMLNSPrefixMap->size();
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
        return m_xSISchemaLocation && m_xSISchemaLocation->size();
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__CDATA:
        return m_cDATA.size();
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__COMMENT:
        return m_comment.size();
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__PROCESSINGINSTRUCTION:
        return m_processingInstruction && m_processingInstruction->size();
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__TEXT:
        return m_text.size();

    }
    throw "Error";
}

void XMLTypeDocumentRoot::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr XMLTypeDocumentRoot::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance().get())->getXMLTypeDocumentRoot();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void XMLTypeDocumentRoot::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void XMLTypeDocumentRoot::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}
