set(SRC
    GNA.cc
    neuron.cc
    sts.cc
)

add_library(GNA ${SRC})
target_link_libraries(GNA SST::SSTCore)
