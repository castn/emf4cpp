// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_2_0/edate/dllEdate.hpp
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

#ifndef _DLL_V_2_0_EDATE_HPP
#define _DLL_V_2_0_EDATE_HPP
/*
 * Defines 3 preprocessor symbols:
 * - MAKE_V_2_0_EDATE_DLL  set to 1 when building the dll, else unset
 * - USE_V_2_0_EDATE_DLL    set to 1 when using the dll, else unset
 * - EXPORT_V_2_0_EDATE_DLL  always set, import when using the dll,
 *          export when building dll
 *
 * Pattern taken from qglobal.h
 */

#if defined(__WIN32__) || defined(_WIN32)

#   if defined(MAKE_V_2_0_EDATE_DLL)
#       if defined(USE_V_2_0_EDATE_DLL)
#           undef USE_V_2_0_EDATE_DLL
#       endif

#       define EXPORT_V_2_0_EDATE_DLL __declspec(dllexport)
#       define EXTERN_V_2_0_EDATE_DLL __declspec(dllimport)

#   else
#       if !defined(USE_V_2_0_EDATE_DLL)
#           define USE_V_2_0_EDATE_DLL 1
#       endif

#       define EXPORT_V_2_0_EDATE_DLL __declspec(dllimport)
#       define EXTERN_V_2_0_EDATE_DLL __declspec(dllexport)

#   endif

#else

#   define EXPORT_V_2_0_EDATE_DLL
#   define EXTERN_V_2_0_EDATE_DLL

#endif

#endif // _V_2_0_EDATE_HPP

