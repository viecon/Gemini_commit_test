// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1_tb.h for the primary calling header

#include "Vhw1_tb__pch.h"
#include "Vhw1_tb__Syms.h"
#include "Vhw1_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhw1_tb___024root___dump_triggers__act(Vhw1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhw1_tb___024root___eval_triggers__act(Vhw1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb___024root___eval_triggers__act\n"); );
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhw1_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
