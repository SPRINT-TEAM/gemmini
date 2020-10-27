// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2964(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2964\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__AsyncResetSynchronizerPrimitiveShiftReg_d3_i0__DOT__sync_0 = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_84 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr) 
           & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                         >> 9U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_484 
        = ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                            >> 0x24U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                          >> 0x23U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                             >> 0x22U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                              >> 0x21U)))
                                ? 0xffU : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104 
        = ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                              >> 0x2cU)) << 4U)) | 
           (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                            >> 0x27U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_3__DOT__source_valid_0__DOT__AsyncResetSynchronizerPrimitiveShiftReg_d3_i0__DOT__sync_0 = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_39436 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_39437 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerPrimitiveShiftReg_d3_i0__DOT__sync_0) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_415));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_bits_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8)) 
           | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_7)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2965(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2965\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__beat 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_7) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8) 
                 - (IData)(1U))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_47) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_6)
                          ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                         [0U] : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_49)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_316 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_btb_resp_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1046 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1049 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2966(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2966\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1074 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1077 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1053 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1056 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1059 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1062 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1081 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2967(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2967\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1084 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1087 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1090 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_10 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_14 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_18 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_22 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_valid_0));
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_req_valid) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__vm_enabled))) {
        if (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_hits_0) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_hits_1)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_hits_2)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_hits_3))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1302 
                = (7U & (((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1324))
                           ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1333)) 
                                 | ((IData)(1U) << 
                                    (2U | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1324) 
                                                 >> 1U))))))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1333) 
                              | ((IData)(1U) << (2U 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1324) 
                                                       >> 1U)))))) 
                         >> 1U));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2968(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2968\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_13 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_10 
           | (VL_ULL(0xfffffffff0) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_10 
                                      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_239 
        = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                 & (~ (IData)((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 3U) 
                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x1dU))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__invalidExc 
        = (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
             >> 0x1dU)) | ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                          << 2U) | 
                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                          >> 0x1eU)))) 
                           & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                 >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_183 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_179 
        = (((1U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (2U <= (0x3ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                               << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x14U))))) 
           | (2U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                            << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                      >> 0x1eU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_174 
        = ((1U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1dU)))) | 
           ((1U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (2U > (0x3ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                          >> 0x14U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2969(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2969\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_12 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_18 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs 
        = (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                >> 0x1dU))) & ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                              << 2U) 
                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                >> 0x1eU)))) 
                               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                     >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros 
        = ((0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1dU)))) & 
           (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_43 
        = (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                              << 0xbU)) 
                              | (0x7fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
               >> 0x1dU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2970(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2970\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((0U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                       >> 0x1dU)))) 
                                               | (6U 
                                                  <= 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1dU)))))
                                               ? ((0x1c0U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 9U) 
                                                      | (0x1c0U 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x17U)))) 
                                                  | (0x3fU 
                                                     & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                         << 0xcU) 
                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                           >> 0x14U))))
                                               : ((IData)(0x100U) 
                                                  + 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                      >> 0x14U)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                << 3U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                  >> 0x1dU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__rawIn_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__magJustBelowOne 
        = ((~ (1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                   << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                              >> 0x1fU)))) 
           & (0x7ffU == (0x7ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                    << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x14U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2971(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2971\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp782[3];
    WData/*95:0*/ __Vtemp783[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps 
        = ((0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                       << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                   >> 0x14U))) == (0xfffU 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                         >> 0x14U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__magJustBelowOne 
        = ((~ (1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                   << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                              >> 0x1fU)))) 
           & (0x7ffU == (0x7ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                    << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x14U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_a 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((0U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                       >> 0x1dU)))) 
                                               | (6U 
                                                  <= 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1dU)))))
                                               ? ((0x1c0U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 9U) 
                                                      | (0x1c0U 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x17U)))) 
                                                  | (0x3fU 
                                                     & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                         << 0xcU) 
                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                           >> 0x14U))))
                                               : ((IData)(0x100U) 
                                                  + 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                      >> 0x14U)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                << 3U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                  >> 0x1dU)))))));
    VL_EXTEND_WQ(84,53, __Vtemp782, (((QData)((IData)(
                                                      (1U 
                                                       & ((0x1ffffeU 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                              << 1U)) 
                                                          | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                             >> 0x1fU))))) 
                                      << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))));
    VL_SHIFTL_WWI(84,84,5, __Vtemp783, __Vtemp782, 
                  ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                        << 1U)) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                   >> 0x1fU)))
                    ? (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                 << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U)))
                    : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[0U] 
        = __Vtemp783[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[1U] 
        = __Vtemp783[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[2U] 
        = (0xfffffU & __Vtemp783[2U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2972(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2972\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp786[4];
    WData/*127:0*/ __Vtemp787[4];
    WData/*159:0*/ __Vtemp793[5];
    WData/*159:0*/ __Vtemp794[5];
    WData/*159:0*/ __Vtemp799[5];
    WData/*159:0*/ __Vtemp800[5];
    WData/*159:0*/ __Vtemp805[5];
    WData/*159:0*/ __Vtemp806[5];
    WData/*159:0*/ __Vtemp811[5];
    WData/*159:0*/ __Vtemp812[5];
    // Body
    VL_EXTEND_WQ(116,53, __Vtemp786, (((QData)((IData)(
                                                       (1U 
                                                        & ((0x1ffffeU 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                               << 1U)) 
                                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                              >> 0x1fU))))) 
                                       << 0x34U) | 
                                      (VL_ULL(0xfffffffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))));
    VL_SHIFTL_WWI(116,116,6, __Vtemp787, __Vtemp786, 
                  ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                        << 1U)) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                   >> 0x1fU)))
                    ? (0x3fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                 << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U)))
                    : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[0U] 
        = __Vtemp787[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[1U] 
        = __Vtemp787[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[2U] 
        = __Vtemp787[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[3U] 
        = (0xfffffU & __Vtemp787[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
        = ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
                                      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1));
    __Vtemp793[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_817[0U] 
                            >> 1U));
    __Vtemp793[1U] = 0U;
    __Vtemp793[2U] = 0U;
    __Vtemp793[3U] = 0U;
    __Vtemp793[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp794, __Vtemp793);
    __Vtemp799[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_817[0U] 
                            >> 1U));
    __Vtemp799[1U] = 0U;
    __Vtemp799[2U] = 0U;
    __Vtemp799[3U] = 0U;
    __Vtemp799[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp800, __Vtemp799);
    __Vtemp805[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_817[0U] 
                            >> 1U));
    __Vtemp805[1U] = 0U;
    __Vtemp805[2U] = 0U;
    __Vtemp805[3U] = 0U;
    __Vtemp805[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp806, __Vtemp805);
    __Vtemp811[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_817[0U] 
                            >> 1U));
    __Vtemp811[1U] = 0U;
    __Vtemp811[2U] = 0U;
    __Vtemp811[3U] = 0U;
    __Vtemp811[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp812, __Vtemp811);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp794[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp800[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp806[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp812[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2973(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2973\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp817[5];
    WData/*159:0*/ __Vtemp818[5];
    WData/*159:0*/ __Vtemp823[5];
    WData/*159:0*/ __Vtemp824[5];
    WData/*159:0*/ __Vtemp829[5];
    WData/*159:0*/ __Vtemp830[5];
    WData/*159:0*/ __Vtemp835[5];
    WData/*159:0*/ __Vtemp836[5];
    WData/*159:0*/ __Vtemp841[5];
    WData/*159:0*/ __Vtemp842[5];
    WData/*159:0*/ __Vtemp847[5];
    WData/*159:0*/ __Vtemp848[5];
    WData/*159:0*/ __Vtemp853[5];
    WData/*159:0*/ __Vtemp854[5];
    WData/*159:0*/ __Vtemp859[5];
    WData/*159:0*/ __Vtemp860[5];
    // Body
    __Vtemp817[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp817[1U] = 0U;
    __Vtemp817[2U] = 0U;
    __Vtemp817[3U] = 0U;
    __Vtemp817[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp818, __Vtemp817);
    __Vtemp823[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp823[1U] = 0U;
    __Vtemp823[2U] = 0U;
    __Vtemp823[3U] = 0U;
    __Vtemp823[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp824, __Vtemp823);
    __Vtemp829[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp829[1U] = 0U;
    __Vtemp829[2U] = 0U;
    __Vtemp829[3U] = 0U;
    __Vtemp829[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp830, __Vtemp829);
    __Vtemp835[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp835[1U] = 0U;
    __Vtemp835[2U] = 0U;
    __Vtemp835[3U] = 0U;
    __Vtemp835[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp836, __Vtemp835);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp818[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp824[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp830[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp836[0U]))
                                                    ? 1U
                                                    : 0U))));
    __Vtemp841[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp841[1U] = 0U;
    __Vtemp841[2U] = 0U;
    __Vtemp841[3U] = 0U;
    __Vtemp841[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp842, __Vtemp841);
    __Vtemp847[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp847[1U] = 0U;
    __Vtemp847[2U] = 0U;
    __Vtemp847[3U] = 0U;
    __Vtemp847[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp848, __Vtemp847);
    __Vtemp853[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp853[1U] = 0U;
    __Vtemp853[2U] = 0U;
    __Vtemp853[3U] = 0U;
    __Vtemp853[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp854, __Vtemp853);
    __Vtemp859[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp859[1U] = 0U;
    __Vtemp859[2U] = 0U;
    __Vtemp859[3U] = 0U;
    __Vtemp859[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp860, __Vtemp859);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp842[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp848[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp854[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp860[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2974(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2974\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_389 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                  >> 0x10U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2975(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2975\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_420 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                  >> 0x30U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2976(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2976\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_374 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2977(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2977\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_405 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                                  >> 0x20U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2978(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2978\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_471 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_436)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_558 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesRead) 
           == (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_lg_len_req))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesReadAfterShift 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesRead) 
            > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_shift))
            ? (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesRead) 
                        - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_shift)))
            : 0U);
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2225) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_47) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_6)
                          ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                         [0U] : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_49)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2979(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2979\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fw_ready_reg)) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_44 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_70)
            ? (3U == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_resp_reg))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_73));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_b_bits_echo_tl_state_size 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size
           [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size
                   [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size
                           [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size
                                   [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size
                                           [0U] : (
                                                   (0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size
                                                      [0U]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size
                                                       [0U]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size
                                                        [0U]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size
                                                         [0U]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size
                                                          [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size
                                                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value])))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2980(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2980\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_b_bits_echo_tl_state_source 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_source
           [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source
                   [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source
                           [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_source
                                   [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source
                                           [0U] : (
                                                   (0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source
                                                      [0U]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source
                                                       [0U]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source
                                                        [0U]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source
                                                         [0U]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source
                                                          [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source
                                                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value])))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2981(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2981\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size
           [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size
                   [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size
                           [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size
                                   [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size
                                           [0U] : (
                                                   (0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size
                                                      [0U]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size
                                                       [0U]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size
                                                        [0U]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size
                                                         [0U]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size
                                                          [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size
                                                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value])))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2982(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2982\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_source
           [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source
                   [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source
                           [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source
                                   [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source
                                           [0U] : (
                                                   (0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source
                                                      [0U]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source
                                                       [0U]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source
                                                        [0U]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source
                                                         [0U]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source
                                                          [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source
                                                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : 
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value])))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2983(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2983\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66 
        = ((IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid_reg) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_63));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_30 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (0x20000000U 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                           >> 2U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_33 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (0x20000000U | 
                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                      >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_30 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (0x20000000U 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                           >> 2U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_33 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (0x20000000U | 
                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                      >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2984(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2984\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_52 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data))) 
                           >> 2U) & (~ (0x20000000U 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                           >> 2U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_55 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data))) 
                           >> 2U) & (0x20000000U | 
                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                      >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_253_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_252_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_237_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_236_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_221_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_220_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_643)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_337 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full))) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__ram_read
              [0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_205_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_204_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_28 
        = ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_sectored_hit) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_valid_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2985(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2985\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp861[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_29 
        = ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_sectored_hit) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_valid_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_30 
        = ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_sectored_hit) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_valid_2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_31 
        = ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_sectored_hit) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_valid_3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret) {
            if ((0x20000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
                if ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug 
                                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_38;
                        }
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_38;
                    }
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp861, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv 
                    = (1U & (__Vtemp861[0U] >> 0x11U));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2986(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2986\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp862[4];
    WData/*127:0*/ __Vtemp863[4];
    // Body
    VL_EXTEND_WQ(103,64, __Vtemp862, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp863, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                ? (
                                                   (0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                        >> 0x14U)))
                                                    ? 
                                                   (1U 
                                                    & (__Vtemp862[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x14U)))
                                                     ? 
                                                    (1U 
                                                     & (__Vtemp863[0U] 
                                                        >> 8U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_110)))
                                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_110))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_satp_mode) 
             >> 3U) & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1196))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_passthrough)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__amoalu__DOT___T_32 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__amoalu_io_lhs) 
           < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_4 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__state));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__resp_valid_0) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1466) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state = 3U;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_4) {
                    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__state))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state 
                            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid)
                                ? 3U : 2U);
                    } else {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1417) {
                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state = 1U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1417) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2987(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2987\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_preload = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_preload 
                = ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len)) 
                   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)) 
                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_mul_pre = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_mul_pre 
                = ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len)) 
                   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)) 
                      & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1085))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_mul = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__perform_single_mul 
                = ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len)) 
                   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070)) 
                      & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1079)) 
                         & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1085)) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__DoComputes_0)))));
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))) {
        if ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len))) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__current_dataflow 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_cmd_rs1 
                                     >> 2U)));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_189_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_188_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_63 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantIsUncached 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data)) 
            | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data))) 
           | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2988(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2988\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___T_27 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data))
            ? (0xffU & (~ (0x7fffffU & (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_size___05FT_15_data)) 
                                        >> 4U)))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3566 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data))
            ? (0xffU & (~ (0x7fffffU & (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_size___05FT_15_data)) 
                                        >> 4U)))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3748 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockUncachedGrant) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data)) 
           | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_signed 
            = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_mem_req_valid)) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_replay_valid)) 
                        & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_inst 
                              >> 0xeU)))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1548_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_807 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_804;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1564_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_855 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_852;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1580_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_903 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_900;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1596_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_951 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_948;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1612_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_999 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_996;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1628_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1047 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1044;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1644_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1095 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1092;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2989(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2989\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1660_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1143 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1140;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1676_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1191 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1188;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1692_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1239 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1236;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1708_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1287 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1284;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1335 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1332;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1740_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1383 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1380;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1756_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1431 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1428;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1772_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1479 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1476;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1788_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1527 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1524;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_vaddr 
        = (((QData)((IData)((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_411 
                                                   >> 0xcU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1535 
        = (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size)) 
                  >> 3U) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                       >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1538 
        = (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size)) 
                  >> 3U) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                    >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1543 
        = (1U & ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                             >> 3U))) & (~ (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                                    >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2990(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2990\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1546 
        = (1U & ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                             >> 3U))) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                                 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1549 
        = (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                          >> 3U)) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                                >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1552 
        = (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                          >> 3U)) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                             >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3908 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_data_word 
                                              >> 0x20U))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_data_word));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_408) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable 
            = (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array) 
                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_40 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_36) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_36)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                >> 0x1fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x1fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0x1eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0x1dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                   >> 0x1cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                     >> 0x1bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                      >> 0x1bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                        >> 0x1aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                         >> 0x1aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                           >> 0x19U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                            >> 0x19U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                              >> 0x18U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                               >> 0x18U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_471) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_464))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2991(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2991\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                >> 0x3fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x3fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0x3eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0x3eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0x3dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0x3dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                  >> 0x3cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                   >> 0x3cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                     >> 0x3bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                      >> 0x3bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                        >> 0x3aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                         >> 0x3aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                           >> 0x39U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                            >> 0x39U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                              >> 0x38U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                               >> 0x38U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_502) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_495))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2992(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2992\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_558 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_550) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_550) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_599 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_553) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_553) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_173_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_172_0;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2225) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_48 
        = (4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__waddr));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_56 
        = (7U & (((IData)(1U) - ((IData)(4U) - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__waddr))) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_58 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__waddr)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1228 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1227));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue_io_out_next 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_id_delayed) 
           != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1229));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_7 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_8 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_933 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_957 
        = (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2993(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2993\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_972 
        = (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_sc_fail 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
           & (~ ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount)) 
                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscAddr 
                    == (VL_ULL(0x3ffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                               >> 6U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__block_probe_for_core_progress 
        = ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount)) 
           | (3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_774 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__probe_bits_param) 
            << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_probe_state_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_probe 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((4U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__release_state))
                                                ? (
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_3)) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_17))
                                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_17))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_11;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1164 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_alloc_xactid) 
           == (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_47) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_6)
                          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)
                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_49)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_8));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT___T_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2994(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2994\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp868[5];
    WData/*159:0*/ __Vtemp869[5];
    WData/*159:0*/ __Vtemp874[5];
    WData/*159:0*/ __Vtemp875[5];
    WData/*159:0*/ __Vtemp880[5];
    WData/*159:0*/ __Vtemp881[5];
    WData/*159:0*/ __Vtemp886[5];
    WData/*159:0*/ __Vtemp887[5];
    WData/*159:0*/ __Vtemp892[5];
    WData/*159:0*/ __Vtemp893[5];
    WData/*159:0*/ __Vtemp898[5];
    WData/*159:0*/ __Vtemp899[5];
    WData/*159:0*/ __Vtemp904[5];
    WData/*159:0*/ __Vtemp905[5];
    WData/*159:0*/ __Vtemp910[5];
    WData/*159:0*/ __Vtemp911[5];
    // Body
    __Vtemp868[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1189[0U] 
                            >> 1U));
    __Vtemp868[1U] = 0U;
    __Vtemp868[2U] = 0U;
    __Vtemp868[3U] = 0U;
    __Vtemp868[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp869, __Vtemp868);
    __Vtemp874[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1189[0U] 
                            >> 1U));
    __Vtemp874[1U] = 0U;
    __Vtemp874[2U] = 0U;
    __Vtemp874[3U] = 0U;
    __Vtemp874[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp875, __Vtemp874);
    __Vtemp880[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1189[0U] 
                            >> 1U));
    __Vtemp880[1U] = 0U;
    __Vtemp880[2U] = 0U;
    __Vtemp880[3U] = 0U;
    __Vtemp880[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp881, __Vtemp880);
    __Vtemp886[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1189[0U] 
                            >> 1U));
    __Vtemp886[1U] = 0U;
    __Vtemp886[2U] = 0U;
    __Vtemp886[3U] = 0U;
    __Vtemp886[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp887, __Vtemp886);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp869[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp875[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp881[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp887[0U]))
                                                    ? 1U
                                                    : 0U))));
    __Vtemp892[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp892[1U] = 0U;
    __Vtemp892[2U] = 0U;
    __Vtemp892[3U] = 0U;
    __Vtemp892[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp893, __Vtemp892);
    __Vtemp898[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp898[1U] = 0U;
    __Vtemp898[2U] = 0U;
    __Vtemp898[3U] = 0U;
    __Vtemp898[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp899, __Vtemp898);
    __Vtemp904[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp904[1U] = 0U;
    __Vtemp904[2U] = 0U;
    __Vtemp904[3U] = 0U;
    __Vtemp904[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp905, __Vtemp904);
    __Vtemp910[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp910[1U] = 0U;
    __Vtemp910[2U] = 0U;
    __Vtemp910[3U] = 0U;
    __Vtemp910[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp911, __Vtemp910);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp893[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp899[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp905[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp911[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2995(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2995\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp916[5];
    WData/*159:0*/ __Vtemp917[5];
    WData/*159:0*/ __Vtemp922[5];
    WData/*159:0*/ __Vtemp923[5];
    WData/*159:0*/ __Vtemp928[5];
    WData/*159:0*/ __Vtemp929[5];
    WData/*159:0*/ __Vtemp934[5];
    WData/*159:0*/ __Vtemp935[5];
    WData/*159:0*/ __Vtemp940[5];
    WData/*159:0*/ __Vtemp941[5];
    WData/*159:0*/ __Vtemp946[5];
    WData/*159:0*/ __Vtemp947[5];
    WData/*159:0*/ __Vtemp952[5];
    WData/*159:0*/ __Vtemp953[5];
    WData/*159:0*/ __Vtemp958[5];
    WData/*159:0*/ __Vtemp959[5];
    // Body
    __Vtemp916[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp916[1U] = 0U;
    __Vtemp916[2U] = 0U;
    __Vtemp916[3U] = 0U;
    __Vtemp916[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp917, __Vtemp916);
    __Vtemp922[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp922[1U] = 0U;
    __Vtemp922[2U] = 0U;
    __Vtemp922[3U] = 0U;
    __Vtemp922[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp923, __Vtemp922);
    __Vtemp928[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp928[1U] = 0U;
    __Vtemp928[2U] = 0U;
    __Vtemp928[3U] = 0U;
    __Vtemp928[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp929, __Vtemp928);
    __Vtemp934[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp934[1U] = 0U;
    __Vtemp934[2U] = 0U;
    __Vtemp934[3U] = 0U;
    __Vtemp934[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp935, __Vtemp934);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp917[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp923[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp929[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp935[0U]))
                                                    ? 1U
                                                    : 0U))));
    __Vtemp940[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp940[1U] = 0U;
    __Vtemp940[2U] = 0U;
    __Vtemp940[3U] = 0U;
    __Vtemp940[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp941, __Vtemp940);
    __Vtemp946[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp946[1U] = 0U;
    __Vtemp946[2U] = 0U;
    __Vtemp946[3U] = 0U;
    __Vtemp946[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp947, __Vtemp946);
    __Vtemp952[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp952[1U] = 0U;
    __Vtemp952[2U] = 0U;
    __Vtemp952[3U] = 0U;
    __Vtemp952[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp953, __Vtemp952);
    __Vtemp958[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp958[1U] = 0U;
    __Vtemp958[2U] = 0U;
    __Vtemp958[3U] = 0U;
    __Vtemp958[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp959, __Vtemp958);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp941[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp947[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp953[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp959[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2996(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2996\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp964[5];
    WData/*159:0*/ __Vtemp965[5];
    WData/*159:0*/ __Vtemp970[5];
    WData/*159:0*/ __Vtemp971[5];
    WData/*159:0*/ __Vtemp976[5];
    WData/*159:0*/ __Vtemp977[5];
    WData/*159:0*/ __Vtemp982[5];
    WData/*159:0*/ __Vtemp983[5];
    // Body
    __Vtemp964[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp964[1U] = 0U;
    __Vtemp964[2U] = 0U;
    __Vtemp964[3U] = 0U;
    __Vtemp964[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp965, __Vtemp964);
    __Vtemp970[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp970[1U] = 0U;
    __Vtemp970[2U] = 0U;
    __Vtemp970[3U] = 0U;
    __Vtemp970[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp971, __Vtemp970);
    __Vtemp976[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp976[1U] = 0U;
    __Vtemp976[2U] = 0U;
    __Vtemp976[3U] = 0U;
    __Vtemp976[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp977, __Vtemp976);
    __Vtemp982[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1130[0U] 
                            >> 1U));
    __Vtemp982[1U] = 0U;
    __Vtemp982[2U] = 0U;
    __Vtemp982[3U] = 0U;
    __Vtemp982[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp983, __Vtemp982);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp965[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp971[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp977[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp983[0U]))
                                                    ? 1U
                                                    : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_8 
        = ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_cmd_inst_funct))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs2
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_cmd_rs2);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_235 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_4_addr_is_acc_addr) 
            == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1 
                              >> 0x1fU)))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_4_addr_data) 
                                              == (0x3fffU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_79 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_0_addr_is_acc_addr) 
            == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1 
                              >> 0x1fU)))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_0_addr_data) 
                                              == (0x3fffU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_118 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_1_addr_is_acc_addr) 
            == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1 
                              >> 0x1fU)))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_1_addr_data) 
                                              == (0x3fffU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2997(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2997\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_157 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_2_addr_is_acc_addr) 
            == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1 
                              >> 0x1fU)))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_2_addr_data) 
                                              == (0x3fffU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_196 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_3_addr_is_acc_addr) 
            == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1 
                              >> 0x1fU)))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__regs_3_addr_data) 
                                              == (0x3fffU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_cmd_rs1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_157_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_156_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_15__DOT__tile_0_0__DOT___T_39 
        = (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_255_0))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_511_0)))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1789_0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_510_0 
            = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1528)
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1529)
                                ? (((0x70000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_123) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_123)) 
                                   + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_509_0)
                                : (((0x70000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_130) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_130)) 
                                   + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_509_0))
                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_509_0));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_3 
        = (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used) 
                                   | (VL_ULL(0xfffffffffe) 
                                      & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used) 
                                         << 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2998(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2998\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_3 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used)) 
                    | (0xfeU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used)) 
                                << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_8 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__last_iteration 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_2) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__j) 
               == (0xffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__ram_rs2___05FT_15_data 
                                       >> 0x10U)) - (IData)(1U))))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_9));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs2 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__ram_inst_funct___05FT_15_data))
            ? ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__state))
                ? VL_ULL(0xffffffff) : (VL_ULL(0x1fffffffff) 
                                        & ((1U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__ram_rs2___05FT_15_data 
                                                           >> 0x30U)) 
                                                  | (0U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__k))))
                                            ? (VL_ULL(0xc0000000) 
                                               + ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_22)) 
                                                  << 4U))
                                            : (VL_ULL(0x80000000) 
                                               + ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT___T_22)) 
                                                  << 4U)))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller__DOT__cmd__DOT__ram_rs2___05FT_15_data);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2999(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2999\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_141_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_140_0;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2225) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr 
            = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2244))
                ? ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2016) 
                          << 1U)) | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2016) 
                                            << 1U) 
                                           >> (2U | 
                                               (1U 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2016))))))
                : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2244))
                    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2244))
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2244))
                            ? 3U : 2U) : 1U) : 0U));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_73 
        = (7U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_81 
        = (7U & (((IData)(1U) - ((IData)(7U) - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_83 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_44 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_42) 
           & (0x3fffU == (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_cmd_rs2))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_489 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_42) 
            & (0x3fffU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_address_data))) 
           & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_cmd_rs2 
                      >> 0xeU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_212 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_265 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3000(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3000\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_318 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_371 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_424 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_477 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_530 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_583 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_636 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_689 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_742 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_795 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_848 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_901 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_954 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3001(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3001\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_1007 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_dst_bits_start_is_acc_addr) 
           == (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_rs1 
                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT__new_entry_dst_valid 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_inst_funct)) 
           | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_inst_funct)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__rob__DOT___T_145 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_inst_funct)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__LoopUnroller_io_out_bits_inst_funct)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_532 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_530)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_125_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_124_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_3 
        = (0xfffffffU & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
                         | (0xffffffeU & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
                                          << 1U))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__ram_vaddr___05FT_11_data;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_223) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_225;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3002(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3002\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1131 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_xcpt) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1116)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1118)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1120)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1122)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1124));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1136 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1116)
            ? 6U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1118)
                     ? 4U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1120)
                              ? 0xfU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1122)
                                         ? 0xdU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1124)
                                                    ? 7U
                                                    : 5U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_401));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_109_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_108_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_70 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_71 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___GEN_6 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_135)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_182));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_67 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? (3U & (~ (0x1ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                  >> 4U)))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_139 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
           & (0xffU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_142 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68))) 
           & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_82 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
           | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode___05FT_15_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3003(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3003\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_address___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_address
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_valid_likely 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_held));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_readwrite 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_read) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_588 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write) 
            | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
           | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_93_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_92_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_77_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_76_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1028 
        = (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_27)) 
            << 0x1bU) | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_26)) 
                          << 0x1aU) | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_25)) 
                                        << 0x19U) | 
                                       (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_24)) 
                                         << 0x18U) 
                                        | (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_23)) 
                                            << 0x17U) 
                                           | (((3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_22)) 
                                               << 0x16U) 
                                              | (((3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_21)) 
                                                  << 0x15U) 
                                                 | ((((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_20)) 
                                                      << 0x14U) 
                                                     | (((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_19)) 
                                                         << 0x13U) 
                                                        | (((3U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_18)) 
                                                            << 0x12U) 
                                                           | (((3U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_17)) 
                                                               << 0x11U) 
                                                              | (((3U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_16)) 
                                                                  << 0x10U) 
                                                                 | (((3U 
                                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_15)) 
                                                                     << 0xfU) 
                                                                    | ((3U 
                                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_14)) 
                                                                       << 0xeU))))))) 
                                                    | (((3U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_13)) 
                                                        << 0xdU) 
                                                       | (((3U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_12)) 
                                                           << 0xcU) 
                                                          | (((3U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_11)) 
                                                              << 0xbU) 
                                                             | (((3U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_10)) 
                                                                 << 0xaU) 
                                                                | (((3U 
                                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_9)) 
                                                                    << 9U) 
                                                                   | (((3U 
                                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_8)) 
                                                                       << 8U) 
                                                                      | (((3U 
                                                                           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_7)) 
                                                                          << 7U) 
                                                                         | (((3U 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_6)) 
                                                                             << 6U) 
                                                                            | (((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_5)) 
                                                                                << 5U) 
                                                                               | (((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_4)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_3)) 
                                                                                << 3U) 
                                                                                | (((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_2)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_1)) 
                                                                                << 1U) 
                                                                                | (3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_0)))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3004(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3004\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_939 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_27)) 
            << 0x1bU) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_26)) 
                          << 0x1aU) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_25)) 
                                        << 0x19U) | 
                                       (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_24)) 
                                         << 0x18U) 
                                        | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_23)) 
                                            << 0x17U) 
                                           | (((0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_22)) 
                                               << 0x16U) 
                                              | (((0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_21)) 
                                                  << 0x15U) 
                                                 | ((((0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_20)) 
                                                      << 0x14U) 
                                                     | (((0U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_19)) 
                                                         << 0x13U) 
                                                        | (((0U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_18)) 
                                                            << 0x12U) 
                                                           | (((0U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_17)) 
                                                               << 0x11U) 
                                                              | (((0U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_16)) 
                                                                  << 0x10U) 
                                                                 | (((0U 
                                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_15)) 
                                                                     << 0xfU) 
                                                                    | ((0U 
                                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_14)) 
                                                                       << 0xeU))))))) 
                                                    | (((0U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_13)) 
                                                        << 0xdU) 
                                                       | (((0U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_12)) 
                                                           << 0xcU) 
                                                          | (((0U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_11)) 
                                                              << 0xbU) 
                                                             | (((0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_10)) 
                                                                 << 0xaU) 
                                                                | (((0U 
                                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_9)) 
                                                                    << 9U) 
                                                                   | (((0U 
                                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_8)) 
                                                                       << 8U) 
                                                                      | (((0U 
                                                                           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_7)) 
                                                                          << 7U) 
                                                                         | (((0U 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_6)) 
                                                                             << 6U) 
                                                                            | (((0U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_5)) 
                                                                                << 5U) 
                                                                               | (((0U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_4)) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_3)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_2)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_1)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__cfiType_0)))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3005(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3005\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_cfiType 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_btb_update_valid)
                ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1438) 
                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_inst 
                       >> 7U)) ? 2U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_jalr) 
                                        & (1U == (0x1bU 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_inst 
                                                     >> 0xfU))))
                                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1438)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
            = (VL_ULL(0x7fffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_btb_update_valid)
                                        ? (VL_ULL(0x7fffffffff) 
                                           & (~ (VL_ULL(3) 
                                                 | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1452))))
                                        : (~ (VL_ULL(3) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_pc)))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_br_pc 
            = (VL_ULL(0x7fffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_btb_update_valid)
                                        ? (VL_ULL(0x7fffffffff) 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1452)
                                        : ((~ (VL_ULL(3) 
                                               | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_pc))) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_taken)) 
                                                                 << 1U)))))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_144 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_145 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_146 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3006(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3006\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_147 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_148 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_149 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_150 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_151 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_152 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_153 
        = ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_154 
        = ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_155 
        = ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_156 
        = ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_157 
        = ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_158 
        = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_159 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__free_entry)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_valid));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_is_acc 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__ram_laddr_is_acc_addr___05FT_11_data;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_61_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_60_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3007(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3007\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_45_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_44_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_29_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_28_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_13_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_12_0;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_47) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_6)
                          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source)
                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_49)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_185 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_185 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_189)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_192));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_24) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_193_0 
            = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___GEN_56 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3008(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3008\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___GEN_56 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___GEN_56 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_213 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))
            ? 0U : (0xffU & (~ (0x7fffffU & (((IData)(0xfffU) 
                                              << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                                             >> 4U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_413 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3009(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3009\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_413 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_413 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_370 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3010(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3010\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_370 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_370 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_27 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_30 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_27 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_30 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3011(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3011\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_27 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_30 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_34 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_37 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_40 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_43 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_34 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3012(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3012\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp986[7];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_37 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_40 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_43 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_34 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_37 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_40 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_43 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    __Vtemp986[5U] = ((1U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data)) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            (0x20U 
                                                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_source___05FT_15_data)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))))))) 
                             >> 0x1fU)) | (0xfffffffeU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data)) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(
                                                                                (0x20U 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_source___05FT_15_data)))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data))))))) 
                                                       >> 0x20U)) 
                                              << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[0U] 
        = ((0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][0U] 
                           << 1U)) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[1U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                                               [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][1U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[2U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                                               [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][2U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[3U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                                               [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][3U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[4U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1][3U] 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data)) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(
                                                                                (0x20U 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_source___05FT_15_data)))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data)))))))) 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[5U] 
        = __Vtemp986[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_516[6U] 
        = (1U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data)) 
                            << 0x3dU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size___05FT_15_data)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x20U 
                                                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_source___05FT_15_data)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data)) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_mask___05FT_15_data))))))) 
                          >> 0x20U)) >> 0x1fU));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3013(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3013\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_205 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 0U : (0xffU & (~ (0x7fffffU & (((IData)(0xfffU) 
                                              << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                             >> 4U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_408 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3014(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3014\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_408 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_408 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_365 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3015(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3015\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_365 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_365 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_39 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_42 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_39 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_42 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3016(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3016\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_39 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_42 
        = (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_46 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_52 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_46 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3017(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3017\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp989[7];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_52 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_46 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 3U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_52 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 3U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 2U)));
    __Vtemp989[5U] = ((1U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                         << 0x36U) 
                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))))))) 
                             >> 0x1fU)) | (0xfffffffeU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data))))))) 
                                                       >> 0x20U)) 
                                              << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[0U] 
        = ((0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][0U] 
                           << 1U)) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_corrupt
           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[1U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                                               [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][1U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[2U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                                               [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][2U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[3U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                                               [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][3U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[4U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_data
                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1][3U] 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))))))) 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[5U] 
        = __Vtemp989[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_508[6U] 
        = (1U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
                            << 0x3dU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data))))))) 
                          >> 0x20U)) >> 0x1fU));
}
