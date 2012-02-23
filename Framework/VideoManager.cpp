
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

#include "Framework/VideoManager.h"



WINTERMOON_BEGIN_NAMESPACE

VideoManager::VideoManager(Backend backend)
: m_backend(backend)
, m_size(Size(640, 480))
, m_bpp(32)
, m_title("Untitled")
, m_fullscreen(false)
{
}

VideoManager::VideoManager(const VideoManager& other)
: m_backend(other.m_backend)
, m_size(other.m_size)
, m_bpp(other.m_bpp)
, m_title(other.m_title)
, m_fullscreen(other.m_fullscreen)
, m_video(other.m_video)
{
}

VideoManager::~VideoManager()
{
}

VideoManager& VideoManager::withSize(const Size& size)
{
    m_size = size;
    return *this;
}

VideoManager& VideoManager::withBitsPerPixel(short bpp)
{
    m_bpp = bpp;
    return *this;
}

VideoManager& VideoManager::withTitle(const String& title)
{
    m_title = title;
    return *this;
}

VideoManager& VideoManager::withFullScreen(bool fullscreen)
{
    m_fullscreen = fullscreen;
    return *this;
}

VideoManager& VideoManager::init()
{
    m_video.reset(new Video());
    bool suscess = m_video->init(m_size, m_bpp, m_title, m_fullscreen);

    if (!suscess) {
        LOG("Failed to set video mode at %dx%dx%d", m_size.width(), m_size.height(), m_bpp);
        // Application::exit();
    }

    return *this;
}

const Size& VideoManager::size() const
{
    return m_size;
}

short VideoManager::bpp() const
{
    return m_bpp;
}

const String& VideoManager::title() const
{
    return m_title;
}

VideoManager& VideoManager::operator=(const VideoManager& other)
{
    m_backend = other.m_backend;
    m_size = other.m_size;
    m_bpp = other.m_bpp;
    m_title = other.m_title;
    m_fullscreen = other.m_fullscreen;
    m_video = other.m_video;

    return *this;
}

WINTERMOON_END_NAMESPACE

