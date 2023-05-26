set(SRC
	mmu.cc
	simpleMMU.cc
	simpleTLB.cc
	tlbWrapper.cc
)

add_library(mmu ${SRC})
target_link_libraries(mmu memHierarchy)
