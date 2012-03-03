
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

#ifndef _ThreadPrivate_h
#define _ThreadPrivate_h

#include "Platforms/Qt/Private.h"

#include <QThread>



WINTERMOON_BEGIN_NAMESPACE

class Thread;
class ThreadPrivate : public QThread
{
    public:
        ThreadPrivate();

        ~ThreadPrivate();

        void start();

        void wait();

    protected:
        friend class Thread;

        void setTarget(Thread *target);

    protected slots:
        virtual void run();

    private:
        Q_OBJECT

        Thread *m_target;

        QThread m_thread;
};

WINTERMOON_END_NAMESPACE

#endif

