
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

#ifndef _ContainerHelper_h
#define _ContainerHelper_h

#include "Namespace.h"

#include <algorithm>


WINTERMOON_BEGIN_NAMESPACE

#define DECLARE_CONTAINER_HELPER(N, C) \
\
template <typename T> \
class N : public C<T> \
{ \
	public: \
		void operator+=(const T& element) \
		{ \
			push_back(element); \
		} \
		\
		void operator-=(const T& element) \
		{ \
			typename C<T>::iterator it = std::find(this->begin(), this->end(), element); \
			\
			if (it != this->end()) \
			{ \
				this->erase(it); \
			} \
		} \
		\
};

WINTERMOON_END_NAMESPACE

#endif

