
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

#include "Framework/InputManager.h"

#include "Platforms/PC/InputPrivate.h"

#include "Framework/Event.h"
#include "Framework/EventListener.h"
#include "Framework/JoyStickEvent.h"
#include "Framework/KeyEvent.h"
#include "Framework/MouseEvent.h"



WINTERMOON_BEGIN_NAMESPACE

InputManager::InputManager()
{
    d = new InputPrivate();
    d->setTarget(this);
}

InputManager::~InputManager()
{
    delete d;
}

void InputManager::update()
{
    d->update();
}

void InputManager::injectEvent(Event *event)
{
    Deque<EventListener *>::iterator it = m_listeners.begin();
    Deque<EventListener *>::const_iterator end = m_listeners.end();

    for (; it != end; ++it)
    {
        EventListener *listener = *it;

        switch (event->type())
        {
            case Event::KEY_DOWN:
                listener->keyPressEvent(static_cast<KeyEvent *>(event));
                break;

            case Event::KEY_UP:
                listener->keyReleaseEvent(static_cast<KeyEvent *>(event));
                break;

            case Event::MOUSE_BUTTON_DOWN:
                listener->mousePressEvent(static_cast<MouseEvent *>(event));
                break;

            case Event::MOUSE_BUTTON_UP:
                listener->mouseReleaseEvent(static_cast<MouseEvent *>(event));
                break;

            case Event::MOUSE_MOTION:
                listener->mouseMoveEvent(static_cast<MouseEvent *>(event));
                break;

            default:
                break;
        }
    }
}

void InputManager::addListener(EventListener *listener)
{
    if (listener)
    {
        Deque<EventListener *>::const_iterator it = std::find(m_listeners.begin(), m_listeners.end(), listener);

        if (it == m_listeners.end())
        {
            m_listeners.push_back(listener);
        }

        else {
            // duplicate
        }
    }
}

void InputManager::removeListener(EventListener *listener)
{
    if (listener)
    {
        Deque<EventListener *>::iterator it = std::find(m_listeners.begin(), m_listeners.end(), listener);

        if (it != m_listeners.end())
        {
            m_listeners.erase(it);
        }

        else {
            // does't exist
        }
    }
}

WINTERMOON_END_NAMESPACE

