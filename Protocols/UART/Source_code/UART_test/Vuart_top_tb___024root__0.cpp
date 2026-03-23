// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top_tb.h for the primary calling header

#include "Vuart_top_tb__pch.h"

VL_ATTR_COLD void Vuart_top_tb___024root___eval_initial__TOP(Vuart_top_tb___024root* vlSelf);
VlCoroutine Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_top_tb___024root* vlSelf);
VlCoroutine Vuart_top_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_top_tb___024root* vlSelf);

void Vuart_top_tb___024root___eval_initial(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_top_tb__DOT__clk = 0U;
    vlSelfRef.uart_top_tb__DOT__rst = 1U;
    vlSelfRef.uart_top_tb__DOT__wr_en = 0U;
    vlSelfRef.uart_top_tb__DOT__rdy_clr = 0U;
    vlSelfRef.uart_top_tb__DOT__data_in = 0U;
    vlSelfRef.uart_top_tb__DOT__test_data[0U] = 0xa5U;
    vlSelfRef.uart_top_tb__DOT__test_data[1U] = 0x3cU;
    vlSelfRef.uart_top_tb__DOT__test_data[2U] = 0x7eU;
    vlSelfRef.uart_top_tb__DOT__test_data[3U] = 0x55U;
    vlSelfRef.uart_top_tb__DOT__test_data[4U] = 0xf0U;
    vlSelfRef.uart_top_tb__DOT__test_data[5U] = 0x0fU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "uart_top_tb.sv", 
                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_top_tb__DOT__rst = 0U;
    vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h732f2282__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_top_tb.clk)", 
                                                             "uart_top_tb.sv", 
                                                             56);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        while ((0U != (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state))) {
            co_await vlSelfRef.__VtrigSched_he4b7ae8a__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (2'h0 == uart_top_tb.dut.us.state))", 
                                                                 "uart_top_tb.sv", 
                                                                 57);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.uart_top_tb__DOT__data_in = ((5U 
                                                >= 
                                                (7U 
                                                 & vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i))
                                                ? vlSelfRef.uart_top_tb__DOT__test_data
                                               [(7U 
                                                 & vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i)]
                                                : 0U);
        vlSelfRef.uart_top_tb__DOT__wr_en = 1U;
        co_await vlSelfRef.__VtrigSched_h732f2282__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_top_tb.clk)", 
                                                             "uart_top_tb.sv", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.uart_top_tb__DOT__wr_en = 0U;
        while ((1U & (~ (IData)(vlSelfRef.uart_top_tb__DOT__rdy)))) {
            co_await vlSelfRef.__VtrigSched_h87dd0360__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( uart_top_tb.rdy)", 
                                                                 "uart_top_tb.sv", 
                                                                 67);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        VL_WRITEF_NX("Time=%0t | Sent=%x | Received=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     ((5U >= (7U & vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i))
                       ? vlSelfRef.uart_top_tb__DOT__test_data
                      [(7U & vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i)]
                       : 0U),8,(IData)(vlSelfRef.uart_top_tb__DOT__data_out));
        vlSelfRef.uart_top_tb__DOT__rdy_clr = 1U;
        co_await vlSelfRef.__VtrigSched_h732f2282__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_top_tb.clk)", 
                                                             "uart_top_tb.sv", 
                                                             74);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.uart_top_tb__DOT__rdy_clr = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                             nullptr, 
                                             "uart_top_tb.sv", 
                                             78);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("All 6 data transmissions completed!\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000989680ULL, 
                                         nullptr, "uart_top_tb.sv", 
                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("uart_top_tb.sv", 83, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vuart_top_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "uart_top_tb.sv", 
                                             28);
        vlSelfRef.uart_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.uart_top_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vuart_top_tb___024root___eval_triggers__act(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_triggers__act\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h810fee36__0;
    __Vtrigprevexpr_h810fee36__0 = 0;
    // Body
    __Vtrigprevexpr_h810fee36__0 = (0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state));
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.uart_top_tb__DOT__rdy) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__rdy__0)) 
                                                      << 4U) 
                                                     | (((((IData)(__Vtrigprevexpr_h810fee36__0) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr_h810fee36__1)) 
                                                          << 3U) 
                                                         | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.uart_top_tb__DOT__rst) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__rst__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.uart_top_tb__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__clk__0 
        = vlSelfRef.uart_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__rst__0 
        = vlSelfRef.uart_top_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h810fee36__1 = __Vtrigprevexpr_h810fee36__0;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_top_tb__DOT__rdy__0 
        = vlSelfRef.uart_top_tb__DOT__rdy;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vuart_top_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vuart_top_tb___024root___nba_sequent__TOP__0(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx;
    __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx = 0;
    IData/*31:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx;
    __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx = 0;
    CData/*1:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state = 0;
    CData/*7:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__data;
    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__data = 0;
    CData/*2:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos;
    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos = 0;
    CData/*1:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state = 0;
    CData/*3:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample = 0;
    CData/*3:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index = 0;
    CData/*7:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp = 0;
    // Body
    __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx;
    __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx;
    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__data 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__data;
    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__bitpos;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index;
    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__temp;
    if (vlSelfRef.uart_top_tb__DOT__rst) {
        __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp = 0U;
        vlSelfRef.uart_top_tb__DOT__data_out = 0U;
        vlSelfRef.uart_top_tb__DOT__rdy = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx = 0U;
        vlSelfRef.uart_top_tb__DOT__dut__DOT__rx_clk_en = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state = 0U;
        vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line = 1U;
        __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__data = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx = 0U;
        vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en = 0U;
    } else {
        if (vlSelfRef.uart_top_tb__DOT__rdy_clr) {
            vlSelfRef.uart_top_tb__DOT__rdy = 0U;
        }
        if (vlSelfRef.uart_top_tb__DOT__dut__DOT__rx_clk_en) {
            if ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__state))) {
                if ((1U & ((~ (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line)) 
                           | (0U != (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample))))) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample)));
                }
                if ((0x0fU == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample))) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state = 1U;
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index = 0U;
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample = 0U;
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp = 0U;
                }
            } else if ((1U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__state))) {
                __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample)));
                if ((8U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample))) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp 
                        = (((~ ((IData)(1U) << (7U 
                                                & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index)))) 
                            & (IData)(__Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp)) 
                           | (0x00ffU & ((IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line) 
                                         << (7U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index)))));
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index)));
                }
                if (((8U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index)) 
                     & (0x0fU == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample)))) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__state))) {
                if ((0x0fU == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample))) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state = 0U;
                    vlSelfRef.uart_top_tb__DOT__data_out 
                        = vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__temp;
                    vlSelfRef.uart_top_tb__DOT__rdy = 1U;
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample = 0U;
                } else {
                    __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample)));
                }
            } else {
                __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state = 0U;
            }
        }
        if ((0x0000028aU == vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx)) {
            __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx = 0U;
            vlSelfRef.uart_top_tb__DOT__dut__DOT__rx_clk_en = 1U;
        } else {
            __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx 
                = ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx);
            vlSelfRef.uart_top_tb__DOT__dut__DOT__rx_clk_en = 0U;
        }
        if ((2U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state))) {
                if (vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en) {
                    vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line = 1U;
                    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state = 0U;
                }
            } else if (vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en) {
                vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line 
                    = (1U & ((IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__data) 
                             >> (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__bitpos)));
                if ((7U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__bitpos))) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state = 3U;
                } else {
                    __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__bitpos)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state))) {
            if (vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en) {
                vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state = 2U;
            }
        } else {
            vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line = 1U;
            if (vlSelfRef.uart_top_tb__DOT__wr_en) {
                __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state = 1U;
                __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__data 
                    = vlSelfRef.uart_top_tb__DOT__data_in;
                __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos = 0U;
            }
        }
        if ((0x000028afU == vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx)) {
            __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx = 0U;
            vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en = 1U;
        } else {
            __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx 
                = ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx);
            vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en = 0U;
        }
    }
    vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__state 
        = __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__state;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample 
        = __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__sample;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index 
        = __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__index;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__temp 
        = __Vdly__uart_top_tb__DOT__dut__DOT__ur__DOT__temp;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx 
        = __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state 
        = __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__state;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__data 
        = __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__data;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__bitpos 
        = __Vdly__uart_top_tb__DOT__dut__DOT__us__DOT__bitpos;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx 
        = __Vdly__uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx;
}

void Vuart_top_tb___024root___eval_nba(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_nba\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vuart_top_tb___024root___timing_commit(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___timing_commit\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h732f2282__0.commit(
                                                   "@(posedge uart_top_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_he4b7ae8a__0.commit(
                                                   "@( (2'h0 == uart_top_tb.dut.us.state))");
    }
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_h87dd0360__0.commit(
                                                   "@( uart_top_tb.rdy)");
    }
}

void Vuart_top_tb___024root___timing_resume(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___timing_resume\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h732f2282__0.resume(
                                                   "@(posedge uart_top_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he4b7ae8a__0.resume(
                                                   "@( (2'h0 == uart_top_tb.dut.us.state))");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_h87dd0360__0.resume(
                                                   "@( uart_top_tb.rdy)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuart_top_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_top_tb___024root___eval_phase__act(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_phase__act\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_top_tb___024root___eval_triggers__act(vlSelf);
    Vuart_top_tb___024root___timing_commit(vlSelf);
    Vuart_top_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vuart_top_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vuart_top_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vuart_top_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_top_tb___024root___eval_phase__nba(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_phase__nba\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_top_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_top_tb___024root___eval_nba(vlSelf);
        Vuart_top_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vuart_top_tb___024root___eval(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_top_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("uart_top_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuart_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("uart_top_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vuart_top_tb___024root___eval_phase__act(vlSelf));
    } while (Vuart_top_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vuart_top_tb___024root___eval_debug_assertions(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_debug_assertions\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
