
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

#include "Framework/ResourceManager.h"



WINTERMOON_BEGIN_NAMESPACE

ResourceManager::ResourceManager()
{
}

ResourceManager::~ResourceManager()
{
}

void ResourceManager::load(const ResourceGroup& group)
{
    List<ResourcePtr> resources = group.resources();
    List<ResourcePtr>::iterator it = resources.begin();
    List<ResourcePtr>::const_iterator end = resources.end();

    for (; it != end; ++it)
    {
        ResourcePtr resource;
        Url url = resource->url();
        String filename = url.filename();

        if (!m_cache.find(filename))
        {
            // TODO load
            m_cache.add(filename, resource);
        }

        else {
            resource = m_cache.get(filename);
        }

    }
        // TODO input->injectEvent...
}

WINTERMOON_END_NAMESPACE

