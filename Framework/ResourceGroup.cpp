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

#include "Framework/ResourceGroup.h"


WINTERMOON_BEGIN_NAMESPACE

ResourceGroup::ResourceGroup(const String& name)
: m_name(name)
{
}

ResourceGroup::~ResourceGroup()
{
}

void ResourceGroup::add(ResourcePtr resource)
{
    m_resources += resource;
}

void ResourceGroup::remove(ResourcePtr resource)
{
    m_resources -= resource;
}

String ResourceGroup::name() const
{
    return m_name;
}

List<ResourcePtr> ResourceGroup::resources() const
{
    return m_resources;
}

WINTERMOON_END_NAMESPACE

