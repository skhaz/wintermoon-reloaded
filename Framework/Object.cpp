
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

#include "Object.h"



WINTERMOON_BEGIN_NAMESPACE

Object::Object()
: m_x(0)
, m_y(0)
, m_rotation(0)
, m_scaleX(1)
, m_scaleY(1)
, m_centerX(0)
, m_centerY(0)
{
}

void Object::setPosition(float x, float y)
{
    m_x = x;
    m_y = y;
}

void Object::setX(float x)
{
    m_x = x;
}

float Object::x() const
{
    return m_x;
}

void Object::setY(float y)
{
    m_y = y;
}

float Object::y() const
{
    return m_y;
}

void Object::setRotation(float rotation)
{
    m_rotation = rotation;
}

float Object::rotation() const
{
    return m_rotation;
}

void Object::setScale(float scaleX, float scaleY)
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;
}

void Object::setScaleX(float scaleX)
{
    m_scaleX = scaleX;
}

float Object::scaleX() const
{
    return m_scaleX;
}

void Object::setScaleY(float scaleY)
{
    m_scaleY = scaleY;
}

float Object::scaleY() const
{
    return m_scaleY;
}

void Object::setCenter(float centerX, float centerY)
{
    m_centerX = centerX;
    m_centerY = centerY;
}

void Object::setCenterX(float centerX)
{
    m_centerX = centerX;
}

float Object::centerX() const
{
    return m_centerX;
}

void Object::setCenterY(float centerY)
{
    m_centerY = centerY;
}

float Object::centerY() const
{
    return m_centerY;
}

WINTERMOON_END_NAMESPACE

