
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

#ifndef _PCGraphics_h
#define _PCGraphics_h

#include "Interfaces/AbstractGraphics.h"



WINTERMOON_BEGIN_NAMESPACE

class PCGraphicsPrivate;
class PCGraphics : public AbstractGraphics
{
    public:
        PCGraphics();

        virtual ~PCGraphics();

        virtual bool init(const Size& size, short bpp, const String& title, bool fullscreen);

    private:
        PCGraphicsPrivate *d;
};

WINTERMOON_END_NAMESPACE

#endif

