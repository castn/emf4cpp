// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SvgFile.cpp
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

#include "SvgFile.hpp"
#include <SVG/ReferencedFile.hpp>
#include <SVG/Image.hpp>
#include <SVG/Svg.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SvgFile.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

// Default constructor
SvgFile::SvgFile()
{

    m_elements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr, -1,
                    false, true >(this,
                    ::SVG::SVGPackage::_instance()->getSvgFile__elements(),
                    ::SVG::SVGPackage::ELEMENT__OWNER));

    /*PROTECTED REGION ID(SvgFileImpl__SvgFileImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SvgFile::~SvgFile()
{
}

// Attributes

// References

::SVG::Svg_ptr SvgFile::getTag() const
{
    return m_tag.lock();
}

::SVG::Svg_ptr SvgFile::basicgetTag()
{
    return m_tag.lock();
}

void SvgFile::basicsetTag(::SVG::Svg_ptr _tag)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::SVG::Svg_ptr _old_tag = m_tag.lock();
#endif
    m_tag = _tag;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getSvgFile__tag(),
                _old_tag,
                m_tag.lock()
        );
        eNotify(&notification);
    }
#endif
}

void SvgFile::setTag(::SVG::Svg_ptr _tag)
{
    ::SVG::Svg_ptr _old_tag = m_tag.lock();
    if (_tag != _old_tag)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_tag)
        {
            _old_tag->_inverseRemove(::SVG::SVGPackage::SVG__OWNER_SVG, _this);
        }
        if (_tag)
        {
            _tag->_inverseAdd(::SVG::SVGPackage::SVG__OWNER_SVG, _this);
        }
        basicsetTag(_tag);
    }
}

const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& SvgFile::getElements() const
{
    return *m_elements;
}

::ecorecpp::mapping::EList< ::SVG::Element_ptr >& SvgFile::getElements()
{
    return *m_elements;
}

