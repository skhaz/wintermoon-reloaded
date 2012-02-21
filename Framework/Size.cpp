
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

#include "Size.h"



WINTERMOON_BEGIN_NAMESPACE

Size::Size()
: m_width(0)
, m_height(0)
{
}

Size::Size(int width, int height)
: m_width(width)
, m_height(height)
{
}

void Size::setWidth(int width)
{
    m_width = width;
}

void Size::setHeight(int height)
{
    m_height = height;
}

int Size::width() const
{
    return m_width;
}

int Size::height() const
{
    return m_height;
}

WINTERMOON_END_NAMESPACE

