// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsort_tb__Syms.h"


void Vsort_tb___024root__trace_chg_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsort_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_chg_0\n"); );
    // Init
    Vsort_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort_tb___024root*>(voidSelf);
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsort_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsort_tb___024root__trace_chg_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_chg_0_sub_0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(((((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                   [0U] << 0x1cU) | 
                                  (vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                   [1U] << 0x18U)) 
                                 | ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                     [2U] << 0x14U) 
                                    | (vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                       [3U] << 0x10U))) 
                                | (((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                     [4U] << 0xcU) 
                                    | (vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                       [5U] << 8U)) 
                                   | ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                       [6U] << 4U) 
                                      | vlSelfRef.sort_tb__DOT__dut__DOT__sorted
                                      [7U])))),32);
        bufp->chgCData(oldp+1,(vlSelfRef.sort_tb__DOT__dut__DOT__values[0]),4);
        bufp->chgCData(oldp+2,(vlSelfRef.sort_tb__DOT__dut__DOT__values[1]),4);
        bufp->chgCData(oldp+3,(vlSelfRef.sort_tb__DOT__dut__DOT__values[2]),4);
        bufp->chgCData(oldp+4,(vlSelfRef.sort_tb__DOT__dut__DOT__values[3]),4);
        bufp->chgCData(oldp+5,(vlSelfRef.sort_tb__DOT__dut__DOT__values[4]),4);
        bufp->chgCData(oldp+6,(vlSelfRef.sort_tb__DOT__dut__DOT__values[5]),4);
        bufp->chgCData(oldp+7,(vlSelfRef.sort_tb__DOT__dut__DOT__values[6]),4);
        bufp->chgCData(oldp+8,(vlSelfRef.sort_tb__DOT__dut__DOT__values[7]),4);
        bufp->chgCData(oldp+9,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0]),4);
        bufp->chgCData(oldp+10,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1]),4);
        bufp->chgCData(oldp+11,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2]),4);
        bufp->chgCData(oldp+12,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3]),4);
        bufp->chgCData(oldp+13,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4]),4);
        bufp->chgCData(oldp+14,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5]),4);
        bufp->chgCData(oldp+15,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.sort_tb__DOT__dut__DOT__sorted[7]),4);
    }
    bufp->chgIData(oldp+17,(vlSelfRef.sort_tb__DOT__in),32);
    bufp->chgIData(oldp+18,(vlSelfRef.sort_tb__DOT__i),32);
}

void Vsort_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_cleanup\n"); );
    // Init
    Vsort_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort_tb___024root*>(voidSelf);
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
