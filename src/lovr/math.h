#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

extern const luaL_Reg lovrMath[];
int l_lovrMathInit(lua_State* L);
int l_lovrMathNewTransform(lua_State* L);
