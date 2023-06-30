cmake_minimum_required(VERSION 3.0)
project(sst-elements LANGUAGES C CXX)

# find_package(SST)
include(/home/eric/development/forks/sst/install_auto/lib/cmake/SST/SSTConfig.cmake)

add_subdirectory(src)
