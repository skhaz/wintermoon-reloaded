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

#ifndef _KeyEvent_h
#define _KeyEvent_h

#include "Framework/Internal.h"

#include "Framework/Event.h"
#include "Framework/Key.h"
#include "Framework/KeyModifier.h"



WINTERMOON_BEGIN_NAMESPACE

class KeyEvent : public Event
{
    public:
        KeyEvent();

        KeyEvent(int key, int modifier, Event::Type type);

        virtual ~KeyEvent();

        Key key() const;

        void setKey(Key key);

        KeyModifier modifier() const;

        void setModifier(KeyModifier modifier);

        Event::Type type() const;

        void setType(Event::Type type);

    private:
        Event::Type m_type;
        Key m_key;
        KeyModifier m_modifier;
};

WINTERMOON_END_NAMESPACE

#endif

