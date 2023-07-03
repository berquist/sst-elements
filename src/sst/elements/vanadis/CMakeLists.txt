set(SRC
    decoder/vmipsdecoder.cc
    decoder/vriscv64decoder.cc
    os/velfloader.cc
    os/vloadpage.cc
    os/vnodeos.cc
    os/vnodeoshandler.cc
    os/syscall/clone.cc
    os/syscall/exit.cc
    os/syscall/exitgroup.cc
    os/syscall/fork.cc
    os/syscall/futex.cc
    os/syscall/mprotect.cc
    os/syscall/syscall.cc
    vanadis.cc
)

add_library(vanadis ${SRC})
target_link_libraries(vanadis mmu)

add_executable(sst-vanadis-tracediff tools/tracediff/tracediff.cc)
