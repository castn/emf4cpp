// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/Apollo11.hpp
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

#ifndef EDATE_APOLLO11_HPP
#define EDATE_APOLLO11_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <edate/dllEdate.hpp>
#include <edate_forward.hpp>

#include <ecore_forward.hpp>

#include "EdatePackage.hpp"

/*PROTECTED REGION ID(Apollo11_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace edate
{

class EXPORT_EDATE_DLL Apollo11 : public virtual ::ecore::EObject
{
public:
    Apollo11();

    virtual ~Apollo11();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EDate getFirstManOnMoonDate () const;
    virtual void setFirstManOnMoonDate (::ecore::EDate _FirstManOnMoonDate);

    // References
    virtual ::edate::Person_ptr getMember () const;
    virtual void setMember (::edate::Person_ptr _Member);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = EdatePackage::APOLLO11;

    /*PROTECTED REGION ID(Apollo11) START*/
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

    /*PROTECTED REGION ID(Apollo11Impl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Apollo11_ptr _this()
    {   return Apollo11_ptr(this);}

    // Attributes

    ::ecore::EDate m_FirstManOnMoonDate
    {   "1969-07-20T20:18:00.000+0000"};

    // References

    ::edate::Person_ptr m_Member;

};

}
 // edate

#endif // EDATE_APOLLO11_HPP
