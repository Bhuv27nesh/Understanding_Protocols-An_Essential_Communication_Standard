// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_top_tb.h for the primary calling header

#ifndef VERILATED_VUART_TOP_TB___024ROOT_H_
#define VERILATED_VUART_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_top_tb__DOT__clk;
    CData/*0:0*/ uart_top_tb__DOT__rst;
    CData/*0:0*/ uart_top_tb__DOT__wr_en;
    CData/*0:0*/ uart_top_tb__DOT__rdy_clr;
    CData/*7:0*/ uart_top_tb__DOT__data_in;
    CData/*7:0*/ uart_top_tb__DOT__data_out;
    CData/*0:0*/ uart_top_tb__DOT__rdy;
    CData/*0:0*/ uart_top_tb__DOT__dut__DOT__tx_clk_en;
    CData/*0:0*/ uart_top_tb__DOT__dut__DOT__rx_clk_en;
    CData/*0:0*/ uart_top_tb__DOT__dut__DOT__tx_line;
    CData/*1:0*/ uart_top_tb__DOT__dut__DOT__us__DOT__state;
    CData/*7:0*/ uart_top_tb__DOT__dut__DOT__us__DOT__data;
    CData/*2:0*/ uart_top_tb__DOT__dut__DOT__us__DOT__bitpos;
    CData/*1:0*/ uart_top_tb__DOT__dut__DOT__ur__DOT__state;
    CData/*3:0*/ uart_top_tb__DOT__dut__DOT__ur__DOT__sample;
    CData/*3:0*/ uart_top_tb__DOT__dut__DOT__ur__DOT__index;
    CData/*7:0*/ uart_top_tb__DOT__dut__DOT__ur__DOT__temp;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_top_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_top_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr_h810fee36__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_top_tb__DOT__rdy__0;
    CData/*0:0*/ __VactDidInit;
    IData/*31:0*/ uart_top_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx;
    IData/*31:0*/ uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 6> uart_top_tb__DOT__test_data;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h732f2282__0;
    VlTriggerScheduler __VtrigSched_he4b7ae8a__0;
    VlTriggerScheduler __VtrigSched_h87dd0360__0;

    // INTERNAL VARIABLES
    Vuart_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_top_tb___024root(Vuart_top_tb__Syms* symsp, const char* v__name);
    ~Vuart_top_tb___024root();
    VL_UNCOPYABLE(Vuart_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
