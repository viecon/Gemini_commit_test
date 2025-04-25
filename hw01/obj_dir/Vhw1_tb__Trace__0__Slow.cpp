// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw1_tb__Syms.h"


VL_ATTR_COLD void Vhw1_tb___024root__trace_init_sub__TOP__0(Vhw1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_init_sub__TOP__0\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("hw1_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+4,0,"y_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+5,0,"y0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"y1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("UUT0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("UUT1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhw1_tb___024root__trace_init_top(Vhw1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_init_top\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhw1_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhw1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhw1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhw1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhw1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhw1_tb___024root__trace_register(Vhw1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_register\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhw1_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vhw1_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vhw1_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vhw1_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhw1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_const_0\n"); );
    // Init
    Vhw1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1_tb___024root*>(voidSelf);
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vhw1_tb___024root__trace_full_0_sub_0(Vhw1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhw1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_full_0\n"); );
    // Init
    Vhw1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1_tb___024root*>(voidSelf);
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhw1_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhw1_tb___024root__trace_full_0_sub_0(Vhw1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root__trace_full_0_sub_0\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.hw1_tb__DOT__A),16);
    bufp->fullCData(oldp+2,(vlSelfRef.hw1_tb__DOT__x),8);
    bufp->fullIData(oldp+3,(((0x3fe00U & ((((0xfU & 
                                             ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                              >> 8U)) 
                                            * (0xfU 
                                               & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                           + ((0xfU 
                                               & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                  >> 0xcU)) 
                                              * (0xfU 
                                                 & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                    >> 4U)))) 
                                          << 9U)) | 
                             (0x1ffU & (((0xfU & (IData)(vlSelfRef.hw1_tb__DOT__A)) 
                                         * (0xfU & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                        + ((0xfU & 
                                            ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                             >> 4U)) 
                                           * (0xfU 
                                              & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                 >> 4U))))))),18);
    bufp->fullIData(oldp+4,(vlSelfRef.hw1_tb__DOT__y_true),18);
    bufp->fullSData(oldp+5,((0x1ffU & (((0xfU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                 >> 8U)) 
                                        * (0xfU & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                       + ((0xfU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                   >> 0xcU)) 
                                          * (0xfU & 
                                             ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                              >> 4U)))))),9);
    bufp->fullSData(oldp+6,((0x1ffU & (((0xfU & (IData)(vlSelfRef.hw1_tb__DOT__A)) 
                                        * (0xfU & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                       + ((0xfU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                   >> 4U)) 
                                          * (0xfU & 
                                             ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                              >> 4U)))))),9);
    bufp->fullCData(oldp+7,((0xffU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                      >> 8U))),8);
    bufp->fullCData(oldp+8,((0xffU & (IData)(vlSelfRef.hw1_tb__DOT__A))),8);
    bufp->fullBit(oldp+9,(vlSelfRef.clk));
}
