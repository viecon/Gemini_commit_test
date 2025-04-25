// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort_tb.h for the primary calling header

#include "Vsort_tb__pch.h"
#include "Vsort_tb___024root.h"

VlCoroutine Vsort_tb___024root___eval_initial__TOP__Vtiming__0(Vsort_tb___024root* vlSelf);

void Vsort_tb___024root___eval_initial(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_initial\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsort_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vsort_tb___024root___act_sequent__TOP__0(Vsort_tb___024root* vlSelf);

void Vsort_tb___024root___eval_act(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_act\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsort_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsort_tb___024root___act_sequent__TOP__0(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___act_sequent__TOP__0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sort_tb__DOT__dut__DOT__values[0U] = 
        (vlSelfRef.sort_tb__DOT__in >> 0x1cU);
    vlSelfRef.sort_tb__DOT__dut__DOT__values[1U] = 
        (0xfU & (vlSelfRef.sort_tb__DOT__in >> 0x18U));
    vlSelfRef.sort_tb__DOT__dut__DOT__values[2U] = 
        (0xfU & (vlSelfRef.sort_tb__DOT__in >> 0x14U));
    vlSelfRef.sort_tb__DOT__dut__DOT__values[3U] = 
        (0xfU & (vlSelfRef.sort_tb__DOT__in >> 0x10U));
    vlSelfRef.sort_tb__DOT__dut__DOT__values[4U] = 
        (0xfU & (vlSelfRef.sort_tb__DOT__in >> 0xcU));
    vlSelfRef.sort_tb__DOT__dut__DOT__values[5U] = 
        (0xfU & (vlSelfRef.sort_tb__DOT__in >> 8U));
    vlSelfRef.sort_tb__DOT__dut__DOT__values[6U] = 
        (0xfU & (vlSelfRef.sort_tb__DOT__in >> 4U));
    vlSelfRef.sort_tb__DOT__dut__DOT__values[7U] = 
        (0xfU & vlSelfRef.sort_tb__DOT__in);
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[0U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[1U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[2U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[3U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[4U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[5U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[6U];
    vlSelfRef.sort_tb__DOT__dut__DOT__sorted[7U] = 
        vlSelfRef.sort_tb__DOT__dut__DOT__values[7U];
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [2U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [3U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [4U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [5U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [5U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [6U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [6U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [5U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [7U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [7U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [6U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[7U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [2U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [3U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [4U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [5U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [5U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [6U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [6U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [5U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[6U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [2U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [3U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [4U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [5U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [5U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[5U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [2U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [3U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [4U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [4U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[4U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [2U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [3U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [3U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[3U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [2U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [2U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[2U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
    if ((vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
         < vlSelfRef.sort_tb__DOT__dut__DOT__sorted
         [1U])) {
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [1U];
        vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0 
            = vlSelfRef.sort_tb__DOT__dut__DOT__sorted
            [0U];
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[0U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c379e__0;
        vlSelfRef.sort_tb__DOT__dut__DOT__sorted[1U] 
            = vlSelfRef.sort_tb__DOT__dut__DOT____Vconcswap_1_ha12c78de__0;
    }
}

void Vsort_tb___024root___eval_nba(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_nba\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsort_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vsort_tb___024root___timing_resume(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___timing_resume\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsort_tb___024root___eval_triggers__act(Vsort_tb___024root* vlSelf);

bool Vsort_tb___024root___eval_phase__act(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_phase__act\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsort_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsort_tb___024root___timing_resume(vlSelf);
        Vsort_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsort_tb___024root___eval_phase__nba(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_phase__nba\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsort_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort_tb___024root___dump_triggers__nba(Vsort_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort_tb___024root___dump_triggers__act(Vsort_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsort_tb___024root___eval(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsort_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sort_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsort_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sort_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsort_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsort_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsort_tb___024root___eval_debug_assertions(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_debug_assertions\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
