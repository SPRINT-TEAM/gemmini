// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1476(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1476\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20784:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_223))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20795:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_223))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20798: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20798, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20806:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20817:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20820: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20820, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20839:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20842: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20842, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20861:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20864: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20864, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20883:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20886: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20886, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20894:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20905:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20908: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20908, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20930: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20930, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20949:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20952: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20952, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20960:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_223))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20971:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_223))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20974: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20974, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20982:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:20993:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:20996: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 20996, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21015:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21018: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21018, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21026:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21037:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21040: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21040, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21048:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21059:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21062: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21062, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21070:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21081:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21084: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21084, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21092:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21103:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21106: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21106, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21114:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21125:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21128: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21128, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21147:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21150: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21150, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21158:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21169:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21172: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21172, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21194: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21194, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21213:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21216: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21216, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21224:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21235:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21238: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21238, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21246:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21257:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21260: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21260, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21282: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21282, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_502))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21301:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_502))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21304: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21304, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21326: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21326, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21348: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21348, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21370: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21370, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21392: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21392, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_502))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21411:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_502))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21414: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21414, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21422:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21436: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21436, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21458: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21458, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21477:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21480: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21480, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21499:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21502: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21502, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_660))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_660))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21524: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21524, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21546: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21546, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21568: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21568, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21590: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21590, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21612: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21612, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_660))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_660))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21634: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21634, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21653:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21656: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21656, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21675:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21678: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21678, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21700: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21700, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21722: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21722, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_816))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_816))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21744: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21744, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21763:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21766: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21766, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21774:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21785:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21788: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21788, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21810: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21810, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21829:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21832: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21832, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21851:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21854: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21854, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21873:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21876: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21876, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21898: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21898, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21917:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21920: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21920, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21939:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21942: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21942, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21950:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21964: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21964, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:21986: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 21986, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:21994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22005:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22008: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22008, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22027:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22030: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22030, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22038:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22052: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22052, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22074: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22074, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22096: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22096, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22118: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22118, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22140: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22140, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22162: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22162, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22184: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22184, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_917))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_917))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22206: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22206, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22228: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22228, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22250: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22250, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22272: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22272, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22291:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22294: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22294, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22302:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22316: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22316, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_917))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_917))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22338: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22338, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22360: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22360, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22379:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22382: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22382, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22404: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22404, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1213))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22423:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1213))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22426: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22426, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((0U == (0x3fU & (0x80000000U 
                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22445:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((0U == (0x3fU & (0x80000000U 
                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22448: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22448, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22467:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22470: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22470, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22492: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22492, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22514: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22514, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22533:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22536: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22536, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22555:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22558: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22558, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22566:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22580: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22580, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22602: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22602, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22624: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22624, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22643:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22646: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22646, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22668: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22668, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22690: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22690, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22712: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22712, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22731:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22734: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22734, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1567))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1567))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22756: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22756, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22778: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22778, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22797:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22800: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22800, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22819:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22822: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22822, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22844: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22844, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22866: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22866, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22888: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22888, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1567))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22907:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1567))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22910: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22910, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22932: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22932, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22954: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22954, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22973:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22976: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22976, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:22995:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:22998: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 22998, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23020: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23020, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23039:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23042: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23042, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23061:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23064: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23064, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23072:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23083:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23086: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23086, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23094:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23105:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23108: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23108, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23127:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23130: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23130, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23138:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23149:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23152: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23152, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23171:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23174: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23174, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23182:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23193:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23196: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23196, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23218: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23218, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23237:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23240: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23240, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23248:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23259:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23262: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23262, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23270:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23281:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23284: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23284, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23303:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23306: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23306, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1755))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23325:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1755))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23328: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23328, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23336:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1759))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23347:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1759))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23350: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23350, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23358:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1763))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23369:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1763))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23372: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23372, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1767))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23391:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1767))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23394: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23394, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23402:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1771))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23413:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1771))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23416: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23416, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23424:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1804))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23435:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1804))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23438: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23438, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23446:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1808))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23457:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1808))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23460: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23460, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1812))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23479:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1812))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23482: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23482, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1816))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23501:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1816))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23504: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23504, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23512:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1820))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23523:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1820))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23526: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23526, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23534:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1824))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23545:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1824))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23548: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23548, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1861))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1861))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23570: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23570, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1873))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23589:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1873))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23592: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23592, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1905))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23611:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1905))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23614: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23614, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23622:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1909))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1909))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23636: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23636, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1913))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23655:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1913))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23658: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23658, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23666:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1917))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23677:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1917))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23680: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23680, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1921))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23699:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1921))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23702: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23702, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23710:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1981) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1996))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23721:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1981) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1996))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23724: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23724, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2030))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23743:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2030))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23746: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23746, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2041) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23765:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2041) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23768: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23768, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2050))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23787:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2050))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23790: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23790, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23798:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1934))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2023)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2062))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23809:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2017) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1934))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2023)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2062))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23812: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23812, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2069))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23831:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2069))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23834: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23834, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2088))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23853:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2088))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23856: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23856, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1775) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2104))) 
                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                              >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                              >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:39:96)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23875:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1775) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2104))) 
                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                              >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                              >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23878: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23878, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23886:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2139)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:39:96)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:23897:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2139)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:23900: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.fixer.TLMonitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 23900, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1477(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1477\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42173:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42184:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42187: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42187, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42195:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42206:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42209: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42209, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42217:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42228:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42231: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42231, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42239:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42250:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42253: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42253, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42261:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42272:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42275: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42275, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42283:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42297: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42297, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42305:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42316:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42319: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42319, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42327:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42338:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42341: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42341, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42349:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42360:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42363: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42363, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42371:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42382:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42385: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42385, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42404:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42407: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42407, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42415:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42426:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42429: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42429, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42437:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42448:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42451: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42451, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42459:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42470:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42473: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42473, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42481:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42492:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42495: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42495, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42503:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42514:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42517: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42517, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42525:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42536:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42539: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42539, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42547:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42558:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42561: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42561, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42569:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42580:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42583: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42583, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42591:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42602:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42605: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42605, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42613:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42624:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42627: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42627, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42635:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42646:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42649: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42649, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42657:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42668:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42671: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42671, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42679:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42690:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42693: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42693, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42701:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42712:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42715: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42715, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42723:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42734:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42737: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42737, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42745:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42756:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42759: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42759, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42767:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42778:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42781: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42781, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42789:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42800:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42803: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42803, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42811:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42825: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42825, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42833:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42844:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42847: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42847, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42855:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42866:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42869: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42869, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42877:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42888:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42891: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42891, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42899:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42910:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42913: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42913, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42932:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42935: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42935, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42943:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42957: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42957, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:42979: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 42979, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:42998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43001: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43001, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43020:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43023: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43023, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43042:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43045: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43045, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43064:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43067: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43067, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43089: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43089, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43108:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43111: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43111, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_816))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_816))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43133: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43133, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43155: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43155, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43177: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43177, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43196:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43199: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43199, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43207:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43221: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43221, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43243: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43243, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43262:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x12U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43265: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43265, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43284:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43287: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43287, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43295:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43309: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43309, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43331: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43331, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43353: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43353, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43372:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43375: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43375, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43383:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43397: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43397, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43416:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43419: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43419, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43427:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43441: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43441, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43460:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43463: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43463, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43471:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43485: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43485, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43507: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43507, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                               >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43529: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43529, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43548:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43551: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43551, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43573: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43573, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_917))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_917))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43595: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43595, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43617: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43617, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43639: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43639, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43661: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43661, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43683: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43683, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43705: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43705, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_917))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43724:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_917))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43727: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43727, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43735:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43749: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43749, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43771: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43771, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43793: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43793, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1213))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43812:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1213))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43815: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43815, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((0U == (0x3fU & (0x80000000U 
                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43834:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((0U == (0x3fU & (0x80000000U 
                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43837: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43837, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43856:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43859: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43859, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43881: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43881, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43903: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43903, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43925: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43925, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43947: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43947, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43969: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43969, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43988:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:43991: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 43991, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:43999:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44013: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44013, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44032:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44035: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44035, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44043:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44057: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44057, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44076:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44079: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44079, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44101: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44101, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44123: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44123, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1567))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1567))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44145: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44145, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44164:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44167: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44167, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44175:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44189: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44189, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44211: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44211, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44233: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44233, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44252:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44255: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44255, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44277: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44277, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1567))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1567))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44299: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44321: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44343: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44365: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44384:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44387: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44409: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44428:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44431: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44453: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44453, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44461:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44472:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44475: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44475, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44483:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44497: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44497, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44505:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44516:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44519: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44519, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44527:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44538:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44541: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44541, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44549:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44560:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44563: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44563, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44571:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44585: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44585, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44604:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1460))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44607: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44607, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44615:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44626:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44629: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44629, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44637:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44648:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44651: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44651, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44659:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44673: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44673, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44681:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44692:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44695: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44695, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44703:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1755))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44714:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1755))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44717: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44717, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1759))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44736:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1759))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44739: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44739, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1763))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44758:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1763))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44761: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44761, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44769:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1767))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44780:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1767))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44783: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44783, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44791:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44802:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1735))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44805: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44805, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1804))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44824:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1804))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44827: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44827, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44835:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1808))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1808))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44849: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44849, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1812))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44868:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1812))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44871: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44871, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44879:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1816))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44890:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1816))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44893: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44893, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44901:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1820))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44912:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1820))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44915: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44915, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44923:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1824))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1783))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1824))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44937: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44937, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44945:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1861))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44956:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1861))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44959: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44959, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44967:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1873))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44978:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1837))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1873))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:44981: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 44981, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:44989:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1905))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45000:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1905))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45003: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45003, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45011:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1909))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45022:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1909))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45025: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45025, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45033:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1913))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45044:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1913))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45047: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45047, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45055:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1917))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45066:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1917))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45069: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45069, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45077:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1921))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45088:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1921))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45091: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45091, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45099:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1981) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45110:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1981) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45113: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45113, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2030))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45132:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2030))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45135: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45135, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45143:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2041) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45154:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2041) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45157: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45157, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45165:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2050))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45176:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2050))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45179: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45179, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45187:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1934))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2023)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2062))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45198:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2017) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1934))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2023)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2062))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45201: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45201, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2069))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45220:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2069))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45223: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45223, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45231:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2088))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45242:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2088))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45245: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45245, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45253:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1775) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2104))) 
                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                              >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                              >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at HasTiles.scala:49:43)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45264:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1775) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2104))) 
                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                              >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_957[4U] 
                                              >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45267: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45267, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45275:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2139)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at HasTiles.scala:49:43)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:45286:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2139)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:45289: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_from_tile.buffer.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 45289, "");
        }
    }
}
