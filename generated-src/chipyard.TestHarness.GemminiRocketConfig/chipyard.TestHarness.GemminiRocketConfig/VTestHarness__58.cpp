// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2918(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2918\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_155)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_798) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_entry 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_121)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_entry)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_entry));
    }
    vlTOPp->io_success = vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fexit_reg;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___T_5 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_17) {
            if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap) {
                vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState = 1U;
            }
        } else {
            if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_18) {
                if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_6) 
                     & (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)))) {
                    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState = 2U;
                }
            } else {
                if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_19) {
                    if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) 
                         & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)))) {
                        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState 
                            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out)
                                ? 0U : 3U);
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))) {
                            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState = 1U;
                        }
                    }
                } else {
                    if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_24) {
                        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))) {
                            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___T_24 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___T_22 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler)) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2919(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2919\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_545) 
             & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_68 
                        >> 1U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_15_data 
                                 >> 1U)));
        }
    }
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___T_5 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___T_7;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1032 
        = (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1037 
        = (6U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1039 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1049 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_1 
        = (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT___GEN_388));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_4 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_write_en;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[0U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_17[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[1U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_17[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[2U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_17[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[3U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_17[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[4U] 
        = ((0xff000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram
                           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0] 
                           << 0x18U)) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_17[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[5U] 
        = (IData)((((QData)((IData)(((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram
                                      [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0] 
                                      << 0x18U) | (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram
                                                    [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0] 
                                                    << 0x10U) 
                                                   | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram
                                                       [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0] 
                                                       << 8U) 
                                                      | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram
                                                      [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0]))))) 
                    << 0x20U) | (QData)((IData)(((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram
                                                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0] 
                                                  << 0x18U) 
                                                 | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram
                                                     [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0] 
                                                     << 0x10U) 
                                                    | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram
                                                        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0] 
                                                        << 8U) 
                                                       | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram
                                                       [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0])))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_26[6U] 
        = (IData)(((((QData)((IData)(((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram
                                       [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0] 
                                       << 0x18U) | 
                                      ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram
                                        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0] 
                                        << 0x10U) | 
                                       ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram
                                         [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0] 
                                         << 8U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram
                                        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0]))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram
                                                   [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0] 
                                                   << 0x18U) 
                                                  | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram
                                                      [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0] 
                                                      << 0x10U) 
                                                     | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram
                                                         [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0] 
                                                         << 8U) 
                                                        | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram
                                                        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0])))))) 
                   >> 0x20U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2920(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2920\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT___T_5 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_14) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0_io_uart_rxd)))) {
            if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler_next;
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler_next;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_14) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0_io_uart_rxd)))) {
            if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count = 9U;
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__pulse) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count 
                    = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_1) 
                                - (IData)(1U)) >> 4U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_14) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0_io_uart_rxd)))) {
            if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count = 0xfU;
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__pulse) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count 
                    = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_1) 
                               - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_14) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0_io_uart_rxd)))) {
                vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___GEN_1;
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__pulse) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_mid) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_last) {
                            vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_14)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__pulse) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_mid) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_last)))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__shifter 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___T_33;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2921(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2921\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_1_0 
            = (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1598[1U] 
                         << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1598[0U] 
                                      >> 8U)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_320_0 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3)
                     ? ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1598[1U] 
                         << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1598[0U] 
                                      >> 0x10U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_2_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_323_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_322_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_327_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_326_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_332_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_331_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_338_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_337_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_345_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_344_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_353_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_352_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_362_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_361_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_372_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_371_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_383_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_382_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_395_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_394_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_408_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_407_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_422_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_421_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_437_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_436_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_48) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_46) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                [0U])) << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_48) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_46) 
                                      & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                         [0U]))) << 6U) 
                                 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_45) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_43) 
                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                         [0U])) << 5U) 
                                    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_45) 
                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_43) 
                                            & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                               [0U]))) 
                                        << 4U) | ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_42) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_40) 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                                       [0U])) 
                                                   << 3U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_42) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_40) 
                                                          & (~ 
                                                             vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                                             [0U]))) 
                                                      << 2U) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_39) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_37) 
                                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                                             [0U])) 
                                                         << 1U) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_39) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_37) 
                                                              & (~ 
                                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_address
                                                                 [0U]))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2922(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2922\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rxs1 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs1;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_798) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_cause 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_interrupt)
                ? (VL_ULL(0x8000000000000000) + (QData)((IData)(
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__NonSyncResetSynchronizerPrimitiveShiftReg_d3__DOT__sync_0)
                                                                  ? 0xeU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                              >> 0xfU)))
                                                                   ? 0xfU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                               >> 0xeU)))
                                                                    ? 0xeU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xdU)))
                                                                     ? 0xdU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xcU)))
                                                                      ? 0xcU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xbU)))
                                                                       ? 0xbU
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 3U)))
                                                                        ? 3U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 7U)))
                                                                         ? 7U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 9U)))
                                                                          ? 9U
                                                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_209)))))))))))))
                : (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu_io_debug_if)
                                    ? 0xeU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if)
                                               ? 3U
                                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst)
                                                   ? 0xcU
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst)
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109))
                                                     ? 0xcU
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109))
                                                      ? 1U
                                                      : 2U)))))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2923(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2923\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_1_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_199_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2)
                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_2_0)
                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_2_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_202_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_201_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_206_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_205_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_211_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_210_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_217_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_216_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_224_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_223_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_232_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_231_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_241_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_240_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_251_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_250_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_262_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_261_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_274_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_273_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_287_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_286_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_301_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_300_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_316_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_315_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___GEN_344 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__resetting)
                      ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__flushCounter))
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__flushCounter)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_cmd_id 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__ram_cmd_id
            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_151 
        = (0xfffffffU & ((0x1cU > (2U | ((0x10U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
                                                   << 4U)) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_137) 
                                             << 3U) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_144) 
                                               << 2U))))) 
                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
                             << 1U) >> (8U | ((4U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
                                                << 2U)) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_137) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_144)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2924(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2924\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_need_pb 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
                      ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode) 
                            >> 2U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_877 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
           == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
           [0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_879 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data) 
           == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
           [0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_54 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                     >> 2U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_57 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                     >> 2U)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_60 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_63 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                            >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2925(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2925\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_47 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_50 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data) 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_954 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_955 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_374 
        = ((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                (0x3000U 
                                                                 ^ 
                                                                 (0xffffffc0U 
                                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr)))))) 
           | (((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                  & (QData)((IData)(
                                                    (0x2010000U 
                                                     ^ 
                                                     (0xffffffc0U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ 
                                                       (0xffffffc0U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr))))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                   & (QData)((IData)(
                                                     (0xc000000U 
                                                      ^ 
                                                      (0xffffffc0U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr))))))) 
                 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                  & (QData)((IData)(
                                                    (0x2000000U 
                                                     ^ 
                                                     (0xffffffc0U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr))))))) 
                | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(
                                                   (0xffffffc0U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr)))))) 
               | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                & (QData)((IData)((0x10000U 
                                                   ^ 
                                                   (0xffffffc0U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr))))))) 
              | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                               & (QData)((IData)((0x80000000U 
                                                  ^ 
                                                  (0xffffffc0U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2926(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2926\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp617[5];
    WData/*159:0*/ __Vtemp618[5];
    WData/*159:0*/ __Vtemp623[5];
    WData/*159:0*/ __Vtemp624[5];
    WData/*159:0*/ __Vtemp629[5];
    WData/*159:0*/ __Vtemp630[5];
    WData/*159:0*/ __Vtemp635[5];
    WData/*159:0*/ __Vtemp636[5];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT___T_7 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm_io_in_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_11 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs1
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_rob_id___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_rob_id
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs2___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs2
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_cmd_inst_funct___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__ram_cmd_inst_funct
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)));
    __Vtemp617[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_808[0U] 
                            >> 1U));
    __Vtemp617[1U] = 0U;
    __Vtemp617[2U] = 0U;
    __Vtemp617[3U] = 0U;
    __Vtemp617[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp618, __Vtemp617);
    __Vtemp623[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_808[0U] 
                            >> 1U));
    __Vtemp623[1U] = 0U;
    __Vtemp623[2U] = 0U;
    __Vtemp623[3U] = 0U;
    __Vtemp623[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp624, __Vtemp623);
    __Vtemp629[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_808[0U] 
                            >> 1U));
    __Vtemp629[1U] = 0U;
    __Vtemp629[2U] = 0U;
    __Vtemp629[3U] = 0U;
    __Vtemp629[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp630, __Vtemp629);
    __Vtemp635[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_808[0U] 
                            >> 1U));
    __Vtemp635[1U] = 0U;
    __Vtemp635[2U] = 0U;
    __Vtemp635[3U] = 0U;
    __Vtemp635[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp636, __Vtemp635);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp618[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp624[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp630[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp636[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2927(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2927\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp641[5];
    WData/*159:0*/ __Vtemp642[5];
    WData/*159:0*/ __Vtemp647[5];
    WData/*159:0*/ __Vtemp648[5];
    WData/*159:0*/ __Vtemp653[5];
    WData/*159:0*/ __Vtemp654[5];
    WData/*159:0*/ __Vtemp659[5];
    WData/*159:0*/ __Vtemp660[5];
    WData/*159:0*/ __Vtemp665[5];
    WData/*159:0*/ __Vtemp666[5];
    WData/*159:0*/ __Vtemp671[5];
    WData/*159:0*/ __Vtemp672[5];
    WData/*159:0*/ __Vtemp677[5];
    WData/*159:0*/ __Vtemp678[5];
    WData/*159:0*/ __Vtemp683[5];
    WData/*159:0*/ __Vtemp684[5];
    // Body
    __Vtemp641[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp641[1U] = 0U;
    __Vtemp641[2U] = 0U;
    __Vtemp641[3U] = 0U;
    __Vtemp641[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp642, __Vtemp641);
    __Vtemp647[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp647[1U] = 0U;
    __Vtemp647[2U] = 0U;
    __Vtemp647[3U] = 0U;
    __Vtemp647[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp648, __Vtemp647);
    __Vtemp653[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp653[1U] = 0U;
    __Vtemp653[2U] = 0U;
    __Vtemp653[3U] = 0U;
    __Vtemp653[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp654, __Vtemp653);
    __Vtemp659[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp659[1U] = 0U;
    __Vtemp659[2U] = 0U;
    __Vtemp659[3U] = 0U;
    __Vtemp659[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp660, __Vtemp659);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp642[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp648[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp654[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp660[0U]))
                                                    ? 1U
                                                    : 0U))));
    __Vtemp665[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp665[1U] = 0U;
    __Vtemp665[2U] = 0U;
    __Vtemp665[3U] = 0U;
    __Vtemp665[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp666, __Vtemp665);
    __Vtemp671[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp671[1U] = 0U;
    __Vtemp671[2U] = 0U;
    __Vtemp671[3U] = 0U;
    __Vtemp671[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp672, __Vtemp671);
    __Vtemp677[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp677[1U] = 0U;
    __Vtemp677[2U] = 0U;
    __Vtemp677[3U] = 0U;
    __Vtemp677[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp678, __Vtemp677);
    __Vtemp683[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_814[0U] 
                            >> 1U));
    __Vtemp683[1U] = 0U;
    __Vtemp683[2U] = 0U;
    __Vtemp683[3U] = 0U;
    __Vtemp683[4U] = 0U;
    VL_EXTEND_WW(148,147, __Vtemp684, __Vtemp683);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp666[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp672[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp678[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp684[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2928(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2928\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T_1));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rfs1 
            = (((0x40U == (0x80000068U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                | (0x40U == (0x10000068U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x40U == (0x70U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rfs2 
            = ((((0x24U == (0x7cU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                 | (0x40U == (0x40000068U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (0x40U == (0x70U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x10000040U == (0x90000068U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_fence_i 
            = (0x1008U == (0x3058U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_addr 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_req_addr;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_4050 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_4048) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_4051 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_4048));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & (IData)((VL_ULL(7) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1104 
                                              >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((VL_ULL(7) 
                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1104 
                                             >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((VL_ULL(7) 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1104 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1104 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2929(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2929\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp689[4];
    WData/*127:0*/ __Vtemp690[4];
    WData/*127:0*/ __Vtemp695[4];
    WData/*127:0*/ __Vtemp696[4];
    WData/*127:0*/ __Vtemp701[4];
    WData/*127:0*/ __Vtemp702[4];
    WData/*127:0*/ __Vtemp707[4];
    WData/*127:0*/ __Vtemp708[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___GEN_28 
        = ((5U == (7U & (IData)((VL_ULL(7) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1104 
                                              >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((VL_ULL(7) 
                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1104 
                                             >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((VL_ULL(7) 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1104 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1104 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    __Vtemp689[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1138[0U] 
                            >> 1U));
    __Vtemp689[1U] = 0U;
    __Vtemp689[2U] = 0U;
    __Vtemp689[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp690, __Vtemp689);
    __Vtemp695[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1138[0U] 
                            >> 1U));
    __Vtemp695[1U] = 0U;
    __Vtemp695[2U] = 0U;
    __Vtemp695[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp696, __Vtemp695);
    __Vtemp701[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1138[0U] 
                            >> 1U));
    __Vtemp701[1U] = 0U;
    __Vtemp701[2U] = 0U;
    __Vtemp701[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp702, __Vtemp701);
    __Vtemp707[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1138[0U] 
                            >> 1U));
    __Vtemp707[1U] = 0U;
    __Vtemp707[2U] = 0U;
    __Vtemp707[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp708, __Vtemp707);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & __Vtemp690[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp696[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp702[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp708[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2930(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2930\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_1));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_div 
            = (0x2000030U == (0x2000074U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT__valid 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT___GEN_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_138 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_135));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_137 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_135) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_in_d_bits_sink 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_135))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT__select)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_162));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_bits_sink 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_135))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT__select)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_162));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[3U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[3U];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_3)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_ready)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_latch) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_beat 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_beat;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_flush_pipe 
            = ((0x1008U == (0x3058U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_553) 
                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_csr_en) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_csr_ren))) 
                     & (~ (((0x340U <= (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                  >> 0x14U))) 
                            & (0x343U >= (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U)))) 
                           | ((0x140U <= (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U))) 
                              & (0x143U >= (0xfffU 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                               >> 0x14U)))))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2931(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2931\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_csr 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_csr_ren)
                ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_csr));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_jal 
            = (0x68U == (0x78U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
             ? VL_ULL(0xffffffff00000000) : VL_ULL(0)) 
           | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1);
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn 
            = (((((((0U == (0x82100020U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                    | (0U == (0x42000020U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                   | (0U == (0x2000030U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                  | (0x1000U == (0x2103000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                 | (0x10000000U == (0x12002000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (0x40000010U == (0xd0100010U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x80000000U == (0xa2000020U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_47) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_6)
                          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)
                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_49)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT___T_120 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__wcol_counter)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT___T_151 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__wrow_counter)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2932(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2932\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__control_state))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__empty)))) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct___05FT_15_data))) {
                if ((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
                                          >> 4U))))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__pool_size 
                        = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
                                         >> 6U)));
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT___T_225 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__porow_counter)));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__control_state))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__empty)))) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct___05FT_15_data))) {
                if ((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
                                          >> 4U))))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__pool_porows 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
                                            >> 0x20U)));
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT___T_186 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__pocol_counter)));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__control_state))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__empty)))) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct___05FT_15_data))) {
                if ((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
                                          >> 4U))))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__pool_pocols 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs1___05FT_15_data 
                                            >> 0x28U)));
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
               >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)))) & 
           (7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                    >> 0x1dU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2933(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2933\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp719[3];
    WData/*95:0*/ __Vtemp720[3];
    WData/*95:0*/ __Vtemp723[3];
    WData/*95:0*/ __Vtemp724[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U] 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))
                  ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                  : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))
                      ? (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                      : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
        = (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                     >> 0x1eU)))) & 
            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
             >> 0x1dU)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                              >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
              & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])))));
    __Vtemp719[0U] = 0U;
    __Vtemp719[1U] = 0U;
    __Vtemp719[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp720, __Vtemp719, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp723[0U] = 0U;
    __Vtemp723[1U] = 0U;
    __Vtemp723[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp724, __Vtemp723, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25 
        = ((0xffU & ((0x4000U & (__Vtemp720[2U] << 0xeU)) 
                     | (__Vtemp720[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp724[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp724[1U] 
                                           >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2934(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2934\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_ren2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_rob_id___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_rob_id
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs2___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__ram_cmd_rs2
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_48 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_36) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_20 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_17));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_19 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_17) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_876 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_876 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_47 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_50 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2935(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2935\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_47 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_50 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_34 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
           & (2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2936(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2936\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp728[3];
    WData/*95:0*/ __Vtemp729[3];
    WData/*95:0*/ __Vtemp730[3];
    WData/*95:0*/ __Vtemp732[3];
    WData/*95:0*/ __Vtemp733[3];
    WData/*95:0*/ __Vtemp734[3];
    WData/*95:0*/ __Vtemp738[3];
    WData/*95:0*/ __Vtemp739[3];
    // Body
    __Vtemp728[0U] = ((0xfffffe00U & ((IData)((VL_ULL(0xffffffffffffff) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_59) 
                                                                        >> 8U))))))) 
                                      << 9U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_59));
    __Vtemp728[1U] = ((0x1ffU & ((IData)((VL_ULL(0xffffffffffffff) 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_59) 
                                                                   >> 8U))))))) 
                                 >> 0x17U)) | (0xfffffe00U 
                                               & ((IData)(
                                                          ((VL_ULL(0xffffffffffffff) 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_59) 
                                                                                >> 8U)))))) 
                                                           >> 0x20U)) 
                                                  << 9U)));
    __Vtemp728[2U] = (0x1ffU & ((IData)(((VL_ULL(0xffffffffffffff) 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_59) 
                                                                   >> 8U)))))) 
                                         >> 0x20U)) 
                                >> 0x17U));
    VL_EXTENDS_WW(74,65, __Vtemp729, __Vtemp728);
    __Vtemp730[0U] = __Vtemp729[0U];
    __Vtemp730[1U] = __Vtemp729[1U];
    __Vtemp730[2U] = (0x3ffU & __Vtemp729[2U]);
    VL_EXTENDS_WW(74,65, __Vtemp732, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    __Vtemp733[0U] = __Vtemp732[0U];
    __Vtemp733[1U] = __Vtemp732[1U];
    __Vtemp733[2U] = (0x3ffU & __Vtemp732[2U]);
    VL_MULS_WWW(74,74,74, __Vtemp734, __Vtemp730, __Vtemp733);
    __Vtemp738[0U] = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[2U];
    __Vtemp738[1U] = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[3U];
    __Vtemp738[2U] = ((0x3feU & ((- (IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[4U]))) 
                                 << 1U)) | (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[4U]));
    VL_ADD_W(3, __Vtemp739, __Vtemp734, __Vtemp738);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_66[0U] 
        = (IData)((VL_ULL(0xffffffffffffff) & (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[2U])) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[0U])) 
                                                     >> 8U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_66[1U] 
        = ((0xff000000U & (__Vtemp739[0U] << 0x18U)) 
           | (IData)(((VL_ULL(0xffffffffffffff) & (
                                                   ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[2U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_51[0U])) 
                                                         >> 8U)))) 
                      >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_66[2U] 
        = ((0xffffffU & (__Vtemp739[0U] >> 8U)) | (0xff000000U 
                                                   & (__Vtemp739[1U] 
                                                      << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_66[3U] 
        = ((0xffffffU & (__Vtemp739[1U] >> 8U)) | (0xff000000U 
                                                   & (__Vtemp739[2U] 
                                                      << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_66[4U] 
        = (3U & (__Vtemp739[2U] >> 8U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__isHi 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__cmdHi;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_97 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__count)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_116 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__count)) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__subtractor[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_44 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_47 
        = (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_48 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_100 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__loOut 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__req_dw)) 
            & (0U == (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))))
            ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__result 
                       >> 0x20U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__result));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div_io_resp_valid 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state)) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2937(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2937\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_22 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_17) 
             & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                        >> 2U))) << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_17) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_15) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_37) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_37) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_37) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_37) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 
        = ((0x800U & ((0xfffff000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                      << 0xcU)) | (0x800U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                      >> 0x14U)))) 
           | (0x7ffU & (~ (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                  >> 0x14U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2938(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2938\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_b 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U]))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((0U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                       >> 0x1dU)))) 
                                               | (6U 
                                                  <= 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                         >> 0x1dU)))))
                                               ? ((0x1c0U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                       << 9U) 
                                                      | (0x1c0U 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                            >> 0x17U)))) 
                                                  | (0x3fU 
                                                     & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                         << 0xcU) 
                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                           >> 0x14U))))
                                               : ((IData)(0x100U) 
                                                  + 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                      >> 0x14U)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                << 3U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U] 
                                                  >> 0x1dU)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2939(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2939\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_cmd_id___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_cmd_id
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_accumulate___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_accumulate
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_garbage_bit___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_garbage_bit
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_data___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_is_acc_addr___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ram_laddr_is_acc_addr
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_1));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_997)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_pc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_pc;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_56 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_47) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_54))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2940(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2940\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_59 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_47) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_62 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_50) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_60))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_65 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_50) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_56 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_47) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_54))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_59 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_47) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_62 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_50) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_60))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2941(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2941\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_65 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_50) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_56 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_47) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_54))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_59 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_47) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_62 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_50) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_60))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_65 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_50) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_size));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2942(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2942\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_97 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_92))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_92) 
                                              - (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
             | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1957));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write 
        = ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
             | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1957));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__wrap 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_5 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_io_in 
                            >> 0x3fU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_io_in 
                             >> 0x3fU)))) ? (- vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_io_in)
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_io_in);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1_io_in 
                            >> 0x3fU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2943(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2943\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1_io_in 
                             >> 0x3fU)))) ? (- vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1_io_in)
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1_io_in);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_645 
        = (0xfU <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_653 
        = (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_655 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_582 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter) 
            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_553)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter) 
              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_574)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_656 
        = (0xfU & ((0xfU <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))
                    ? (((IData)(1U) - ((IData)(0xfU) 
                                       - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))) 
                       - (IData)(1U)) : ((IData)(1U) 
                                         + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__relu6_shift 
        = (0x1fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_155);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___GEN_40 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1963) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1963) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1963) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1963) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2944(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2944\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_40 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1912) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1912) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1912) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1912) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2945(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2945\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_7 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_8 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_814 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_476 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_468) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_468) 
                                         << 2U)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isNaNAOrB 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_20) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_isNaN));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2946(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2946\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sign)) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sign))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isInfA 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isZeroA 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                       >> 0x1dU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_signProd 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48) 
                     ^ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_fmaCmd) 
                        >> 1U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isInfB 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isZeroB 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                       >> 0x1dU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_8 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2947(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2947\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_doSubMags 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53) 
                     ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_fmaCmd)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isInfC 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isNaNC 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                        >> 0x1eU)))) 
               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                  >> 0x1dU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_CIsDominant 
            = ((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                              << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                        >> 0x1dU)))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_61));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isSigNaNAny 
            = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                 & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
                               >> 0x33U)))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                               & (~ (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
                                                             >> 0x33U))))) 
               | (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                            >> 0x1eU)))) 
                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                      >> 0x1dU)) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                               >> 0x33U)))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_sExpSum 
            = (0x1fffU & (((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                          << 3U) | 
                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                          >> 0x1dU)))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_61))
                           ? (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                         << 0xcU) | 
                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                         >> 0x14U)))
                           : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
                               - (IData)(0x7c8U)) - (IData)(0x35U))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2948(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2948\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp743[3];
    WData/*95:0*/ __Vtemp744[3];
    WData/*95:0*/ __Vtemp747[3];
    WData/*95:0*/ __Vtemp748[3];
    WData/*95:0*/ __Vtemp751[3];
    WData/*95:0*/ __Vtemp752[3];
    WData/*95:0*/ __Vtemp755[3];
    WData/*95:0*/ __Vtemp756[3];
    // Body
    __Vtemp743[0U] = 0U;
    __Vtemp743[1U] = 0U;
    __Vtemp743[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp744, __Vtemp743, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp747[0U] = 0U;
    __Vtemp747[1U] = 0U;
    __Vtemp747[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp748, __Vtemp747, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
        = ((0xffU & ((0x800U & (__Vtemp744[2U] << 0xbU)) 
                     | (__Vtemp744[1U] >> 0x15U))) 
           | (0xff00U & ((0x8000000U & (__Vtemp748[2U] 
                                        << 0x1bU)) 
                         | (0x7ffff00U & (__Vtemp748[1U] 
                                          >> 5U)))));
    __Vtemp751[0U] = 0U;
    __Vtemp751[1U] = 0U;
    __Vtemp751[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp752, __Vtemp751, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp755[0U] = 0U;
    __Vtemp755[1U] = 0U;
    __Vtemp755[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp756, __Vtemp755, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
        = ((0xffffU & ((__Vtemp752[1U] << 3U) | (__Vtemp752[0U] 
                                                 >> 0x1dU))) 
           | (0xffff0000U & (__Vtemp756[0U] << 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1226 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore2_valid)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore2_addr
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_addr);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1088_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1087_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T_8 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_201 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                          >> 0x16U))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                             >> 0x15U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                              >> 0x14U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                               >> 0x13U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                >> 0x12U)))
                                                     ? 4U
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_196))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2949(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2949\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_103 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                          >> 0x22U))) ? 0x11U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                             >> 0x21U)))
                                                  ? 0x12U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                              >> 0x20U)))
                                                   ? 0x13U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                               >> 0x1fU)))
                                                    ? 0x14U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                >> 0x1eU)))
                                                     ? 0x15U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                 >> 0x1dU)))
                                                      ? 0x16U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                  >> 0x1cU)))
                                                       ? 0x17U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                   >> 0x1bU)))
                                                        ? 0x18U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                    >> 0x1aU)))
                                                         ? 0x19U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                     >> 0x19U)))
                                                          ? 0x1aU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                      >> 0x18U)))
                                                           ? 0x1bU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                       >> 0x17U)))
                                                            ? 0x1cU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                        >> 0x16U)))
                                                             ? 0x1dU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                         >> 0x15U)))
                                                              ? 0x1eU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                          >> 0x14U)))
                                                               ? 0x1fU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                           >> 0x13U)))
                                                                ? 0x20U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
                                                                            >> 0x12U)))
                                                                 ? 0x21U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_86))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2950(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2950\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__amoalu__DOT__wmask 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_cmd 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_667) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_649;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdouble 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
                  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_single))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2951(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2951\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleOut;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fromint 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_toint 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_toint;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fma 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_div 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_div;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_sqrt;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_wflags 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__write_port_busy 
            = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) 
                & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask) 
                          & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe)
                                 ? 2U : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint)
                                                ? 2U
                                                : 0U)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_606)
                                  ? 4U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_609)
                                                  ? 8U
                                                  : 0U))))) 
               | (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe)
                                ? 4U : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint)
                                               ? 4U
                                               : 0U)) 
                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_606)
                                 ? 8U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_609)
                                                 ? 0x10U
                                                 : 0U)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2952(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2952\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp758[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1019 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
              | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
             | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
            | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
           | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                | (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
               | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
              | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        VL_EXTEND_WQ(65,33, __Vtemp758, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_320);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
            = __Vtemp758[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
            = __Vtemp758[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[2U] 
            = __Vtemp758[2U];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_signProd) 
           ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_doSubMags));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (VL_ULL(0x3ffffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_doSubMags)
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                              << 0x27U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                                   >> 0x19U))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC 
                                                               >> 0x18U)))) 
                                           << 0x2fU) 
                                          | (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                                      >> 0x1aU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
        = (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
                                       : ((((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
                                          + (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_doSubMags)))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd 
            = (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
                      >> 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_383)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isInfA) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isInfB));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2953(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2953\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp760[3];
    WData/*95:0*/ __Vtemp762[3];
    WData/*95:0*/ __Vtemp764[3];
    WData/*95:0*/ __Vtemp765[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroA) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroB)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroC));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        VL_EXTEND_WQ(65,33, __Vtemp760, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_349);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23)
                ? 0x80000000U : __Vtemp760[0U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23)
                ? 0U : __Vtemp760[1U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23)
                ? 0U : __Vtemp760[2U]);
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_rm 
            = (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
                                   >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm)
                      : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
                         >> 0xcU)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        VL_EXTEND_WQ(65,33, __Vtemp762, ((((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U] 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
                                                                 << 0xbU)) 
                                                             | (0x7fffffffU 
                                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U]))))) 
                                         | ((0x1fU 
                                             == (0x1fU 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[2U] 
                                                     << 4U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
                                                       >> 0x1cU))))
                                             ? VL_ULL(0)
                                             : VL_ULL(0xe0400000))));
        VL_EXTEND_WQ(65,33, __Vtemp764, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_320);
        VL_EXTEND_WQ(65,33, __Vtemp765, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_349);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
            = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? __Vtemp762[0U] : 0U);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
            = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? __Vtemp762[1U] : (1U & (__Vtemp764[1U] 
                                          ^ __Vtemp765[1U])));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[2U] 
            = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? __Vtemp762[2U] : 0U);
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_5 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2954(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2954\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_16 
        = ((0x10U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x10U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_17 
        = ((0x11U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x11U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_18 
        = ((0x12U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x12U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_19 
        = ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x13U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_20 
        = ((0x14U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x14U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_21 
        = ((0x15U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x15U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_22 
        = ((0x16U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x16U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_23 
        = ((0x17U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x17U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_24 
        = ((0x18U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x18U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_25 
        = ((0x19U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x19U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_26 
        = ((0x1aU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x1aU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_27 
        = ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x1bU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2955(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2955\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_28 
        = ((0x1cU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x1cU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_29 
        = ((0x1dU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x1dU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_30 
        = ((0x1eU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x1eU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_31 
        = ((0x1fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x1fU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_32 
        = ((0x20U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x20U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_33 
        = ((0x21U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x21U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_34 
        = ((0x22U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x22U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_35 
        = ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x23U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_36 
        = ((0x24U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x24U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_37 
        = ((0x25U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x25U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_38 
        = ((0x26U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x26U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_39 
        = ((0x27U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x27U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2956(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2956\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_40 
        = ((0x28U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x28U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_41 
        = ((0x29U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x29U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_42 
        = ((0x2aU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x2aU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_43 
        = ((0x2bU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x2bU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_44 
        = ((0x2cU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x2cU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_45 
        = ((0x2dU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x2dU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_46 
        = ((0x2eU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x2eU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_47 
        = ((0x2fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x2fU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_48 
        = ((0x30U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x30U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_49 
        = ((0x31U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x31U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_50 
        = ((0x32U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x32U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_51 
        = ((0x33U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x33U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2957(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2957\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_52 
        = ((0x34U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x34U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_53 
        = ((0x35U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x35U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_54 
        = ((0x36U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x36U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_55 
        = ((0x37U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x37U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_56 
        = ((0x38U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x38U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_57 
        = ((0x39U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x39U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_58 
        = ((0x3aU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x3aU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_59 
        = ((0x3bU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x3bU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_60 
        = ((0x3cU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x3cU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_61 
        = ((0x3dU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x3dU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_62 
        = ((0x3eU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x3eU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_63 
        = ((0x3fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0x3fU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2958(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2958\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_0 
        = ((0U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_1 
        = ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_2 
        = ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_3 
        = ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_4 
        = ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (4U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_5 
        = ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (5U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_6 
        = ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (6U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_7 
        = ((7U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (7U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_8 
        = ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (8U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_9 
        = ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (9U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_10 
        = ((0xaU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0xaU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_11 
        = ((0xbU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0xbU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2959(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2959\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_12 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0xcU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_13 
        = ((0xdU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0xdU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_14 
        = ((0xeU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0xeU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker_io_out_bits_mask_15 
        = ((0xfU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_6)) 
           & (0xfU < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_41)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent_next 
        = (0x1ffU & (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent) 
                                 + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_8))) 
                      > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_bytes_to_read))
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_bytes_to_read)
                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent) 
                         + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_8))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__acc_shift 
        = (0x1fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_154);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_38 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_34)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_34)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_34));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_86 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_82)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_82)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_82));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_134 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_130)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_130)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_130));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_182 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_178)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_178)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_178));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2960(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2960\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_230 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_226)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_226)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_226));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_278 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_274)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_274)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_274));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_326 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_322)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_322)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_322));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_374 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_370)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_370)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_370));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_422 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_418)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_418)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_418));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_470 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_466)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_466)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_466));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_518 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_514)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_514)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_514));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_566 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_562)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_562)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_562));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2961(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2961\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_614 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_610)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_610)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_610));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_662 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_658)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_658)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_658));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_710 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_706)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_706)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_706));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_758 
        = (VL_LTS_III(1,32,32, 0x7fU, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_754)
            ? 0x7fU : (VL_GTS_III(1,32,32, 0xffffff80U, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_754)
                        ? 0xffffff80U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_754));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_118 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid) 
                    | ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r))));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_997)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_rocc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rocc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_997) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_sfence = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_sfence 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_sfence;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_997)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rxs2) 
                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rocc)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_sfence)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_rs2 
                    = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__size))
                        ? (((QData)((IData)(((0xff000000U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((0xff000000U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                             << 0x18U)) 
                                                         | ((0xff0000U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                                << 0x10U)) 
                                                            | ((0xff00U 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))))))
                        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__size))
                            ? (((QData)((IData)(((0xffff0000U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                                 << 0x10U)) 
                                                             | (0xffffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))))
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__size))
                                ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1)))
                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
                                    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
                                        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                                            : ((1U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                                                : VL_ULL(0))))
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_673))));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1513 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0)
            ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                        : VL_ULL(0)))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_666);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1516 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
            ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                        : VL_ULL(0)))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_673);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2962(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2962\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__idx 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__m__DOT__idx;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2_auto_ctl_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_364));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_364));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_408) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_771 
            = (0xfffffU & ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_15)))
                            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                               >> 2U) : ((2U == (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_15)))
                                          ? ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                              << 0x14U) 
                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                >> 0xcU))
                                          : ((1U == 
                                              (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_15)))
                                              ? ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
                                                    >> 0x16U))
                                              : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U]))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_g;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[1U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[1U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[2U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[2U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[3U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[3U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[4U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[4U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[5U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[5U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[6U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[6U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[6U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[7U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[7U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[8U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[8U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[8U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[9U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[9U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[9U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xaU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xaU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xaU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xbU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xbU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xbU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xcU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xcU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xcU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xdU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xdU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xdU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xeU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xeU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xeU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xfU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xfU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xfU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x10U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x10U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x10U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x11U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x11U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x11U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x12U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x12U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x12U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x13U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x13U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x13U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x14U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x14U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x14U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x15U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x15U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x15U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x16U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x16U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x16U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x17U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x17U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x17U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x18U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x18U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x18U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x19U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x19U] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x19U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1aU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1aU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1aU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1bU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1bU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1bU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1cU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1cU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1cU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1dU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1dU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1dU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1eU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1eU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1eU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1fU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1fU] 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1fU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2355 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_sfence_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2963(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2963\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1023:0*/ __Vtemp771[32];
    WData/*1023:0*/ __Vtemp772[32];
    WData/*1023:0*/ __Vtemp774[32];
    WData/*1023:0*/ __Vtemp775[32];
    WData/*1023:0*/ __Vtemp777[32];
    WData/*1023:0*/ __Vtemp778[32];
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_mem_size;
    }
    __Vtemp771[0U] = 1U;
    __Vtemp771[1U] = 0U;
    __Vtemp771[2U] = 0U;
    __Vtemp771[3U] = 0U;
    __Vtemp771[4U] = 0U;
    __Vtemp771[5U] = 0U;
    __Vtemp771[6U] = 0U;
    __Vtemp771[7U] = 0U;
    __Vtemp771[8U] = 0U;
    __Vtemp771[9U] = 0U;
    __Vtemp771[0xaU] = 0U;
    __Vtemp771[0xbU] = 0U;
    __Vtemp771[0xcU] = 0U;
    __Vtemp771[0xdU] = 0U;
    __Vtemp771[0xeU] = 0U;
    __Vtemp771[0xfU] = 0U;
    __Vtemp771[0x10U] = 0U;
    __Vtemp771[0x11U] = 0U;
    __Vtemp771[0x12U] = 0U;
    __Vtemp771[0x13U] = 0U;
    __Vtemp771[0x14U] = 0U;
    __Vtemp771[0x15U] = 0U;
    __Vtemp771[0x16U] = 0U;
    __Vtemp771[0x17U] = 0U;
    __Vtemp771[0x18U] = 0U;
    __Vtemp771[0x19U] = 0U;
    __Vtemp771[0x1aU] = 0U;
    __Vtemp771[0x1bU] = 0U;
    __Vtemp771[0x1cU] = 0U;
    __Vtemp771[0x1dU] = 0U;
    __Vtemp771[0x1eU] = 0U;
    __Vtemp771[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp772, __Vtemp771, 
                  (0x3ffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0U] 
           | __Vtemp772[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[1U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[1U] 
           | __Vtemp772[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[2U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[2U] 
           | __Vtemp772[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[3U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[3U] 
           | __Vtemp772[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[4U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[4U] 
           | __Vtemp772[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[5U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[5U] 
           | __Vtemp772[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[6U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[6U] 
           | __Vtemp772[6U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[7U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[7U] 
           | __Vtemp772[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[8U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[8U] 
           | __Vtemp772[8U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[9U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[9U] 
           | __Vtemp772[9U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xaU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xaU] 
           | __Vtemp772[0xaU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xbU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xbU] 
           | __Vtemp772[0xbU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xcU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xcU] 
           | __Vtemp772[0xcU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xdU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xdU] 
           | __Vtemp772[0xdU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xeU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xeU] 
           | __Vtemp772[0xeU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xfU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xfU] 
           | __Vtemp772[0xfU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x10U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x10U] 
           | __Vtemp772[0x10U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x11U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x11U] 
           | __Vtemp772[0x11U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x12U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x12U] 
           | __Vtemp772[0x12U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x13U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x13U] 
           | __Vtemp772[0x13U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x14U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x14U] 
           | __Vtemp772[0x14U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x15U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x15U] 
           | __Vtemp772[0x15U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x16U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x16U] 
           | __Vtemp772[0x16U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x17U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x17U] 
           | __Vtemp772[0x17U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x18U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x18U] 
           | __Vtemp772[0x18U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x19U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x19U] 
           | __Vtemp772[0x19U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1aU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1aU] 
           | __Vtemp772[0x1aU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1bU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1bU] 
           | __Vtemp772[0x1bU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1cU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1cU] 
           | __Vtemp772[0x1cU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1dU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1dU] 
           | __Vtemp772[0x1dU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1eU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1eU] 
           | __Vtemp772[0x1eU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1fU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1fU] 
           | __Vtemp772[0x1fU]);
    __Vtemp774[0U] = 1U;
    __Vtemp774[1U] = 0U;
    __Vtemp774[2U] = 0U;
    __Vtemp774[3U] = 0U;
    __Vtemp774[4U] = 0U;
    __Vtemp774[5U] = 0U;
    __Vtemp774[6U] = 0U;
    __Vtemp774[7U] = 0U;
    __Vtemp774[8U] = 0U;
    __Vtemp774[9U] = 0U;
    __Vtemp774[0xaU] = 0U;
    __Vtemp774[0xbU] = 0U;
    __Vtemp774[0xcU] = 0U;
    __Vtemp774[0xdU] = 0U;
    __Vtemp774[0xeU] = 0U;
    __Vtemp774[0xfU] = 0U;
    __Vtemp774[0x10U] = 0U;
    __Vtemp774[0x11U] = 0U;
    __Vtemp774[0x12U] = 0U;
    __Vtemp774[0x13U] = 0U;
    __Vtemp774[0x14U] = 0U;
    __Vtemp774[0x15U] = 0U;
    __Vtemp774[0x16U] = 0U;
    __Vtemp774[0x17U] = 0U;
    __Vtemp774[0x18U] = 0U;
    __Vtemp774[0x19U] = 0U;
    __Vtemp774[0x1aU] = 0U;
    __Vtemp774[0x1bU] = 0U;
    __Vtemp774[0x1cU] = 0U;
    __Vtemp774[0x1dU] = 0U;
    __Vtemp774[0x1eU] = 0U;
    __Vtemp774[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp775, __Vtemp774, 
                  (0x3ffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0U] 
           | __Vtemp775[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[1U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[1U] 
           | __Vtemp775[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[2U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[2U] 
           | __Vtemp775[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[3U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[3U] 
           | __Vtemp775[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[4U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[4U] 
           | __Vtemp775[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[5U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[5U] 
           | __Vtemp775[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[6U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[6U] 
           | __Vtemp775[6U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[7U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[7U] 
           | __Vtemp775[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[8U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[8U] 
           | __Vtemp775[8U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[9U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[9U] 
           | __Vtemp775[9U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xaU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xaU] 
           | __Vtemp775[0xaU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xbU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xbU] 
           | __Vtemp775[0xbU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xcU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xcU] 
           | __Vtemp775[0xcU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xdU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xdU] 
           | __Vtemp775[0xdU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xeU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xeU] 
           | __Vtemp775[0xeU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xfU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xfU] 
           | __Vtemp775[0xfU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x10U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x10U] 
           | __Vtemp775[0x10U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x11U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x11U] 
           | __Vtemp775[0x11U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x12U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x12U] 
           | __Vtemp775[0x12U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x13U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x13U] 
           | __Vtemp775[0x13U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x14U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x14U] 
           | __Vtemp775[0x14U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x15U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x15U] 
           | __Vtemp775[0x15U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x16U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x16U] 
           | __Vtemp775[0x16U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x17U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x17U] 
           | __Vtemp775[0x17U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x18U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x18U] 
           | __Vtemp775[0x18U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x19U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x19U] 
           | __Vtemp775[0x19U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1aU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1aU] 
           | __Vtemp775[0x1aU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1bU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1bU] 
           | __Vtemp775[0x1bU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1cU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1cU] 
           | __Vtemp775[0x1cU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1dU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1dU] 
           | __Vtemp775[0x1dU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1eU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1eU] 
           | __Vtemp775[0x1eU]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1fU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1fU] 
           | __Vtemp775[0x1fU]);
    __Vtemp777[0U] = 1U;
    __Vtemp777[1U] = 0U;
    __Vtemp777[2U] = 0U;
    __Vtemp777[3U] = 0U;
    __Vtemp777[4U] = 0U;
    __Vtemp777[5U] = 0U;
    __Vtemp777[6U] = 0U;
    __Vtemp777[7U] = 0U;
    __Vtemp777[8U] = 0U;
    __Vtemp777[9U] = 0U;
    __Vtemp777[0xaU] = 0U;
    __Vtemp777[0xbU] = 0U;
    __Vtemp777[0xcU] = 0U;
    __Vtemp777[0xdU] = 0U;
    __Vtemp777[0xeU] = 0U;
    __Vtemp777[0xfU] = 0U;
    __Vtemp777[0x10U] = 0U;
    __Vtemp777[0x11U] = 0U;
    __Vtemp777[0x12U] = 0U;
    __Vtemp777[0x13U] = 0U;
    __Vtemp777[0x14U] = 0U;
    __Vtemp777[0x15U] = 0U;
    __Vtemp777[0x16U] = 0U;
    __Vtemp777[0x17U] = 0U;
    __Vtemp777[0x18U] = 0U;
    __Vtemp777[0x19U] = 0U;
    __Vtemp777[0x1aU] = 0U;
    __Vtemp777[0x1bU] = 0U;
    __Vtemp777[0x1cU] = 0U;
    __Vtemp777[0x1dU] = 0U;
    __Vtemp777[0x1eU] = 0U;
    __Vtemp777[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp778, __Vtemp777, 
                  (0x3ffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0U] 
           & (~ __Vtemp778[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[1U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[1U] 
           & (~ __Vtemp778[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[2U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[2U] 
           & (~ __Vtemp778[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[3U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[3U] 
           & (~ __Vtemp778[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[4U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[4U] 
           & (~ __Vtemp778[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[5U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[5U] 
           & (~ __Vtemp778[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[6U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[6U] 
           & (~ __Vtemp778[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[7U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[7U] 
           & (~ __Vtemp778[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[8U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[8U] 
           & (~ __Vtemp778[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[9U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[9U] 
           & (~ __Vtemp778[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xaU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xaU] 
           & (~ __Vtemp778[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xbU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xbU] 
           & (~ __Vtemp778[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xcU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xcU] 
           & (~ __Vtemp778[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xdU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xdU] 
           & (~ __Vtemp778[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xeU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xeU] 
           & (~ __Vtemp778[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xfU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xfU] 
           & (~ __Vtemp778[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x10U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x10U] 
           & (~ __Vtemp778[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x11U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x11U] 
           & (~ __Vtemp778[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x12U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x12U] 
           & (~ __Vtemp778[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x13U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x13U] 
           & (~ __Vtemp778[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x14U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x14U] 
           & (~ __Vtemp778[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x15U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x15U] 
           & (~ __Vtemp778[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x16U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x16U] 
           & (~ __Vtemp778[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x17U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x17U] 
           & (~ __Vtemp778[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x18U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x18U] 
           & (~ __Vtemp778[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x19U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x19U] 
           & (~ __Vtemp778[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1aU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1aU] 
           & (~ __Vtemp778[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1bU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1bU] 
           & (~ __Vtemp778[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1cU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1cU] 
           & (~ __Vtemp778[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1dU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1dU] 
           & (~ __Vtemp778[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1eU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1eU] 
           & (~ __Vtemp778[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1fU] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1fU] 
           & (~ __Vtemp778[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_203 
        = (((QData)((IData)((0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr 
                                         >> 0xaU)))) 
            << 0x1aU) | (QData)((IData)(((0x3ffffc0U 
                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn) 
                                             << 6U)) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_d) 
                                             << 5U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_a) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_u) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_x) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_w) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_r))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__s2_hit 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_234) 
           & ((0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr 
                           >> 0xaU)) == (0x1ffffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                             >> 0x1aU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_81) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT__maybe_full));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__control_state))) {
        if ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__len))) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1070) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__activation 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_cmd_rs1 
                                     >> 3U)));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin = 0U;
}
