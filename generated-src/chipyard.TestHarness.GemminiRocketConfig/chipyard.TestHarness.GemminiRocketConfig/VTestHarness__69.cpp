// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3435(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3435\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*543:0*/ __Vtemp2637[17];
    WData/*543:0*/ __Vtemp2638[17];
    WData/*543:0*/ __Vtemp2643[17];
    WData/*543:0*/ __Vtemp2644[17];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))
            : VL_ULL(0));
    __Vtemp2637[0U] = 0xfU;
    __Vtemp2637[1U] = 0U;
    __Vtemp2637[2U] = 0U;
    __Vtemp2637[3U] = 0U;
    __Vtemp2637[4U] = 0U;
    __Vtemp2637[5U] = 0U;
    __Vtemp2637[6U] = 0U;
    __Vtemp2637[7U] = 0U;
    __Vtemp2637[8U] = 0U;
    __Vtemp2637[9U] = 0U;
    __Vtemp2637[0xaU] = 0U;
    __Vtemp2637[0xbU] = 0U;
    __Vtemp2637[0xcU] = 0U;
    __Vtemp2637[0xdU] = 0U;
    __Vtemp2637[0xeU] = 0U;
    __Vtemp2637[0xfU] = 0U;
    __Vtemp2637[0x10U] = 0U;
    VL_SHIFTL_WWI(527,527,9, __Vtemp2638, __Vtemp2637, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[1U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[2U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[3U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[4U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[5U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[6U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[7U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[8U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[9U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2638[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_854)
            ? (0x7fffU & __Vtemp2638[0x10U]) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))
            : VL_ULL(0));
    __Vtemp2643[0U] = 0xfU;
    __Vtemp2643[1U] = 0U;
    __Vtemp2643[2U] = 0U;
    __Vtemp2643[3U] = 0U;
    __Vtemp2643[4U] = 0U;
    __Vtemp2643[5U] = 0U;
    __Vtemp2643[6U] = 0U;
    __Vtemp2643[7U] = 0U;
    __Vtemp2643[8U] = 0U;
    __Vtemp2643[9U] = 0U;
    __Vtemp2643[0xaU] = 0U;
    __Vtemp2643[0xbU] = 0U;
    __Vtemp2643[0xcU] = 0U;
    __Vtemp2643[0xdU] = 0U;
    __Vtemp2643[0xeU] = 0U;
    __Vtemp2643[0xfU] = 0U;
    __Vtemp2643[0x10U] = 0U;
    VL_SHIFTL_WWI(527,527,9, __Vtemp2644, __Vtemp2643, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[1U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[2U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[3U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[4U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[5U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[6U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[7U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[8U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[9U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? __Vtemp2644[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_854)
            ? (0x7fffU & __Vtemp2644[0x10U]) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48) 
                  ^ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_fmaCmd) 
                     >> 1U)) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
        = (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
                       - (IData)(0x7c8U)) - (0xfffU 
                                             & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                   >> 0x14U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_359 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          >> 0x11U))) ? 0x25U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 0x10U)))
                                                  ? 0x26U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0xfU)))
                                                   ? 0x27U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0xeU)))
                                                    ? 0x28U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 0xdU)))
                                                     ? 0x29U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                 >> 0xcU)))
                                                      ? 0x2aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                  >> 0xbU)))
                                                       ? 0x2bU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 0xaU)))
                                                        ? 0x2cU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                    >> 9U)))
                                                         ? 0x2dU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                     >> 8U)))
                                                          ? 0x2eU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                      >> 7U)))
                                                           ? 0x2fU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                       >> 6U)))
                                                            ? 0x30U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                        >> 5U)))
                                                             ? 0x31U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                         >> 4U)))
                                                              ? 0x32U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                          >> 3U)))
                                                               ? 0x33U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                           >> 2U)))
                                                                ? 0x34U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                            >> 1U)))
                                                                 ? 0x35U
                                                                 : 0x36U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3436(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3436\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2648[3];
    WData/*95:0*/ __Vtemp2653[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_320 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
           | ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                   << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                             >> 0x1cU))))
               ? VL_ULL(0) : VL_ULL(0xe0400000)));
    __Vtemp2648[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296)))) 
                                             << 0x1dU)));
    __Vtemp2648[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                   >> 0x1cU))))))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp2648[0U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U])
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                   >> 0x1cU))))))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp2648[1U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U])
            : 0xe0080000U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                   >> 0x1cU))))))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                 >> 0x20U))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U])
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_349 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
           | ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                   << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                             >> 0x1cU))))
               ? VL_ULL(0) : VL_ULL(0xe0400000)));
    __Vtemp2653[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325)))) 
                                             << 0x1dU)));
    __Vtemp2653[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                   >> 0x1cU))))))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp2653[0U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U])
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                   >> 0x1cU))))))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp2653[1U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U])
            : 0xe0080000U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U] 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                   >> 0x1cU))))))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                 >> 0x20U))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U])
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3437(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3437\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
        = (((0x800U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
             ? VL_ULL(0) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_152) 
           | (QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
                                            >> 0x37U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[0U] 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U] 
                                    >> 0x1dU)))) ? 
           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[0U]
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U] 
                                    >> 0x1dU)))) ? 
           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[1U]
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[2U] 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U] 
                                    >> 0x1dU)))) ? 
           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[2U]
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
        = ((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
           | (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0xfffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                         - vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (VL_ULL(0x1ffffffffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                                        - vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
        = (1U & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
        = ((0x7fffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
                           << 7U) | (0x7eU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
                                              >> 0x19U)))) 
           | ((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
                             << 9U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
                                       >> 0x17U)))) 
              | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_247))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3438(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3438\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
           | (0x18U >= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
        = ((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
           | (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1481 
        = (((QData)((IData)(((0xff000000U & ((VL_GTS_III(1,8,8, 
                                                         (0xffU 
                                                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[2U] 
                                                              << 8U) 
                                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                                >> 0x18U))), 
                                                         (0xffU 
                                                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
                                                              << 8U) 
                                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                                >> 0x18U))))
                                               ? ((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                     >> 0x18U))
                                               : ((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                     >> 0x18U))) 
                                             << 0x18U)) 
                             | ((0xff0000U & ((VL_GTS_III(1,8,8, 
                                                          (0xffU 
                                                           & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                                 >> 0x10U))), 
                                                          (0xffU 
                                                           & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                                 >> 0x10U))))
                                                ? (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                      >> 0x10U))
                                                : (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                      >> 0x10U))) 
                                              << 0x10U)) 
                                | ((0xff00U & ((VL_GTS_III(1,8,8, 
                                                           (0xffU 
                                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                                  >> 8U))), 
                                                           (0xffU 
                                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                                  >> 8U))))
                                                 ? 
                                                ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                    >> 8U))
                                                 : 
                                                ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                    >> 8U))) 
                                               << 8U)) 
                                   | (0xffU & (VL_GTS_III(1,8,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U]), 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U]))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U]
                                                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U]))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & ((VL_GTS_III(1,8,8, 
                                                         (0xffU 
                                                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                              << 8U) 
                                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U] 
                                                                >> 0x18U))), 
                                                         (0xffU 
                                                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                              << 8U) 
                                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
                                                                >> 0x18U))))
                                               ? ((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U] 
                                                     >> 0x18U))
                                               : ((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
                                                     >> 0x18U))) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & ((VL_GTS_III(1,8,8, 
                                                            (0xffU 
                                                             & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U] 
                                                                   >> 0x10U))), 
                                                            (0xffU 
                                                             & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
                                                                   >> 0x10U))))
                                                  ? 
                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
                                                     >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((VL_GTS_III(1,8,8, 
                                                               (0xffU 
                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                                    << 0x18U) 
                                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U] 
                                                                      >> 8U))), 
                                                               (0xffU 
                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                                    << 0x18U) 
                                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
                                                                      >> 8U))))
                                                     ? 
                                                    ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[1U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U] 
                                                        >> 8U))
                                                     : 
                                                    ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
                                                        >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (VL_GTS_III(1,8,8, 
                                                                (0xffU 
                                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U]), 
                                                                (0xffU 
                                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U]))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_11[0U]
                                                      : 
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U]))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3439(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3439\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_mem_busy 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_valid) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__cached_grant_wait)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_dmem_req_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3705 
        = (((QData)((IData)(((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_rw_cmd))
                              ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                                  << 9U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                             << 5U) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
                                               << 1U)))
                              : 0U))) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_701));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3878 
        = ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_rw_cmd))
              ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_366
              : VL_ULL(0)) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_701));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3440(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3440\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2660[3];
    // Body
    VL_EXTEND_WQ(95,64, __Vtemp2660, (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len 
                                      - VL_ULL(1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_450)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_455)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[0U]
                : __Vtemp2660[0U]) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_450)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_455)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[1U]
                : __Vtemp2660[1U]) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_450)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_455)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[2U]
                : __Vtemp2660[2U]) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_1078 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_1013)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1013)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3441(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3441\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1078 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1013)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1078 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1013)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_463 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_435 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_933 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_933 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_933 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_933 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater__DOT__full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__rsize 
        = ((0U == (((4U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                    | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]) 
                   | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]))
            ? 2U : ((0U == (((2U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]) 
                            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]))
                     ? 1U : ((0U == (((1U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                                      | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]) 
                                     | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]))
                              ? 0U : 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_119 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 1U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 2U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 3U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 4U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 5U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 6U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 7U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 8U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 9U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0xaU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xbU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0xcU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xdU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xeU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xfU))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3442(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3442\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_151 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                  >> 0x10U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x11U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x12U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x13U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x14U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x15U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x16U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x17U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x18U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x19U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x1aU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x1bU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x1cU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x1dU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x1eU)) 
                                                 + 
                                                 ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                      >> 0x1fU)) 
                                                  + 
                                                  (1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3443(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3443\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_183 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                  >> 1U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 2U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 3U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 4U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 5U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 6U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 7U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 8U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 9U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0xaU)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0xbU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0xcU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0xdU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0xeU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0xfU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x10U))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3444(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3444\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_215 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                  >> 0x11U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x12U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x13U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x14U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x15U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x16U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x17U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x18U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x19U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x1aU)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x1bU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x1cU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x1dU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x1eU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x1fU)) 
                                                 + 
                                                 ((1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U] 
                                                      >> 1U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3445(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3445\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3537 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3542 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3672 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1fU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3667 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1eU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3647 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1aU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3652 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1bU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3446(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3446\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3657 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1cU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3662 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1dU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3632 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x17U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3637 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x18U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3642 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x19U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3617 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x14U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3447(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3447\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3622 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x15U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3627 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x16U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3597 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x10U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3602 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x11U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3607 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x12U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3612 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x13U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3448(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3448\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
             & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
                >> 6U)) & (0x10U == (0x50U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x27U))))) 
           & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_484 
                           >> 8U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
             & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
                >> 7U)) & (0x10U == (0x50U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x27U))))) 
           & (0xffffffffU == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_484));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3723 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 8U)) & (0x10U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3703 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3708 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3449(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3449\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3838 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1fU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3833 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1eU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3828 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1dU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3813 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1aU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3818 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1bU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3823 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1cU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3450(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3450\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3798 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x17U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3803 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x18U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3808 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x19U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3793 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x16U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3783 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x14U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3788 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x15U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3451(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3451\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3778 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x13U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3763 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x10U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3768 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x11U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3773 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x12U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3452(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3452\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2666[3];
    WData/*543:0*/ __Vtemp2668[17];
    WData/*543:0*/ __Vtemp2669[17];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_34 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_30 
                       >> 0x10U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_30));
    __Vtemp2666[0U] = (IData)((((QData)((IData)((1U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff800000U 
                                                              & ((((0U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                         << 3U) 
                                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                           >> 0x1dU)))) 
                                                                   | (6U 
                                                                      <= 
                                                                      (7U 
                                                                       & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                           << 3U) 
                                                                          | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                             >> 0x1dU)))))
                                                                   ? 
                                                                  ((0x1c0U 
                                                                    & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                        << 9U) 
                                                                       | (0x1c0U 
                                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                             >> 0x17U)))) 
                                                                   | (0x3fU 
                                                                      & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                          << 0xcU) 
                                                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                            >> 0x14U))))
                                                                   : 
                                                                  ((IData)(0x100U) 
                                                                   + 
                                                                   ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                     << 0xcU) 
                                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                       >> 0x14U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                    << 3U) 
                                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                                                                      >> 0x1dU))))))));
    __Vtemp2666[1U] = ((0xfffffffeU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]) 
                       | (IData)(((((QData)((IData)(
                                                    (1U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xff800000U 
                                                                  & ((((0U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                             << 3U) 
                                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                               >> 0x1dU)))) 
                                                                       | (6U 
                                                                          <= 
                                                                          (7U 
                                                                           & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                               << 3U) 
                                                                              | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x1dU)))))
                                                                       ? 
                                                                      ((0x1c0U 
                                                                        & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                            << 9U) 
                                                                           | (0x1c0U 
                                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x17U)))) 
                                                                       | (0x3fU 
                                                                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                              << 0xcU) 
                                                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x14U))))
                                                                       : 
                                                                      ((IData)(0x100U) 
                                                                       + 
                                                                       ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                         << 0xcU) 
                                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                           >> 0x14U)))) 
                                                                     << 0x17U)) 
                                                                 | (0x7fffffU 
                                                                    & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                        << 3U) 
                                                                       | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                                                                          >> 0x1dU))))))) 
                                  >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[0U] 
        = __Vtemp2666[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[1U] 
        = __Vtemp2666[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[2U] 
        = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_594 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_588 
           + ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_param))
               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_590
               : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_590)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))
            : VL_ULL(0));
    __Vtemp2668[0U] = 0xfU;
    __Vtemp2668[1U] = 0U;
    __Vtemp2668[2U] = 0U;
    __Vtemp2668[3U] = 0U;
    __Vtemp2668[4U] = 0U;
    __Vtemp2668[5U] = 0U;
    __Vtemp2668[6U] = 0U;
    __Vtemp2668[7U] = 0U;
    __Vtemp2668[8U] = 0U;
    __Vtemp2668[9U] = 0U;
    __Vtemp2668[0xaU] = 0U;
    __Vtemp2668[0xbU] = 0U;
    __Vtemp2668[0xcU] = 0U;
    __Vtemp2668[0xdU] = 0U;
    __Vtemp2668[0xeU] = 0U;
    __Vtemp2668[0xfU] = 0U;
    __Vtemp2668[0x10U] = 0U;
    VL_SHIFTL_WWI(527,527,9, __Vtemp2669, __Vtemp2668, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[1U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[2U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[3U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[4U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[5U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[6U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[7U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[8U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[9U] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? __Vtemp2669[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848)
            ? (0x7fffU & __Vtemp2669[0x10U]) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_384 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_242) 
           & (3U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_addr) 
                           >> 0xcU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3453(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3453\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_340 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_242) 
           & (2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_addr) 
                           >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_296 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_242) 
           & (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_addr) 
                           >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_252 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___T_242) 
           & (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_addr) 
                           >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_313 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_302) 
                     >> 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_312 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_302)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__empty))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3454(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3454\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1197 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__insn_call) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__insn_break));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_158 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_85));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_88 
        = ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_465)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_465)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_465));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_96 
        = ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_467)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_467)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1085)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_467)
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__DoComputes_0) 
                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_467)))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_467));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__start_inputting_d 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))
            ? ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len)) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1085))))
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state)) 
               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_preload) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_mul_pre))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__start_inputting_a 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))
            ? ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len)) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079)
                      ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__current_dataflow))
                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1085) 
                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__DoComputes_0) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__current_dataflow))))))
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state)) 
               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_preload)
                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__current_dataflow))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_mul_pre) 
                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_mul) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__current_dataflow))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3455(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3455\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__start_inputting_b 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))
            ? ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len)) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)) 
                  & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079)) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1085) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__DoComputes_0)))))
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state)) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_preload)) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_mul_pre) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_mul)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__multiply_garbage 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_38) 
            & (0x3fffU == (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_3)))) 
           & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_3 
                      >> 0xeU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_484 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_38) 
            & (0x3fffU == (0x3fffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_455))) 
           & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_3 
                      >> 0xeU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__preload_zeros 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_48) 
           & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_5 
                      >> 0xeU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3456(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3456\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3940 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
            ? 0U : (0xffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr))
                              ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3934 
                                         >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3934))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_49 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_34) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_47))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3457(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3457\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_52 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_34) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_50))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_55 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_37) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_53))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_58 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_37) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_56))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_61 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_40) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_59))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_64 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_40) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_62))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_67 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_43) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_65))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3458(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3458\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2673[3];
    WData/*95:0*/ __Vtemp2679[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_70 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_43) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_68))));
    __Vtemp2673[0U] = ((0xfffffffeU & ((IData)(((1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                                 ? 
                                                (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                                  ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                                  : 
                                                 (((1U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                   == 
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                    >> 0x3fU))) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                    >> 0x3fU))))
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                   >> 0x3fU)))
                                                        : 
                                                       ((1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                            >> 1U)) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                    >> 0x3fU)))))))
                                                   ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                   : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data)))) 
                                       << 1U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_corrupt) 
                                                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_corrupt)));
    __Vtemp2673[1U] = ((1U & ((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                        : ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                            : (((1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                == 
                                                (1U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU))) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                 >> 0x3fU))))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                >> 0x3fU)))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU)))))))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data)))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((1U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                                          ? 
                                                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                                           ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                                           : 
                                                          (((1U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                            == 
                                                            (1U 
                                                             & (((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                             >> 0x3fU))) 
                                                                 == 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                             >> 0x3fU))))
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                            >> 0x3fU)))
                                                                 : 
                                                                ((1U 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                                     >> 1U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                             >> 0x3fU)))))))
                                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp2673[2U] = (1U & ((IData)((((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                        : ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                            : (((1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                == 
                                                (1U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU))) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                 >> 0x3fU))))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                >> 0x3fU)))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU)))))))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data))) 
                                      >> 0x20U)) >> 0x1fU));
    __Vtemp2679[2U] = ((0xffffffc0U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_774) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_772) 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                       << 6U)) | ((0xffffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_774) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_772) 
                                                          & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                      << 5U)) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_771) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_769) 
                                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                                         << 4U)) 
                                                     | ((0xfffffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_771) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_769) 
                                                                & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                            << 3U)) 
                                                        | ((0xfffffffcU 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_768) 
                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_766) 
                                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                                               << 2U)) 
                                                           | ((0xfffffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_768) 
                                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_766) 
                                                                      & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                                  << 1U)) 
                                                              | __Vtemp2673[2U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[0U] 
        = __Vtemp2673[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[1U] 
        = __Vtemp2673[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[2U] 
        = ((0xffffff00U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                            << 9U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                      << 8U))) | ((0xffffff80U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775) 
                                                          & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                      << 7U)) 
                                                  | __Vtemp2679[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[3U] 
        = (0xffU & ((0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                              >> 0x17U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775) 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                            >> 0x18U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3459(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3459\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1766 
        = (((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                 >> 8U)) << 0xcU)) 
            | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                   >> 8U)) << 0xbU)) 
               | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                      >> 8U)) << 0xaU)) 
                  | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                         >> 8U)) << 9U)) 
                     | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                            >> 8U)) 
                                   << 8U)) | ((0x80U 
                                               & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                           >> 8U)) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                              >> 8U)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                 >> 8U)) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & ((IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                    >> 8U)) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & ((IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                       >> 8U)) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                          >> 8U)) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                             >> 8U)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                              >> 8U))))))))))))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr)
               ? ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                       >> 9U)) << 0xcU)) 
                  | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                         >> 9U)) << 0xbU)) 
                     | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                            >> 9U)) 
                                   << 0xaU)) | ((0x200U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                             >> 9U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                >> 9U)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                                   >> 9U)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                                      >> 9U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                         >> 9U)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                            >> 9U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((IData)(
                                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                               >> 9U)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                                >> 9U)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                                >> 9U)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                                >> 9U)))))))))))))))
               : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3460(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3460\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1700 
        = ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                >> 0xdU)) << 0xcU)) 
           | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                  >> 0xdU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                     >> 0xdU)) << 0xaU)) 
                 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                        >> 0xdU)) << 9U)) 
                    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                           >> 0xdU)) 
                                  << 8U)) | ((0x80U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                          >> 0xdU)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                             >> 0xdU)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                >> 0xdU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                   >> 0xdU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                      >> 0xdU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                         >> 0xdU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                            >> 0xdU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                             >> 0xdU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__ptw_ae_array 
        = ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                >> 0xbU)) << 0xcU)) 
           | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                  >> 0xbU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                     >> 0xbU)) << 0xaU)) 
                 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                        >> 0xbU)) << 9U)) 
                    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                           >> 0xbU)) 
                                  << 8U)) | ((0x80U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                          >> 0xbU)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                             >> 0xbU)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                >> 0xbU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                   >> 0xbU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                      >> 0xbU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                         >> 0xbU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                            >> 0xbU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                             >> 0xbU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3461(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3461\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_12 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_656));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_9 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_10 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_11 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2077 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_8 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_6 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_422) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_423 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_6 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_423 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_7 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_428) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_7 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
                                      >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3462(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3462\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_386) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_387 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_387 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_392) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_393 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_393 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_398) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_399 
                                   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3463(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3463\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_399 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_404) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_410) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
                                      >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3464(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3464\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_416) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_417 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_417 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1243 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1178)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_347 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_in_d_valid) 
           & (0x24U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_349 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_in_d_valid) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                 >> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_351 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_in_d_valid) 
           & (8U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                             >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1873 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1826) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1834)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1924 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1877) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1885)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseDone 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3776)) 
            | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3775))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3768));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3465(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3465\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseDataBeat 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3775) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3776) 
                            - (IData)(1U)))) + ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseRejected)
                                                 ? 0U
                                                 : 
                                                (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_release_data_valid) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_release_data_valid))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__do_enq) 
           != (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_364)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_562 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_625)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___GEN_21 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_39) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_39));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
        = (VL_ULL(0xffffffffff) & ((~ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_15 
                                        << 1U) | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_15)))) 
                                                  << 0x21U))) 
                                   & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__freeIdx 
        = ((8U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__freeOH) 
                  >> 5U)) | (((IData)((0U != (0xfU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_17) 
                                                 >> 4U)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_21) 
                                                      >> 2U)))) 
                                         << 1U) | (1U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_21) 
                                                       >> 3U) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_21) 
                                                         >> 1U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3466(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3466\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__do_deq 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__empty)) 
            & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_41)) 
               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_44)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_42) 
                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__last_iteration))
                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_ready)))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3070 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1057) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_valid)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_210)) 
             & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1909) 
                  & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                    >> 0x1fU))) ? (
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                   <= 
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data)))
                      : ((0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                         <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data)))) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1909) 
                    & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                      >> 0x1fU))) ? 
                       ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                        > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data)))
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                           > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data))))) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_244) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_258)))) 
            << 0xfU) | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1110) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_263)) 
                          & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1961) 
                               & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                 >> 0x1fU)))
                                   ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                      <= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data)))
                                   : ((0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                      <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data)))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1961) 
                                 & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                   >> 0x1fU)))
                                     ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                        > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data)))
                                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                        > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data))))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_297) 
                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_311)))) 
                         << 0xeU) | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1163) 
                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_valid)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_316)) 
                                       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2013) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                           >> 0x1fU)))
                                                ? (
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                   <= 
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data)))
                                                : (
                                                   (0x3fffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data)))) 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2013) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                             >> 0x1fU)))
                                                  ? 
                                                 ((0x3ffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                  > 
                                                  (0x3ffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data)))
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data))))) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_350) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_364)))) 
                                      << 0xdU) | ((
                                                   ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1216) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_valid)) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_369)) 
                                                    & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2065) 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                        >> 0x1fU)))
                                                             ? 
                                                            ((0x3ffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                             <= 
                                                             (0x3ffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data)))
                                                             : 
                                                            ((0x3fffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                             <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data)))) 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2065) 
                                                           & ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                          >> 0x1fU)))
                                                               ? 
                                                              ((0x3ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                               > 
                                                               (0x3ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data)))
                                                               : 
                                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                               > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data))))) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_403) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_417)))) 
                                                   << 0xcU) 
                                                  | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1269) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_valid)) 
                                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_422)) 
                                                       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2117) 
                                                            & ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                           >> 0x1fU)))
                                                                ? 
                                                               ((0x3ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                <= 
                                                                (0x3ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data)))
                                                                : 
                                                               ((0x3fffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data)))) 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2117) 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                             >> 0x1fU)))
                                                                  ? 
                                                                 ((0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                  > 
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data)))
                                                                  : 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data))))) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_456) 
                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_470)))) 
                                                      << 0xbU) 
                                                     | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1322) 
                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_valid)) 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_475)) 
                                                          & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2169) 
                                                               & ((1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                              >> 0x1fU)))
                                                                   ? 
                                                                  ((0x3ffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                   <= 
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data)))
                                                                   : 
                                                                  ((0x3fffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data)))) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2169) 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                     ? 
                                                                    ((0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                     > 
                                                                     (0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data)))
                                                                     : 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                     > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data))))) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_509) 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_523)))) 
                                                         << 0xaU) 
                                                        | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1375) 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_valid)) 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_528)) 
                                                             & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2221) 
                                                                  & ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                      ? 
                                                                     ((0x3ffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                      <= 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data)))
                                                                      : 
                                                                     ((0x3fffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                      <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data)))) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2221) 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                        ? 
                                                                       ((0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                        > 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data)))
                                                                        : 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                        > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data))))) 
                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_562) 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_576)))) 
                                                            << 9U) 
                                                           | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1428) 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_valid)) 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_581)) 
                                                                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2273) 
                                                                     & ((1U 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                         ? 
                                                                        ((0x3ffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                         <= 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data)))
                                                                         : 
                                                                        ((0x3fffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                         <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data)))) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_2273) 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                           ? 
                                                                          ((0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                           > 
                                                                           (0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data)))
                                                                           : 
                                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                           > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data))))) 
                                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_615) 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_629)))) 
                                                               << 8U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3062)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3467(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3467\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3054 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1057) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_210)) 
             & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1060) 
                     & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                       >> 0x1fU))) ? 
                        ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                         <= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op1_bits_data)))
                         : ((0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                            <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op1_bits_data))))) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1060) 
                    & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                      >> 0x1fU))) ? 
                       ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                        > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op1_bits_data)))
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                           > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op1_bits_data))))) 
                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_valid) 
                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1084) 
                       & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                         >> 0x1fU)))
                           ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                              <= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_bits_data)))
                           : ((0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                              <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_bits_data))))) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1084) 
                      & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                        >> 0x1fU)))
                          ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                             > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_bits_data)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                             > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_bits_data))))))) 
            << 0xfU) | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1110) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_263)) 
                          & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op1_valid) 
                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1113) 
                                  & ((1U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                    >> 0x1fU)))
                                      ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                         <= (0x3ffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op1_bits_data)))
                                      : ((0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                         <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op1_bits_data))))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1113) 
                                 & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                   >> 0x1fU)))
                                     ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                        > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op1_bits_data)))
                                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                        > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op1_bits_data))))) 
                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_valid) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1137) 
                                    & ((1U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                      >> 0x1fU)))
                                        ? ((0x3ffU 
                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                           <= (0x3ffU 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_bits_data)))
                                        : ((0x3fffU 
                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                           <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_bits_data))))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1137) 
                                   & ((1U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                     >> 0x1fU)))
                                       ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                          > (0x3ffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_bits_data)))
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                          > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_bits_data))))))) 
                         << 0xeU) | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1163) 
                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_316)) 
                                       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op1_valid) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1166) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                              >> 0x1fU)))
                                                   ? 
                                                  ((0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                   <= 
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op1_bits_data)))
                                                   : 
                                                  ((0x3fffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op1_bits_data))))) 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1166) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                             >> 0x1fU)))
                                                  ? 
                                                 ((0x3ffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                  > 
                                                  (0x3ffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op1_bits_data)))
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op1_bits_data))))) 
                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_valid) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1190) 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                >> 0x1fU)))
                                                     ? 
                                                    ((0x3ffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                     <= 
                                                     (0x3ffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_bits_data)))
                                                     : 
                                                    ((0x3fffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                     <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_bits_data))))) 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1190) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                               >> 0x1fU)))
                                                    ? 
                                                   ((0x3ffU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                    > 
                                                    (0x3ffU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_bits_data)))
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                    > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_bits_data))))))) 
                                      << 0xdU) | ((
                                                   (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1216) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_369)) 
                                                    & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op1_valid) 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1219) 
                                                            & ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                           >> 0x1fU)))
                                                                ? 
                                                               ((0x3ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                <= 
                                                                (0x3ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op1_bits_data)))
                                                                : 
                                                               ((0x3fffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op1_bits_data))))) 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1219) 
                                                           & ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                          >> 0x1fU)))
                                                               ? 
                                                              ((0x3ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                               > 
                                                               (0x3ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op1_bits_data)))
                                                               : 
                                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                               > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op1_bits_data))))) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_valid) 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1243) 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                             >> 0x1fU)))
                                                                  ? 
                                                                 ((0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                  <= 
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_bits_data)))
                                                                  : 
                                                                 ((0x3fffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                  <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_bits_data))))) 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1243) 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                            >> 0x1fU)))
                                                                 ? 
                                                                ((0x3ffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                 > 
                                                                 (0x3ffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_bits_data)))
                                                                 : 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                 > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_bits_data))))))) 
                                                   << 0xcU) 
                                                  | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1269) 
                                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_422)) 
                                                       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op1_valid) 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1272) 
                                                               & ((1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                              >> 0x1fU)))
                                                                   ? 
                                                                  ((0x3ffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                   <= 
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op1_bits_data)))
                                                                   : 
                                                                  ((0x3fffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                   <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op1_bits_data))))) 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1272) 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                             >> 0x1fU)))
                                                                  ? 
                                                                 ((0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                  > 
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op1_bits_data)))
                                                                  : 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op1_bits_data))))) 
                                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_valid) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1296) 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                     ? 
                                                                    ((0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                     <= 
                                                                     (0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_bits_data)))
                                                                     : 
                                                                    ((0x3fffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                     <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_bits_data))))) 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1296) 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                               >> 0x1fU)))
                                                                    ? 
                                                                   ((0x3ffU 
                                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                    > 
                                                                    (0x3ffU 
                                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_bits_data)))
                                                                    : 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                    > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_bits_data))))))) 
                                                      << 0xbU) 
                                                     | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1322) 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_475)) 
                                                          & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op1_valid) 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1325) 
                                                                  & ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                      ? 
                                                                     ((0x3ffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                      <= 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op1_bits_data)))
                                                                      : 
                                                                     ((0x3fffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                      <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op1_bits_data))))) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1325) 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                     ? 
                                                                    ((0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                     > 
                                                                     (0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op1_bits_data)))
                                                                     : 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                     > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op1_bits_data))))) 
                                                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_valid) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1349) 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                        ? 
                                                                       ((0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                        <= 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_bits_data)))
                                                                        : 
                                                                       ((0x3fffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                        <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_bits_data))))) 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1349) 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                       ? 
                                                                      ((0x3ffU 
                                                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                       > 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_bits_data)))
                                                                       : 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                       > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_bits_data))))))) 
                                                         << 0xaU) 
                                                        | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1375) 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_528)) 
                                                             & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op1_valid) 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1378) 
                                                                     & ((1U 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                         ? 
                                                                        ((0x3ffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                         <= 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op1_bits_data)))
                                                                         : 
                                                                        ((0x3fffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                         <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op1_bits_data))))) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1378) 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                        ? 
                                                                       ((0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                        > 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op1_bits_data)))
                                                                        : 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                        > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op1_bits_data))))) 
                                                                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_valid) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1402) 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                           ? 
                                                                          ((0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                           <= 
                                                                           (0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_bits_data)))
                                                                           : 
                                                                          ((0x3fffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                           <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_bits_data))))) 
                                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1402) 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                          ? 
                                                                         ((0x3ffU 
                                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                          > 
                                                                          (0x3ffU 
                                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_bits_data)))
                                                                          : 
                                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                          > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_bits_data))))))) 
                                                            << 9U) 
                                                           | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1428) 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_581)) 
                                                                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op1_valid) 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1431) 
                                                                        & ((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                            ? 
                                                                           ((0x3ffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                            <= 
                                                                            (0x3ffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op1_bits_data)))
                                                                            : 
                                                                           ((0x3fffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                            <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op1_bits_data))))) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1431) 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                           ? 
                                                                          ((0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                           > 
                                                                           (0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op1_bits_data)))
                                                                           : 
                                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                           > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op1_bits_data))))) 
                                                                   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_valid) 
                                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1455) 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                              ? 
                                                                             ((0x3ffU 
                                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                              <= 
                                                                              (0x3ffU 
                                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_bits_data)))
                                                                              : 
                                                                             ((0x3fffU 
                                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2)) 
                                                                              <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_bits_data))))) 
                                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1455) 
                                                                         & ((1U 
                                                                             & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
                                                                                >> 0x1fU)))
                                                                             ? 
                                                                            ((0x3ffU 
                                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073)) 
                                                                             > 
                                                                             (0x3ffU 
                                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_bits_data)))
                                                                             : 
                                                                            ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1073) 
                                                                             > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_bits_data))))))) 
                                                               << 8U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3046)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3468(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3468\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3039 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_valid)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_210)) 
             & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_212) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_is_acc_addr)
                         ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data)) 
                            <= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data) 
                            <= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_212) 
                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_is_acc_addr)
                        ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_225)) 
                           > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_225) 
                           > (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_244)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_258)))) 
            << 0xfU) | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_valid) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_263)) 
                          & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_265) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_is_acc_addr)
                                      ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data)) 
                                         <= (0x3ffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data) 
                                         <= (0x3fffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_265) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_is_acc_addr)
                                     ? ((0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_278)) 
                                        > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_278) 
                                        > (0x3fffU 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_297)) 
                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_311)))) 
                         << 0xeU) | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_valid) 
                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_valid)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_316)) 
                                       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_318) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_is_acc_addr)
                                                   ? 
                                                  ((0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data)) 
                                                   <= 
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data) 
                                                   <= 
                                                   (0x3fffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_318) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_is_acc_addr)
                                                  ? 
                                                 ((0x3ffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_331)) 
                                                  > 
                                                  (0x3ffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_331) 
                                                  > 
                                                  (0x3fffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_350)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_364)))) 
                                      << 0xdU) | ((
                                                   ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_valid) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_valid)) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_369)) 
                                                    & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_371) 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_is_acc_addr)
                                                                ? 
                                                               ((0x3ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data)) 
                                                                <= 
                                                                (0x3ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                : 
                                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data) 
                                                                <= 
                                                                (0x3fffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_371) 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_is_acc_addr)
                                                               ? 
                                                              ((0x3ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_384)) 
                                                               > 
                                                               (0x3ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                               : 
                                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_384) 
                                                               > 
                                                               (0x3fffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_403)) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_417)))) 
                                                   << 0xcU) 
                                                  | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_valid) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_valid)) 
                                                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_422)) 
                                                       & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_424) 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_is_acc_addr)
                                                                   ? 
                                                                  ((0x3ffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data)) 
                                                                   <= 
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                   : 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data) 
                                                                   <= 
                                                                   (0x3fffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_424) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_is_acc_addr)
                                                                  ? 
                                                                 ((0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_437)) 
                                                                  > 
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                  : 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_437) 
                                                                  > 
                                                                  (0x3fffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_456)) 
                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_470)))) 
                                                      << 0xbU) 
                                                     | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_valid) 
                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_valid)) 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_475)) 
                                                          & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_477) 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_is_acc_addr)
                                                                      ? 
                                                                     ((0x3ffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data)) 
                                                                      <= 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                      : 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data) 
                                                                      <= 
                                                                      (0x3fffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_477) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_is_acc_addr)
                                                                     ? 
                                                                    ((0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_490)) 
                                                                     > 
                                                                     (0x3ffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                     : 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_490) 
                                                                     > 
                                                                     (0x3fffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_509)) 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_523)))) 
                                                         << 0xaU) 
                                                        | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_valid) 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_valid)) 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_528)) 
                                                             & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_530) 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_is_acc_addr)
                                                                         ? 
                                                                        ((0x3ffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data)) 
                                                                         <= 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                         : 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data) 
                                                                         <= 
                                                                         (0x3fffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_530) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_is_acc_addr)
                                                                        ? 
                                                                       ((0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_543)) 
                                                                        > 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                        : 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_543) 
                                                                        > 
                                                                        (0x3fffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_562)) 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_576)))) 
                                                            << 9U) 
                                                           | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_valid) 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_valid)) 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_581)) 
                                                                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op1_valid) 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_583) 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_is_acc_addr)
                                                                            ? 
                                                                           ((0x3ffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data)) 
                                                                            <= 
                                                                            (0x3ffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                            : 
                                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data) 
                                                                            <= 
                                                                            (0x3fffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_583) 
                                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_is_acc_addr)
                                                                           ? 
                                                                          ((0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_596)) 
                                                                           > 
                                                                           (0x3ffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))
                                                                           : 
                                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_596) 
                                                                           > 
                                                                           (0x3fffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1)))))) 
                                                                   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_op2_valid) 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_615)) 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_629)))) 
                                                               << 8U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3031)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3469(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3469\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8167 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_complete_on_issue)
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_complete_on_issue)
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_complete_on_issue)
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_complete_on_issue)
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_complete_on_issue)
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_complete_on_issue)
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_complete_on_issue)
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_complete_on_issue)
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_complete_on_issue)
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_complete_on_issue)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_complete_on_issue)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_complete_on_issue)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_complete_on_issue)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_complete_on_issue)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_complete_on_issue)
                                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_complete_on_issue))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8145 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_q)
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_q)
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_q)
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_q)
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_q)
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_q)
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_q)
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_q)
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_q)
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_q)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_q)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_q)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_q)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_q)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_5091))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_q)
                                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_q))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3470(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3470\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6039 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_complete_on_issue)
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_complete_on_issue)
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_complete_on_issue)
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_complete_on_issue)
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_complete_on_issue)
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_complete_on_issue)
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_complete_on_issue)
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_complete_on_issue)
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_complete_on_issue)
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_complete_on_issue)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_complete_on_issue)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_complete_on_issue)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_complete_on_issue)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_complete_on_issue)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_complete_on_issue)
                                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_complete_on_issue))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6017 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_q)
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_q)
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_q)
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_q)
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_q)
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_q)
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_q)
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_q)
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_q)
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_q)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_q)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_q)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_q)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_q)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_4290))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_q)
                                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_q))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3471(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3471\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3969 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2320));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3970 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2321));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3971 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2322));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3972 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2323));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3973 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2324));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3974 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2325));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3975 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2326));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3976 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2327));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3977 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2328));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3978 
        = ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2329));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3979 
        = ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2330));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3980 
        = ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2331));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3981 
        = ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2332));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3982 
        = ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2333));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3983 
        = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2334));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3472(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3472\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3984 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_2335));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3911 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_complete_on_issue)
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_complete_on_issue)
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_complete_on_issue)
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_complete_on_issue)
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_complete_on_issue)
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_complete_on_issue)
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_complete_on_issue)
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_complete_on_issue)
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_complete_on_issue)
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_complete_on_issue)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_complete_on_issue)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_complete_on_issue)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_complete_on_issue)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_complete_on_issue)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_complete_on_issue)
                                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_complete_on_issue))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3889 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_q)
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_q)
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_q)
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_q)
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_q)
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_q)
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_q)
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_q)
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_q)
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_q)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_q)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_q)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_q)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_q)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_3489))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_q)
                                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_q))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3473(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3473\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_23 
        = (0xffffU & ((0x1fffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH 
                                  >> 0x10U)) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3808 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_dirty) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size) 
                    >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_898)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1040 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_965 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
             & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__cached_grant_wait))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_want_victimize 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3397 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__release_ack_wait))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_dirty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__do_enq) 
           != (0xfU & ((0xfU >> (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_176) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_139))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_142)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3474(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3474\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_190 
        = (0xfffffffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163))
                          ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_181) 
                                | (0xffU & ((IData)(1U) 
                                            << (4U 
                                                | (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163) 
                                                      >> 3U)))))))
                          : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_181 
                             | (0xffU & ((IData)(1U) 
                                         << (4U | (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163) 
                                                      >> 3U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_34_paddr 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_33)
            ? (0xffffffe0U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__paddr)
            : (0xfffffff0U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__paddr));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_34_bytes_read 
        = (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_33)
                     ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_25
                     : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_18));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_134 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_68) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_66) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
            << 0xfU) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_68) 
                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_66) 
                             & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                         << 0xeU) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_65) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_63) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                      << 0xdU) | ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_65) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_63) 
                                                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_62) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_60) 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_62) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_60) 
                                                             & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_59) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_57) 
                                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                            << 9U) 
                                                           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_59) 
                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_57) 
                                                                   & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                               << 8U) 
                                                              | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_56) 
                                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_54) 
                                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_56) 
                                                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_54) 
                                                                         & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_53) 
                                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_51) 
                                                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_53) 
                                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_51) 
                                                                               & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_50) 
                                                                               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_48) 
                                                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_50) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_48) 
                                                                                & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_47) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_45) 
                                                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_47) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_45) 
                                                                                & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))))))))))))))));
}
