
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

#ifndef _InputManager_h
#define _InputManager_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class Event;
class EventListener;
class InputPrivate;
class InputManager
{
    public:
        void update();

        void injectEvent(Event *event);

        void addListener(EventListener *listener);

        void removeListener(EventListener *listener);

    private:
        DISALLOW_COPY_AND_ASSIGN(InputManager)

        friend class Kernel;

        InputManager();

        ~InputManager();

        InputPrivate *d;

        Deque<EventListener *> m_listeners;
};

WINTERMOON_END_NAMESPACE

#endif

