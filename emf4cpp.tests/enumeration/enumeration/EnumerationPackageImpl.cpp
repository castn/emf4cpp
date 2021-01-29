// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/EnumerationPackageImpl.cpp
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

#include <enumeration/EnumerationPackage.hpp>
#include <enumeration/EnumerationFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::enumeration;

EnumerationPackage::EnumerationPackage()
{

    // Feature definitions of Bird
    m_Bird__type = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Bird__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void EnumerationPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = EnumerationFactory::_instance();
    basicsetEFactoryInstance(_fa);
    _fa->basicsetEPackage(_this());

// Create classes and their features
    auto &classifiers = (::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EClassifier_ptr, -1, true, true >&) getEClassifiers();

    { // Bird
        m_BirdEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
        m_BirdEClass->setClassifierID(BIRD);
        m_BirdEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_BirdEClass);
        // m_Bird__type has already been allocated above
        m_Bird__type->setFeatureID(
                ::enumeration::EnumerationPackage::BIRD__TYPE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BirdEClass->getEStructuralFeatures()).basicAdd(
                m_Bird__type);
        m_Bird__type->basicsetEContainingClass(m_BirdEClass);
        // m_Bird__name has already been allocated above
        m_Bird__name->setFeatureID(
                ::enumeration::EnumerationPackage::BIRD__NAME);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BirdEClass->getEStructuralFeatures()).basicAdd(
                m_Bird__name);
        m_Bird__name->basicsetEContainingClass(m_BirdEClass);
    }

    // Create enums

    { // BirdType
        m_BirdTypeEEnum = ::ecore::Ptr < ::ecore::EEnum > (new ::ecore::EEnum);
        m_BirdTypeEEnum->setClassifierID(BIRDTYPE);
        m_BirdTypeEEnum->basicsetEPackage(_this());
        classifiers.basicAdd(m_BirdTypeEEnum);
    }

    // Create data types

    // Initialize package
    setName("enumeration");
    setNsPrefix("enumeration");
    setNsURI("http://inchron.com/tests/enumeration");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    { // Bird
        m_BirdEClass->setName("Bird");
        m_BirdEClass->setAbstract(false);
        m_BirdEClass->setInterface(false);
        m_Bird__type->setEType(m_BirdTypeEEnum);
        m_Bird__type->setName("type");
        m_Bird__type->setDefaultValueLiteral("blackbird");
        m_Bird__type->setLowerBound(0);
        m_Bird__type->setUpperBound(1);
        m_Bird__type->setTransient(false);
        m_Bird__type->setVolatile(false);
        m_Bird__type->setChangeable(true);
        m_Bird__type->setUnsettable(false);
        m_Bird__type->setID(false);
        m_Bird__type->setUnique(true);
        m_Bird__type->setDerived(false);
        m_Bird__type->setOrdered(true);
        m_Bird__name->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        m_Bird__name->setName("name");
        m_Bird__name->setDefaultValueLiteral("Birdy");
        m_Bird__name->setLowerBound(0);
        m_Bird__name->setUpperBound(1);
        m_Bird__name->setTransient(false);
        m_Bird__name->setVolatile(false);
        m_Bird__name->setChangeable(true);
        m_Bird__name->setUnsettable(false);
        m_Bird__name->setID(false);
        m_Bird__name->setUnique(true);
        m_Bird__name->setDerived(false);
        m_Bird__name->setOrdered(true);

    }

    // TODO: Initialize data types

    { // BirdType
        m_BirdTypeEEnum->setName("BirdType");
        m_BirdTypeEEnum->setSerializable(true);

        {
            ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                    > (new ::ecore::EEnumLiteral);
            // unknown
            _el->setName("unknown");
            _el->setValue(-1);
            _el->setLiteral("unknown");
            _el->setEEnum(m_BirdTypeEEnum);
            m_BirdTypeEEnum->getELiterals().push_back(_el);
        }

        {
            ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                    > (new ::ecore::EEnumLiteral);
            // blackbird
            _el->setName("blackbird");
            _el->setValue(m_BirdTypeEEnum->getELiterals().size());
            _el->setLiteral("blackbird");
            _el->setEEnum(m_BirdTypeEEnum);
            m_BirdTypeEEnum->getELiterals().push_back(_el);
        }

        {
            ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                    > (new ::ecore::EEnumLiteral);
            // thrush
            _el->setName("thrush");
            _el->setValue(1);
            _el->setLiteral("thrush");
            _el->setEEnum(m_BirdTypeEEnum);
            m_BirdTypeEEnum->getELiterals().push_back(_el);
        }

        {
            ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                    > (new ::ecore::EEnumLiteral);
            // finch
            _el->setName("finch");
            _el->setValue(2);
            _el->setLiteral("finch");
            _el->setEEnum(m_BirdTypeEEnum);
            m_BirdTypeEEnum->getELiterals().push_back(_el);
        }

        {
            ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                    > (new ::ecore::EEnumLiteral);
            // starling
            _el->setName("starling");
            _el->setValue(3);
            _el->setLiteral("starling");
            _el->setEEnum(m_BirdTypeEEnum);
            m_BirdTypeEEnum->getELiterals().push_back(_el);
        }

        {
            ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                    > (new ::ecore::EEnumLiteral);
            // stork
            _el->setName("stork");
            _el->setValue(7);
            _el->setLiteral("stork");
            _el->setEEnum(m_BirdTypeEEnum);
            m_BirdTypeEEnum->getELiterals().push_back(_el);
        }
    }

    /* EAnnotations for EPackage, the EClasses and their EStructuralFeatures */
    ::ecore::EAnnotation_ptr _annotation;

    _initialize();
}

::ecore::EClass_ptr EnumerationPackage::getBird()
{
    return m_BirdEClass;
}
::ecore::EEnum_ptr EnumerationPackage::getBirdType()
{
    return m_BirdTypeEEnum;
}

::ecore::EAttribute_ptr EnumerationPackage::getBird__type()
{
    return m_Bird__type;
}
::ecore::EAttribute_ptr EnumerationPackage::getBird__name()
{
    return m_Bird__name;
}

