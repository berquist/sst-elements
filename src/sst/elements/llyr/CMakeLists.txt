set(SRC
    llyr.cc
    parser/parser.cc
)

find_package(LLVM)
find_package(Python COMPONENTS Development)
if(TARGET LLVM)
    add_library(llyr ${SRC})
    target_link_libraries(llyr SST::SSTCore LLVM Python::Python)
endif(TARGET LLVM)
