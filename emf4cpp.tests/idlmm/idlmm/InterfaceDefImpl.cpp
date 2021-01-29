// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/InterfaceDefImpl.cpp
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

#include "InterfaceDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/InterfaceDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InterfaceDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void InterfaceDef::_initialize()
{
    // Supertypes
    ::idlmm::Container::_initialize();
    ::idlmm::TypedefDef::_initialize();

    // References

    /*PROTECTED REGION ID(InterfaceDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterfaceDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_identifier);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_repositoryId);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_version);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_absoluteName);
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        _any = ::ecore::as < ::ecore::EObject > (m_definedIn.lock());
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINER__CONTAINS:
    {
        _any = m_contains->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::IDLTYPE__TYPECODE:
    {
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::toAny(_any, m_typeCode);
    }
        return _any;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISABSTRACT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_isAbstract);
    }
        return _any;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISCUSTOM:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_isCustom);
    }
        return _any;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISTRUNCATABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_isTruncatable);
    }
        return _any;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__DERIVESFROM:
    {
        _any = m_derivesFrom->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void InterfaceDef::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setRepositoryId(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setVersion(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::idlmm::Contained::setAbsoluteName(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Container_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Container > (_t0);
        ::idlmm::Contained::setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINER__CONTAINS:
    {
        ::ecore::EList_ptr < ::ecore::EObject_ptr > _t0 =
                ::ecorecpp::mapping::any::any_cast
                        < ::ecore::EList_ptr< ::ecore::EObject_ptr >
                        > (_newValue);
        ::idlmm::Container::getContains().clear();
        ::idlmm::Container::getContains().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::IDLTYPE__TYPECODE:
    {
        ::idlmm::ETypeCode _t0;
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::fromAny(_newValue, _t0);
        ::idlmm::IDLType::setTypeCode(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISABSTRACT:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::idlmm::InterfaceDef::setIsAbstract(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISCUSTOM:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::idlmm::InterfaceDef::setIsCustom(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISTRUNCATABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::idlmm::InterfaceDef::setIsTruncatable(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__DERIVESFROM:
    {
        ::ecore::EList_ptr < ::ecore::EObject_ptr > _t0 =
                ::ecorecpp::mapping::any::any_cast
                        < ::ecore::EList_ptr< ::ecore::EObject_ptr >
                        > (_newValue);
        ::idlmm::InterfaceDef::getDerivesFrom().clear();
        ::idlmm::InterfaceDef::getDerivesFrom().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InterfaceDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_identifier);
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_repositoryId);
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_version);
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_absoluteName);
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
        return !m_definedIn.expired();
    case ::idlmm::IdlmmPackage::CONTAINER__CONTAINS:
        return m_contains && m_contains->size();
    case ::idlmm::IdlmmPackage::IDLTYPE__TYPECODE:
        return ::ecorecpp::mapping::set_traits < ::idlmm::ETypeCode
                > ::is_set(m_typeCode);
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISABSTRACT:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_isAbstract);
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISCUSTOM:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_isCustom);
    case ::idlmm::IdlmmPackage::INTERFACEDEF__ISTRUNCATABLE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_isTruncatable);
    case ::idlmm::IdlmmPackage::INTERFACEDEF__DERIVESFROM:
        return m_derivesFrom && m_derivesFrom->size();

    }
    throw "Error";
}

void InterfaceDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InterfaceDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::idlmm::IdlmmPackage* >(::idlmm::IdlmmPackage::_instance().get())->getInterfaceDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InterfaceDef::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Container_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Container > (_t0);

        // set reference
        basicsetDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINER__CONTAINS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Contained_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Contained > (_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::idlmm::Contained_ptr, -1, true, true >&) ::idlmm::Container::getContains();
        container.basicAdd(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__DERIVESFROM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InterfaceDef::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::idlmm::Container_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Container > (_t0);

        // set reference
        if (basicgetDefinedIn() == _t1)
            basicsetDefinedIn(nullptr);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINER__CONTAINS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::idlmm::Contained_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Contained > (_t0);

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::idlmm::Contained_ptr, -1, true, true >&) ::idlmm::Container::getContains();
        container.basicRemove(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::INTERFACEDEF__DERIVESFROM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

