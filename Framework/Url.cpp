
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

#include "Framework/Url.h"

#include <boost/xpressive/xpressive.hpp>
#include <boost/xpressive/regex_actions.hpp>



WINTERMOON_BEGIN_NAMESPACE

Url::Url()
{
}

Url::Url(const String& url)
{
    setUrl(url);
}

Url::~Url()
{
}

void Url::setUrl(const String& url)
{
    using namespace boost::xpressive;

    size_t found = url.find_first_of("?");

    if (found != std::string::npos)
    {
        m_filename = url.substr(0, found);
        std::string query = url.substr(found + 1, url.size());
        sregex pair = ((s1 = +_w) >> "=" >> (s2 = +(set[alnum | '_' | '.' | ','])))
        [ref(m_parameters)[s1] = s2];
        sregex rx = pair >> *('&' >> *(pair));

        if (regex_match(query, rx)) {
        }
    }

    else {
        m_filename = url;
    }

    if (std::string::npos != (found = m_filename.find_last_of("."))) {
        m_extension = m_filename.substr(found + 1, m_filename.size());
    }
}

String Url::extension() const
{
    return m_extension;
}

String Url::filename() const
{
    return m_filename;
}

std::map<String, String> Url::parameters() const
{
    return m_parameters;
}

WINTERMOON_END_NAMESPACE

