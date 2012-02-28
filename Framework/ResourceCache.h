
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

#ifndef _ResourceCache_h
#define _ResourceCache_h

#include "Framework/Internal.h"

#include "Resource.h"



WINTERMOON_BEGIN_NAMESPACE

class ResourceCache
{
    public:
        ResourceCache();

        virtual ~ResourceCache();

        ResourcePtr get(const String& key);

        void add(const String& key, ResourcePtr resource);

        bool exists(const String& key) const;

        size_t count();

        void flush();

    private:
        boost::unordered_map<
                String,
                ResourcePtr,
                boost::hash<String>
            > m_cache;
};

WINTERMOON_END_NAMESPACE

#endif

