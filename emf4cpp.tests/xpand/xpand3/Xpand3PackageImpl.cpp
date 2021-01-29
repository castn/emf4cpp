// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/Xpand3PackageImpl.cpp
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

#include <xpand3/Xpand3Package.hpp>
#include <xpand3/Xpand3Factory.hpp>
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
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

using namespace ::xpand3;

Xpand3Package::Xpand3Package()
{

    // Feature definitions of SyntaxElement
    m_SyntaxElement__line = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_SyntaxElement__start = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_SyntaxElement__end = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_SyntaxElement__fileName = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of File
    m_File__imports = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_File__declarations = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ImportStatement
    m_ImportStatement__exported = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ImportStatement__importedId = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Identifier
    m_Identifier__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of DeclaredParameter
    m_DeclaredParameter__name = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_DeclaredParameter__type = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void Xpand3Package::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = Xpand3Factory::_instance();
    basicsetEFactoryInstance(_fa);
    _fa->basicsetEPackage(_this());

// Create classes and their features
    auto &classifiers = (::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EClassifier_ptr, -1, true, true >&) getEClassifiers();

    { // SyntaxElement
        m_SyntaxElementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_SyntaxElementEClass->setClassifierID(SYNTAXELEMENT);
        m_SyntaxElementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_SyntaxElementEClass);
        // m_SyntaxElement__line has already been allocated above
        m_SyntaxElement__line->setFeatureID(
                ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SyntaxElementEClass->getEStructuralFeatures()).basicAdd(
                m_SyntaxElement__line);
        m_SyntaxElement__line->basicsetEContainingClass(m_SyntaxElementEClass);
        // m_SyntaxElement__start has already been allocated above
        m_SyntaxElement__start->setFeatureID(
                ::xpand3::Xpand3Package::SYNTAXELEMENT__START);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SyntaxElementEClass->getEStructuralFeatures()).basicAdd(
                m_SyntaxElement__start);
        m_SyntaxElement__start->basicsetEContainingClass(m_SyntaxElementEClass);
        // m_SyntaxElement__end has already been allocated above
        m_SyntaxElement__end->setFeatureID(
                ::xpand3::Xpand3Package::SYNTAXELEMENT__END);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SyntaxElementEClass->getEStructuralFeatures()).basicAdd(
                m_SyntaxElement__end);
        m_SyntaxElement__end->basicsetEContainingClass(m_SyntaxElementEClass);
        // m_SyntaxElement__fileName has already been allocated above
        m_SyntaxElement__fileName->setFeatureID(
                ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SyntaxElementEClass->getEStructuralFeatures()).basicAdd(
                m_SyntaxElement__fileName);
        m_SyntaxElement__fileName->basicsetEContainingClass(
                m_SyntaxElementEClass);
    }

    { // File
        m_FileEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
        m_FileEClass->setClassifierID(FILE);
        m_FileEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_FileEClass);
        // m_File__imports has already been allocated above
        m_File__imports->setFeatureID(::xpand3::Xpand3Package::FILE__IMPORTS);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileEClass->getEStructuralFeatures()).basicAdd(
                m_File__imports);
        m_File__imports->basicsetEContainingClass(m_FileEClass);
        // m_File__declarations has already been allocated above
        m_File__declarations->setFeatureID(
                ::xpand3::Xpand3Package::FILE__DECLARATIONS);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileEClass->getEStructuralFeatures()).basicAdd(
                m_File__declarations);
        m_File__declarations->basicsetEContainingClass(m_FileEClass);
    }

    { // ImportStatement
        m_ImportStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ImportStatementEClass->setClassifierID(IMPORTSTATEMENT);
        m_ImportStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_ImportStatementEClass);
        // m_ImportStatement__importedId has already been allocated above
        m_ImportStatement__importedId->setFeatureID(
                ::xpand3::Xpand3Package::IMPORTSTATEMENT__IMPORTEDID);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImportStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ImportStatement__importedId);
        m_ImportStatement__importedId->basicsetEContainingClass(
                m_ImportStatementEClass);
        // m_ImportStatement__exported has already been allocated above
        m_ImportStatement__exported->setFeatureID(
                ::xpand3::Xpand3Package::IMPORTSTATEMENT__EXPORTED);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImportStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ImportStatement__exported);
        m_ImportStatement__exported->basicsetEContainingClass(
                m_ImportStatementEClass);
    }

    { // Identifier
        m_IdentifierEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_IdentifierEClass->setClassifierID(IDENTIFIER);
        m_IdentifierEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_IdentifierEClass);
        // m_Identifier__value has already been allocated above
        m_Identifier__value->setFeatureID(
                ::xpand3::Xpand3Package::IDENTIFIER__VALUE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IdentifierEClass->getEStructuralFeatures()).basicAdd(
                m_Identifier__value);
        m_Identifier__value->basicsetEContainingClass(m_IdentifierEClass);
    }

    { // DeclaredParameter
        m_DeclaredParameterEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_DeclaredParameterEClass->setClassifierID(DECLAREDPARAMETER);
        m_DeclaredParameterEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_DeclaredParameterEClass);
        // m_DeclaredParameter__name has already been allocated above
        m_DeclaredParameter__name->setFeatureID(
                ::xpand3::Xpand3Package::DECLAREDPARAMETER__NAME);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeclaredParameterEClass->getEStructuralFeatures()).basicAdd(
                m_DeclaredParameter__name);
        m_DeclaredParameter__name->basicsetEContainingClass(
                m_DeclaredParameterEClass);
        // m_DeclaredParameter__type has already been allocated above
        m_DeclaredParameter__type->setFeatureID(
                ::xpand3::Xpand3Package::DECLAREDPARAMETER__TYPE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeclaredParameterEClass->getEStructuralFeatures()).basicAdd(
                m_DeclaredParameter__type);
        m_DeclaredParameter__type->basicsetEContainingClass(
                m_DeclaredParameterEClass);
    }

    // Create enums

    // Create data types

    getESubpackages().push_back(
            ::xpand3::expression::ExpressionPackage::_getInstanceAndRemoveOwnership());
    getESubpackages().push_back(
            ::xpand3::statement::StatementPackage::_getInstanceAndRemoveOwnership());
    getESubpackages().push_back(
            ::xpand3::declaration::DeclarationPackage::_getInstanceAndRemoveOwnership());

    // Initialize package
    setName("xpand3");
    setNsPrefix("xpand3");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_FileEClass->getESuperTypes().push_back(m_SyntaxElementEClass);
    m_ImportStatementEClass->getESuperTypes().push_back(m_SyntaxElementEClass);
    m_IdentifierEClass->getESuperTypes().push_back(m_SyntaxElementEClass);
    m_DeclaredParameterEClass->getESuperTypes().push_back(
            m_SyntaxElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    { // SyntaxElement
        m_SyntaxElementEClass->setName("SyntaxElement");
        m_SyntaxElementEClass->setAbstract(true);
        m_SyntaxElementEClass->setInterface(false);
        m_SyntaxElement__line->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
        m_SyntaxElement__line->setName("line");
        m_SyntaxElement__line->setDefaultValueLiteral("");
        m_SyntaxElement__line->setLowerBound(0);
        m_SyntaxElement__line->setUpperBound(1);
        m_SyntaxElement__line->setTransient(false);
        m_SyntaxElement__line->setVolatile(false);
        m_SyntaxElement__line->setChangeable(true);
        m_SyntaxElement__line->setUnsettable(false);
        m_SyntaxElement__line->setID(false);
        m_SyntaxElement__line->setUnique(true);
        m_SyntaxElement__line->setDerived(false);
        m_SyntaxElement__line->setOrdered(true);
        m_SyntaxElement__start->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
        m_SyntaxElement__start->setName("start");
        m_SyntaxElement__start->setDefaultValueLiteral("");
        m_SyntaxElement__start->setLowerBound(0);
        m_SyntaxElement__start->setUpperBound(1);
        m_SyntaxElement__start->setTransient(false);
        m_SyntaxElement__start->setVolatile(false);
        m_SyntaxElement__start->setChangeable(true);
        m_SyntaxElement__start->setUnsettable(false);
        m_SyntaxElement__start->setID(false);
        m_SyntaxElement__start->setUnique(true);
        m_SyntaxElement__start->setDerived(false);
        m_SyntaxElement__start->setOrdered(true);
        m_SyntaxElement__end->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
        m_SyntaxElement__end->setName("end");
        m_SyntaxElement__end->setDefaultValueLiteral("");
        m_SyntaxElement__end->setLowerBound(0);
        m_SyntaxElement__end->setUpperBound(1);
        m_SyntaxElement__end->setTransient(false);
        m_SyntaxElement__end->setVolatile(false);
        m_SyntaxElement__end->setChangeable(true);
        m_SyntaxElement__end->setUnsettable(false);
        m_SyntaxElement__end->setID(false);
        m_SyntaxElement__end->setUnique(true);
        m_SyntaxElement__end->setDerived(false);
        m_SyntaxElement__end->setOrdered(true);
        m_SyntaxElement__fileName->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        m_SyntaxElement__fileName->setName("fileName");
        m_SyntaxElement__fileName->setDefaultValueLiteral("");
        m_SyntaxElement__fileName->setLowerBound(0);
        m_SyntaxElement__fileName->setUpperBound(1);
        m_SyntaxElement__fileName->setTransient(false);
        m_SyntaxElement__fileName->setVolatile(false);
        m_SyntaxElement__fileName->setChangeable(true);
        m_SyntaxElement__fileName->setUnsettable(false);
        m_SyntaxElement__fileName->setID(false);
        m_SyntaxElement__fileName->setUnique(true);
        m_SyntaxElement__fileName->setDerived(false);
        m_SyntaxElement__fileName->setOrdered(true);

    }

    { // File
        m_FileEClass->setName("File");
        m_FileEClass->setAbstract(false);
        m_FileEClass->setInterface(false);

        m_File__imports->setEType(m_ImportStatementEClass);
        m_File__imports->setName("imports");
        m_File__imports->setDefaultValueLiteral("");
        m_File__imports->setLowerBound(0);
        m_File__imports->setUpperBound(-1);
        m_File__imports->setTransient(false);
        m_File__imports->setVolatile(false);
        m_File__imports->setChangeable(true);
        m_File__imports->setContainment(true);
        m_File__imports->setResolveProxies(true);
        m_File__imports->setUnique(true);
        m_File__imports->setDerived(false);
        m_File__imports->setOrdered(true);
        m_File__declarations->setEType(
                dynamic_cast< ::xpand3::declaration::DeclarationPackage* >(::xpand3::declaration::DeclarationPackage::_instance().get())->getAbstractDeclaration());
        m_File__declarations->setName("declarations");
        m_File__declarations->setDefaultValueLiteral("");
        m_File__declarations->setLowerBound(1);
        m_File__declarations->setUpperBound(-1);
        m_File__declarations->setTransient(false);
        m_File__declarations->setVolatile(false);
        m_File__declarations->setChangeable(true);
        m_File__declarations->setContainment(true);
        m_File__declarations->setResolveProxies(true);
        m_File__declarations->setUnique(true);
        m_File__declarations->setDerived(false);
        m_File__declarations->setOrdered(true);

    }

    { // ImportStatement
        m_ImportStatementEClass->setName("ImportStatement");
        m_ImportStatementEClass->setAbstract(false);
        m_ImportStatementEClass->setInterface(false);
        m_ImportStatement__exported->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
        m_ImportStatement__exported->setName("exported");
        m_ImportStatement__exported->setDefaultValueLiteral("");
        m_ImportStatement__exported->setLowerBound(0);
        m_ImportStatement__exported->setUpperBound(1);
        m_ImportStatement__exported->setTransient(false);
        m_ImportStatement__exported->setVolatile(false);
        m_ImportStatement__exported->setChangeable(true);
        m_ImportStatement__exported->setUnsettable(false);
        m_ImportStatement__exported->setID(false);
        m_ImportStatement__exported->setUnique(true);
        m_ImportStatement__exported->setDerived(false);
        m_ImportStatement__exported->setOrdered(true);

        m_ImportStatement__importedId->setEType(m_IdentifierEClass);
        m_ImportStatement__importedId->setName("importedId");
        m_ImportStatement__importedId->setDefaultValueLiteral("");
        m_ImportStatement__importedId->setLowerBound(0);
        m_ImportStatement__importedId->setUpperBound(1);
        m_ImportStatement__importedId->setTransient(false);
        m_ImportStatement__importedId->setVolatile(false);
        m_ImportStatement__importedId->setChangeable(true);
        m_ImportStatement__importedId->setContainment(true);
        m_ImportStatement__importedId->setResolveProxies(true);
        m_ImportStatement__importedId->setUnique(true);
        m_ImportStatement__importedId->setDerived(false);
        m_ImportStatement__importedId->setOrdered(true);

    }

    { // Identifier
        m_IdentifierEClass->setName("Identifier");
        m_IdentifierEClass->setAbstract(false);
        m_IdentifierEClass->setInterface(false);
        m_Identifier__value->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        m_Identifier__value->setName("value");
        m_Identifier__value->setDefaultValueLiteral("");
        m_Identifier__value->setLowerBound(0);
        m_Identifier__value->setUpperBound(1);
        m_Identifier__value->setTransient(false);
        m_Identifier__value->setVolatile(false);
        m_Identifier__value->setChangeable(true);
        m_Identifier__value->setUnsettable(false);
        m_Identifier__value->setID(false);
        m_Identifier__value->setUnique(true);
        m_Identifier__value->setDerived(false);
        m_Identifier__value->setOrdered(true);

    }

    { // DeclaredParameter
        m_DeclaredParameterEClass->setName("DeclaredParameter");
        m_DeclaredParameterEClass->setAbstract(false);
        m_DeclaredParameterEClass->setInterface(false);

        m_DeclaredParameter__name->setEType(m_IdentifierEClass);
        m_DeclaredParameter__name->setName("name");
        m_DeclaredParameter__name->setDefaultValueLiteral("");
        m_DeclaredParameter__name->setLowerBound(0);
        m_DeclaredParameter__name->setUpperBound(1);
        m_DeclaredParameter__name->setTransient(false);
        m_DeclaredParameter__name->setVolatile(false);
        m_DeclaredParameter__name->setChangeable(true);
        m_DeclaredParameter__name->setContainment(true);
        m_DeclaredParameter__name->setResolveProxies(true);
        m_DeclaredParameter__name->setUnique(true);
        m_DeclaredParameter__name->setDerived(false);
        m_DeclaredParameter__name->setOrdered(true);
        m_DeclaredParameter__type->setEType(m_IdentifierEClass);
        m_DeclaredParameter__type->setName("type");
        m_DeclaredParameter__type->setDefaultValueLiteral("");
        m_DeclaredParameter__type->setLowerBound(0);
        m_DeclaredParameter__type->setUpperBound(1);
        m_DeclaredParameter__type->setTransient(false);
        m_DeclaredParameter__type->setVolatile(false);
        m_DeclaredParameter__type->setChangeable(true);
        m_DeclaredParameter__type->setContainment(true);
        m_DeclaredParameter__type->setResolveProxies(true);
        m_DeclaredParameter__type->setUnique(true);
        m_DeclaredParameter__type->setDerived(false);
        m_DeclaredParameter__type->setOrdered(true);

    }

    // TODO: Initialize data types

    /* EAnnotations for EPackage, the EClasses and their EStructuralFeatures */
    ::ecore::EAnnotation_ptr _annotation;

    _initialize();
}

::ecore::EClass_ptr Xpand3Package::getSyntaxElement()
{
    return m_SyntaxElementEClass;
}
::ecore::EClass_ptr Xpand3Package::getFile()
{
    return m_FileEClass;
}
::ecore::EClass_ptr Xpand3Package::getImportStatement()
{
    return m_ImportStatementEClass;
}
::ecore::EClass_ptr Xpand3Package::getIdentifier()
{
    return m_IdentifierEClass;
}
::ecore::EClass_ptr Xpand3Package::getDeclaredParameter()
{
    return m_DeclaredParameterEClass;
}

::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__line()
{
    return m_SyntaxElement__line;
}
::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__start()
{
    return m_SyntaxElement__start;
}
::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__end()
{
    return m_SyntaxElement__end;
}
::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__fileName()
{
    return m_SyntaxElement__fileName;
}
::ecore::EReference_ptr Xpand3Package::getFile__imports()
{
    return m_File__imports;
}
::ecore::EReference_ptr Xpand3Package::getFile__declarations()
{
    return m_File__declarations;
}
::ecore::EReference_ptr Xpand3Package::getImportStatement__importedId()
{
    return m_ImportStatement__importedId;
}
::ecore::EAttribute_ptr Xpand3Package::getImportStatement__exported()
{
    return m_ImportStatement__exported;
}
::ecore::EAttribute_ptr Xpand3Package::getIdentifier__value()
{
    return m_Identifier__value;
}
::ecore::EReference_ptr Xpand3Package::getDeclaredParameter__name()
{
    return m_DeclaredParameter__name;
}
::ecore::EReference_ptr Xpand3Package::getDeclaredParameter__type()
{
    return m_DeclaredParameter__type;
}

