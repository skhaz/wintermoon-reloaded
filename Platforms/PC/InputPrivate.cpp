
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

#include "Platforms/PC/InputPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

InputPrivate::InputPrivate()
: m_target(NULL)
{
}

InputPrivate::~InputPrivate()
{
}

void InputPrivate::setTarget(InputManager *manager)
{
    m_target = manager;
}

void InputPrivate::update()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_KEYDOWN:
            {
                KeyEvent key(event.key.keysym.sym, event.key.keysym.mod, Event::KEY_DOWN);
                m_target->injectEvent(&key);
            } break;

            case SDL_KEYUP:
            {
                KeyEvent key(event.key.keysym.sym, event.key.keysym.mod, Event::KEY_UP);
                m_target->injectEvent(&key);
            } break;

            case SDL_MOUSEMOTION:
            {
                MouseEvent mouse(Mouse::NoButton, event.button.x, event.button.y, Event::MOUSE_MOTION);
                m_target->injectEvent(&mouse);
            } break;

            case SDL_MOUSEBUTTONDOWN:
            {
                MouseEvent mouse(Mouse::NoButton, event.button.x, event.button.y, Event::MOUSE_BUTTON_DOWN);
                m_target->injectEvent(&mouse);
            } break;

            case SDL_MOUSEBUTTONUP:
            {
                MouseEvent mouse(Mouse::NoButton, event.button.x, event.button.y, Event::MOUSE_BUTTON_UP);
                m_target->injectEvent(&mouse);
            } break;

            case SDL_QUIT:
            {
            } break;

            default:
                break;
        }
    }
}

Mouse::Button InputPrivate::convertMouseButton(int button)
{
    switch (button)
    {
        case SDL_BUTTON_LEFT:
            return Mouse::LeftButton;
            break;
        case SDL_BUTTON_MIDDLE:
            return Mouse::MiddleButton;
            break;
        case SDL_BUTTON_RIGHT:
            return Mouse::RightButton;
            break;
    }

    return Mouse::NoButton;
}

WINTERMOON_END_NAMESPACE

