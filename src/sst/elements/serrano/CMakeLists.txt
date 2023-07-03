set(SRC
    serrano.cc
)

add_library(serrano ${SRC})
target_link_libraries(serrano SST::SSTCore)
