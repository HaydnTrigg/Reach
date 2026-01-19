/* ---------- headers */

#include "xdk\xgraphicsd\peeps.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: bool D3DXShader::Instruction::CanUseConditionRegister(void);
// public: void D3DXShader::Dependency::ApplySwizzle(unsigned int);
// public: bool D3DXShader::Dependency::UsesComponent(enum D3DXShader::Component);
// public: void D3DXShader::Compiler::NoteCurrentInstrNumber(void);
// public: struct D3DXShader::Instruction_UNUSED_OPERAND * D3DXShader::Instruction::GetUnusedOperandInfo(class D3DXShader::Compiler *);
// public: void D3DXShader::Instruction::RecomputeConstantWriteMask(void);
// public: void D3DXShader::Instruction::RemoveUnusedDependent(class D3DXShader::Dependency *, class D3DXShader::Compiler *);
// public: void D3DXShader::Instruction::RemoveAllUnusedDependents(class D3DXShader::Compiler *);
// private: bool D3DXShader::Compiler::CanUseMulAdd(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, struct D3DXShader::PeepMulAddState *);
// public: bool D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsSet(unsigned int);
// public: bool D3DXShader::Compiler::ShouldntRedirectVariableProbesToConstants(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MULADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: bool D3DXShader::Instruction::SupportsInputDef_AfterCleanPhase(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// private: void D3DXShader::Compiler::LatePeeps(void);

//public: bool D3DXShader::Instruction::CanUseConditionRegister(void)
//{
//    mangled_ppc("?CanUseConditionRegister@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Dependency::ApplySwizzle(unsigned int)
//{
//    mangled_ppc("?ApplySwizzle@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Dependency::UsesComponent(enum D3DXShader::Component)
//{
//    mangled_ppc("?UsesComponent@Dependency@D3DXShader@@QAA_NW4Component@2@@Z");
//};

//public: void D3DXShader::Compiler::NoteCurrentInstrNumber(void)
//{
//    mangled_ppc("?NoteCurrentInstrNumber@Compiler@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::Instruction_UNUSED_OPERAND * D3DXShader::Instruction::GetUnusedOperandInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetUnusedOperandInfo@Instruction@D3DXShader@@QAAPAUInstruction_UNUSED_OPERAND@2@PAVCompiler@2@@Z");
//};

//public: void D3DXShader::Instruction::RecomputeConstantWriteMask(void)
//{
//    mangled_ppc("?RecomputeConstantWriteMask@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::RemoveUnusedDependent(class D3DXShader::Dependency *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?RemoveUnusedDependent@Instruction@D3DXShader@@QAAXPAVDependency@2@PAVCompiler@2@@Z");
//};

//public: void D3DXShader::Instruction::RemoveAllUnusedDependents(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?RemoveAllUnusedDependents@Instruction@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanUseMulAdd(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, struct D3DXShader::PeepMulAddState *)
//{
//    mangled_ppc("?CanUseMulAdd@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0PAVDependency@2@1PAUPeepMulAddState@2@@Z");
//};

//public: bool D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsSet(unsigned int)
//{
//    mangled_ppc("?IsSet@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Compiler::ShouldntRedirectVariableProbesToConstants(void)
//{
//    mangled_ppc("?ShouldntRedirectVariableProbesToConstants@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MULADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MULADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@22@Z");
//};

//public: bool D3DXShader::Instruction::SupportsInputDef_AfterCleanPhase(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?SupportsInputDef_AfterCleanPhase@Instruction@D3DXShader@@QAA_NPAV12@PAVCompiler@2@@Z");
//};

//private: void D3DXShader::Compiler::LatePeeps(void)
//{
//    mangled_ppc("?LatePeeps@Compiler@D3DXShader@@AAAXXZ");
//};

