
/*
 *                        __
 *             __        /\ \__
 *  __  __  __/\_\    ___\ \ ,_\    __  _ __   ___ ___     ___    ___    ___
 * /\ \/\ \/\ \/\ \ /' _ `\ \ \/  /'__`\\`'__\' __` __`\  / __`\ / __`\/' _ `\
 * \ \ \_/ \_/ \ \ \/\ \/\ \ \ \_/\  __/ \ \//\ \/\ \/\ \/\ \L\ \\ \L\ \\ \/\ \
 *  \ \___x___/'\ \_\ \_\ \_\ \__\ \____\ \_\\ \_\ \_\ \_\ \____/ \____/ \_\ \_\
 *   \/__//__/   \/_/\/_/\/_/\/__/\/____/\/_/ \/_/\/_/\/_/\/___/ \/___/ \/_/\/_/
 *
 * Copyright (c) 2006 - 2011 Wintermoon Project
 *
 * http://wintermoon.sourceforge.net/
 *
 * % BEGIN_LICENSE %
 * % END_LICENSE %
 *
 */

#ifndef _Internal_h
#define _Internal_h

#include "Namespace.h"
#include "Types.h"

#include <boost/shared_ptr.hpp>
#include <boost/bind.hpp>
#include <algorithm>
#include <cstdio>

#if defined WIN32 || WINDOWS && BUILD_DLL
# define DLL_EXPORT __declspec(dllexport)
#else
# define DLL_EXPORT
#endif

#ifdef FAILED
# undef FAILED
#endif
#define FAILED(x) (! (x))

#define UNUSED(x) ((void) (x))
#define LOG(log, ...) do { printf(log, __VA_ARGS__); } while(0)
#define i18n(string) StringTable::getString(string)

WINTERMOON_BEGIN_NAMESPACE
WINTERMOON_END_NAMESPACE

#endif

