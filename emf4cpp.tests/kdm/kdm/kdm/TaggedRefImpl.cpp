// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/TaggedRefImpl.cpp
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

#include "TaggedRef.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/TagDefinition.hpp>
#include <kdm/core/ModelElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TaggedRefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

void TaggedRef::_initialize()
{
    // Supertypes
    ::kdm::kdm::ExtendedValue::_initialize();

    // References

    /*PROTECTED REGION ID(TaggedRefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TaggedRef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG:
    {
        if (m_tag)
            _any = ::ecore::as < ::ecore::EObject > (m_tag);
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
        if (m_reference)
            _any = ::ecore::as < ::ecore::EObject > (m_reference);
    }
        return _any;

    }
    throw "Error";
}

void TaggedRef::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::kdm::kdm::TagDefinition_ptr _t1 =
                dynamic_cast< ::kdm::kdm::TagDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::kdm::kdm::TagDefinition >(_t0);*/
        ::kdm::kdm::ExtendedValue::setTag(_t1);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::kdm::core::ModelElement_ptr _t1 =
                dynamic_cast< ::kdm::core::ModelElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::kdm::core::ModelElement >(_t0);*/
        ::kdm::kdm::TaggedRef::setReference(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TaggedRef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG:
        return (bool) m_tag;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
        return (bool) m_reference;

    }
    throw "Error";
}

void TaggedRef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TaggedRef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance().get())->getTaggedRef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TaggedRef::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TaggedRef::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

