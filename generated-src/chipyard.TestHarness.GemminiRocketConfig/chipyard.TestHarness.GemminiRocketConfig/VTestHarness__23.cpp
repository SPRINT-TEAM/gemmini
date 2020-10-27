// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1478(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1478\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4299: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4321: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4343: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4365: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4384:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4387: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4409: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4428:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4431: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4453: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4453, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4461:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4472:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4475: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4475, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4483:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4497: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4497, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4505:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4516:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4519: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4519, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4527:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4538:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4541: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4541, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4549:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4560:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4563: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4563, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4571:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4585: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4585, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4604:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4607: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4607, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4615:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4626:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4629: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4629, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4637:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4648:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4651: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4651, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4659:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_415))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_415))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4673: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4673, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4681:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4692:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4695: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4695, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4703:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4714:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4717: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4717, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4736:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4739: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4739, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4758:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4761: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4761, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4769:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4780:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4783: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4783, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4791:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4802:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4805: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4805, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4824:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4827: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4827, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4835:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4849: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4849, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4868:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4871: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4871, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4879:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4890:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4893: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4893, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4901:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4912:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4915: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4915, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4923:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4937: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4937, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4945:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4956:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4959: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4959, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4967:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4978:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:4981: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 4981, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:4989:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_591))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5000:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_591))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5003: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5003, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5011:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5022:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5025: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5025, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5033:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5044:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5047: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5047, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5055:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5066:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5069: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5069, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5077:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5088:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5091: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5091, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5099:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5113: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5113, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5132:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5135: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5135, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5143:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5154:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5157: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5157, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5165:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5176:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5179: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5179, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5187:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5198:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5201: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5201, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5220:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5223: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5223, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5231:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5242:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5245: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5245, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5253:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5264:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5267: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5267, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5275:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5289: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5289, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5308:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5311: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5311, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5319:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5333: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5333, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5352:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5355: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5355, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5363:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5374:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5377: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5377, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5396:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5399: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5399, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5407:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5418:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5421: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5421, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5429:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5440:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5443: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5443, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5451:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5462:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5465: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5465, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5473:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5484:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5487: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5487, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5495:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5506:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5509: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5509, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5517:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5528:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5531: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5531, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5539:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5550:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5553: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5553, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5561:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5572:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5575: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5575, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5583:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5594:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5597: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5597, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5616:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5619: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5619, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5627:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5641: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5641, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5649:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5660:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5663: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5663, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5671:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5682:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5685: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5685, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5693:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5704:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5707: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5707, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5715:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5729: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5729, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5748:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5751: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5751, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5759:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5770:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5773: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5773, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5781:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5792:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5795: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5795, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5803:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5817: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5817, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5836:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5839: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5839, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5847:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5858:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5861: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5861, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5869:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5880:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5883: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5883, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5902:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5905: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5905, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1027))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5924:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1027))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5927: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5927, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5935:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1031))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1031))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5949: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5949, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1035))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5968:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1035))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5971: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5971, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5979:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1039))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:5990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1039))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:5993: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 5993, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1043))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6012:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1043))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6015: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6015, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6023:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1076))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6034:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1076))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6037: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6037, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6045:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1080))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6056:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1080))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6059: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6059, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6067:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1084))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1084))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6081: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6081, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1088))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6100:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1088))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6103: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6103, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6111:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1092))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6122:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1092))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6125: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6125, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6133:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1096))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6144:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1096))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6147: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6147, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6155:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1156) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6166:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1156) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6169: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6169, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6177:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1205))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6188:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1205))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6191: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6191, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6199:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1216) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1216) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6213: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6213, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1225))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1225))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6235: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6235, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1109))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6254:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1192) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1109))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6257: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6257, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1244))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:39:55)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6276:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1244))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6279: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6279, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6287:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:39:55)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:6298:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:6301: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.system_bus_xbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 6301, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1479(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1479\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17035:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17046:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17049: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17049, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17057:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17068:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17071: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17071, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17079:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17090:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17093: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17093, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17115: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17115, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17137: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17137, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17156:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17159: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17159, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17167:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17178:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17181: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17181, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17189:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17200:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17203: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17203, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17211:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17225: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17225, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17244:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17247: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17247, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17255:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17266:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17269: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17269, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17277:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17288:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17291: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17291, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17299:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17313: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17313, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17332:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17335: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17335, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17343:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17357: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17357, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17376:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17379: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17379, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17387:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17401: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17401, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_415))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17420:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_415))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17423: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17423, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17431:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17442:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17445: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17445, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17453:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17464:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17467: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17467, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17475:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17489: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17489, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17508:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17511: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17511, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17519:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17530:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17533: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17533, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17541:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17552:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17555: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17555, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17563:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17577: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17577, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17585:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17596:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17599: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17599, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17607:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17621: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17621, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17640:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17643: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17643, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17651:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17662:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17665: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17665, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17673:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17684:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17687: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17687, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17695:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17706:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17709: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17709, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17717:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17728:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17731: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17731, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17739:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_591))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_591))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17753: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17753, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17772:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17775: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17775, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17783:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17794:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17797: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17797, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17805:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17816:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17819: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17819, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17827:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17841: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17841, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17860:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17863: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17863, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17871:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17882:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17885: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17885, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17893:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17904:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17907: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17907, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17915:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17926:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17929: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17929, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17937:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17948:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17951: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17951, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17959:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17973: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17973, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:17992:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:17995: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 17995, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_246))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18017: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18017, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18036:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18039: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18039, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18047:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18058:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18061: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18061, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18069:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18080:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_429))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18083: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18083, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18091:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18105: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18105, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18124:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18127: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18127, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18135:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18146:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18149: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18149, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18157:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18168:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18171: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18171, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18179:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18190:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18193: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18193, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18201:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18212:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18215: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18215, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18223:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18237: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18237, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18256:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18259: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18259, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18267:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18281: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18281, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18289:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18300:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18303: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18303, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18311:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18322:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18325: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18325, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18333:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18344:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18347: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18347, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18355:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18369: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18369, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18388:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18391: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18391, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18399:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18410:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18413: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18413, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18421:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18432:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18435: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18435, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18443:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18457: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18457, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18476:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18479: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18479, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18487:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18498:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18501: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18501, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18520:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18523: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18523, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18531:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18545: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18545, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18553:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18564:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18567: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18567, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18575:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18586:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_924))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18589: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18589, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18597:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18608:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_856))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18611: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18611, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18619:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18633: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18633, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18652:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18655: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18655, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18663:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1027))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18674:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1027))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18677: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18677, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18685:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1031))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18696:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1031))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18699: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18699, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18707:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1035))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1035))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18721: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18721, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18729:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1039))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18740:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1039))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18743: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18743, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18751:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1043))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18762:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1007))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1043))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18765: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18765, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18773:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1076))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18784:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1076))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18787: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18787, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18795:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1080))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1080))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18809: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18809, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18817:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1084))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18828:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1084))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18831: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18831, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18839:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1088))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18850:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1088))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18853: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18853, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18861:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1092))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18872:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1092))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18875: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18875, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18883:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1096))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1055))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1096))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18897: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18897, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1156) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18916:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1156) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18919: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18919, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18927:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1205))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18938:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1205))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18941: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18941, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18949:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1216) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18960:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1216) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18963: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18963, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18971:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1225))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1225))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:18985: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 18985, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:18993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1109))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1198)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:19004:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1192) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1109))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1198)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_855[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:19007: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 19007, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:19015:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1244))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:19026:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1244))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:19029: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 19029, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:19037:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:19048:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:19051: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 19051, "");
        }
    }
}
