
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

#include "Framework/ResourceCache.h"



WINTERMOON_BEGIN_NAMESPACE

ResourceCache::ResourceCache()
{
}

ResourceCache::~ResourceCache()
{
}

ResourcePtr ResourceCache::get(const String& key)
{
    boost::unordered_map<
            String,
            ResourcePtr,
            boost::hash<String>
        >::const_iterator it = m_cache.find(key);

    if (it != m_cache.end())
    {
        return it->second;
    }

    return ResourcePtr();
}

void ResourceCache::add(const String& key, ResourcePtr resource)
{
    m_cache[key] = resource;
}

bool ResourceCache::exists(const String& key) const
{
    return m_cache.find(key) != m_cache.end();
}

size_t ResourceCache::count()
{
    return m_cache.size();
}

void ResourceCache::flush()
{
    boost::unordered_map<
            String,
            ResourcePtr,
            boost::hash<String>
        >::iterator it = m_cache.begin();

    while (it != m_cache.end())
    {
        if (it->second.unique())
        {
            m_cache.erase(it++);
        }

        else {
            ++it;
        }
    }
}

WINTERMOON_END_NAMESPACE

