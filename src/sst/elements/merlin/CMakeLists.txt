set(SRC
    background_traffic/background_traffic.cc
    hr_router/hr_router.cc
    inspectors/circuitCounter.cc
    inspectors/testInspector.cc
    interfaces/linkControl.cc
    interfaces/portControl.cc
    interfaces/reorderLinkControl.cc
    merlin.cc
    offeredload/offered_load.cc
    target_generator/target_generator.cc
    topology/dragonfly.cc
    topology/fattree.cc
    topology/hyperx.cc
    topology/mesh.cc
    topology/polarfly.cc
    topology/polarstar.cc
    topology/singlerouter.cc
    topology/torus.cc
    trafficgen/trafficgen.cc
)

add_library(merlin ${SRC})
target_link_libraries(merlin SST::SSTCore)
