
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

#include "Framework/Kernel.h"

#include "Framework/VideoManager.h"
#include "Framework/InputManager.h"



WINTERMOON_BEGIN_NAMESPACE

Kernel* Kernel::instance()
{
    static Kernel root;
    return &root;
}

VideoManager* Kernel::videoManager() const
{
    return m_video;
}

InputManager* Kernel::inputManager() const
{
    return m_input;
}

Kernel::Kernel()
: m_video(new VideoManager())
, m_input(new InputManager())
{
}

Kernel::~Kernel()
{
    delete m_input;
    delete m_video;
}

WINTERMOON_END_NAMESPACE

