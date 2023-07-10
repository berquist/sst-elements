set(SRC
    rtlcomponent.cc
    rtlevent.cc
    rtlmemmgr_simple.cc
)

add_library(osseous ${SRC})
target_link_libraries(osseous ariel)
