set(SRC
	mmu.cc
	simpleMMU.cc
	simpleTLB.cc
	tlbWrapper.cc
)

add_library(mmu ${SRC})
# target_include_directories(mmu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(mmu PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(mmu memHierarchy)
