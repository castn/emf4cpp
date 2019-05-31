// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/ImportStatement.hpp
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

#ifndef XPAND3_IMPORTSTATEMENT_HPP
#define XPAND3_IMPORTSTATEMENT_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/SyntaxElement.hpp>

#include "Xpand3Package.hpp"

/*PROTECTED REGION ID(ImportStatement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{

class EXPORT_XPAND3_DLL ImportStatement : public virtual ::xpand3::SyntaxElement
{
public:
    ImportStatement();

    virtual ~ImportStatement();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isExported () const;
    virtual void setExported (::ecore::EBoolean _exported);

    // References
    virtual ::xpand3::Identifier_ptr getImportedId () const;
    virtual void setImportedId (::xpand3::Identifier_ptr _importedId);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Xpand3Package::IMPORTSTATEMENT;

    /*PROTECTED REGION ID(ImportStatement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(ImportStatementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ImportStatement_ptr _this()
    {   return std::dynamic_pointer_cast<ImportStatement>(shared_from_this());}

    // Attributes

    ::ecore::EBoolean m_exported
    {};

    // References

    ::xpand3::Identifier_ptr m_importedId;

};

}
 // xpand3

#endif // XPAND3_IMPORTSTATEMENT_HPP

