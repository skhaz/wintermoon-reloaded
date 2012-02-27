
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

#ifndef _Key_h
#define _Key_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class Key
{
    public:
        Key();

        explicit Key(int key);

        Key(const String& key);

        Key(const Key& other);

        String name() const;

        bool empty() const;

        operator int() const;

        const Key& operator=(const Key& other);

        bool operator==(const Key& other);

        bool operator==(int key);

        bool operator!=(const Key& other);

        bool operator!=(int key);

    private:
        static std::map<String, int> m_keymap;

        int m_key;
};

WINTERMOON_END_NAMESPACE

#endif

