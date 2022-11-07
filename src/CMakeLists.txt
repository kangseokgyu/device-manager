add_compile_options(-std=c++14 -Wall -Wextra -Wshadow)

find_package(Threads REQUIRED)

add_executable(device-manager
  main.cpp
)

target_include_directories(device-manager
PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(device-manager
PRIVATE
  Threads::Threads
)
