// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"
#include "Vtb_p2__Syms.h"
#include "Vtb_p2___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x1e8480ULL, 
                                       nullptr, "tb/tb_p2.sv", 
                                       174);
    VL_WRITEF("P2 TIMEOUT -- the testbench never reached the end; your design is probably stalled.\n[%0t] %%Fatal: tb_p2.sv:176: Assertion failed in %Ntb_p2\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("tb/tb_p2.sv", 176, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p2___024root___eval_triggers__act(Vtb_p2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_p2__DOT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->tb_p2__DOT__clk_i)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
        = vlSelf->tb_p2__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
