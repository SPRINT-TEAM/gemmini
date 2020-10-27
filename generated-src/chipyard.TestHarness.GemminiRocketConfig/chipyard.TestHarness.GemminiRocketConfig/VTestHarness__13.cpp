// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1326(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1326\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206814:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_115))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at CacheCork.scala:100 assert (!in.c.valid || in.c.bits.opcode === Release || in.c.bits.opcode === ReleaseData)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206825:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_115))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:206828: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 206828, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206836:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_230))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206847:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_230))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:206850: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 206850, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206858:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206869:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:206872: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 206872, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206880:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206891:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:206894: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 206894, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206902:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_339))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:206913:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_339))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:206916: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 206916, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1327(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1327\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_769) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_769))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_769) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_769))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_0.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_817) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_817))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_817) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_817))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_1.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1328(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1328\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_865) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_865))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_865) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_865))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_2.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_913) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_913))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_913) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_913))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_3.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1329(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1329\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_961) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_961))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_961) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_961))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_4.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1009) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1009))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1009) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1009))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_5.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1330(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1330\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1057) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1057))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1057) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1057))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_6.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1105) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1105))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1105) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1105))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_7.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1331(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1331\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1153) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1153))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1153) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1153))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_8.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1201) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1201))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1201) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1201))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_9.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1332(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1332\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1249) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1249))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1249) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1249))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_10.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1297) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1297))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1297) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1297))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_11.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1333(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1333\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1345) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1345))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1345) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1345))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_12.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1393) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1393))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1393) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1393))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_13.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1334(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1334\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1441) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1441))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1441) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1441))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_14.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1489) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1489))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:358307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1489) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1489))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:358310: Assertion failed in %NTestHarness.dut.system.tile.v.ex_controller.mesh.mesh.mesh_0_15.tile_0_0\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 358310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1335(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1335\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99012:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99015: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99015, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99023:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99034:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99037: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99037, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99045:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99056:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99059: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99059, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99067:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99081: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99081, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99100:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99103: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99103, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99111:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99122:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99125: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99125, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99133:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99144:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99147: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99147, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99155:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99166:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99169: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99169, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99177:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99188:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99191: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99191, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99199:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99213: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99213, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99235: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99235, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99257: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99257, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99276:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99279: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99279, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99287:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99298:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99301: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99301, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99309:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99320:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99323: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99323, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99331:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99345: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99345, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99364:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99367: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99367, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99375:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_444))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99386:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_444))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99389: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99389, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99397:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99408:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99411: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99411, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99419:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99433: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99433, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99452:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99455: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99455, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99463:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99477: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99477, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99496:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99499: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99499, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99507:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_520))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_520))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99521: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99521, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99540:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99543: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99543, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99551:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99562:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99565: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99565, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99573:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99584:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99587: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99587, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99595:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99609: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99609, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_520))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99628:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_520))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99631: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99631, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99639:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99650:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99653: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99653, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99661:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99672:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99675: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99675, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99683:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99697: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99697, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99716:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99719: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99719, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99727:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99738:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99741: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99741, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99760:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99763: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99763, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99771:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99785: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99785, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99793:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99804:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99807: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99807, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99815:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99829: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99829, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99848:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99851: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99851, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99859:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99873: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99873, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99892:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99895: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99895, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99903:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99914:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99917: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99917, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99925:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99936:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99939: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99939, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99947:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_400) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_400) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99961: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99961, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99969:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99980:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:99983: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 99983, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:99991:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100002:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100005: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100005, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100013:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100024:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100027: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100027, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100035:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100046:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100049: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100049, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100057:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100068:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100071: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100071, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100079:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100090:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100093: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100093, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100115: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100115, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100137: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100137, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100156:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100159: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100159, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100167:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100178:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100181: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100181, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100189:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100200:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100203: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100203, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100211:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100225: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100225, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100244:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100247: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100247, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100255:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100266:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100269: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100269, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100277:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100288:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100291: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100291, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100299:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100313: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100313, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100332:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100335: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100335, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100343:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100357: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100357, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100376:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100379: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100379, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100387:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100401: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100401, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100420:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100423: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100423, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100431:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100442:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100445: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100445, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100453:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_916))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100464:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_916))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100467: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100467, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100475:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100489: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100489, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100508:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100511: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100511, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100519:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100530:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100533: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100533, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100541:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100552:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100555: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100555, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100563:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100577: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100577, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100585:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_916))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100596:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_916))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100599: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100599, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100607:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100621: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100621, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100640:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100643: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100643, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100651:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100662:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100665: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100665, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100673:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1019))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100684:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1019))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100687: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100687, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100695:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1023))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100706:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1023))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100709: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100709, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100717:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1027))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100728:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1027))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100731: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100731, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100739:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1031))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1031))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100753: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100753, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1035))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100772:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1035))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100775: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100775, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100783:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1068))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100794:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1068))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100797: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100797, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100805:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100816:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100819: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100819, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100827:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1076))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1076))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100841: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100841, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1080))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100860:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1080))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100863: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100863, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100871:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1084))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100882:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1084))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100885: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100885, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100893:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1088))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100904:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1088))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100907: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100907, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100915:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1148) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100926:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1148) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100929: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100929, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100937:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1197))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100948:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1197))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100951: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100951, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100959:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1210))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1210))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100973: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100973, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1217))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:100992:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1217))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:100995: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 100995, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:101003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1101))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1190)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:101014:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1184) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1101))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1190)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:101017: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 101017, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:101025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1236))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:101036:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1236))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:101039: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 101039, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:101047:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1255))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:101058:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1255))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:101061: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 101061, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1336(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1336\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_put__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param__v0 = 0U;
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87696:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87707:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87710: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87710, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87718:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87729:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87732: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87732, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87740:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87751:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87754: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87754, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87762:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87773:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87776: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87776, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87784:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87795:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87798: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87798, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87806:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87817:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87820: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87820, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87839:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87842: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87842, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87861:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87864: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87864, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87883:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87886: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87886, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87894:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_253))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87905:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_253))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87908: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87908, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87930: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87930, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87949:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87952: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87952, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87960:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87971:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87974: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87974, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87982:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:87993:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:87996: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 87996, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88015:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88018: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88018, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88026:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88037:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88040: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88040, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88048:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88059:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88062: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88062, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88070:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_444))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88081:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_444))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88084: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88084, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88092:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88103:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88106: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88106, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88114:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88125:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88128: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88128, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88147:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88150: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88150, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88158:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88169:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88172: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88172, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88194: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88194, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_520))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88213:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_520))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88216: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88216, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88224:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88235:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88238: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88238, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88246:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88257:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88260: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88260, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88282: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88282, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88301:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88304: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88304, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_520))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_520))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88326: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88326, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88348: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88348, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88370: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88370, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88392: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88392, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88411:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88414: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88414, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88422:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88436: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88436, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88458: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88458, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88477:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88480: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88480, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88499:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88502: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88502, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88524: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88524, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88546: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88546, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88568: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88568, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88590: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88590, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88612: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88612, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88634: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88634, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_400) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88653:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_400) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88656: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88656, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88675:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_256))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88678: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88678, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88700: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88700, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88722: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88722, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88744: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88744, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88763:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88766: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88766, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88774:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88785:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88788: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88788, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88810: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88810, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88829:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88832: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88832, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88851:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88854: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88854, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88873:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88876: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88876, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88898: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88898, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88917:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88920: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88920, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88939:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88942: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88942, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88950:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88964: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88964, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:88986: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 88986, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:88994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89005:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89008: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89008, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89027:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89030: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89030, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89038:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89052: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89052, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89074: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89074, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89096: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89096, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89118: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89118, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89140: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89140, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89162: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89162, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89184: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89184, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89206: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89206, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89228: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89228, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89250: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89250, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89272: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89272, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89291:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89294: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89294, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89302:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_848))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89316: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89316, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89338: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89338, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89360: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89360, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1019))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89379:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1019))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89382: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89382, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1023))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1023))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89404: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89404, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1027))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1027))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89426: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89426, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1031))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1031))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89448: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89448, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1035))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89467:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_999))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1035))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89470: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89470, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1068))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1068))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89492: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89492, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1072))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1072))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89514: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89514, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1076))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89533:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1076))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89536: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89536, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1080))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89555:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1080))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89558: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89558, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89566:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1084))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1084))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89580: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89580, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1088))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1047))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1088))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89602: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89602, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1148) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89621:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1148) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89624: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89624, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1197))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89643:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1197))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89646: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89646, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1210))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1210))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89668: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89668, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1217))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1217))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89690: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89690, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1101))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1190)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89709:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1184) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1101))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1190)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89712: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89712, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1236))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89731:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1236))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89734: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89734, "");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1255))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:17:14)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v:89753:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1255))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.GemminiRocketConfig.top.v:89756: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.in_xbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hfarzaneh/chipyard/chipyard/sims/verilator/generated-src/chipyard.TestHarness.GemminiRocketConfig/chipyard.TestHarness.GemminiRocketConfig.top.v", 89756, "");
        }
    }
}
