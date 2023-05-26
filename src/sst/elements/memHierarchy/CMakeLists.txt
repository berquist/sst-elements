set(SRC
    bus.cc
    cacheController.cc
    cacheFactory.cc
    coherentMemoryController.cc
    directoryController.cc
    dmaEngine.cc
    hash.cc
    memHierarchyInterface.cc
    memHierarchyScratchInterface.cc
    memLink.cc
    memNIC.cc
    memNICFour.cc
    memNetBridge.cc
    memoryCacheController.cc
    memoryController.cc
    mshr.cc
    multithreadL1Shim.cc
    networkMemInspector.cc
    scratchpad.cc
    standardInterface.cc
)

add_library(memHierarchy ${SRC})
target_include_directories(memHierarchy PUBLIC
    # ${CMAKE_CURRENT_SOURCE_DIR}
    /Users/ejberqu/development/sst/github/sst-elements/src
)
target_link_libraries(memHierarchy SST::SSTCore)
