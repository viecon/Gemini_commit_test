// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsort_tb__Syms.h"


VL_ATTR_COLD void Vsort_tb___024root__trace_init_sub__TOP__0(Vsort_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("sort_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"NUM_VALS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"NUM_VALS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+23,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsort_tb___024root__trace_init_top(Vsort_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_init_top\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsort_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsort_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsort_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsort_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsort_tb___024root__trace_register(Vsort_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_register\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsort_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsort_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsort_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsort_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_const_0\n"); );
    // Init
    Vsort_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort_tb___024root*>(voidSelf);
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsort_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_const_0_sub_0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+20,(8U),32);
    bufp->fullIData(oldp+21,(4U),32);
    bufp->fullIData(oldp+22,(7U),32);
    bufp->fullIData(oldp+23,(1U),32);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_full_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsort_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_full_0\n"); );
    // Init
    Vsort_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort_tb___024root*>(voidSelf);
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsort_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_full_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_full_0_sub_0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                [0U] << 0x1cU) | (vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                                  [1U] 
                                                  << 0x18U)) 
                              | ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                  [2U] << 0x14U) | 
                                 (vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                  [3U] << 0x10U))) 
                             | (((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                  [4U] << 0xcU) | (
                                                   vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                                   [5U] 
                                                   << 8U)) 
                                | ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                    [6U] << 4U) | vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                   [7U])))),32);
    bufp->fullCData(oldp+2,(vlSelfRef.sort_tb__DOT__dut__DOT__values[0]),4);
    bufp->fullCData(oldp+3,(vlSelfRef.sort_tb__DOT__dut__DOT__values[1]),4);
    bufp->fullCData(oldp+4,(vlSelfRef.sort_tb__DOT__dut__DOT__values[2]),4);
    bufp->fullCData(oldp+5,(vlSelfRef.sort_tb__DOT__dut__DOT__values[3]),4);
    bufp->fullCData(oldp+6,(vlSelfRef.sort_tb__DOT__dut__DOT__values[4]),4);
    bufp->fullCData(oldp+7,(vlSelfRef.sort_tb__DOT__dut__DOT__values[5]),4);
    bufp->fullCData(oldp+8,(vlSelfRef.sort_tb__DOT__dut__DOT__values[6]),4);
    bufp->fullCData(oldp+9,(vlSelfRef.sort_tb__DOT__dut__DOT__values[7]),4);
    bufp->fullCData(oldp+10,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0]),4);
    bufp->fullCData(oldp+11,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1]),4);
    bufp->fullCData(oldp+12,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2]),4);
    bufp->fullCData(oldp+13,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3]),4);
    bufp->fullCData(oldp+14,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4]),4);
    bufp->fullCData(oldp+15,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5]),4);
    bufp->fullCData(oldp+16,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[7]),4);
    bufp->fullIData(oldp+18,(vlSelfRef.sort_tb__DOT__in),32);
    bufp->fullIData(oldp+19,(vlSelfRef.sort_tb__DOT__i),32);
}
