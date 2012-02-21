
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

#ifndef _Types_h
#define _Types_h

#include "Namespace.h"

#include "Size.h"
#include "List.h"
#include "Deque.h"
#include "Vector.h"
#include "Map.h"

WINTERMOON_BEGIN_NAMESPACE

typedef enum Backend
{
	None = 0,
	SDL,
	Qt,
	iOS,
	Android
};

#ifdef MATH_PRECISE
	typedef double Real;
#else
	typedef float Real;
#endif

#ifdef USE_STL
	#include <string>

	#ifdef USE_BOOST_ALLOCATOR
		#include <boost/pool/pool_alloc.hpp>

		typedef std::basic_string<char, std::char_traits<char>, boost::fast_pool_allocator<char> > String;
	#else
		typedef std::string String;
	#endif
#else
	// String?
#endif

typedef List<String> StringList;

WINTERMOON_END_NAMESPACE

#endif

