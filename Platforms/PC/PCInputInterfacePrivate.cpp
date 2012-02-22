
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

#include "Platforms/PC/PCInputInterfacePrivate.h"

#include "Framework/JoyStickEvent.h"
#include "Framework/KeyEvent.h"
#include "Framework/MouseEvent.h"



WINTERMOON_BEGIN_NAMESPACE

PCInputInterfacePrivate::PCInputInterfacePrivate()
: m_target(NULL)
{
}

PCInputInterfacePrivate::~PCInputInterfacePrivate()
{
}

void PCInputInterfacePrivate::setTarget(InputManager *manager)
{
    m_target = manager;
}

void PCInputInterfacePrivate::update()
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
            } break;

            case SDL_MOUSEBUTTONDOWN:
            {
            } break;

            case SDL_MOUSEBUTTONUP:
            {
            } break;

            case SDL_QUIT:
            {
            } break;

            default:
                break;
        }
    }
}

WINTERMOON_END_NAMESPACE

