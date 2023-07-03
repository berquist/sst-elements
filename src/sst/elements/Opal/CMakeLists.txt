set(SRC
    Opal.cc
    PageFaultHandler.cc
    arielmemmgr_opal.cc
    mempool.cc
    opalMemNIC.cc
)

add_library(Opal ${SRC})
target_link_libraries(Opal SST::SSTCore)
