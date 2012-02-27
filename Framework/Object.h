
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

#ifndef _Object_h
#define _Object_h

#include "Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class Object
{
    public:
        Object();

        void setPosition(float x, float y);

        void setX(float x);

        float x() const;

        void setY(float y);

        float y() const;


        void setRotation(float rotation);

        float rotation() const;


        void setScale(float scaleX, float scaleY);

        void setScaleX(float scaleX);

        float scaleX() const;

        void setScaleY(float scaleY);

        float scaleY() const;


        void setCenter(float centerX, float centerY);

        void setCenterX(float centerX);

        float centerX() const;

        void setCenterY(float centerY);

        float centerY() const;

    private:
        float m_x;
        float m_y;

        float m_rotation;

        float m_scaleX;
        float m_scaleY;

        float m_centerX;
        float m_centerY;
};

WINTERMOON_END_NAMESPACE

#endif

