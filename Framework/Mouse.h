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

#ifndef _Mouse_h
#define _Mouse_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class DLL_EXPORT Mouse
{
    public:
        enum Button
        {
            NoButton     = 0x00000000,
            RightButton  = 0x00000001,
            LeftButton   = 0x00000002,
            MiddleButton = 0x00000004
        };

        Mouse();

        virtual ~Mouse();

        static void warp(int x, int y);

        static void show(bool toggle);
};

WINTERMOON_END_NAMESPACE

#endif

