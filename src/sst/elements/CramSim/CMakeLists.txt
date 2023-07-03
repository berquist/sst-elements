set(SRC
    CramSim.cpp
    TxnDispatcher.cpp
    c_AddressHasher.cpp
    c_Bank.cpp
    c_BankCommand.cpp
    c_BankGroup.cpp
    c_BankInfo.cpp
    c_BankStateActivating.cpp
    c_BankStateActive.cpp
    c_BankStateIdle.cpp
    c_BankStatePrecharge.cpp
    c_BankStateRead.cpp
    c_BankStateReadA.cpp
    c_BankStateRefresh.cpp
    c_BankStateWrite.cpp
    c_BankStateWriteA.cpp
    c_Channel.cpp
    c_CmdScheduler.cpp
    c_Controller.cpp
    c_DeviceDriver.cpp
    c_Dimm.cpp
    c_HashedAddress.cpp
    c_MemhBridge.cpp
    c_Rank.cpp
    c_TraceFileReader.cpp
    c_Transaction.cpp
    c_TxnConverter.cpp
    c_TxnDispatcher.cpp
    c_TxnGen.cpp
    c_TxnScheduler.cpp
)

add_library(CramSim ${SRC})
target_link_libraries(CramSim SST::SSTCore)
