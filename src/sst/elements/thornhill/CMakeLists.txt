set(SRC
    libthornhill.cc
    memoryHeap.cc
    singleThread.cc
)

add_library(thornhill ${SRC})
target_link_libraries(thornhill miranda)
