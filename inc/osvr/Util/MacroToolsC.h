/** @file
    @brief Header containing basic macro tools

    Must be c-safe!

    @date 2014

    @author
    Sensics, Inc.
    <http://sensics.com/osvr>
*/

/*
// Copyright 2014 Sensics, Inc.
//
// All rights reserved.
//
// (Final version intended to be licensed under
// the Apache License, Version 2.0)
*/

#ifndef INCLUDED_MacroToolsC_h_GUID_ACA00740_B0FA_43BE_B2BE_E20DB813DEEF
#define INCLUDED_MacroToolsC_h_GUID_ACA00740_B0FA_43BE_B2BE_E20DB813DEEF

/* Internal Includes */
/* none */

/* Library/third-party includes */
/* none */

/* Standard includes */
/* none */

/* See http://cnicholson.net/2009/03/stupid-c-tricks-dowhile0-and-c4127/ for
   info on dodging silly warnings when using macros.
*/

/** @brief Macro for the beginning of a multi-line macro expansion */
#define OSVR_UTIL_MULTILINE_BEGIN do {

#ifdef _MSC_VER

/* MS VC will complain about that constant conditional without these very
 * localized pragmas */
#define OSVR_UTIL_MULTILINE_END                                                \
    __pragma(warning(push)) __pragma(warning(disable : 4127))                  \
    }                                                                          \
    while (0)                                                                  \
    __pragma(warning(pop))
#else
/** @brief Macro for the end of a multi-line macro expansion */
#define OSVR_UTIL_MULTILINE_END                                                \
    }                                                                          \
    while (0)
#endif

#endif
