# add_subdirectory(decoder)
add_subdirectory(os)
# add_subdirectory(tools)

set(SRC
    decoder/vmipsdecoder.cc
    decoder/vriscv64decoder.cc
    vanadis.cc
)

add_library(vanadis ${SRC})
target_link_libraries(vanadis SST::SSTCore)
