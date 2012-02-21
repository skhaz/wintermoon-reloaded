
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

#include "Framework/InputManager.h"

#include "Framework/Event.h"
#include "Framework/EventListener.h"
#include "Framework/JoyStickEvent.h"
#include "Framework/KeyEvent.h"
#include "Framework/MouseEvent.h"



WINTERMOON_BEGIN_NAMESPACE

InputManager::InputManager()
{
}

InputManager::~InputManager()
{
}

void InputManager::capture()
{
}

void InputManager::injectEvent(Event *event)
{
    Deque<EventListener *>::iterator it = m_listerners.begin();
    Deque<EventListener *>::const_iterator end = m_listerners.end();

    for (; it != end; ++it)
    {
        EventListener *listerner = *it;

        switch (event->type())
        {
            case Event::KEY_DOWN:
                break;

            case Event::KEY_UP:
                break;

            case Event::MOUSE_BUTTON_DOWN:
                break;

            case Event::MOUSE_BUTTON_UP:
                break;

            case Event::MOUSE_MOTION:
                break;

            default:
                break;
        }
    }
}

void InputManager::addListener(EventListener* listerner)
{
    if (listerner)
    {
        Deque<EventListener *>::const_iterator it = std::find(m_listerners.begin(), m_listerners.end(), listerner);

        if (it == m_listerners.end())
        {
            m_listerners.push_back(listerner);
        }

        else {
            // duplicate
        }
    }
}

void InputManager::removeListener(EventListener* listerner)
{
    if (listerner)
    {
        Deque<EventListener *>::iterator it = std::find(m_listerners.begin(), m_listerners.end(), listerner);

        if (it != m_listerners.end())
        {
            m_listerners.erase(it)
        }

        else {
            // does't exist
        }
    }
}

WINTERMOON_END_NAMESPACE

