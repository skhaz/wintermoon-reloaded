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

#include "Platforms/PC/VideoPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

VideoPrivate::VideoPrivate()
{
    if (SDL_WasInit(SDL_INIT_VIDEO) == 0)
    {
        SDL_InitSubSystem(SDL_INIT_VIDEO);
    }
}

VideoPrivate::~VideoPrivate()
{
    if (SDL_WasInit(SDL_INIT_VIDEO) == 0)
    {
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }
}

bool VideoPrivate::init(const Size& size, short bpp, const String& title, bool fullscreen)
{
    SDL_WM_SetCaption(title.c_str(), NULL);
    Uint32 flags = SDL_HWSURFACE | SDL_OPENGL;
    fullscreen ? flags |= SDL_FULLSCREEN : putenv((char *) "SDL_VIDEO_CENTERED=1");

    if (FAILED(SDL_SetVideoMode(size.width(), size.height(), bpp, flags))) {
        return false;
    }

    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, bpp);
    SDL_GL_SetAttribute(SDL_GL_ACCUM_RED_SIZE, 0);
    SDL_GL_SetAttribute(SDL_GL_ACCUM_GREEN_SIZE, 0);
    SDL_GL_SetAttribute(SDL_GL_ACCUM_BLUE_SIZE, 0);
    SDL_GL_SetAttribute(SDL_GL_ACCUM_ALPHA_SIZE, 0);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    glViewport(0, 0, size.width(), size.height());
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(.0f, size.width(), size.height(), .0f, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glClearColor(.0f, .0f, .0f, .0f);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_DEPTH_TEST);

    return true;
}

WINTERMOON_END_NAMESPACE

