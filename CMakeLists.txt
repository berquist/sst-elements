cmake_minimum_required(VERSION 3.0)
project(sst-elements LANGUAGES C CXX)

# find_package(SST)
include(/Users/ejberqu/development/sst/github/install/lib/cmake/SST/SSTConfig.cmake)

add_subdirectory(src)
