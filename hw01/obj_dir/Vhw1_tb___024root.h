// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw1_tb.h for the primary calling header

#ifndef VERILATED_VHW1_TB___024ROOT_H_
#define VERILATED_VHW1_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vhw1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhw1_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*7:0*/ hw1_tb__DOT__x;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ hw1_tb__DOT__A;
    IData/*17:0*/ hw1_tb__DOT__y_true;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhw1_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhw1_tb___024root(Vhw1_tb__Syms* symsp, const char* v__name);
    ~Vhw1_tb___024root();
    VL_UNCOPYABLE(Vhw1_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
