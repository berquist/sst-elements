set(SRC
    dumpireader.cc
    otfreader.cc
    siriusreader.cc
    zallredevent.cc
    zbarrierevent.cc
    zcollective.cc
    zcomputeevent.cc
    zdumpi.cc
    zevent.cc
    zfinalizeevent.cc
    zinitevent.cc
    zirecvevent.cc
    zotf.cc
    zrecvevent.cc
    zsendevent.cc
    zsirius.cc
    ztrace.cc
    zwaitevent.cc
)

add_library(zodiac ${SRC})
target_link_libraries(zodiac hermes)
