set(SRC
    arb/shogunrrarb.cc
    shogun.cc
    shogun_nic.cc
)

add_library(shogun ${SRC})
target_link_libraries(shogun SST::SSTCore)
