
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
: m_target(NULL)
{
    moveToThread(&m_thread);
}

ThreadPrivate::~ThreadPrivate()
{
    m_thread.terminate();
}

void ThreadPrivate::start()
{
    QMetaObject::invokeMethod(this, "run", Qt::QueuedConnection);
    m_thread.start();
}

void ThreadPrivate::wait()
{
    m_thread.wait();
}

void ThreadPrivate::setTarget(Thread *target)
{
    m_target = target;
}

void ThreadPrivate::run()
{
    m_target->run();
}

WINTERMOON_END_NAMESPACE

