
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

#include "Platforms/PC/ThreadPrivate.h"
#include "Framework/Thread.h"



WINTERMOON_BEGIN_NAMESPACE

ThreadPrivate::ThreadPrivate()
: m_thread(NULL)
, m_target(NULL)
{
}

ThreadPrivate::~ThreadPrivate()
{
    SDL_KillThread(m_thread);
}

void ThreadPrivate::start()
{
    m_thread = SDL_CreateThread(ThreadPrivate::entryPoint, static_cast<void *>(m_target));
}

void ThreadPrivate::wait()
{
    SDL_WaitThread(m_thread, NULL);
    m_thread = NULL;
}

void ThreadPrivate::setTarget(Thread *target)
{
    m_target = target;
}

int ThreadPrivate::entryPoint(void *arg)
{
    static_cast<Thread *>(arg)->run();
    return 0;
}

WINTERMOON_END_NAMESPACE

