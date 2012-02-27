
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

#ifndef _MouseEvent_h
#define _MouseEvent_h

#include "Framework/Internal.h"

#include "Framework/Mouse.h"
#include "Framework/Point.h"
#include "Framework/Event.h"



WINTERMOON_BEGIN_NAMESPACE

class MouseEvent : public Event
{
    public:
        MouseEvent();

        MouseEvent(Mouse::Button button, int x, int y, Event::Type type);

        int x() const;

        void setX(int x);

        int y() const;

        void setY(int y);

        Mouse::Button button() const;

        void setButton(Mouse::Button button);

        Event::Type type() const;

        void setType(Event::Type type);

        Point pos() const;

    private:
        Event::Type m_type;
        Mouse::Button m_button;
        int m_x;
        int m_y;
};

WINTERMOON_END_NAMESPACE

#endif

