
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

#include "Framework/Key.h"



WINTERMOON_BEGIN_NAMESPACE

Map<String, int> Key::m_keymap;

Key::Key()
: m_key(-1)
{
}

Key::Key(int key)
: m_key(key)
{
}

Key::Key(const String& key)
: m_key(-1)
{
    if (m_keymap.empty()) {
        // TODO
    }

    String tmp(key);
    std::transform(tmp.begin(), tmp.end(), tmp.begin(), toupper);

    Map<String, int>::const_iterator it = m_keymap.find(tmp);
    if (it != m_keymap.end()) {
        m_key = it->second;
    }
}

Key::Key(const Key& other)
: m_key(other.m_key)
{
}

String Key::name() const
{
    return "TODO";
}

bool Key::empty() const
{
    return m_key != -1;
}

Key::operator int() const
{
    return m_key;
}

const Key& Key::operator=(const Key& other)
{
    m_key = other.m_key;
    return *this;
}

bool Key::operator==(const Key& other)
{
    return m_key == other.m_key;
}

bool Key::operator==(int key)
{
    return m_key == key;
}

bool Key::operator!=(const Key& other)
{
    return m_key != other.m_key;
}

bool Key::operator!=(int key)
{
    return m_key != key;
}

WINTERMOON_END_NAMESPACE

