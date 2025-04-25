// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw1_tb__Syms.h"


void Vhw1_tb::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vhw1_tb::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->hw1_tb__DOT__A),16);
            tracep->chgCData(oldp+1,(vlTOPp->hw1_tb__DOT__x),8);
            tracep->chgIData(oldp+2,(((0x3fe00U & (
                                                   (((0xfU 
                                                      & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                         >> 8U)) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->hw1_tb__DOT__x))) 
                                                    + 
                                                    ((0xfU 
                                                      & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                         >> 0xcU)) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->hw1_tb__DOT__x) 
                                                         >> 4U)))) 
                                                   << 9U)) 
                                      | (0x1ffU & (
                                                   ((0xfU 
                                                     & (IData)(vlTOPp->hw1_tb__DOT__A)) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->hw1_tb__DOT__x))) 
                                                   + 
                                                   ((0xfU 
                                                     & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                        >> 4U)) 
                                                    * 
                                                    (0xfU 
                                                     & ((IData)(vlTOPp->hw1_tb__DOT__x) 
                                                        >> 4U))))))),18);
            tracep->chgIData(oldp+3,(vlTOPp->hw1_tb__DOT__y_true),18);
            tracep->chgSData(oldp+4,((0x1ffU & (((0xfU 
                                                  & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                     >> 8U)) 
                                                 * 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->hw1_tb__DOT__x))) 
                                                + (
                                                   (0xfU 
                                                    & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                       >> 0xcU)) 
                                                   * 
                                                   (0xfU 
                                                    & ((IData)(vlTOPp->hw1_tb__DOT__x) 
                                                       >> 4U)))))),9);
            tracep->chgSData(oldp+5,((0x1ffU & (((0xfU 
                                                  & (IData)(vlTOPp->hw1_tb__DOT__A)) 
                                                 * 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->hw1_tb__DOT__x))) 
                                                + (
                                                   (0xfU 
                                                    & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                       >> 4U)) 
                                                   * 
                                                   (0xfU 
                                                    & ((IData)(vlTOPp->hw1_tb__DOT__x) 
                                                       >> 4U)))))),9);
            tracep->chgCData(oldp+6,((0xffU & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                               >> 8U))),8);
            tracep->chgCData(oldp+7,((0xffU & (IData)(vlTOPp->hw1_tb__DOT__A))),8);
        }
        tracep->chgBit(oldp+8,(vlTOPp->clk));
    }
}

void Vhw1_tb::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
