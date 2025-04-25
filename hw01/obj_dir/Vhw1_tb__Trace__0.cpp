// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw1_tb__Syms.h"


void Vhw1_tb___024root__trace_chg_0_sub_0(Vhw1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhw1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_chg_0\n"); );
    // Init
    Vhw1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1_tb___024root*>(voidSelf);
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhw1_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhw1_tb___024root__trace_chg_0_sub_0(Vhw1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_chg_0_sub_0\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.hw1_tb__DOT__A),16);
        bufp->chgCData(oldp+1,(vlSelfRef.hw1_tb__DOT__x),8);
        bufp->chgIData(oldp+2,(((0x3fe00U & ((((0xfU 
                                                & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                   >> 8U)) 
                                               * (0xfU 
                                                  & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                              + ((0xfU 
                                                  & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                     >> 0xcU)) 
                                                 * 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                     >> 4U)))) 
                                             << 9U)) 
                                | (0x1ffU & (((0xfU 
                                               & (IData)(vlSelfRef.hw1_tb__DOT__A)) 
                                              * (0xfU 
                                                 & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                             + ((0xfU 
                                                 & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                    >> 4U)) 
                                                * (0xfU 
                                                   & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                      >> 4U))))))),18);
        bufp->chgIData(oldp+3,(vlSelfRef.hw1_tb__DOT__y_true),18);
        bufp->chgSData(oldp+4,((0x1ffU & (((0xfU & 
                                            ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                             >> 8U)) 
                                           * (0xfU 
                                              & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                          + ((0xfU 
                                              & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                 >> 0xcU)) 
                                             * (0xfU 
                                                & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                   >> 4U)))))),9);
        bufp->chgSData(oldp+5,((0x1ffU & (((0xfU & (IData)(vlSelfRef.hw1_tb__DOT__A)) 
                                           * (0xfU 
                                              & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                          + ((0xfU 
                                              & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                 >> 4U)) 
                                             * (0xfU 
                                                & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                   >> 4U)))))),9);
        bufp->chgCData(oldp+6,((0xffU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                         >> 8U))),8);
        bufp->chgCData(oldp+7,((0xffU & (IData)(vlSelfRef.hw1_tb__DOT__A))),8);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.clk));
}

void Vhw1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_cleanup\n"); );
    // Init
    Vhw1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1_tb___024root*>(voidSelf);
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
