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

#include "Framework/KeyEvent.h"



WINTERMOON_BEGIN_NAMESPACE

KeyEvent::KeyEvent()
: m_type(Event::NONE)
{
}

KeyEvent::KeyEvent(int key, int modifier, Event::Type type)
: m_type(type)
, m_key(key)
, m_modifier(modifier)
{
}

KeyEvent::~KeyEvent()
{
}

Key KeyEvent::key() const
{
    return m_key;
}

void KeyEvent::setKey(Key key)
{
    m_key = key;
}

KeyModifier KeyEvent::modifier() const
{
    return m_modifier;
}

void KeyEvent::setModifier(KeyModifier modifier)
{
    m_modifier = modifier;
}

Event::Type KeyEvent::type() const
{
    return m_type;
}

void KeyEvent::setType(Event::Type type)
{
    m_type = type;
}

WINTERMOON_END_NAMESPACE

