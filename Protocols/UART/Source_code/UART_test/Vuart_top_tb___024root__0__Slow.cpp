// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top_tb.h for the primary calling header

#include "Vuart_top_tb__pch.h"

VL_ATTR_COLD void Vuart_top_tb___024root___eval_static(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_static\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__clk__0 
        = vlSelfRef.uart_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__rst__0 
        = vlSelfRef.uart_top_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h810fee36__1 = (0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__rdy__0 
        = vlSelfRef.uart_top_tb__DOT__rdy;
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_initial__TOP(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial__TOP\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("UART_WAVE.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_final(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_final\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_settle(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_settle\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vuart_top_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_top_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge uart_top_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge uart_top_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( (2'h0 == uart_top_tb.dut.us.state))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( uart_top_tb.rdy)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_top_tb___024root___ctor_var_reset(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___ctor_var_reset\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->uart_top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11867929527248728556ull);
    vlSelf->uart_top_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18279299161845047086ull);
    vlSelf->uart_top_tb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16917059547433344860ull);
    vlSelf->uart_top_tb__DOT__rdy_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12702949705586057855ull);
    vlSelf->uart_top_tb__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15305714213247564859ull);
    vlSelf->uart_top_tb__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9090777985513043161ull);
    vlSelf->uart_top_tb__DOT__rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7927963611870313253ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->uart_top_tb__DOT__test_data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10812392833866187196ull);
    }
    vlSelf->uart_top_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->uart_top_tb__DOT__dut__DOT__tx_clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4213769307180075708ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__rx_clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513939344647443934ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__tx_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3145052258424653110ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1868966782391499054ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14679937214804143954ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__us__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2361643936699538179ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__us__DOT__data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10868540400110226683ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__us__DOT__bitpos = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16623477989509902847ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__ur__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12555137244232282054ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__ur__DOT__sample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16923962563759807829ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__ur__DOT__index = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2788593560766252121ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__ur__DOT__temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13895746788334759146ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__uart_top_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 506779230804223128ull);
    vlSelf->__Vtrigprevexpr___TOP__uart_top_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 887031181442626571ull);
    vlSelf->__Vtrigprevexpr_h810fee36__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4101246713139617442ull);
    vlSelf->__Vtrigprevexpr___TOP__uart_top_tb__DOT__rdy__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1947200206716305988ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
