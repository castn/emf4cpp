// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Annotation.hpp
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

#ifndef KDM_KDM_ANNOTATION_HPP
#define KDM_KDM_ANNOTATION_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/kdm_forward.hpp>

#include <kdm/core_forward.hpp>
#include <kdm/core/Element.hpp>

#include "KdmPackage.hpp"

/*PROTECTED REGION ID(Annotation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace kdm
    {

    class EXPORT_KDM_DLL Annotation : public virtual ::kdm::core::Element
    {
    public:
        Annotation();

        virtual ~Annotation();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::kdm::core::String getText () const;
        virtual void setText (::kdm::core::String _text);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = KdmPackage::ANNOTATION;

        /*PROTECTED REGION ID(Annotation) START*/
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

        /*PROTECTED REGION ID(AnnotationImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Annotation_ptr _this()
        {   return std::dynamic_pointer_cast<Annotation>(shared_from_this());}

        // Attributes

        ::kdm::core::String m_text
        {};

        // References

    };

}
 // kdm
}// kdm

#endif // KDM_KDM_ANNOTATION_HPP

