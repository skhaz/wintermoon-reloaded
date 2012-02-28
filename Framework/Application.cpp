
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

#include "Application.h"
#include "Platforms/PC/ApplicationPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

Application::Application(int argc, char **argv)
{
    for (int i = 0; i < argc; ++i) {
        m_arguments += argv[i];
    }

    d = new ApplicationPrivate(argc, argv);
}

Application::~Application()
{
    delete d;
}

StringList Application::arguments() const
{
    return m_arguments;
}

int Application::exec()
{
    return d->exec();
}

WINTERMOON_END_NAMESPACE

