// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/string_traits.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#ifndef ECORECPP_MAPPING_STRINGTRAITS_HPP
#define    ECORECPP_MAPPING_STRINGTRAITS_HPP

#include <cctype>

#include "type_definitions.hpp"
#include "EDate.hpp"

namespace ecorecpp
{
namespace mapping
{

// Default trait
template< typename T >
struct string_traits
{
    static inline any fromString(const type_definitions::string_t & _str)
    {
        type_definitions::stringstream_t _ss(_str);
        T t;
        _ss >> t;
        return t;
    }

    static inline type_definitions::string_t toString(any const& _any)
    {
        T _t = any::any_cast< T >(_any);
        type_definitions::stringstream_t _ss;

        _ss << _t;

        return _ss.str();
    }
};

template< >
struct string_traits< bool >
{
    static any fromString(const type_definitions::string_t & _str)
    {
        if (_str == "true")
            return true;
        else if (_str == "false")
            return false;

        throw "fromString exception";
    }

    static inline type_definitions::string_t toString(any const& _any)
    {
        bool _t = any::any_cast< bool >(_any);

        if (_t)
            return "true";

        return "false";
    }
};

template< >
struct string_traits< type_definitions::string_t >
{
    static inline any fromString(const type_definitions::string_t & _str)
    {
        return any(_str);
    }

    static inline type_definitions::string_t toString(any const& _any)
    {
        return any::any_cast<type_definitions::string_t>(_any);
    }
};

template< >
struct string_traits< unsigned char >
{
    static inline any fromString(const type_definitions::string_t &)
    {
        // TODO
        throw "Not implemented!";
    }

    static inline type_definitions::string_t toString(any const&)
    {
        // TODO
        throw "Not implemented!";
    }
};

template< >
struct string_traits< char >
{
    static inline any fromString(const type_definitions::string_t &)
    {
        // TODO
        throw "Not implemented!";
    }

    static inline type_definitions::string_t toString(any const&)
    {
        // TODO
        throw "Not implemented!";
    }
};

template< >
struct string_traits< std::vector< unsigned char > >
{
    static inline any fromString(
            const type_definitions::string_t &)
    {
        // TODO
        throw "Not implemented!";
    }

    static inline type_definitions::string_t toString(any const&)
    {
        // TODO
        throw "Not implemented!";
    }
};

template< >
struct string_traits< std::shared_ptr<::ecorecpp::mapping::EList< ::ecorecpp::mapping::type_definitions::string_t > > >
{
    static inline any fromString(
            const type_definitions::string_t &)
    {
        // TODO
        throw "Not implemented!";
    }

    static inline type_definitions::string_t toString(any const&)
    {
        // TODO
        throw "Not implemented!";
    }
};

template< >
struct string_traits< char16_t >
{
    static inline any fromString(const type_definitions::string_t & str)
    {
		if (str.empty())
			return any((char16_t)0);

		if ( std::isdigit(str.front()) ) {
			type_definitions::stringstream_t ss(str);
			uint16_t t;
			ss >> t;
			return any((char16_t)t);
		}

		return any((char16_t)str.front());
	}

    static inline type_definitions::string_t toString(any const& any)
    {
        char16_t t = any::any_cast< char16_t >(any);
        type_definitions::stringstream_t ss;

        ss << (uint16_t)t;

        return ss.str();
    }
};

template< >
struct string_traits<EDate>
{
	static inline any fromString(
	const type_definitions::string_t & str)
	{
		EDate date = EDate::fromISOString(str);
		return any::any_cast<EDate>(date);
	}

	static inline type_definitions::string_t toString(any const& _any)
	{
		EDate date = any::any_cast<EDate>(_any);
		return EDate::toISOString(date);
	}
};

template< >
struct string_traits< any >
{
    static inline any fromString(const type_definitions::string_t &)
    {
        throw "Impossible!";
    }

    static inline type_definitions::string_t toString(any const&)
    {
        throw "Impossible!";
    }
};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_STRINGTRAITS_HPP
