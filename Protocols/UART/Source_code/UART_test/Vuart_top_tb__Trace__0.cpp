// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_top_tb__Syms.h"


void Vuart_top_tb___024root__trace_chg_0_sub_0(Vuart_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root__trace_chg_0\n"); );
    // Body
    Vuart_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top_tb___024root*>(voidSelf);
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vuart_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_top_tb___024root__trace_chg_0_sub_0(Vuart_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root__trace_chg_0_sub_0\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.uart_top_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.uart_top_tb__DOT__wr_en));
        bufp->chgBit(oldp+2,(vlSelfRef.uart_top_tb__DOT__rdy_clr));
        bufp->chgCData(oldp+3,(vlSelfRef.uart_top_tb__DOT__data_in),8);
        bufp->chgCData(oldp+4,(vlSelfRef.uart_top_tb__DOT__test_data[0]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.uart_top_tb__DOT__test_data[1]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.uart_top_tb__DOT__test_data[2]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.uart_top_tb__DOT__test_data[3]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.uart_top_tb__DOT__test_data[4]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.uart_top_tb__DOT__test_data[5]),8);
        bufp->chgIData(oldp+10,(vlSelfRef.uart_top_tb__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+11,(vlSelfRef.uart_top_tb__DOT__data_out),8);
        bufp->chgBit(oldp+12,(vlSelfRef.uart_top_tb__DOT__rdy));
        bufp->chgBit(oldp+13,((0U != (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state))));
        bufp->chgBit(oldp+14,(vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_clk_en));
        bufp->chgBit(oldp+15,(vlSelfRef.uart_top_tb__DOT__dut__DOT__rx_clk_en));
        bufp->chgBit(oldp+16,(vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_line));
        bufp->chgIData(oldp+17,(vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_tx),32);
        bufp->chgIData(oldp+18,(vlSelfRef.uart_top_tb__DOT__dut__DOT__bg__DOT__counter_rx),32);
        bufp->chgCData(oldp+19,(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__state),2);
        bufp->chgCData(oldp+20,(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__sample),4);
        bufp->chgCData(oldp+21,(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__index),4);
        bufp->chgCData(oldp+22,(vlSelfRef.uart_top_tb__DOT__dut__DOT__ur__DOT__temp),8);
        bufp->chgCData(oldp+23,(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__state),2);
        bufp->chgCData(oldp+24,(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__data),8);
        bufp->chgCData(oldp+25,(vlSelfRef.uart_top_tb__DOT__dut__DOT__us__DOT__bitpos),3);
    }
    bufp->chgBit(oldp+26,(vlSelfRef.uart_top_tb__DOT__clk));
}

void Vuart_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root__trace_cleanup\n"); );
    // Body
    Vuart_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top_tb___024root*>(voidSelf);
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
