
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

MouseEvent::MouseEvent()
: m_type(Event::NONE)
, m_button(Mouse::NoButton)
, m_x(0)
, m_y(0)
{
}

MouseEvent::MouseEvent(Mouse::Button button, int x, int y, Event::Type type)
: m_type(type)
, m_button(button)
, m_x(x)
, m_y(y)
{
}

int MouseEvent::x() const
{
    return m_x;
}

void MouseEvent::setX(int x)
{
    m_x = x;
}

int MouseEvent::y() const
{
    return m_y;
}

void MouseEvent::setY(int y)
{
    m_y = y;
}

Mouse::Button MouseEvent::button() const
{
    return m_button;
}

void MouseEvent::setButton(Mouse::Button button)
{
    m_button = button;
}

Event::Type MouseEvent::type() const
{
    return m_type;
}

void MouseEvent::setType(Event::Type type)
{
    m_type = type;
}

Point MouseEvent::pos() const
{
    return Point(m_x, m_y);
}

WINTERMOON_END_NAMESPACE

