
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

#ifndef _Url_h
#define _Url_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

class Url
{
    public:
        Url();

        Url(const String& url);

        ~Url();

        void setUrl(const String& url);

        String path() const;

        String extension() const;

        String filename() const;

        std::map<String, String> parameters() const;

    private:
        String m_url;

        String m_path;

        String m_extension;

        String m_filename;

        std::map<String, String> m_parameters;
};

WINTERMOON_END_NAMESPACE

#endif

