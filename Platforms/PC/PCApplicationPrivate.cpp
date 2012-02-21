
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

#include "Platforms/PC/PCApplicationPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

PCApplicationPrivate::PCApplicationPrivate(int argc, char **argv)
{
    UNUSED(argc);
    UNUSED(argv);

    if (SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_VIDEO) < 0) {
        LOG("SDL_Init %s", SDL_GetError());
        exit(-1);
    }

    if (FAILED(PHYSFS_init(argv[0]))) {
        LOG("PHYSFS_init %s", PHYSFS_getLastError());
        exit(-1);
    }
}

PCApplicationPrivate::~PCApplicationPrivate()
{
    PHYSFS_deinit();
    SDL_Quit();
}

int PCApplicationPrivate::exec()
{
    return 0;
}

WINTERMOON_END_NAMESPACE

