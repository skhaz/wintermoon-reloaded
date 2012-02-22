
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

#ifndef _PCInputInterface_h
#define _PCInputInterface_h

#include "Framework/Internal.h"

#include "Interfaces/InputInterface.h"



WINTERMOON_BEGIN_NAMESPACE

class InputManager;
class PCInputInterfacePrivate;
class PCInputInterface : public InputInterface
{
    public:
        PCInputInterface();

        virtual ~PCInputInterface();

        virtual void setTarget(InputManager *manager);

        virtual void update();

    private:
        PCInputInterfacePrivate *d;
};

WINTERMOON_END_NAMESPACE

#endif

