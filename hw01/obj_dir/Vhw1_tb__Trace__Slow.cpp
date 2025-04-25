// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw1_tb__Syms.h"


//======================

void Vhw1_tb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vhw1_tb::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vhw1_tb::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vhw1_tb::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vhw1_tb::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBit(c+9,"hw1_tb clk", false,-1);
        tracep->declBus(c+1,"hw1_tb A", false,-1, 15,0);
        tracep->declBus(c+2,"hw1_tb x", false,-1, 7,0);
        tracep->declBus(c+3,"hw1_tb y", false,-1, 17,0);
        tracep->declBus(c+4,"hw1_tb y_true", false,-1, 17,0);
        tracep->declBus(c+1,"hw1_tb UUT A", false,-1, 15,0);
        tracep->declBus(c+2,"hw1_tb UUT x", false,-1, 7,0);
        tracep->declBus(c+3,"hw1_tb UUT y", false,-1, 17,0);
        tracep->declBus(c+5,"hw1_tb UUT y0", false,-1, 8,0);
        tracep->declBus(c+6,"hw1_tb UUT y1", false,-1, 8,0);
        tracep->declBus(c+7,"hw1_tb UUT UUT0 A", false,-1, 7,0);
        tracep->declBus(c+2,"hw1_tb UUT UUT0 x", false,-1, 7,0);
        tracep->declBus(c+5,"hw1_tb UUT UUT0 y", false,-1, 8,0);
        tracep->declBus(c+8,"hw1_tb UUT UUT1 A", false,-1, 7,0);
        tracep->declBus(c+2,"hw1_tb UUT UUT1 x", false,-1, 7,0);
        tracep->declBus(c+6,"hw1_tb UUT UUT1 y", false,-1, 8,0);
    }
}

void Vhw1_tb::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vhw1_tb::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vhw1_tb::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vhw1_tb__Syms* __restrict vlSymsp = static_cast<Vhw1_tb__Syms*>(userp);
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->hw1_tb__DOT__A),16);
        tracep->fullCData(oldp+2,(vlTOPp->hw1_tb__DOT__x),8);
        tracep->fullIData(oldp+3,(((0x3fe00U & ((((0xfU 
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
                                   | (0x1ffU & (((0xfU 
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
                                                       >> 4U))))))),18);
        tracep->fullIData(oldp+4,(vlTOPp->hw1_tb__DOT__y_true),18);
        tracep->fullSData(oldp+5,((0x1ffU & (((0xfU 
                                               & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                  >> 8U)) 
                                              * (0xfU 
                                                 & (IData)(vlTOPp->hw1_tb__DOT__x))) 
                                             + ((0xfU 
                                                 & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                    >> 0xcU)) 
                                                * (0xfU 
                                                   & ((IData)(vlTOPp->hw1_tb__DOT__x) 
                                                      >> 4U)))))),9);
        tracep->fullSData(oldp+6,((0x1ffU & (((0xfU 
                                               & (IData)(vlTOPp->hw1_tb__DOT__A)) 
                                              * (0xfU 
                                                 & (IData)(vlTOPp->hw1_tb__DOT__x))) 
                                             + ((0xfU 
                                                 & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                                    >> 4U)) 
                                                * (0xfU 
                                                   & ((IData)(vlTOPp->hw1_tb__DOT__x) 
                                                      >> 4U)))))),9);
        tracep->fullCData(oldp+7,((0xffU & ((IData)(vlTOPp->hw1_tb__DOT__A) 
                                            >> 8U))),8);
        tracep->fullCData(oldp+8,((0xffU & (IData)(vlTOPp->hw1_tb__DOT__A))),8);
        tracep->fullBit(oldp+9,(vlTOPp->clk));
    }
}
