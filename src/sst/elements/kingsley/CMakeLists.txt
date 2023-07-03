set(SRC
    linkControl.cc
    noc_mesh.cc
)

add_library(kingsley ${SRC})
target_link_libraries(kingsley SST::SSTCore)
