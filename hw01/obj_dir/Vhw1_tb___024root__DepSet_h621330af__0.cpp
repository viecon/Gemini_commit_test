// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1_tb.h for the primary calling header

#include "Vhw1_tb__pch.h"
#include "Vhw1_tb___024root.h"

void Vhw1_tb___024root___eval_act(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval_act\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vhw1_tb___024root___nba_sequent__TOP__0(Vhw1_tb___024root* vlSelf);
void Vhw1_tb___024root___nba_sequent__TOP__1(Vhw1_tb___024root* vlSelf);

void Vhw1_tb___024root___eval_nba(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval_nba\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhw1_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhw1_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vhw1_tb___024root___nba_sequent__TOP__0(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___nba_sequent__TOP__0\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((0x3fe00U & ((((0xfU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                  >> 8U)) * (0xfU & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                        + ((0xfU & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                    >> 0xcU)) * (0xfU 
                                                 & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                    >> 4U)))) 
                       << 9U)) | (0x1ffU & (((0xfU 
                                              & (IData)(vlSelfRef.hw1_tb__DOT__A)) 
                                             * (0xfU 
                                                & (IData)(vlSelfRef.hw1_tb__DOT__x))) 
                                            + ((0xfU 
                                                & ((IData)(vlSelfRef.hw1_tb__DOT__A) 
                                                   >> 4U)) 
                                               * (0xfU 
                                                  & ((IData)(vlSelfRef.hw1_tb__DOT__x) 
                                                     >> 4U)))))) 
         != vlSelfRef.hw1_tb__DOT__y_true)) {
        VL_WRITEF_NX("incorrect!\n",0);
    } else {
        VL_WRITEF_NX("correct\n",0);
    }
    VL_FINISH_MT("hw1_tb.v", 19, "");
}

VL_INLINE_OPT void Vhw1_tb___024root___nba_sequent__TOP__1(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___nba_sequent__TOP__1\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hw1_tb__DOT__A = 0xf73aU;
    vlSelfRef.hw1_tb__DOT__x = 0x6bU;
    vlSelfRef.hw1_tb__DOT__y_true = 0x14e80U;
}

void Vhw1_tb___024root___eval_triggers__act(Vhw1_tb___024root* vlSelf);

bool Vhw1_tb___024root___eval_phase__act(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval_phase__act\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhw1_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhw1_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhw1_tb___024root___eval_phase__nba(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval_phase__nba\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhw1_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1_tb___024root___dump_triggers__nba(Vhw1_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1_tb___024root___dump_triggers__act(Vhw1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhw1_tb___024root___eval(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vhw1_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hw1_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhw1_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hw1_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhw1_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhw1_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhw1_tb___024root___eval_debug_assertions(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval_debug_assertions\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
