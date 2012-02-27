
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

#ifndef _EventListener_h
#define _EventListener_h

#include "Framework/Internal.h"




WINTERMOON_BEGIN_NAMESPACE

class JoyStickEvent;
class KeyEvent;
class MouseEvent;

class EventListener
{
    public:
        EventListener();

        virtual ~EventListener();

        virtual void keyPressEvent(KeyEvent* event);

        virtual void keyReleaseEvent(KeyEvent* event);

        virtual void mouseMoveEvent(MouseEvent* event);

        virtual void mouseReleaseEvent(MouseEvent* event);

        virtual void mousePressEvent(MouseEvent* event);

        virtual void quitEvent();
};

WINTERMOON_END_NAMESPACE

#endif

