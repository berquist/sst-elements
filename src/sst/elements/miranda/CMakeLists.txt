set(SRC
    generators/gupsgen.cc
    generators/randomgen.cc
    generators/revsinglestream.cc
    generators/singlestream.cc
    generators/stake.cc
    generators/stencil3dbench.cc
    generators/streambench.cc
    generators/streambench_customcmd.cc
    mirandaCPU.cc
    mirandaIncGen.cc
)

add_library(miranda ${SRC})
target_include_directories(miranda PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(miranda SST::SSTCore)
