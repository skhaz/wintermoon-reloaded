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

#include "Framework/EventListener.h"

#include "Framework/Kernel.h"
#include "Framework/InputManager.h"
#include "Framework/JoyStickEvent.h"
#include "Framework/KeyEvent.h"
#include "Framework/MouseEvent.h"



WINTERMOON_BEGIN_NAMESPACE

EventListener::EventListener()
{
    Kernel *kernel = Kernel::instance();
    InputManager *input = kernel->inputManager();
    input->addListener(this);
}

EventListener::~EventListener()
{
    Kernel *kernel = Kernel::instance();
    InputManager *input = kernel->inputManager();
    input->removeListener(this);
}

void EventListener::keyPressEvent(KeyEvent* event)
{
    UNUSED(event);
}

void EventListener::keyReleaseEvent(KeyEvent* event)
{
    UNUSED(event);
}

void EventListener::mouseMoveEvent(MouseEvent* event)
{
    UNUSED(event);
}

void EventListener::mouseReleaseEvent(MouseEvent* event)
{
    UNUSED(event);
}

void EventListener::mousePressEvent(MouseEvent* event)
{
    UNUSED(event);
}

void EventListener::quitEvent()
{
}

WINTERMOON_END_NAMESPACE

