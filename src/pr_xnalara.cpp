/* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <luainterface.hpp>
#include <pragma/pragma_module.hpp>
#include "pr_xnalara.hpp"

extern "C"
{
	void PRAGMA_EXPORT pragma_initialize_lua(Lua::Interface &l)
	{
		mpv::register_lua_library(l);
	}
};
