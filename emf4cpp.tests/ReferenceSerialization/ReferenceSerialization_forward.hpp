// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization_forward.hpp
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

#ifndef _REFERENCESERIALIZATION_FORWARD_HPP
#define _REFERENCESERIALIZATION_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(ReferenceSerialization_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

namespace ReferenceSerialization
{

// EDataType

// EClass

// Container
    class Container;
    using Container_ptr = ::ecore::Ptr<Container>;

// Content
    class Content;
    using Content_ptr = ::ecore::Ptr<Content>;

// Child
    class Child;
    using Child_ptr = ::ecore::Ptr<Child>;

// EEnum

// Package & Factory
    class ReferenceSerializationFactory;
    using ReferenceSerializationFactory_ptr = ::ecore::Ptr<ReferenceSerializationFactory>;
    class ReferenceSerializationPackage;
    using ReferenceSerializationPackage_ptr = ::ecore::Ptr<ReferenceSerializationPackage>;

} // ReferenceSerialization

#endif // _REFERENCESERIALIZATION_FORWARD_HPP
