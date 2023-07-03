set(SRC
    VaultSimC.cpp
    app.cpp
    cpu.cpp
    logicLayer.cpp
)

add_library(VaultSimC ${SRC})
target_link_libraries(VaultSimC SST::SSTCore)
