// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/InventoryContainer.cpp
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

#include "InventoryContainer.hpp"
#include <kdm/source/AbstractInventoryElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/source/SourcePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InventoryContainer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

// Default constructor
InventoryContainer::InventoryContainer()
{
    /*PROTECTED REGION ID(InventoryContainerImpl__InventoryContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InventoryContainer::~InventoryContainer()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::source::AbstractInventoryElement_ptr >& InventoryContainer::getInventoryElement() const
{
    if (!m_inventoryElement)
        return const_cast< InventoryContainer* >(this)->getInventoryElement();

    return *m_inventoryElement;
}

::ecorecpp::mapping::EList< ::kdm::source::AbstractInventoryElement_ptr >& InventoryContainer::getInventoryElement()
{
    /*PROTECTED REGION ID(InventoryContainer__getInventoryElement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_inventoryElement)
        m_inventoryElement.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::source::AbstractInventoryElement_ptr, -1, true,
                        false >(this,
                        ::kdm::source::SourcePackage::_instance()->getInventoryContainer__inventoryElement()));
    /*PROTECTED REGION END*/
    return *m_inventoryElement;
}

