
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

#include "Framework/MouseEvent.h"



WINTERMOON_BEGIN_NAMESPACE

MouseEvent::MouseEvent(int button, int x, int y)
: m_button(button)
, m_x(x)
, m_y(y)
{
}

int MouseEvent::button() const
{
    return m_button;
}

int MouseEvent::x() const
{
    return m_x;
}

int MouseEvent::y() const
{
    return m_y;
}

Point MouseEvent::pos() const
{
    return Point(m_x, m_y);
}

Event::Type MouseEvent::type() const
{
    return Event::MOUSE_BUTTON_DOWN;
}

WINTERMOON_END_NAMESPACE

