set(SRC
    api/arielapi.c
    arielcore.cc
    arielcpu.cc
    arielevent.cc
    arielgzbintracegen.cc
    arielmemmgr_malloc.cc
    arielmemmgr_simple.cc
    arieltexttracegen.cc
)

add_library(ariel ${SRC})
target_include_directories(ariel PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(ariel SST::SSTCore)
