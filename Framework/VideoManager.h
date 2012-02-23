
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

#ifndef _VideoManager_h
#define _VideoManager_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class Video;
class VideoManager
{
    public:
        VideoManager(Backend backend = None);

        ~VideoManager();

        VideoManager(const VideoManager& other);

        VideoManager& withSize(const Size& size);

        VideoManager& withBitsPerPixel(short bpp);

        VideoManager& withTitle(const String& title);

        VideoManager& withFullScreen(bool fullscreen);

        VideoManager& init();

        const Size& size() const;

        short bpp() const;

        const String& title() const;

        VideoManager& operator=(const VideoManager& other);

    protected:
        void beginDraw();

        void endDraw();

    private:
        Backend m_backend;

        Size m_size;

        short m_bpp;

        String m_title;

        bool m_fullscreen;

        Video *m_video;
};

WINTERMOON_END_NAMESPACE

#endif

