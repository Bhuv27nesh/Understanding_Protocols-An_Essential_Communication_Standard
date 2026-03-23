// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top_tb.h for the primary calling header

#include "Vuart_top_tb__pch.h"

void Vuart_top_tb___024root___ctor_var_reset(Vuart_top_tb___024root* vlSelf);

Vuart_top_tb___024root::Vuart_top_tb___024root(Vuart_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuart_top_tb___024root___ctor_var_reset(this);
}

void Vuart_top_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuart_top_tb___024root::~Vuart_top_tb___024root() {
}
