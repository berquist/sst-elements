set(SRC
    Opal.cc
    PageFaultHandler.cc
    arielmemmgr_opal.cc
    mempool.cc
    opalMemNIC.cc
)

add_library(Opal ${SRC})
target_include_directories(Opal PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(Opal memHierarchy)
