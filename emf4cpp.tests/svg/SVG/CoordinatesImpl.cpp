// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/CoordinatesImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2019 <emf4cpp@inchron.com>
 * Copyright (C) INCHRON AG 2019-2021 <emf4cpp@inchron.com>
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

#include "Coordinates.hpp"
#include <SVG/SVGPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CoordinatesImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

void Coordinates::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(CoordinatesImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Coordinates::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::COORDINATES__X:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::toAny(_any, getX());
    }
        return _any;
    case ::SVG::SVGPackage::COORDINATES__Y:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::toAny(_any, getY());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Coordinates::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::COORDINATES__X:
    {
        ::PrimitiveTypes::Double _t0;
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::fromAny(_newValue, _t0);
        setX(_t0);
    }
        return;
    case ::SVG::SVGPackage::COORDINATES__Y:
    {
        ::PrimitiveTypes::Double _t0;
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Double
                > ::fromAny(_newValue, _t0);
        setY(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Coordinates::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::COORDINATES__X:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::Double
                > ::is_set(getX());
    case ::SVG::SVGPackage::COORDINATES__Y:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::Double
                > ::is_set(getY());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Coordinates::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Coordinates::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::SVG::SVGPackage::_instance()->getCoordinates();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Coordinates::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Coordinates::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

