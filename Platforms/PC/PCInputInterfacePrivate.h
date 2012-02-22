
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

#ifndef _PCInputInterfacePrivate_h
#define _PCInputInterfacePrivate_h

#include "Platforms/PC/PCPrivate.h"

#include "Framework/JoyStickEvent.h"
#include "Framework/KeyEvent.h"
#include "Framework/MouseEvent.h"
#include "Framework/InputManager.h"



WINTERMOON_BEGIN_NAMESPACE

class PCInputInterfacePrivate
{
    public:
        PCInputInterfacePrivate();

        ~PCInputInterfacePrivate();

        void setTarget(InputManager *manager);

        void update();

    protected:
        Mouse::Button convertMouseButton(Uint8 button);

    private:
        InputManager *m_target;
};

WINTERMOON_END_NAMESPACE

#endif

