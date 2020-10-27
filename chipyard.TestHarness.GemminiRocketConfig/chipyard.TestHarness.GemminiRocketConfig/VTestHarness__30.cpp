// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1521(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1521\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177932:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177935: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177935, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177943:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177957: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177957, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177979: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177979, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178001: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178001, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178020:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178023: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178023, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178042:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178045: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178045, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178064:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178067: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178067, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178089: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178089, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178108:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178111: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178111, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178133: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178133, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178155: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178155, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178177: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178177, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_286))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178196:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_286))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178199: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178199, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178207:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178221: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178221, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_303))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_303))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178243: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178243, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178265: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178265, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178284:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178287: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178287, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178295:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178309: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178309, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178331: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178331, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178353: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178353, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178372:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178375: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178375, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178383:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178397: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178397, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178416:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178419: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178419, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178427:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178441: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178441, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178460:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178463: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178463, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178471:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178485: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178485, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178507: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178507, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178529: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178529, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178548:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178551: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178551, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178573: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178573, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178595: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178595, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178617: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178617, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178639: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178639, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178661: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178661, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178683: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178683, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178705: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178705, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178724:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178727: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178727, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178735:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_473))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_473))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178749: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178749, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_483))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_483))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178771: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178771, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178793: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178793, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178812:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178815: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178815, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178837: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178837, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178856:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178859: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178859, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_527))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_527))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178881: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178881, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178903: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178903, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178925: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178925, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178947: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178947, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178969: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178969, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178988:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178991: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178991, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178999:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179013: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179013, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179032:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179035: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179035, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179043:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179057: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179057, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179076:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179079: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179079, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179101: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179101, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179123: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179123, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179145: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179145, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179164:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179167: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179167, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179175:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_634))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_634))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179189: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179189, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179211: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179211, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179233: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179233, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179252:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179255: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179255, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179277: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179277, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179299: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179321: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179343: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_711))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_711))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179365: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179384:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179387: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179406:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179409: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179428:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179431: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179453: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179453, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1522(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1522\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177932:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177935: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177935, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177943:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177957: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177957, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177979: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177979, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178001: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178001, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178020:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178023: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178023, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178042:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178045: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178045, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178064:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178067: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178067, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178089: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178089, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178108:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178111: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178111, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178133: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178133, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178155: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178155, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178177: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178177, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_286))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178196:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_286))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178199: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178199, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178207:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178221: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178221, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_303))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_303))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178243: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178243, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178265: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178265, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178284:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178287: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178287, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178295:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178309: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178309, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178331: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178331, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178353: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178353, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178372:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178375: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178375, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178383:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178397: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178397, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178416:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178419: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178419, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178427:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178441: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178441, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178460:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178463: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178463, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178471:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178485: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178485, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178507: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178507, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178529: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178529, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178548:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178551: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178551, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178573: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178573, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178595: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178595, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178617: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178617, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178639: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178639, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178661: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178661, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178683: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178683, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178705: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178705, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178724:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178727: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178727, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178735:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_473))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_473))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178749: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178749, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_483))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_483))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178771: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178771, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178793: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178793, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178812:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178815: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178815, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178837: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178837, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178856:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178859: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178859, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_527))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_527))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178881: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178881, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178903: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178903, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178925: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178925, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178947: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178947, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178969: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178969, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178988:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178991: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178991, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178999:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179013: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179013, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179032:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179035: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179035, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179043:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179057: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179057, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179076:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179079: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179079, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179101: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179101, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179123: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179123, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179145: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179145, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179164:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179167: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179167, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179175:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_634))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_634))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179189: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179189, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179211: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179211, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179233: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179233, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179252:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179255: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179255, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179277: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179277, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179299: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179321: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179343: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_711))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_711))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179365: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179384:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179387: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179406:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179409: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179428:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179431: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179453: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179453, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1523(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1523\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:167394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_19))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceC.scala:63 assert (room === queue.io.count <= UInt(1))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:167405:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_19))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:167408: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceC\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 167408, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:167416:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_131))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceC.scala:115 assert(!c.valid || c.ready)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:167427:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_131))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:167430: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceC\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 167430, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:170096:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_64))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceD.scala:122 assert (!queue.io.enq.valid || queue.io.enq.ready)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:170107:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_64))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:170110: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 170110, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:170118:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceD.scala:231 assert (!s3_full || !s3_need_r || queue.io.deq.valid)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:170129:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:170132: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 170132, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:170140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Data poisoning unsupported\n    at SourceD.scala:275 assert (!(s4_full && s4_need_pb && s4_pdata.corrupt), \"Data poisoning unsupported\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:170151:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:170154: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 170154, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1524(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1524\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address__v0 = 0U;
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454583:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454594:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454597: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454597, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454616:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454619: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454619, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454627:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454641: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454641, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454649:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454660:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454663: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454663, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454671:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454682:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454685: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454685, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454693:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454704:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454707: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454707, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454715:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454729: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454729, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454748:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454751: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454751, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454759:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454770:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454773: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454773, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454781:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454792:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454795: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454795, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454803:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454817: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454817, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454836:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454839: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454839, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454847:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454858:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454861: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454861, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454869:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454880:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454883: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454883, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454902:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454905: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454905, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454924:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454927: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454927, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454935:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454949: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454949, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x30000U & (0x10000U 
                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454968:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x30000U & (0x10000U 
                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454971: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454971, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454979:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:454990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:454993: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 454993, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455012:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455015: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455015, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455023:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455034:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455037: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455037, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455045:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455056:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455059: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455059, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455067:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455081: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455081, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455100:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455103: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455103, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455111:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455122:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455125: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455125, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455133:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455144:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455147: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455147, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455155:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455166:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455169: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455169, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455177:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455188:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455191: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455191, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455199:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455213: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455213, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455235: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455235, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455257: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455257, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455276:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455279: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455279, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455287:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455298:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455301: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455301, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455309:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455320:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455323: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455323, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455331:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455345: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455345, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455364:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455367: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455367, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455375:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455386:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455389: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455389, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455397:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455408:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455411: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455411, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455419:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455433: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455433, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455452:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455455: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455455, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455463:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455477: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455477, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455496:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455499: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455499, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455507:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455521: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455521, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455540:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455543: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455543, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455551:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455562:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455565: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455565, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455573:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455584:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455587: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455587, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455595:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455609: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455609, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455628:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455631: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455631, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455639:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455650:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455653: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455653, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455661:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455672:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                         & (~ ((0x24fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455675: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455675, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455683:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_537))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_537))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455697: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455697, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455716:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455719: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455719, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455727:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_545))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455738:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_545))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455741: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455741, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_549))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455760:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_549))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455763: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455763, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455771:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455785: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455785, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455793:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_594))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455804:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_594))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455807: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455807, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455815:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_598))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_598))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455829: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455829, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_666) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_681))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455848:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_666) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_681))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455851: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455851, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455859:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_715))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_715))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455873: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455873, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_728))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455892:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_728))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455895: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455895, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455903:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_735))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455914:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_735))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455917: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455917, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455925:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_619))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_747))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455936:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_619))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_747))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455939: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455939, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455947:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_766))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:455958:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_766))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:455961: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 455961, "");
        }
    }
}
