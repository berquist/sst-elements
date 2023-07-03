set(SRC
    Messier.cc
    NVM_DIMM.cc
    WriteBuffer.cc
    libMessier.cpp
)

add_library(Messier ${SRC})
target_link_libraries(Messier SST::SSTCore)
