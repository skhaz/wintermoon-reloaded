
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

#include "ApplicationPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

ApplicationPrivate::ApplicationPrivate(int argc, char **argv)
: QApplication(argc, argv)
{
    if (FAILED(PHYSFS_init(argv[0]))) {
        LOG("PHYSFS_init %s", PHYSFS_getLastError());
        exit(-1);
    }
}

ApplicationPrivate::~ApplicationPrivate()
{
    PHYSFS_deinit();
}

int ApplicationPrivate::exec()
{
    return QApplication::exec();
}

WINTERMOON_END_NAMESPACE

