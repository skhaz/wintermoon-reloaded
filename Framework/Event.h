
/*
 *                        __
 *             __        /\ \__
 *  __  __  __/\_\    ___\ \ ,_\    __  _ __   ___ ___     ___    ___    ___
 * /\ \/\ \/\ \/\ \ /' _ `\ \ \/  /'__`\\`'__\' __` __`\  / __`\ / __`\/' _ `\
 * \ \ \_/ \_/ \ \ \/\ \/\ \ \ \_/\  __/ \ \//\ \/\ \/\ \/\ \L\ \\ \L\ \\ \/\ \
 *  \ \___x___/'\ \_\ \_\ \_\ \__\ \____\ \_\\ \_\ \_\ \_\ \____/ \____/ \_\ \_\
 *   \/__//__/   \/_/\/_/\/_/\/__/\/____/\/_/ \/_/\/_/\/_/\/___/ \/___/ \/_/\/_/
 *
 * Copyright (c) 2006 - 2012 Wintermoon Project
 *
 * http://wintermoon.sourceforge.net/
 *
 * % BEGIN_LICENSE %
 * % END_LICENSE %
 *
 */

#ifndef _Event_h
#define _Event_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class Event
{
    public:
        enum Type {
            NONE,
            KEY_DOWN,
            KEY_UP,
            MOUSE_BUTTON_DOWN,
            MOUSE_BUTTON_UP,
            MOUSE_MOTION,
            JOYSTICK,
            LAST_EVENT,
            USER_EVENT = LAST_EVENT + 1
        };

        virtual ~Event();

        virtual Type type() const = 0;
};

WINTERMOON_END_NAMESPACE

#endif

