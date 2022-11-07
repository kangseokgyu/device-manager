add_compile_options(-std=c++14 -Wall -Wextra -Wshadow)

find_package(Threads REQUIRED)

add_library(sample)
target_sources(sample
  PRIVATE
    sample.cpp
  PUBLIC
    sample.h
)
target_include_directories(sample
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(sample_main
  main.cpp
  sample.cpp
)
target_include_directories(sample_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(sample_main PRIVATE Threads::Threads)
