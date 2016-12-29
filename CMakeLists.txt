cmake_minimum_required(VERSION 2.8)
project(msgpack-test)


macro(SET_OPTION option value)
  set(${option} ${value} CACHE "" INTERNAL FORCE)
endmacro()

# msgpack-c
SET_OPTION(MSGPACK_BUILD_TESTS    OFF)
SET_OPTION(MSGPACK_BUILD_EXAMPLES OFF)
SET_OPTION(MSGPACK_ENABLE_SHARED  OFF)
add_subdirectory(msgpack-c)

include_directories(mylib/)
include_directories(msgpack-c/include/)

add_subdirectory(mylib)
add_subdirectory(test)
