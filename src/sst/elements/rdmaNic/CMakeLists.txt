set(SRC
    rdmaNic.cc
    rdmaNicNetworkQueue.cc
    rdmaNicRecvEngine.cc
    rdmaNicSendEngine.cc
)

add_library(rdmaNic ${SRC})
target_link_libraries(rdmaNic SST::SSTCore)
