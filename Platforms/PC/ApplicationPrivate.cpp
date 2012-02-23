
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

#include "ApplicationPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

ApplicationPrivate::ApplicationPrivate(int argc, char **argv)
{
    UNUSED(argc);
    UNUSED(argv);

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        LOG("SDL_Init %s", SDL_GetError());
        exit(-1);
    }

    else {
        SDL_InitSubSystem(SDL_INIT_JOYSTICK);
    }

    if (FAILED(PHYSFS_init(argv[0]))) {
        LOG("PHYSFS_init %s", PHYSFS_getLastError());
        exit(-1);
    }
}

ApplicationPrivate::~ApplicationPrivate()
{
    PHYSFS_deinit();
    SDL_Quit();
}

int ApplicationPrivate::exec()
{
    return 0;
}

WINTERMOON_END_NAMESPACE

