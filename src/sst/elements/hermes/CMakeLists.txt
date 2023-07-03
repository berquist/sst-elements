set(SRC
    libhermes.c
)

add_library(hermes ${SRC})
target_include_directories(hermes PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(hermes SST::SSTCore)
