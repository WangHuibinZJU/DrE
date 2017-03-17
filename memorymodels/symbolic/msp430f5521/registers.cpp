
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



extern "C" bool UPSC0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UPSC0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UPSC0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}




extern "C" bool flash_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> flash_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"flash_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12CTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12CTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12CTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IFG_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IFG_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IFG_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IFG_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IFG_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IFG_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IFG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IE_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IE_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IE_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IE_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IE_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IE_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IV_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IV_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IV_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IV_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IV_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IV_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM3_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM3_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM3_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM3_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM3_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM3_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM4_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM4_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM4_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM4_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM4_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM4_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM5_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM5_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM5_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM5_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM5_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM5_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM6_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM6_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM6_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM6_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM6_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM6_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM7_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM7_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM7_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM7_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM7_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM7_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM8_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM8_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM8_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM8_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM8_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM8_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM8_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM8_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM8_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM9_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM9_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM9_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM9_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM9_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM9_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM9_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM9_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM9_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM10_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM10_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM10_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM10_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM10_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM10_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM10_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM10_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM10_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM11_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM11_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM11_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM11_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM11_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM11_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM11_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM11_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM11_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM12_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM12_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM12_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM12_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM12_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM12_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM12_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM12_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM12_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM13_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM13_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM13_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM13_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM13_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM13_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM13_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM13_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM13_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM14_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM14_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM14_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM14_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM14_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM14_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM14_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM14_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM14_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM15_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM15_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM15_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM15_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM15_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM15_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MEM15_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MEM15_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MEM15_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL8_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL8_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL8_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL9_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL9_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL9_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL10_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL10_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL10_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL11_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL11_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL11_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL12_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL12_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL12_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL13_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL13_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL13_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL14_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL14_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL14_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12MCTL15_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12MCTL15_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12MCTL15_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL3_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL3_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL3_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL3_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL3_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL3_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBCTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBINT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBINT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBINT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBINT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBINT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBINT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBINT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBINT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBINT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CBIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CBIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CBIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCDI_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCDI_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCDI_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCDI_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCDI_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCDI_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCDI_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCDI_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCDI_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCDIRB_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCDIRB_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCDIRB_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCDIRB_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCDIRB_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCDIRB_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCDIRB_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCDIRB_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCDIRB_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCINIRES_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCINIRES_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCINIRES_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCINIRES_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCINIRES_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCINIRES_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCINIRES_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCINIRES_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCINIRES_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCRESR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCRESR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCRESR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCRESR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCRESR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCRESR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool CRCRESR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRCRESR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRCRESR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL3_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL3_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL3_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL3_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL3_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL3_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL4_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL4_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL4_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL4_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL4_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL4_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMACTL4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMACTL4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMACTL4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMAIV_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMAIV_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMAIV_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMAIV_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMAIV_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMAIV_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMAIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMAIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMAIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA0CTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA0CTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA0CTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA0CTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA0CTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA0CTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA0CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA0CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA0CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA0SA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA0SA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA0SA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA0DA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA0DA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA0DA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA0SZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA0SZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA0SZ_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA1CTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA1CTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA1CTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA1CTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA1CTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA1CTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA1CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA1CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA1CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA1SA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA1SA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA1SA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA1DA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA1DA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA1DA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA1SZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA1SZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA1SZ_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA2CTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA2CTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA2CTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA2CTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA2CTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA2CTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA2CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA2CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA2CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA2SA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA2SA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA2SA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA2DA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA2DA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA2DA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool DMA2SZ_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> DMA2SZ_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"DMA2SZ_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL3_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL3_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL3_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL3_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL3_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL3_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL4_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL4_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL4_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL4_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL4_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL4_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool FCTL4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> FCTL4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"FCTL4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RESLO_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RESLO_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RESLO_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RESLO_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RESLO_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RESLO_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RESLO_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RESLO_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RESLO_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RESHI_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RESHI_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RESHI_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RESHI_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RESHI_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RESHI_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RESHI_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RESHI_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RESHI_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SUMEXT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SUMEXT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SUMEXT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SUMEXT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SUMEXT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SUMEXT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SUMEXT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SUMEXT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SUMEXT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32L_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32L_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32L_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32L_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32L_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32L_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32H_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32H_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32H_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32H_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32H_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32H_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS32L_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS32L_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS32L_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS32L_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS32L_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS32L_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS32L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS32L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS32L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS32H_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS32H_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS32H_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS32H_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS32H_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS32H_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPYS32H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPYS32H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPYS32H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC32L_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC32L_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC32L_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC32L_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC32L_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC32L_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC32L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC32L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC32L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC32H_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC32H_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC32H_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC32H_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC32H_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC32H_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MAC32H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MAC32H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MAC32H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS32L_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS32L_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS32L_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS32L_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS32L_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS32L_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS32L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS32L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS32L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS32H_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS32H_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS32H_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS32H_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS32H_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS32H_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MACS32H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MACS32H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MACS32H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2L_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2L_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2L_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2L_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2L_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2L_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2H_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2H_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2H_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2H_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2H_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2H_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool OP2H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> OP2H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"OP2H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES3_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES3_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES3_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES3_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES3_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES3_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RES3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RES3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RES3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32CTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32CTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32CTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32CTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32CTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32CTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool MPY32CTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> MPY32CTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"MPY32CTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAOUT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAOUT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAOUT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAOUT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAOUT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAOUT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAOUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAOUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAOUT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PADIR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PADIR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PADIR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PADIR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PADIR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PADIR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PADIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PADIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PADIR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAREN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAREN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAREN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAREN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAREN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAREN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAREN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAREN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAREN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PADS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PADS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PADS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PADS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PADS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PADS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PADS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PADS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PADS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PASEL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PASEL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PASEL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PASEL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PASEL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PASEL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PASEL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PASEL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PASEL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIES_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIES_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIES_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIES_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIES_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIES_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIES_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIES_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIES_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIE_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIE_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIE_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIE_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIE_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIE_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIFG_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIFG_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIFG_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIFG_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIFG_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIFG_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PAIFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PAIFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PAIFG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P1IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P1IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P1IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P2IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P2IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P2IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBIN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBIN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBIN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBIN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBIN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBIN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBIN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBIN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBIN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBOUT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBOUT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBOUT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBOUT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBOUT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBOUT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBOUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBOUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBOUT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBDIR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBDIR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBDIR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBDIR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBDIR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBDIR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBDIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBDIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBDIR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBREN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBREN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBREN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBREN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBREN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBREN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBREN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBREN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBREN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBDS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBDS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBDS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBDS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBDS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBDS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBDS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBDS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBDS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBSEL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBSEL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBSEL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBSEL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBSEL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBSEL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PBSEL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PBSEL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PBSEL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCIN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCIN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCIN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCIN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCIN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCIN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCIN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCIN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCIN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCOUT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCOUT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCOUT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCOUT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCOUT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCOUT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCOUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCOUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCOUT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCDIR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCDIR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCDIR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCDIR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCDIR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCDIR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCDIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCDIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCDIR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCREN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCREN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCREN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCREN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCREN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCREN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCREN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCREN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCREN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCDS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCDS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCDS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCDS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCDS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCDS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCDS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCDS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCDS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCSEL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCSEL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCSEL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCSEL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCSEL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCSEL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PCSEL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PCSEL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PCSEL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDIN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDIN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDIN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDIN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDIN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDIN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDIN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDIN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDIN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDOUT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDOUT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDOUT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDOUT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDOUT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDOUT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDOUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDOUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDOUT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDDIR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDDIR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDDIR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDDIR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDDIR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDDIR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDDIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDDIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDDIR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDREN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDREN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDREN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDREN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDREN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDREN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDREN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDREN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDREN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDDS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDDS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDDS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDDS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDDS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDDS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDDS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDDS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDDS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDSEL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDSEL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDSEL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDSEL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDSEL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDSEL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PDSEL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PDSEL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PDSEL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJIN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJIN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJIN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJIN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJIN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJIN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJIN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJIN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJIN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJOUT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJOUT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJOUT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJOUT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJOUT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJOUT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJOUT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJOUT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJOUT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJDIR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJDIR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJDIR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJDIR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJDIR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJDIR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJDIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJDIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJDIR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJREN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJREN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJREN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJREN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJREN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJREN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJREN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJREN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJREN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJDS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJDS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJDS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJDS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJDS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJDS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PJDS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PJDS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PJDS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMAPKEYID_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMAPKEYID_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMAPKEYID_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMAPKEYID_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMAPKEYID_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMAPKEYID_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMAPKEYID_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMAPKEYID_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMAPKEYID_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMAPCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMAPCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMAPCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMAPCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMAPCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMAPCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMAPCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMAPCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMAPCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP01_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP01_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP01_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP01_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP01_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP01_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP01_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP01_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP01_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP23_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP23_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP23_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP23_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP23_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP23_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP23_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP23_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP23_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP45_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP45_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP45_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP45_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP45_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP45_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP45_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP45_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP45_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP67_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP67_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP67_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP67_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP67_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP67_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool P4MAP67_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> P4MAP67_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"P4MAP67_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMCTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMCTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMCTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMCTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMCTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMCTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMCTL1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMCTL1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMCTL1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMCTL1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMCTL1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMCTL1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMHCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMHCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMHCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMHCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMHCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMHCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMHCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMHCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMHCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMLCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMLCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMLCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMLCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMLCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMLCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMLCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMLCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMLCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMIO_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMIO_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMIO_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMIO_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMIO_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMIO_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SVSMIO_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SVSMIO_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SVSMIO_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMIFG_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMIFG_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMIFG_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMIFG_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMIFG_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMIFG_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMIFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMIFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMIFG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMRIE_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMRIE_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMRIE_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMRIE_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMRIE_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMRIE_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PMMRIE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PMMRIE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PMMRIE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PM5CTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PM5CTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PM5CTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PM5CTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PM5CTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PM5CTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool PM5CTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> PM5CTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"PM5CTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RCCTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RCCTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RCCTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RCCTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RCCTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RCCTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RCCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RCCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RCCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool REFCTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REFCTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"REFCTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool REFCTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REFCTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"REFCTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool REFCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REFCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"REFCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCCTL01_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCCTL01_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCCTL01_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCCTL01_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCCTL01_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCCTL01_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCCTL01_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCCTL01_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCCTL01_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCCTL23_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCCTL23_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCCTL23_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCCTL23_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCCTL23_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCCTL23_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCCTL23_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCCTL23_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCCTL23_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS0CTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS0CTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS0CTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS0CTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS0CTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS0CTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS0CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS0CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS0CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS1CTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS1CTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS1CTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS1CTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS1CTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS1CTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS1CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS1CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS1CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCPS_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCPS_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCPS_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCTIM0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCTIM0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCTIM0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCTIM0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCTIM0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCTIM0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCTIM0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCTIM0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCTIM0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCTIM1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCTIM1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCTIM1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCTIM1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCTIM1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCTIM1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCTIM1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCTIM1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCTIM1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCDATE_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCDATE_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCDATE_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCDATE_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCDATE_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCDATE_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCDATE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCDATE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCDATE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCYEAR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCYEAR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCYEAR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCYEAR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCYEAR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCYEAR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCYEAR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCYEAR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCYEAR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCAMINHR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCAMINHR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCAMINHR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCAMINHR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCAMINHR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCAMINHR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCAMINHR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCAMINHR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCAMINHR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCADOWDAY_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCADOWDAY_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCADOWDAY_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCADOWDAY_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCADOWDAY_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCADOWDAY_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool RTCADOWDAY_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> RTCADOWDAY_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"RTCADOWDAY_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRIE1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRIE1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRIE1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRIE1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRIE1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRIE1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRIE1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRIE1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRIE1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRIFG1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRIFG1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRIFG1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRIFG1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRIFG1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRIFG1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRIFG1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRIFG1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRIFG1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRRPCR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRRPCR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRRPCR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRRPCR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRRPCR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRRPCR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SFRRPCR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SFRRPCR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SFRRPCR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSBSLC_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSBSLC_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSBSLC_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSBSLC_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSBSLC_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSBSLC_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSBSLC_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSBSLC_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSBSLC_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBC_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBC_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBC_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBC_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBC_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBC_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBC_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBC_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBC_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBI0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBI0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBI0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBI0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBI0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBI0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBI0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBI0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBI0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBI1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBI1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBI1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBI1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBI1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBI1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBI1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBI1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBI1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBO0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBO0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBO0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBO0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBO0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBO0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBO0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBO0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBO0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBO1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBO1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBO1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBO1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBO1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBO1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSJMBO1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSJMBO1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSJMBO1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSBERRIV_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSBERRIV_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSBERRIV_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSBERRIV_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSBERRIV_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSBERRIV_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSBERRIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSBERRIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSBERRIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSUNIV_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSUNIV_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSUNIV_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSUNIV_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSUNIV_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSUNIV_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSUNIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSUNIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSUNIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSSNIV_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSSNIV_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSSNIV_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSSNIV_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSSNIV_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSSNIV_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSSNIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSSNIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSSNIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSRSTIV_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSRSTIV_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSRSTIV_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSRSTIV_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSRSTIV_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSRSTIV_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool SYSRSTIV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> SYSRSTIV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"SYSRSTIV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCTL4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCTL4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCTL4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0R_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0R_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0R_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCR0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCR0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCR1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCR1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCR2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCR2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCR3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCR3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0CCR4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0CCR4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0CCR4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA0EX0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA0EX0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA0EX0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1R_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1R_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1R_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CCR0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CCR0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CCR0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CCR1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CCR1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CCR1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1CCR2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1CCR2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1CCR2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA1EX0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA1EX0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA1EX0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2R_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2R_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2R_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CCR0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CCR0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CCR0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CCR1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CCR1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CCR1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2CCR2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2CCR2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2CCR2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TA2EX0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TA2EX0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TA2EX0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCTL6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCTL6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCTL6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0R_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0R_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0R_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0CCR6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0CCR6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0CCR6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0EX0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0EX0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0EX0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool TB0IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> TB0IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"TB0IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBKEYID_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBKEYID_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBKEYID_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBKEYID_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBKEYID_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBKEYID_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBKEYID_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBKEYID_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBKEYID_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBCNF_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBCNF_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBCNF_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBCNF_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBCNF_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBCNF_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBCNF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBCNF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
/*
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBCNF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
*/	
	ref<Expr> res = ConstantExpr::create(0x02, w);
	return res;
}
extern "C" bool USBPHYCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPHYCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPHYCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPHYCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPHYCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPHYCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPHYCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPHYCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPHYCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPWRCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPWRCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPWRCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPWRCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPWRCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPWRCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPWRCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPWRCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;

	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";

	ref<Expr> res = ConstantExpr::create(0x08, w);
	return res;

	/*
	const Array * array = new Array(
		"USBPWRCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
	*/
}
extern "C" bool USBPLLCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLDIVB_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLDIVB_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLDIVB_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLDIVB_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLDIVB_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLDIVB_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLDIVB_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLDIVB_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLDIVB_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLIR_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLIR_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLIR_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLIR_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLIR_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLIR_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBPLLIR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBPLLIR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBPLLIR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNT_0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNT_0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNT_0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNT_0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNT_0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNT_0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPIE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPIE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPIE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPIE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPIE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPIE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPIFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPIFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPIFG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPIFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPIFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPIFG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBVECINT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBVECINT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBVECINT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBVECINT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBVECINT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBVECINT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBVECINT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBVECINT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBVECINT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBMAINT_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBMAINT_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBMAINT_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBMAINT_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBMAINT_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBMAINT_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBMAINT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBMAINT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBMAINT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBTSREG_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBTSREG_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBTSREG_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBTSREG_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBTSREG_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBTSREG_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBTSREG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBTSREG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBTSREG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBFN_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBFN_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBFN_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBFN_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBFN_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBFN_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBFN_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBFN_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBFN_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIE_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIE_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIE_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIFG_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIFG_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIFG_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBFUNADR_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBFUNADR_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBFUNADR_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPSIZXY_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPSIZXY_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPSIZXY_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTY_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTY_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTY_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAY_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAY_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAY_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBCTX_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBCTX_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBCTX_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPBBAX_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPBBAX_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPBBAX_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEPCNF_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEPCNF_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEPCNF_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPSIZXY_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPSIZXY_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPSIZXY_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTY_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTY_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTY_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAY_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAY_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAY_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBCTX_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBCTX_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBCTX_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPBBAX_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPBBAX_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPBBAX_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEPCNF_1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEPCNF_1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEPCNF_1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBSUBLK_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBSUBLK_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBSUBLK_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBIEP0BUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBIEP0BUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBIEP0BUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBOEP0BUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBOEP0BUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBOEP0BUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBTOPBUFF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBTOPBUFF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBTOPBUFF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool USBSTABUFF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> USBSTABUFF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"USBSTABUFF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL1_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL1_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL1_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL1_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL1_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL1_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL1_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL1_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL1_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL2_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL2_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL2_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL2_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL2_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL2_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL2_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL3_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL3_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL3_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL3_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL3_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL3_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL3_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL3_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL3_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL4_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL4_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL4_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL4_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL4_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL4_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL4_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL4_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL4_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL5_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL5_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL5_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL5_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL5_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL5_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL5_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL5_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL5_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL6_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL6_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL6_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL6_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL6_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL6_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL6_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL6_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL6_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL7_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL7_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL7_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL7_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL7_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL7_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL7_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL7_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL7_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL8_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL8_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL8_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL8_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL8_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL8_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCSCTL8_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCSCTL8_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCSCTL8_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0CTLW0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0CTLW0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0CTLW0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0CTLW0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0CTLW0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0CTLW0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0CTLW0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0CTLW0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0CTLW0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0BRW_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0BRW_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0BRW_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0BRW_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0BRW_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0BRW_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0BRW_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0BRW_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0BRW_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0MCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0MCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0MCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0STAT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0STAT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0STAT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0RXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0RXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0RXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0TXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0TXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0TXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0ABCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0ABCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0ABCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0IRCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0IRCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0IRCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0IRCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0IRCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0IRCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0IRCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0IRCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0IRCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0ICTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0ICTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0ICTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0ICTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0ICTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0ICTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0ICTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0ICTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0ICTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA0IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA0IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA0IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0CTLW0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0CTLW0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0CTLW0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0CTLW0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0CTLW0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0CTLW0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0CTLW0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0CTLW0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0CTLW0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0BRW_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0BRW_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0BRW_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0BRW_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0BRW_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0BRW_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0BRW_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0BRW_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0BRW_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0STAT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0STAT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0STAT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0RXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0RXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0RXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0TXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0TXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0TXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0I2COA_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0I2COA_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0I2COA_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0I2COA_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0I2COA_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0I2COA_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0I2COA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0I2COA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0I2COA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0I2CSA_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0I2CSA_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0I2CSA_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0I2CSA_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0I2CSA_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0I2CSA_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0I2CSA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0I2CSA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0I2CSA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0ICTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0ICTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0ICTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0ICTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0ICTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0ICTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0ICTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0ICTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0ICTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB0IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB0IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB0IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1CTLW0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1CTLW0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1CTLW0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1CTLW0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1CTLW0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1CTLW0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1CTLW0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1CTLW0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1CTLW0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1BRW_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1BRW_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1BRW_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1BRW_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1BRW_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1BRW_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1BRW_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1BRW_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1BRW_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1MCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1MCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1MCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1STAT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1STAT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1STAT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1RXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1RXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1RXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1TXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1TXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1TXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1ABCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1ABCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1ABCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1IRCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1IRCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1IRCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1IRCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1IRCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1IRCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1IRCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1IRCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1IRCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1ICTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1ICTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1ICTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1ICTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1ICTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1ICTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1ICTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1ICTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1ICTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCA1IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCA1IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCA1IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1CTLW0_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1CTLW0_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1CTLW0_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1CTLW0_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1CTLW0_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1CTLW0_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1CTLW0_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1CTLW0_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1CTLW0_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1BRW_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1BRW_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1BRW_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1BRW_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1BRW_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1BRW_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1BRW_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1BRW_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1BRW_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1STAT_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1STAT_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1STAT_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1RXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1RXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1RXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1TXBUF_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1TXBUF_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1TXBUF_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1I2COA_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1I2COA_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1I2COA_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1I2COA_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1I2COA_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1I2COA_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1I2COA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1I2COA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1I2COA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1I2CSA_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1I2CSA_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1I2CSA_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1I2CSA_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1I2CSA_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1I2CSA_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1I2CSA_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1I2CSA_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1I2CSA_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1ICTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1ICTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1ICTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1ICTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1ICTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1ICTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1ICTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1ICTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1ICTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool UCB1IV_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> UCB1IV_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"UCB1IV_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool WDTCTL_L_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> WDTCTL_L_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"WDTCTL_L_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool WDTCTL_H_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> WDTCTL_H_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"WDTCTL_H_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool WDTCTL_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> WDTCTL_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"WDTCTL_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
//-----AUX REGISTER FUNCTIONS-----//
extern "C" ref<Expr> usb_setup_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "@" << addr <<"\n";

	//ref<ConstantExpr> addrExpr = ConstantExpr::create(addr, w);
	ref<ConstantExpr> addrExpr = Expr::createPointer(addr);
	ObjectPair op;
	s->addressSpace.resolveOne(addrExpr, op, NULL);
	const MemoryObject * mo = op.first;
	const ObjectState * os = op.second;
	

	std::cout << "addr in " << addr << "\n"
						<< " guest_address " << mo->guest_address << "\n";


	std::cout << "mo " << mo << "\n";
	uint64_t offset = addr - mo->guest_address;

	std::cout	<< "usb_setup_r offset is " << offset << "\n";

	#if 0
	++use_count;
	std::string res_name = "usb_setup_" + llvm::utostr(offset) + "_" 
		+ llvm::utostr(use_count);

	if (offset == 0x0000){ //bmRequestType
		const Array * array = new Array(res_name, w);
		//ref<Expr> res = Expr::createTempRead(array, w, true);
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	} else if (offset == 0x0001){ //bRequest
		const Array * array = new Array(res_name, w);
		//ref<Expr> res = Expr::createTempRead(array, w, true);
		ref<Expr> res = ConstantExpr::create(0x09, w);
		return res;
	} else if (offset == 0x0002){ //wValue
		//const Array * array = new Array(res_name, w);
		//ref<Expr> res = Expr::createTempRead(array, w, true);
		ref<Expr> res = ConstantExpr::create(0xff, w);
		return res;
	} else if (offset == 0x0004){ //wIndex
		ref<Expr> res = ConstantExpr::create(0x01, w);
		return res;
	} else if (offset == 0x0006){ //wLength
		const Array * array = new Array(res_name, w);
		ref<Expr> res = Expr::createTempRead(array, w, true);
		return res;
	}
	#endif

	if (offset == 0x0000){ //bmRequestType
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	} else if (offset == 0x0001){ //bRequest
		ref<Expr> res = ConstantExpr::create(0x09, w);
		return res;
	} else if (offset == 0x0002){ //wValue
		ref<Expr> res = ConstantExpr::create(0x01, w);
		return res;
	} else if (offset == 0x0003){ //wValue + 1
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	} else if (offset == 0x0004){ //wIndex
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	} else if (offset == 0x0005){ //wIndex + 1
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	} else if (offset == 0x0006){ //wLength
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	} else if (offset == 0x0007){ //Length + 1
		ref<Expr> res = ConstantExpr::create(0x00, w);
		return res;
	}

	assert(0 && "unexpected offset in usb_setup_r");


	#if 0
	const Array * array = new Array(res_name, w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
	#endif
}


extern "C" bool CRC_value_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRC_value_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"CRC_value_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool REF_calibration_length_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REF_calibration_length_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x06, w);
	return res;
}


extern "C" bool REF_25reference_factor_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REF_25reference_factor_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"REF_25reference_factor_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool Peripheral_descriptor_tag_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Peripheral_descriptor_tag_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x02, w);
	return res;
}


extern "C" bool ADC12_gain_factor_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_gain_factor_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_gain_factor_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool REF_20reference_factor_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REF_20reference_factor_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"REF_20reference_factor_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12_25temp30_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_25temp30_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_25temp30_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12_20temp85_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_20temp85_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_20temp85_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool Device_ID2_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Device_ID2_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x21, w);
	return res;
}

extern "C" bool CRC_length_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> CRC_length_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x06, w);
	return res;
}


extern "C" bool ADC12_15temp85_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_15temp85_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_15temp85_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool Die_record_tag_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Die_record_tag_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x08, w);
	return res;
}

extern "C" bool REF_calibration_tag_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REF_calibration_tag_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x12, w);
	return res;
}


extern "C" bool Firmware_revision_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Firmware_revision_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"Firmware_revision_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool Lot_wafer_id_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Lot_wafer_id_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x01020304, w);
	return res;
}


extern "C" bool Test_results_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Test_results_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"Test_results_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12_20temp30_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_20temp30_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_20temp30_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool Die_x_pos_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Die_x_pos_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x0001, w);
	return res;
}

extern "C" bool Device_ID_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Device_ID_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x55, w);
	return res;
}

extern "C" bool Info_length_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Info_length_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x06, w);
	return res;
}


extern "C" bool ADC12_15temp30_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_15temp30_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_15temp30_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool ADC12_calibration_tag_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_calibration_tag_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x11, w);
	return res;
}


extern "C" bool Hardware_revision_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Hardware_revision_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"Hardware_revision_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool ADC12_25temp85_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_25temp85_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_25temp85_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}extern "C" bool ADC12_calibration_length_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_calibration_length_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x10, w);
	return res;
}

extern "C" bool Peripheral_descriptor_length_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Peripheral_descriptor_length_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x64, w);
	return res;
}

extern "C" bool Die_record_length_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Die_record_length_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x0A, w);
	return res;
}

extern "C" bool Die_y_pos_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> Die_y_pos_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	ref<Expr> res = ConstantExpr::create(0x0002, w);
	return res;
}


extern "C" bool ADC12_offset_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> ADC12_offset_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"ADC12_offset_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
extern "C" bool REF_15reference_factor_w(ExecutionState* s, uint64_t addr, ref<Expr> v){
	std::cout << "writing to " << __PRETTY_FUNCTION__ << "\n";
	return true;
}

extern "C" ref<Expr> REF_15reference_factor_r(ExecutionState* s, uint64_t addr, Expr::Width w){
	static unsigned int use_count;
	std::cout << "reading from " << __PRETTY_FUNCTION__ << "\n";
	const Array * array = new Array(
		"REF_15reference_factor_arr" + llvm::utostr(++use_count), w);
	ref<Expr> res = Expr::createTempRead(array, w, true);
	return res;
}
