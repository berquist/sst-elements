set(SRC
    basicClocks.cc
    basicLinks.cc
    basicParams.cc
    basicSimLifeCycle.cc
    basicStatistics.cc
    basicSubComponent_component.cc
    basicSubComponent_subcomponent.cc
    example0.cc
    example1.cc
)

add_library(simpleElementExample ${SRC})
target_link_libraries(simpleElementExample SST::SSTCore)
