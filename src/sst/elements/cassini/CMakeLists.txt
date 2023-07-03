set(SRC
    addrHistogrammer.cc
    cacheLineTrack.cc
    nbprefetch.cc
    pageentry.cc
    palaprefetch.cc
    strideprefetch.cc
)

add_library(cassini ${SRC})
target_link_libraries(cassini memHierarchy)
