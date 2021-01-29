// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualFlowImpl.cpp
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

#include "ConceptualFlow.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ConceptualFlowImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::conceptual;

void ConceptualFlow::_initialize()
{
    // Supertypes
    ::kdm::conceptual::AbstractConceptualRelationship::_initialize();

    // References

    /*PROTECTED REGION ID(ConceptualFlowImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ConceptualFlow::eGet(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = m_stereotype->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = m_taggedValue->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO:
    {
        _any = ::ecore::as < ::ecore::EObject > (m_to.lock());
    }
        return _any;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM:
    {
        _any = ::ecore::as < ::ecore::EObject > (m_from.lock());
    }
        return _any;

    }
    throw "Error";
}

void ConceptualFlow::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecore::EList_ptr < ::ecore::EObject_ptr > _t0 =
                ::ecorecpp::mapping::any::any_cast
                        < ::ecore::EList_ptr< ::ecore::EObject_ptr >
                        > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecore::EList_ptr < ::ecore::EObject_ptr > _t0 =
                ::ecorecpp::mapping::any::any_cast
                        < ::ecore::EList_ptr< ::ecore::EObject_ptr >
                        > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        ::ecore::EList_ptr < ::ecore::EObject_ptr > _t0 =
                ::ecorecpp::mapping::any::any_cast
                        < ::ecore::EList_ptr< ::ecore::EObject_ptr >
                        > (_newValue);
        ::kdm::core::ModelElement::getStereotype().clear();
        ::kdm::core::ModelElement::getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        ::ecore::EList_ptr < ::ecore::EObject_ptr > _t0 =
                ::ecorecpp::mapping::any::any_cast
                        < ::ecore::EList_ptr< ::ecore::EObject_ptr >
                        > (_newValue);
        ::kdm::core::ModelElement::getTaggedValue().clear();
        ::kdm::core::ModelElement::getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::kdm::conceptual::ConceptualContainer_ptr _t1 =
                std::dynamic_pointer_cast
                        < ::kdm::conceptual::ConceptualContainer > (_t0);
        ::kdm::conceptual::ConceptualFlow::setTo(_t1);
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::kdm::conceptual::ConceptualContainer_ptr _t1 =
                std::dynamic_pointer_cast
                        < ::kdm::conceptual::ConceptualContainer > (_t0);
        ::kdm::conceptual::ConceptualFlow::setFrom(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ConceptualFlow::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
        return m_stereotype && m_stereotype->size();
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
        return m_taggedValue && m_taggedValue->size();
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO:
        return !m_to.expired();
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM:
        return !m_from.expired();

    }
    throw "Error";
}

void ConceptualFlow::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ConceptualFlow::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::conceptual::ConceptualPackage* >(::kdm::conceptual::ConceptualPackage::_instance().get())->getConceptualFlow();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ConceptualFlow::_inverseAdd(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO:
    {
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ConceptualFlow::_inverseRemove(::ecore::EInt _featureID,
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
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO:
    {
    }
        return;
    case ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

