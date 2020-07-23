/* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "pr_mpv.hpp"
#include <luainterface.hpp>
#include <luasystem.h>
#include <pragma/lua/ldefinitions.h>
#include <pragma/c_engine.h>

extern DLLCENGINE CEngine *c_engine;

void xna::register_lua_library(Lua::Interface &l)
{
	// TODO
}
