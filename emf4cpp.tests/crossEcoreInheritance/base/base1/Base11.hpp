// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base11.hpp
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

#ifndef BASE_BASE1_BASE11_HPP
#define BASE_BASE1_BASE11_HPP

#include <base/dllBase.hpp>
#include <base/base1_forward.hpp>

#include <ecore_forward.hpp>
#include <derived_forward.hpp>
#include <base/base1/Base10.hpp>
#include <base/Base02.hpp>
#include <base/Base03.hpp>

#include "Base1Package.hpp"

/*PROTECTED REGION ID(Base11_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace base
{
    namespace base1
    {

    class EXPORT_BASE_DLL Base11 : public virtual ::base::base1::Base10, public virtual ::base::Base02, public virtual ::base::Base03
    {
    public:
        Base11();

        virtual ~Base11();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::ecore::EInt getValBase11 () const;
        virtual void setValBase11 (::ecore::EInt _valBase11);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = Base1Package::BASE11;

        /*PROTECTED REGION ID(Base11) START*/
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

        /*PROTECTED REGION ID(Base11Impl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Base11_ptr _this()
        {   return std::dynamic_pointer_cast<Base11>(shared_from_this());}

        // Attributes

        ::ecore::EInt m_valBase11
        {};

        // References

    };

}
 // base1
}// base

#endif // BASE_BASE1_BASE11_HPP

