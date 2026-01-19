/* ---------- headers */

#include "xdk\xgraphicsd\execopts.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: class D3DXShader::Dependency ** D3DXShader::Instruction::GetDependenciesPtr(void);
// public: bool D3DXShader::Instruction::CanEditDependencies(void);
// public: void D3DXShader::Instruction::MarkSideEffect(enum D3DXShader::SideEffect);
// public: void D3DXShader::Instruction::SetJumpIfFalse(void);
// public: class D3DXShader::Dependency ** D3DXShader::Dependency::GetNextDependencyPtr(void);
// public: class D3DXShader::Dependency ** D3DXShader::EditingDependenciesHolder::AdvanceDependency(class D3DXShader::Dependency **);
// public: struct D3DXShader::ControlFlowEdge ** D3DXShader::Block::GetSuccessorListPtr(void);
// public: void D3DXShader::Block::SetBitIndex(unsigned int);
// public: void D3DXShader::Block::AddSideEffect(enum D3DXShader::SideEffect, class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Block::IsBlockMarked(void);
// public: void D3DXShader::Block::SetBlockMark(void);
// public: void D3DXShader::Block::ClearBlockMark(void);
// private: unsigned int D3DXShader::Compiler::GenerateNextBlockNumber(void);
// private: void D3DXShader::Compiler::MarkReachableBlocks_IgnoreBackEdges(void);
// public: void D3DXShader::Instruction_ControlTransfer::SetTargetLabel(class D3DXShader::Instruction *);
// public: void D3DXShader::Instruction_ControlTransfer::SetInternalControlFlowPreference(enum D3DXShader::ControlFlowPreference);
// public: bool D3DXShader::Instruction_ControlTransfer::IsTestControlFlowPreference(void);
// public: void D3DXShader::Dependency::ChangeUse(class D3DXShader::Instruction *);
// public: void D3DXShader::DoubleLinkListEntry<class D3DXShader::Block>::Init(void);
// public: bool D3DXShader::DoubleLinkListEntry<class D3DXShader::Block>::IsLinked(void);
// private: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::MarkListHead(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::ShouldRemoveFakeBranch(class D3DXShader::Instruction *, struct D3DXShader::Instruction_ControlTransfer *, class D3DXShader::Instruction **);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Remove(class D3DXShader::Instruction *);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::InsertNext(class D3DXShader::Block *, class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetRingEnd(void);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Init(void);
// public: void D3DXShader::Block::Init(void);
// private: class D3DXShader::Block * D3DXShader::Compiler::CreateUnlinkedBlock(void);
// private: class D3DXShader::Block * D3DXShader::Compiler::GetExecPredecessor(class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsureExecBoundary(class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsureExecBoundary(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::MarkAllocColorsExclusion(class D3DXShader::Block *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::OptimizeSQInstructions(void);

//public: class D3DXShader::Dependency ** D3DXShader::Instruction::GetDependenciesPtr(void)
//{
//    mangled_ppc("?GetDependenciesPtr@Instruction@D3DXShader@@QAAPAPAVDependency@2@XZ");
//};

//public: bool D3DXShader::Instruction::CanEditDependencies(void)
//{
//    mangled_ppc("?CanEditDependencies@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::MarkSideEffect(enum D3DXShader::SideEffect)
//{
//    mangled_ppc("?MarkSideEffect@Instruction@D3DXShader@@QAAXW4SideEffect@2@@Z");
//};

//public: void D3DXShader::Instruction::SetJumpIfFalse(void)
//{
//    mangled_ppc("?SetJumpIfFalse@Instruction@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Dependency ** D3DXShader::Dependency::GetNextDependencyPtr(void)
//{
//    mangled_ppc("?GetNextDependencyPtr@Dependency@D3DXShader@@QAAPAPAV12@XZ");
//};

//public: class D3DXShader::Dependency ** D3DXShader::EditingDependenciesHolder::AdvanceDependency(class D3DXShader::Dependency **)
//{
//    mangled_ppc("?AdvanceDependency@EditingDependenciesHolder@D3DXShader@@QAAPAPAVDependency@2@PAPAV32@@Z");
//};

//public: struct D3DXShader::ControlFlowEdge ** D3DXShader::Block::GetSuccessorListPtr(void)
//{
//    mangled_ppc("?GetSuccessorListPtr@Block@D3DXShader@@QAAPAPAUControlFlowEdge@2@XZ");
//};

//public: void D3DXShader::Block::SetBitIndex(unsigned int)
//{
//    mangled_ppc("?SetBitIndex@Block@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Block::AddSideEffect(enum D3DXShader::SideEffect, class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?AddSideEffect@Block@D3DXShader@@QAAXW4SideEffect@2@PAVInstruction@2@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Block::IsBlockMarked(void)
//{
//    mangled_ppc("?IsBlockMarked@Block@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Block::SetBlockMark(void)
//{
//    mangled_ppc("?SetBlockMark@Block@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::ClearBlockMark(void)
//{
//    mangled_ppc("?ClearBlockMark@Block@D3DXShader@@QAAXXZ");
//};

//private: unsigned int D3DXShader::Compiler::GenerateNextBlockNumber(void)
//{
//    mangled_ppc("?GenerateNextBlockNumber@Compiler@D3DXShader@@AAAIXZ");
//};

//private: void D3DXShader::Compiler::MarkReachableBlocks_IgnoreBackEdges(void)
//{
//    mangled_ppc("?MarkReachableBlocks_IgnoreBackEdges@Compiler@D3DXShader@@AAAXXZ");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetTargetLabel(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SetTargetLabel@Instruction_ControlTransfer@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetInternalControlFlowPreference(enum D3DXShader::ControlFlowPreference)
//{
//    mangled_ppc("?SetInternalControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAAXW4ControlFlowPreference@2@@Z");
//};

//public: bool D3DXShader::Instruction_ControlTransfer::IsTestControlFlowPreference(void)
//{
//    mangled_ppc("?IsTestControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Dependency::ChangeUse(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ChangeUse@Dependency@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::DoubleLinkListEntry<class D3DXShader::Block>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@VBlock@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkListEntry<class D3DXShader::Block>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@VBlock@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::MarkListHead(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@CAPAVInstruction@2@PAV32@@Z");
//};

//private: bool D3DXShader::Compiler::ShouldRemoveFakeBranch(class D3DXShader::Instruction *, struct D3DXShader::Instruction_ControlTransfer *, class D3DXShader::Instruction **)
//{
//    mangled_ppc("?ShouldRemoveFakeBranch@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAUInstruction_ControlTransfer@2@PAPAV32@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Remove(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@SAXPAVInstruction@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::InsertNext(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?InsertNext@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@SAXPAVBlock@2@0@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@AAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::Init(void)
//{
//    mangled_ppc("?Init@Block@D3DXShader@@QAAXXZ");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::CreateUnlinkedBlock(void)
//{
//    mangled_ppc("?CreateUnlinkedBlock@Compiler@D3DXShader@@AAAPAVBlock@2@XZ");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::GetExecPredecessor(class D3DXShader::Block *)
//{
//    mangled_ppc("?GetExecPredecessor@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsureExecBoundary(class D3DXShader::Block *)
//{
//    mangled_ppc("?EnsureExecBoundary@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsureExecBoundary(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?EnsureExecBoundary@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::MarkAllocColorsExclusion(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?MarkAllocColorsExclusion@Compiler@D3DXShader@@AAAXPAVBlock@2@0@Z");
//};

//private: void D3DXShader::Compiler::OptimizeSQInstructions(void)
//{
//    mangled_ppc("?OptimizeSQInstructions@Compiler@D3DXShader@@AAAXXZ");
//};

