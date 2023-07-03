set(SRC
    simpleCarWash.cc
)

add_library(simpleSimulation ${SRC})
target_link_libraries(simpleSimulation SST::SSTCore)
