// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_p1__pch.h"

//============================================================
// Constructors

Vtb_p1::Vtb_p1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_p1__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_p1::Vtb_p1(const char* _vcname__)
    : Vtb_p1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_p1::~Vtb_p1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_p1___024root___eval_debug_assertions(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_p1___024root___eval_static(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___eval_initial(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___eval_settle(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___eval(Vtb_p1___024root* vlSelf);

void Vtb_p1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_p1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_p1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_p1___024root___eval_static(&(vlSymsp->TOP));
        Vtb_p1___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_p1___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_p1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_p1::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_p1::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_p1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_p1___024root___eval_final(Vtb_p1___024root* vlSelf);

VL_ATTR_COLD void Vtb_p1::final() {
    Vtb_p1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_p1::hierName() const { return vlSymsp->name(); }
const char* Vtb_p1::modelName() const { return "Vtb_p1"; }
unsigned Vtb_p1::threads() const { return 1; }
void Vtb_p1::prepareClone() const { contextp()->prepareClone(); }
void Vtb_p1::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_p1::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_p1::trace()' called on model that was Verilated without --trace option");
}
