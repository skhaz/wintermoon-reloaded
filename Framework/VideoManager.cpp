
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

#include "Framework/VideoManager.h"
#include "Platforms/PC/VideoPrivate.h"



WINTERMOON_BEGIN_NAMESPACE

VideoManager::VideoManager()
{
    d = new VideoPrivate();
}

VideoManager::~VideoManager()
{
    delete d;
}

bool VideoManager::init(const Size& size, short bpp, const String& title, bool fullscreen)
{
    return d->init(size, bpp, title, fullscreen);
}

void VideoManager::beginDraw()
{
    d->beginDraw();
}

void VideoManager::endDraw()
{
    d->endDraw();
}

WINTERMOON_END_NAMESPACE

