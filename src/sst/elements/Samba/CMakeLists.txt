set(SRC
    Samba.cc
    SimpleTLB.cc
    TLBUnit.cc
    TLBhierarchy.cc
    libSamba.cc
)

add_library(Samba ${SRC})
target_link_libraries(Samba SST::SSTCore)
