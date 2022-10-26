#include <stdio.h>

#include "../lib/lua/src/lua.h"
#include "../lib/lua/src/lualib.h"
#include "../lib/lua/src/lauxlib.h"



int main(int argc, char *argv[])
{
    lua_State *L = luaL_newstate();

    luaL_openlibs(L);

    luaL_dofile(L, "./scripts/factorial.lua");

    lua_close(L);



    printf("hello\n");   
}