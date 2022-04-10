# CMakeList.txt : CMake project for kdiff3-demo, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (kdiff3-demo "kdiff3-demo.cpp" "kdiff3-demo.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET kdiff3-demo PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
