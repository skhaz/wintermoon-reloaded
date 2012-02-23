
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

#ifndef _ThreadPrivate_h
#define _ThreadPrivate_h

#include "Platforms/PC/Private.h"



WINTERMOON_BEGIN_NAMESPACE

class Thread;
class ThreadPrivate
{
    public:
        ThreadPrivate();

        ~ThreadPrivate();

        void start();

        void wait();

    protected:
        friend class Thread;

        void setTarget(Thread *target);

		static int entryPoint(void *arg);

    private:
        SDL_Thread *m_thread;

        Thread *m_target;
};

WINTERMOON_END_NAMESPACE

#endif

