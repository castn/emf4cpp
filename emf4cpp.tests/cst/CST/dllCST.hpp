// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/dllCST.hpp
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

#ifndef _DLL_CST_HPP
#define _DLL_CST_HPP
/*
 * Defines 3 preprocessor symbols:
 * - MAKE_CST_DLL  set to 1 when building the dll, else unset
 * - USE_CST_DLL    set to 1 when using the dll, else unset
 * - EXPORT_CST_DLL  always set, import when using the dll,
 *          export when building dll
 *
 * Pattern taken from qglobal.h
 */

#if defined(__WIN32__) || defined(_WIN32)

#   if defined(MAKE_CST_DLL)
#       if defined(USE_CST_DLL)
#           undef USE_CST_DLL
#       endif

#       define EXPORT_CST_DLL __declspec(dllexport)
#       define EXTERN_CST_DLL __declspec(dllimport)

#   else
#       if !defined(USE_CST_DLL)
#           define USE_CST_DLL 1
#       endif

#       define EXPORT_CST_DLL __declspec(dllimport)
#       define EXTERN_CST_DLL __declspec(dllexport)

#   endif

#else

#   define EXPORT_CST_DLL
#   define EXTERN_CST_DLL

#endif

#endif // _CST_HPP

