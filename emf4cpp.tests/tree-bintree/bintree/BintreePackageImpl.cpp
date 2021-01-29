// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BintreePackageImpl.cpp
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

#include <bintree/BintreePackage.hpp>
#include <bintree/BintreeFactory.hpp>
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

using namespace ::bintree;

BintreePackage::BintreePackage()
{

    // Feature definitions of BinTreeNode
    m_BinTreeNode__data = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_BinTreeNode__parent = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_BinTreeNode__left = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_BinTreeNode__right = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void BintreePackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = BintreeFactory::_instance();
    basicsetEFactoryInstance(_fa);
    _fa->basicsetEPackage(_this());

// Create classes and their features
    auto &classifiers = (::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EClassifier_ptr, -1, true, true >&) getEClassifiers();

    { // BinTreeNode
        m_BinTreeNodeEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_BinTreeNodeEClass->setClassifierID(BINTREENODE);
        m_BinTreeNodeEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_BinTreeNodeEClass);
        // m_BinTreeNode__parent has already been allocated above
        m_BinTreeNode__parent->setFeatureID(
                ::bintree::BintreePackage::BINTREENODE__PARENT);
        m_BinTreeNode__parent->setName("parent");
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BinTreeNodeEClass->getEStructuralFeatures()).basicAdd(
                m_BinTreeNode__parent);
        m_BinTreeNode__parent->basicsetEContainingClass(m_BinTreeNodeEClass);
        // m_BinTreeNode__left has already been allocated above
        m_BinTreeNode__left->setFeatureID(
                ::bintree::BintreePackage::BINTREENODE__LEFT);
        m_BinTreeNode__left->setName("left");
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BinTreeNodeEClass->getEStructuralFeatures()).basicAdd(
                m_BinTreeNode__left);
        m_BinTreeNode__left->basicsetEContainingClass(m_BinTreeNodeEClass);
        // m_BinTreeNode__right has already been allocated above
        m_BinTreeNode__right->setFeatureID(
                ::bintree::BintreePackage::BINTREENODE__RIGHT);
        m_BinTreeNode__right->setName("right");
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BinTreeNodeEClass->getEStructuralFeatures()).basicAdd(
                m_BinTreeNode__right);
        m_BinTreeNode__right->basicsetEContainingClass(m_BinTreeNodeEClass);
        // m_BinTreeNode__data has already been allocated above
        m_BinTreeNode__data->setFeatureID(
                ::bintree::BintreePackage::BINTREENODE__DATA);
        m_BinTreeNode__data->setName("data");
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BinTreeNodeEClass->getEStructuralFeatures()).basicAdd(
                m_BinTreeNode__data);
        m_BinTreeNode__data->basicsetEContainingClass(m_BinTreeNodeEClass);
    }

    // Create enums

    // Create data types

    // Initialize package
    setName("bintree");
    setNsPrefix("bintree");
    setNsURI("http://bintree/1.0");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    { // BinTreeNode
        m_BinTreeNodeEClass->setName("BinTreeNode");
        m_BinTreeNodeEClass->setAbstract(false);
        m_BinTreeNodeEClass->setInterface(false);
        m_BinTreeNode__data->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        m_BinTreeNode__data->setDefaultValueLiteral("");
        m_BinTreeNode__data->setLowerBound(0);
        m_BinTreeNode__data->setUpperBound(1);
        m_BinTreeNode__data->setTransient(false);
        m_BinTreeNode__data->setVolatile(false);
        m_BinTreeNode__data->setChangeable(true);
        m_BinTreeNode__data->setUnsettable(false);
        m_BinTreeNode__data->setID(false);
        m_BinTreeNode__data->setUnique(true);
        m_BinTreeNode__data->setDerived(false);
        m_BinTreeNode__data->setOrdered(true);

        m_BinTreeNode__parent->setEType(m_BinTreeNodeEClass);
        m_BinTreeNode__parent->setDefaultValueLiteral("");
        m_BinTreeNode__parent->setLowerBound(0);
        m_BinTreeNode__parent->setUpperBound(1);
        m_BinTreeNode__parent->setTransient(true);
        m_BinTreeNode__parent->setVolatile(false);
        m_BinTreeNode__parent->setChangeable(true);
        m_BinTreeNode__parent->setContainment(false);
        m_BinTreeNode__parent->setResolveProxies(true);
        m_BinTreeNode__parent->setUnique(true);
        m_BinTreeNode__parent->setDerived(false);
        m_BinTreeNode__parent->setOrdered(true);
        m_BinTreeNode__left->setEType(m_BinTreeNodeEClass);
        m_BinTreeNode__left->setDefaultValueLiteral("");
        m_BinTreeNode__left->setLowerBound(0);
        m_BinTreeNode__left->setUpperBound(1);
        m_BinTreeNode__left->setTransient(false);
        m_BinTreeNode__left->setVolatile(false);
        m_BinTreeNode__left->setChangeable(true);
        m_BinTreeNode__left->setContainment(true);
        m_BinTreeNode__left->setResolveProxies(true);
        m_BinTreeNode__left->setUnique(true);
        m_BinTreeNode__left->setDerived(false);
        m_BinTreeNode__left->setOrdered(true);
        m_BinTreeNode__right->setEType(m_BinTreeNodeEClass);
        m_BinTreeNode__right->setDefaultValueLiteral("");
        m_BinTreeNode__right->setLowerBound(0);
        m_BinTreeNode__right->setUpperBound(1);
        m_BinTreeNode__right->setTransient(false);
        m_BinTreeNode__right->setVolatile(false);
        m_BinTreeNode__right->setChangeable(true);
        m_BinTreeNode__right->setContainment(true);
        m_BinTreeNode__right->setResolveProxies(true);
        m_BinTreeNode__right->setUnique(true);
        m_BinTreeNode__right->setDerived(false);
        m_BinTreeNode__right->setOrdered(true);

    }

    // TODO: Initialize data types

    /* EAnnotations for EPackage, the EClasses and their EStructuralFeatures */
    ::ecore::EAnnotation_ptr _annotation;

    _initialize();
}

::ecore::EClass_ptr BintreePackage::getBinTreeNode()
{
    return m_BinTreeNodeEClass;
}

::ecore::EReference_ptr BintreePackage::getBinTreeNode__parent()
{
    return m_BinTreeNode__parent;
}
::ecore::EReference_ptr BintreePackage::getBinTreeNode__left()
{
    return m_BinTreeNode__left;
}
::ecore::EReference_ptr BintreePackage::getBinTreeNode__right()
{
    return m_BinTreeNode__right;
}
::ecore::EAttribute_ptr BintreePackage::getBinTreeNode__data()
{
    return m_BinTreeNode__data;
}

