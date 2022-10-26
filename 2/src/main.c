#include <stdio.h>

#include "../lib/lua/src/lua.h"
#include "../lib/lua/src/lualib.h"
#include "../lib/lua/src/lauxlib.h"

void lua_example_dofile1(){
    printf("something\n");
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "./scripts/factorial.lua");
    lua_close(L);
}

void lua_example_getvar1()
{
    printf("something\n");
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "./scripts/factorial.lua");
    lua_close(L);

}

int main(int argc, char *argv[])
{




    printf("hello\n");   
    lua_example_dofile1();
}