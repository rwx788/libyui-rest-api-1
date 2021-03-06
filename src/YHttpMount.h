/*
  Copyright (C) 2017 SUSE LLC

  This library is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) version 3.0 of the License. This library
  is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
  License for more details. You should have received a copy of the GNU
  Lesser General Public License along with this library; if not, write
  to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
  Floor, Boston, MA 02110-1301 USA
*/

#ifndef YHttpMount_h
#define YHttpMount_h

#include <string>

class YHttpHandler;

class YHttpMount
{

public:

    YHttpMount(const std::string& path, const std::string &method, YHttpHandler *handler);

    bool handles(const std::string& path, const std::string &method);

    YHttpHandler * handler() {return _handler;}

private:

    std::string _path;
    std::string _method;
    YHttpHandler *_handler;
};

#endif // YHttpMount_h
