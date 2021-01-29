// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/NodeImpl.cpp
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

#include "Node.hpp"
#include <CST/CSTPackage.hpp>
#include <CST/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(NodeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::CST;

void Node::_initialize()
{
    // Supertypes
    ::CST::Element::_initialize();

    // References
    for (size_t i = 0; i < m_children->size(); i++)
    {
        (*m_children)[i]->_initialize();
    }

    /*PROTECTED REGION ID(NodeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Node::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::CST::CSTPackage::ELEMENT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getKind());
    }
        return _any;
    case ::CST::CSTPackage::NODE__CHILDREN:
    {
        _any = getChildren().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void Node::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::ELEMENT__KIND:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setKind(_t0);
    }
        return;
    case ::CST::CSTPackage::NODE__CHILDREN:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getChildren().clear();
        getChildren().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Node::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::ELEMENT__KIND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getKind());
    case ::CST::CSTPackage::NODE__CHILDREN:
        return getChildren().size() > 0;

    }
    throw "Error";
}

void Node::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Node::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::CST::CSTPackage* >(::CST::CSTPackage::_instance().get())->getNode();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Node::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::NODE__CHILDREN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Node::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::NODE__CHILDREN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

