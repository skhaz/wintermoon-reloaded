
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

#ifndef _MouseEvent_h
#define _MouseEvent_h

#include "Framework/Internal.h"

// #include "Framework/Mouse.h"
#include "Framework/Point.h"
#include "Framework/Event.h"



WINTERMOON_BEGIN_NAMESPACE

class MouseEvent : public Event
{
    public:
        MouseEvent(int button, int x, int y);

        int x() const;

        int y() const;

        int button() const;

        Point pos() const;

        Event::Type type() const;

    private:
        int m_button;
        int m_x;
        int m_y;
};

WINTERMOON_END_NAMESPACE

#endif

