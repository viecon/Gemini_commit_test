// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw1_tb.h for the primary calling header

#include "Vhw1_tb.h"
#include "Vhw1_tb__Syms.h"

//==========

VL_CTOR_IMP(Vhw1_tb) {
    Vhw1_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vhw1_tb__Syms(this, name());
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhw1_tb::__Vconfigure(Vhw1_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vhw1_tb::~Vhw1_tb() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vhw1_tb::_eval_initial(Vhw1_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb::_eval_initial\n"); );
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vhw1_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb::final\n"); );
    // Variables
    Vhw1_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhw1_tb::_eval_settle(Vhw1_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb::_eval_settle\n"); );
    Vhw1_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhw1_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw1_tb::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    hw1_tb__DOT__A = VL_RAND_RESET_I(16);
    hw1_tb__DOT__x = VL_RAND_RESET_I(8);
    hw1_tb__DOT__y_true = VL_RAND_RESET_I(18);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
