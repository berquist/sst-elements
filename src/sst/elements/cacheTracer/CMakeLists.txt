set(SRC
    cacheTracer.cc
)

add_library(cacheTracer ${SRC})
target_link_libraries(cacheTracer SST::SSTCore)
