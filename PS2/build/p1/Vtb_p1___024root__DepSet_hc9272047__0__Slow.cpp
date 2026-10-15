// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1__Syms.h"
#include "Vtb_p1___024root.h"

VL_ATTR_COLD void Vtb_p1___024root___eval_initial__TOP(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (VL_TESTPLUSARGS_I(std::string{"trace"})) {
        __Vtemp_1[0U] = 0x2e766364U;
        __Vtemp_1[1U] = 0x642f7031U;
        __Vtemp_1[2U] = 0x6275696cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
        VL_PRINTF_MT("-Info: tb/tb_p1.sv:128: $dumpvar ignored, as Verilated without --trace\n");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__stl(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p1___024root___eval_triggers__stl(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p1___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
