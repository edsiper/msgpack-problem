project(test_cpp)

set(src
  ${src}
  main.cc
  )

add_executable(test_cpp ${src})
target_link_libraries(test_cpp msgpack-c-static mylib)
