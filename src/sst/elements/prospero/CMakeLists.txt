set(SRC
    prosbinaryreader.cc
    prosbingzreader.cc
    proscpu.cc
    prosmemmgr.cc
    prostextreader.cc
    runprosperotrace.cc
)

add_library(prospero ${SRC})
target_link_libraries(prospero SST::SSTCore)
