set(SRC
    bus.cc
    cacheController.cc
    cacheFactory.cc
    coherencemgr/Incoherent.cc
    coherencemgr/Incoherent_L1.cc
    # TODO class definition is messed up
    # coherencemgr/MESI_Directory.cc
    coherencemgr/MESI_Inclusive.cc
    coherencemgr/MESI_L1.cc
    coherencemgr/MESI_Private_Noninclusive.cc
    coherencemgr/MESI_Shared_Noninclusive.cc
    coherencemgr/coherenceController.cc
    coherentMemoryController.cc
    customcmd/defCustomCmdHandler.cc
    directoryController.cc
    dmaEngine.cc
    hash.cc
    memHierarchyInterface.cc
    memHierarchyScratchInterface.cc
    memLink.cc
    memNIC.cc
    memNICFour.cc
    # TODO needs merlin
    # memNetBridge.cc
    memoryCacheController.cc
    memoryController.cc
    mshr.cc
    multithreadL1Shim.cc
    networkMemInspector.cc
    scratchpad.cc
    standardInterface.cc
)

add_library(memHierarchy ${SRC})
target_include_directories(memHierarchy PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(memHierarchy SST::SSTCore)
