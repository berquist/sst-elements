set(SRC
    balarMMIO.cc
    dmaEngine.cc
    util.cc
)

add_library(balar ${SRC})
target_link_libraries(balar Opal)
