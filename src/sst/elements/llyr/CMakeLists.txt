set(SRC
    llyr.cc
    parser/parser.cc
)

add_library(llyr ${SRC})
target_link_libraries(llyr SST::SSTCore)
