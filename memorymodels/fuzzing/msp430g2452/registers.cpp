
#include <iostream>
#include "klee/klee.h"
#include "klee/ExecutionState.h"
#include "klee/Internal/Module/KModule.h"
#include "klee/Internal/Module/KInstruction.h"
#include "Common.h"
#include "Memory.h"

#include "llvm/Support/raw_ostream.h"
#include "llvm/Instruction.h"
#include "llvm/BasicBlock.h"
#include "llvm/Function.h"
#include "llvm/Value.h"

using namespace klee;


extern "C" bool flash_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> flash_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool IE1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> IE1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool IFG1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> IFG1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10DTC0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10DTC0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10DTC1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10DTC1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10AE0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10AE0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10CTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10CTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10CTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10CTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10MEM_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10MEM_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool ADC10SA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC10SA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool DCOCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DCOCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool BCSCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> BCSCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool BCSCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> BCSCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool BCSCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> BCSCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CACTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CACTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CACTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CACTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CAPD_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CAPD_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool FCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool FCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool FCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1IN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1IN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1OUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1OUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1DIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1DIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1IFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1IFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1IES_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1IES_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1IE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1IE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1SEL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1SEL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1SEL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1SEL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P1REN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1REN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2IN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2IN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2OUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2OUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2DIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2DIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2IFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2IFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2IES_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2IES_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2IE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2IE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2SEL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2SEL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2SEL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2SEL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool P2REN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2REN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0R_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0R_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CCR0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CCR1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool TA0CCR2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USICTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USICTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USICTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USICTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USICKCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USICKCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USICNT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USICNT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USISRL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USISRL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USISRH_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USISRH_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USICTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USICTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USICCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USICCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool USISR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USISR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool WDTCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> WDTCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALDCO_16MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALDCO_16MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALBC1_16MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALBC1_16MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALDCO_12MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALDCO_12MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALBC1_12MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALBC1_12MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALDCO_8MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALDCO_8MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALBC1_8MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALBC1_8MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALDCO_1MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALDCO_1MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}
extern "C" bool CALBC1_1MHZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cerr << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CALBC1_1MHZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	std::cerr << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::alloc(rand(), w);
	return res;
}