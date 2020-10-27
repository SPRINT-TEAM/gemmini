// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1512(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1512\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177932:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177935: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177935, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177943:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177957: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177957, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177979: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177979, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178001: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178001, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178020:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178023: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178023, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178042:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178045: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178045, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178064:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178067: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178067, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178089: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178089, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178108:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178111: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178111, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178133: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178133, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178155: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178155, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178177: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178177, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_286))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178196:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_286))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178199: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178199, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178207:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178221: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178221, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_303))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_303))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178243: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178243, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178265: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178265, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178284:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178287: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178287, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178295:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178309: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178309, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178331: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178331, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178353: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178353, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178372:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178375: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178375, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178383:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178397: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178397, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178416:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178419: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178419, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178427:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178441: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178441, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178460:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178463: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178463, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178471:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178485: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178485, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178507: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178507, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178529: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178529, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178548:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178551: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178551, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178573: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178573, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178595: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178595, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178617: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178617, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178639: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178639, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178661: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178661, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178683: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178683, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178705: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178705, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178724:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178727: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178727, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178735:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_473))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_473))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178749: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178749, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_483))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_483))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178771: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178771, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178793: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178793, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178812:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178815: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178815, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178837: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178837, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178856:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178859: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178859, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_527))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_527))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178881: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178881, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178903: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178903, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178925: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178925, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178947: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178947, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178969: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178969, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178988:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178991: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178991, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178999:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179013: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179013, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179032:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179035: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179035, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179043:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179057: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179057, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179076:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179079: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179079, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179101: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179101, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179123: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179123, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179145: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179145, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179164:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179167: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179167, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179175:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_634))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_634))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179189: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179189, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179211: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179211, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179233: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179233, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179252:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179255: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179255, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179277: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179277, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179299: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179321: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179343: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_711))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 7U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_711))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179365: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179384:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179387: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179406:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179409: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179428:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179431: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179453: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179453, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1513(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1513\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177932:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177935: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177935, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177943:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177957: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177957, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177979: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177979, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178001: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178001, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178020:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178023: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178023, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178042:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178045: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178045, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178064:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178067: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178067, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178089: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178089, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178108:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178111: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178111, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178133: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178133, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178155: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178155, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178177: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178177, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_286))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178196:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_286))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178199: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178199, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178207:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178221: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178221, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_303))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_303))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178243: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178243, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178265: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178265, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178284:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178287: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178287, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178295:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178309: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178309, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178331: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178331, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178353: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178353, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178372:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178375: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178375, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178383:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178397: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178397, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178416:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178419: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178419, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178427:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178441: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178441, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178460:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178463: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178463, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178471:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178485: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178485, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178507: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178507, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178529: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178529, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178548:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178551: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178551, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178573: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178573, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178595: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178595, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178617: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178617, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178639: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178639, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178661: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178661, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178683: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178683, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178705: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178705, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178724:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178727: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178727, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178735:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_473))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_473))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178749: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178749, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_483))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_483))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178771: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178771, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178793: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178793, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178812:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178815: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178815, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178837: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178837, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178856:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178859: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178859, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_527))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_527))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178881: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178881, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178903: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178903, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178925: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178925, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178947: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178947, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178969: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178969, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178988:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178991: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178991, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178999:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179013: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179013, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179032:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179035: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179035, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179043:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179057: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179057, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179076:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179079: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179079, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179101: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179101, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179123: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179123, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179145: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179145, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179164:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179167: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179167, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179175:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_634))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_634))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179189: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179189, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179211: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179211, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179233: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179233, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179252:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179255: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179255, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179277: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179277, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179299: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179321: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179343: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_711))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 8U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_711))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179365: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179384:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179387: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179406:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179409: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179428:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179431: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179453: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179453, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1514(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1514\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177932:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177935: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177935, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177943:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177957: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177957, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177976:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:177979: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 177979, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177987:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:177998:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178001: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178001, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178009:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178020:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178023: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178023, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178031:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178042:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178045: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178045, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178064:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178067: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178067, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178086:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178089: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178089, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178097:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178108:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178111: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178111, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178130:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178133: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178133, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__evict)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178155: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178155, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
                                           | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178177: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178177, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_286))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178196:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_286))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178199: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178199, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178207:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178221: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178221, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_303))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178240:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_303))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178243: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178243, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178251:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178265: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178265, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178284:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178287: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178287, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178295:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178309: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178309, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178328:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178331: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178331, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178339:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178350:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178353: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178353, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178372:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178375: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178375, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178383:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178394:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178397: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178397, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178405:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178416:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178419: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178419, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178427:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178441: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178441, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178449:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178460:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178463: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178463, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178471:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178482:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178485: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178485, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178504:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178507: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178507, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178515:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178529: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178529, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178548:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178551: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178551, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178573: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178573, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178592:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178595: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178595, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178603:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178614:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178617: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178617, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178625:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178636:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178639: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178639, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178647:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178658:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178661: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178661, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178669:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178680:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178683: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178683, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178691:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178705: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178705, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178713:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178724:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178727: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178727, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178735:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_473))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178746:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_473))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178749: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178749, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178757:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_483))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_483))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178771: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178771, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178793: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178793, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178812:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178815: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178815, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178823:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178837: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178837, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178856:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178859: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178859, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178867:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_527))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178878:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_527))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178881: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178881, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178889:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178903: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178903, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178925: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178925, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178947: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178947, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178966:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178969: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178969, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178988:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:178991: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 178991, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:178999:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179010:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179013: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179013, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179021:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179032:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179035: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179035, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179043:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179057: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179057, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179076:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179079: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179079, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179098:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179101: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179101, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179120:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179123: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179123, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179131:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179142:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179145: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179145, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179153:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179164:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179167: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179167, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179175:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_634))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_634))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179189: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179189, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179208:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179211: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179211, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179230:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179233: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179233, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179241:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179252:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179255: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179255, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179263:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179274:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179277: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179277, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179285:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179296:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179299: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179299, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179307:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179321: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179321, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179343: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179343, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_711))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 9U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_711))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179365: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179365, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179384:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_760) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179387: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179387, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179406:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_760) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179409: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179409, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_811))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179428:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_811))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179431: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179431, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:179450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_814) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:179453: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 179453, "");
        }
    }
}
