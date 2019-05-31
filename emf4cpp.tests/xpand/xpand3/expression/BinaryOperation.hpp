// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/BinaryOperation.hpp
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

#ifndef XPAND3_EXPRESSION_BINARYOPERATION_HPP
#define XPAND3_EXPRESSION_BINARYOPERATION_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3/expression_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include "ExpressionPackage.hpp"

/*PROTECTED REGION ID(BinaryOperation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL BinaryOperation : public virtual ::xpand3::expression::AbstractExpression
    {
    public:
        BinaryOperation();

        virtual ~BinaryOperation();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getLeft () const;
        virtual void setLeft (::xpand3::expression::AbstractExpression_ptr _left);

        virtual ::xpand3::expression::AbstractExpression_ptr getRight () const;
        virtual void setRight (::xpand3::expression::AbstractExpression_ptr _right);

        virtual ::xpand3::Identifier_ptr getOperator () const;
        virtual void setOperator (::xpand3::Identifier_ptr _operator);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = ExpressionPackage::BINARYOPERATION;

        /*PROTECTED REGION ID(BinaryOperation) START*/
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

        /*PROTECTED REGION ID(BinaryOperationImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        BinaryOperation_ptr _this()
        {   return std::dynamic_pointer_cast<BinaryOperation>(shared_from_this());}

        // Attributes

        // References

        ::xpand3::expression::AbstractExpression_ptr m_left;

        ::xpand3::expression::AbstractExpression_ptr m_right;

        ::xpand3::Identifier_ptr m_operator;

    };

}
 // expression
}// xpand3

#endif // XPAND3_EXPRESSION_BINARYOPERATION_HPP

