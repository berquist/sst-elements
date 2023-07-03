set(SRC
    llyr.cc
    parser/parser.cc
)

find_package(LLVM)
if(TARGET LLVM)
    add_library(llyr ${SRC})
    target_link_libraries(llyr SST::SSTCore LLVM)
endif(TARGET LLVM)
