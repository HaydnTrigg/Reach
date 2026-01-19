/* ---------- headers */

#include "xdk\xgraphicsd\debug.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **D3DXShader::g_rgszOpcodeNames; // "?g_rgszOpcodeNames@D3DXShader@@3PAPBDA"
// char const **D3DXShader::g_rgSpecialRegNames; // "?g_rgSpecialRegNames@D3DXShader@@3PAPBDA"
// char const **D3DXShader::g_rgpszAsmOpcodeNames; // "?g_rgpszAsmOpcodeNames@D3DXShader@@3PAPBDA"
// bool D3DXShader::g_fExpensiveValidation; // "?g_fExpensiveValidation@D3DXShader@@3_NA"
// bool D3DXShader::g_fAssertInProgress; // "?g_fAssertInProgress@D3DXShader@@3_NA"

// unsigned __int64 D3DXShader::GetLowestBitMask(unsigned __int64);
// unsigned int D3DXShader::FindHighestBit(unsigned int);
// bool D3DXShader::IsSingleBit(unsigned __int64);
// unsigned int D3DXShader::FindSingleBit(unsigned int);
// unsigned int D3DXShader::FindSingleBit(unsigned __int64);
// unsigned int D3DXShader::FindLowestBit(unsigned int);
// unsigned int D3DXShader::FindLowestBit(unsigned __int64);
// unsigned int D3DXShader::CompMask(enum D3DXShader::Component);
// unsigned int D3DXShader::GetRegIndex(unsigned int);
// unsigned int D3DXShader::GetRegComponentMask(unsigned int);
// unsigned int D3DXShader::MakeReg(unsigned int, unsigned int);
// enum D3DXShader::Component D3DXShader::GetSwizzleComponent(unsigned int, unsigned int);
// unsigned int D3DXShader::MaskSwizzle(unsigned int, unsigned int);
// public: class D3DXShader::Compiler * D3DXShader::Instruction_ControlTransfer::GetCompiler(void);
// public: bool D3DXShader::Instruction_SIDE_EFFECT::IsEndOfVariableLifetime(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::GetDependents(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::GetDependencies(void);
// public: bool D3DXShader::Instruction::IsClamped(void);
// public: unsigned int D3DXShader::Instruction::GetWriteMask(void);
// public: bool D3DXShader::Instruction::IsExport(void);
// public: bool D3DXShader::Instruction::SetsSpecialRegister(void);
// public: bool D3DXShader::Instruction::SetsPredicate(void);
// public: bool D3DXShader::Instruction::SetsAddress(void);
// public: bool D3DXShader::Instruction::SetsLOD(void);
// public: enum D3DXShader::Opcode D3DXShader::Instruction::GetOpcode(void);
// public: bool D3DXShader::Instruction::IsScalar(void);
// public: bool D3DXShader::Instruction::IsVector(void);
// public: bool D3DXShader::Instruction::IsALU(void);
// public: bool D3DXShader::Instruction::IsControl(void);
// public: bool D3DXShader::Instruction::IsTexture(void);
// public: bool D3DXShader::Instruction::IsMicrocode(void);
// public: bool D3DXShader::Instruction::IsCONSTANT(void);
// public: bool D3DXShader::Instruction::IsVARIABLE(void);
// public: bool D3DXShader::Instruction::DefinesConstantRegister(void);
// public: bool D3DXShader::Instruction::IsPHI(void);
// public: bool D3DXShader::Instruction::IsMERGE(void);
// public: bool D3DXShader::Instruction::IsINPUT(void);
// public: bool D3DXShader::Instruction::IsVFETCH(void);
// public: bool D3DXShader::Instruction::IsTFETCH(void);
// public: bool D3DXShader::Instruction::IsRELATIVE(void);
// public: bool D3DXShader::Instruction::IsCall(void);
// public: bool D3DXShader::Instruction::IsPredicatePush(void);
// public: bool D3DXShader::Instruction::IsPredicateStackOp(void);
// public: bool D3DXShader::Instruction::IsAlloc(void);
// public: unsigned int D3DXShader::Instruction::GetNumOutputComponents(void);
// public: bool D3DXShader::Instruction::IsPredicated(void);
// public: bool D3DXShader::Instruction::GetPredicateCondition(void);
// public: bool D3DXShader::Instruction::IsStatic(void);
// public: bool D3DXShader::Instruction::IsCleaned(void);
// public: bool D3DXShader::Instruction::HasGlobalUses(void);
// public: bool D3DXShader::Instruction::HasSideEffects(void);
// public: bool D3DXShader::Instruction::IsMarked(void);
// public: bool D3DXShader::Instruction::IsThreadDependent(void);
// public: unsigned int D3DXShader::Instruction::GetNumOperands(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::GetOperand(unsigned int);
// public: bool D3DXShader::Instruction::HasOperand(unsigned int);
// public: bool D3DXShader::Instruction::HasTFETCHInfo(void);
// public: bool D3DXShader::Instruction::HasControlTransferInfo(void);
// public: bool D3DXShader::Instruction::IsVirtualRegisterAssigned(void);
// public: unsigned int D3DXShader::Instruction::GetRegOptIndex(void);
// public: void D3DXShader::ReadOnlyDependencyListHolder::Cancel(void);
// public: D3DXShader::ReadOnlyDependencyListHolder::~ReadOnlyDependencyListHolder(void);
// public: void D3DXShader::ReadOnlyDependentListHolder::Cancel(void);
// public: D3DXShader::ReadOnlyDependentListHolder::~ReadOnlyDependentListHolder(void);
// public: class D3DXShader::Compiler * D3DXShader::Dependency::GetCompiler(void);
// public: unsigned int D3DXShader::Dependency::GetNumComponents(void);
// public: bool D3DXShader::Dependency::IsOrderingDependency(void);
// public: bool D3DXShader::Dependency::IsSideEffectDependency(void);
// public: bool D3DXShader::Dependency::IsVectorRegisterDependency(void);
// public: bool D3DXShader::Dependency::IsSpecialRegisterDependency(void);
// public: bool D3DXShader::Dependency::IsScalar(void);
// public: unsigned int D3DXShader::Dependency::GetSwizzle(void);
// public: unsigned int D3DXShader::Dependency::GetRegister(void);
// public: enum D3DXShader::SpecialRegister D3DXShader::Dependency::GetSpecialRegister(void);
// public: enum D3DXShader::SideEffect D3DXShader::Dependency::GetSideEffect(void);
// public: bool D3DXShader::Dependency::IsRegisterAssigned(void);
// public: class D3DXShader::Dependency * D3DXShader::Dependency::GetNextDependent(void);
// public: class D3DXShader::Dependency * D3DXShader::Dependency::GetNextDependency(void);
// public: class D3DXShader::Instruction * D3DXShader::Dependency::GetDef(void);
// public: bool D3DXShader::Dependency::InUse(void);
// public: class D3DXShader::Instruction * D3DXShader::Dependency::GetUse(void);
// public: void D3DXShader::Dependency::FindScalarOperandSource(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *);
// public: enum D3DXShader::Result::DataTypes D3DXShader::Result::GetType(void);
// public: bool D3DXShader::Result::IsEmpty(void);
// private: bool D3DXShader::Block::ValidUnionState(enum D3DXShader::Block::UnionState);
// public: bool D3DXShader::Block::IsSubEntryPoint(void);
// public: bool D3DXShader::Block::IsSubReturnBlock(void);
// public: bool D3DXShader::Block::IsSubReturnSite(void);
// public: struct D3DXShader::SubEntryBlockInfo * D3DXShader::Block::GetSubEntryBlockInfo(void);
// public: struct D3DXShader::Function * D3DXShader::Block::GetFunction(void);
// public: struct D3DXShader::ControlFlowEdge * D3DXShader::Block::GetPredecessorList(void);
// public: struct D3DXShader::ControlFlowEdge * D3DXShader::Block::GetSuccessorList(void);
// public: bool D3DXShader::Block::HasMultipleSuccessors(void);
// public: unsigned int D3DXShader::Block::GetDebugBlkNum(void);
// public: unsigned int D3DXShader::Block::GetBitIndex(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetTwin(void);
// public: unsigned int D3DXShader::Block::GetWeight(void);
// public: bool D3DXShader::Block::IsPredicated(void);
// public: bool D3DXShader::Block::UsesConditionalExecute(void);
// public: bool D3DXShader::Block::HasPredicatedControlTransfer(void);
// public: bool D3DXShader::Block::HasPredicatedFallThrough(void);
// public: bool D3DXShader::Block::UsesPredicateRegister(void);
// public: bool D3DXShader::Block::GetPredicateRegisterCondition(void);
// public: bool D3DXShader::Block::UsesConditionRegister(void);
// public: bool D3DXShader::Block::GetConditionRegisterCondition(void);
// public: class D3DXShader::Dependency * D3DXShader::Block::GetConditionDependency(void);
// public: D3DXShader::DataFlowPredecessorEnumerator::DataFlowPredecessorEnumerator(class D3DXShader::Block *, bool);
// public: class D3DXShader::Block * D3DXShader::DataFlowPredecessorEnumerator::GetNextPredecessor(void);
// public: unsigned long D3DXShader::Compiler::GetContextData(void);
// public: bool D3DXShader::Compiler::IsContextInstr(class D3DXShader::Instruction *);
// public: bool D3DXShader::Compiler::NeedStatementDebugInfo(void);
// public: bool D3DXShader::Compiler::InPhase(unsigned int);
// public: bool D3DXShader::Compiler::AfterPhase(unsigned int);
// public: bool D3DXShader::Compiler::InOrAfterPhase(unsigned int);
// public: void D3DXShader::Compiler::StartNewPass(void);
// public: bool D3DXShader::Compiler::Visited(class D3DXShader::Instruction *);
// public: char const * D3DXShader::Compiler::GetFunctionName(struct D3DXShader::Function *);
// public: char const * D3DXShader::Compiler::GetCurrentFunctionName(void);
// public: char const * D3DXShader::Compiler::GetCurrentFunctionFileName(void);
// public: unsigned int D3DXShader::Compiler::GetNumImportDefs(void);
// public: bool D3DXShader::Compiler::PreCleanInstructionUnionStateIsValid(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction_ControlTransfer::GetTargetLabel(void);
// public: unsigned long D3DXShader::Instruction_ControlTransfer::GetTargetLabelAddress(void);
// public: enum D3DXShader::ControlFlowPreference D3DXShader::Instruction_ControlTransfer::GetControlFlowPreference(void);
// public: bool D3DXShader::Instruction_ControlTransfer::IsAttributeControlFlowPreference(void);
// public: bool D3DXShader::Instruction_ControlTransfer::IsInternalControlFlowPreference(void);
// public: bool D3DXShader::Instruction_ControlTransfer::HasUnrollIterationCountDependency(void);
// public: bool D3DXShader::Instruction::HasMultipleDependencies(void);
// public: static unsigned long D3DXShader::Instruction::ComputeAllocSize(class D3DXShader::Compiler *, enum D3DXShader::Opcode, unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::IsPerComponent(void);
// public: bool D3DXShader::Instruction::SupportsInputModifiers(unsigned int);
// public: unsigned int D3DXShader::Instruction::GetDefIndex(void);
// public: bool D3DXShader::Instruction::IsScheduled(void);
// public: unsigned int D3DXShader::Instruction::GetReverseSlotNumber(void);
// public: enum D3DXShader::ConstantValueType D3DXShader::Instruction::GetConstantValueType(unsigned int);
// public: unsigned int D3DXShader::Instruction::GetConstraintFlags(unsigned int);
// public: D3DXShader::ReadOnlyDependencyListHolder::ReadOnlyDependencyListHolder(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: D3DXShader::ReadOnlyDependentListHolder::ReadOnlyDependentListHolder(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: bool D3DXShader::Instruction::IsOutputRegisterAssigned(void);
// public: unsigned int D3DXShader::Instruction::GetOutputRegisterIndex(void);
// private: void D3DXShader::Block::SetUnionState(enum D3DXShader::Block::UnionState);
// char const * D3DXShader::GetUnitName(enum D3DXShader::InstructionUnitType);
// char const * D3DXShader::GetPhaseName(unsigned int);
// public: void D3DXShader::Compiler::dbgprintf(char const *, ...);
// public: void D3DXShader::Compiler::PrintSwizzle(unsigned int, unsigned int);
// public: void D3DXShader::Compiler::PrintRegisterNumber(unsigned int);
// public: void D3DXShader::Compiler::PrintTempRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintConstantRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintSamplerRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintVertexFetchRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintConditionRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintIntegerRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintVirtualRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintVariableRegister(unsigned int, unsigned int);
// public: void D3DXShader::Compiler::PrintOutputRegister(unsigned int);
// public: void D3DXShader::Compiler::PrintDependencyDef(class D3DXShader::Instruction *, unsigned int);
// public: void D3DXShader::Compiler::PrintBlockName(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::SaveBlockGraph(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation>::Init(void);
// public: static unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::GetBitCapacity(void);
// public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::IsAnyBitSet(void);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindSetBit(unsigned int);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::AtEnd(void);
// private: bool D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsPointer(void) const;
// private: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ComputeArrayOffset(unsigned int);
// private: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ComputeBitShift(unsigned int);
// private: unsigned int * D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ComputeWordPtr(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 1>::ComputeBitShift(unsigned int);
// private: unsigned int D3DXShader::ArrayBitSet<unsigned int>::ComputeBitShift_NoValidation(unsigned int);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Position *);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 1>::ComputeArrayOffset(unsigned int);
// private: unsigned int D3DXShader::ArrayBitSet<unsigned int>::ComputeArrayOffset_NoValidation(unsigned int);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry>::Init(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// bool D3DXShader::IsAnyBitSetInArray<unsigned int>(unsigned int *, unsigned long);
// unsigned int D3DXShader::FindSetBitInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned long);
// public: void D3DXShader::CompilerHeap::HeapAllocation::Init(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction_ControlTransfer::GetUnrollIterationCountDependency(void);
// public: unsigned long D3DXShader::Instruction::GetAllocSize(class D3DXShader::Compiler *);
// public: float * D3DXShader::Instruction::GetConstantValuePtr(unsigned int);
// public: float D3DXShader::Instruction::GetFloatConstantValue(unsigned int);
// public: bool D3DXShader::Instruction::IsFloatConstant(unsigned int);
// public: bool D3DXShader::Instruction::IsIntegerConstant(unsigned int);
// public: bool D3DXShader::Instruction::IsSignedIntegerConstant(unsigned int);
// public: unsigned int D3DXShader::Instruction::GetIntegerConstantValue(unsigned int);
// public: struct D3DXShader::Instruction_VARIABLE * D3DXShader::Instruction::GetVarInfo(class D3DXShader::Compiler *);
// public: unsigned int D3DXShader::Instruction::GetVarIndex(class D3DXShader::Compiler *);
// public: unsigned int D3DXShader::Instruction::GetVarRegIndex(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_VFETCH * D3DXShader::Instruction::GetVFETCHInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_TFETCH * D3DXShader::Instruction::GetTFETCHInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_ControlTransfer * D3DXShader::Instruction::GetControlTransferInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_PHI * D3DXShader::Instruction::GetPHIInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_MISSING_DEF * D3DXShader::Instruction::GetMissingDefInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_LoopStart * D3DXShader::Instruction::GetLoopStartInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_LoopEnd * D3DXShader::Instruction::GetLoopEndInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_ALLOC_EXPORT * D3DXShader::Instruction::GetAllocExportInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_SIDE_EFFECT * D3DXShader::Instruction::GetSideEffectInfo(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_INTEGER_MATH * D3DXShader::Instruction::GetIntegerMathInfo(class D3DXShader::Compiler *);
// public: enum D3DXShader::IntegerMathOp D3DXShader::Instruction::GetIntegerOp(class D3DXShader::Compiler *);
// public: unsigned int D3DXShader::Instruction::GetVirtualRegister(void);
// public: unsigned int D3DXShader::Dependency::GetModifiers(void);
// public: unsigned int D3DXShader::Dependency::GetInputModifiers(void);
// public: unsigned int D3DXShader::Dependency::GetOutputModifiers(void);
// public: unsigned int D3DXShader::Dependency::GetRelativeModifiers(void);
// public: class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> * D3DXShader::Block::GetPrologue(void);
// public: class D3DXShader::FixedSizeBitSet<unsigned int, 1> * D3DXShader::Block::GetLoopSet(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetPredicateRegisterControllingBlock(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetConditionRegisterControllingBlock(void);
// public: unsigned int D3DXShader::Instruction::CountDependencies(void);
// public: double D3DXShader::Instruction::GetConstantValue_InAnyPhase(unsigned int);
// public: double D3DXShader::Instruction::GetConstantValue(unsigned int);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SetBit(unsigned int);
// public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetBitCapacity(void);
// public: bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Contains(class D3DXShader::Instruction *);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::SetBitRange(unsigned int, unsigned int);
// private: unsigned int * D3DXShader::FixedSizeBitSet<unsigned int, 1>::ComputeWordPtr(unsigned int);
// private: unsigned int * D3DXShader::ArrayBitSet<unsigned int>::ComputeWordPtr_NoValidation(unsigned int);
// private: unsigned int * D3DXShader::ArrayBitSet<unsigned int>::ComputeWordPtr(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: bool D3DXShader::Instruction::IsConvertedToMicrocode(void);
// public: bool D3DXShader::Instruction::ShouldBeInBody_BeforeScheduling(void);
// public: bool D3DXShader::Instruction::ShouldBeInBody(void);
// public: class D3DXShader::Block * D3DXShader::Compiler::GetEntryBlock(void);
// public: bool D3DXShader::Instruction::IsInPrologue(void);
// public: void D3DXShader::Compiler::PrintDebugOption(unsigned int);
// public: void D3DXShader::Compiler::SetDebugOptions(void);
// public: void D3DXShader::Compiler::PrintDependency(class D3DXShader::Dependency *, bool);
// public: bool D3DXShader::Compiler::PrintDependencyList(class D3DXShader::Instruction *, bool, bool, bool);
// public: int D3DXShader::Compiler::NumberInstructions(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, int);
// public: int D3DXShader::Compiler::NumberInstructions(class D3DXShader::Block *, int);
// public: class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetTail(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: bool D3DXShader::Instruction::CanHaveOrderingDependencies(void);
// public: void D3DXShader::Compiler::SetContextData(unsigned long);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindBranchInstruction(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::PrintInstruction(class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::PrintInstructionList(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::Compiler::PrintBlockFlowInfo(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::PrintBlock(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::PrintFunction(void);
// public: void D3DXShader::Compiler::PrintNewInstructions(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GoToBeginning(void);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::AtBeginning(void);
// void D3DXShader::AssertionFailedW(class D3DXShader::Compiler *, wchar_t const *, wchar_t const *, unsigned int, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::CleanDebugInfo(void *, unsigned long, unsigned long, unsigned long, bool);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::InitFixedSize(unsigned int, void * (*)(void *, unsigned long), void *);
// public: bool D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsAnyBitClear(unsigned int, unsigned int);
// public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::FindSetBit(unsigned int);
// public: D3DXShader::ArrayBitSet<unsigned int>::ArrayBitSet<unsigned int>(unsigned int *, unsigned int);
// public: unsigned int D3DXShader::ArrayBitSet<unsigned int>::GetBitRangeAligned(unsigned int, unsigned int);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)> *);
// public: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::PeekNext(void);
// private: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ValidateIndex(unsigned int);
// public: bool D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::IsEmpty(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::GetBitRangeAligned(unsigned int, unsigned int);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> *);
// bool D3DXShader::IsBitSetInArray<unsigned int>(unsigned int *, unsigned int, unsigned int);
// unsigned int D3DXShader::FindSetBitInArray<unsigned int>(unsigned int *, unsigned int, unsigned long);
// public: enum D3DXShader::InstructionUnitType D3DXShader::Instruction::GetUnit(void);
// public: unsigned long D3DXShader::Instruction::GetExecAddress(void);
// public: bool D3DXShader::Instruction::StartsNewExecBlock(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::GetWorkList(void);
// public: bool D3DXShader::Dependency::IsNegated(void);
// public: bool D3DXShader::Dependency::IsAbs(void);
// public: unsigned int D3DXShader::Dependency::GetMaskedSwizzle(void);
// public: enum D3DXShader::Component D3DXShader::Dependency::GetSwizzleComponent(unsigned int);
// public: unsigned int D3DXShader::Dependency::GetWriteMaskRequired(void);
// public: bool D3DXShader::Dependency::IsEquivalentVectorDependency(class D3DXShader::Dependency *);
// public: bool D3DXShader::Result::IsIndexed(void);
// public: class D3DXShader::Instruction * D3DXShader::Result::GetInstruction(void);
// public: class D3DXShader::Dependency * D3DXShader::Result::GetDependency(void);
// public: class D3DXShader::Result * D3DXShader::Result::GetResultPtr(void);
// public: struct D3DXShader::IndexedResult * D3DXShader::Result::GetIndexedResultPtr(void);
// public: unsigned int D3DXShader::Result::GetComponentIndex(void);
// public: unsigned int D3DXShader::Result::GetVarIndex(void);
// public: unsigned int D3DXShader::Result::GetVarComponentIndex(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetFirstPredecessor(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetFirstSuccessor(void);
// public: bool D3DXShader::Block::HasMultiplePredecessors(void);
// public: bool D3DXShader::Block::HasDomSet(void);
// public: bool D3DXShader::Block::IsUnreachable(void);
// public: class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)> * D3DXShader::Block::GetDomFrontier(void);
// public: class D3DXShader::Result * D3DXShader::Block::GetVariableDefs(unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Block::GetLastSideEffect(enum D3DXShader::SideEffect);
// public: unsigned long D3DXShader::Compiler::ComputeContextDataForBlock(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::SetContextInstr(class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::SetContextBlock(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::VisitOnce(class D3DXShader::Instruction *);
// public: class D3DXShader::Block * D3DXShader::Instruction_ControlTransfer::GetTarget(void);
// public: bool D3DXShader::Dependency::IsClamped(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FindMERGEDependent(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::FindPredicateDep(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FindPredicateDef(void);
// public: unsigned int D3DXShader::Instruction::GetPHIVisitNumber(void);
// public: bool D3DXShader::Instruction::IsUselessInstruction(void);
// public: bool D3DXShader::Instruction::IsScheduledBefore(class D3DXShader::Instruction *);
// public: unsigned int D3DXShader::Instruction::GetOutputRegister(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::GetRELATIVEBaseDef(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FindAddressDef_AfterCleanPhase(void);
// public: bool D3DXShader::Block::IsPredecessorOf(class D3DXShader::Block *);
// public: bool D3DXShader::Block::IsSuccessorOf(class D3DXShader::Block *);
// public: unsigned int * D3DXShader::Block::GetDomSet(void);
// public: bool D3DXShader::Block::Dominates(class D3DXShader::Block *);
// public: bool D3DXShader::Block::StrictlyDominates(class D3DXShader::Block *);
// public: class D3DXShader::Block * D3DXShader::Block::GetDomParent(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetDomChild(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetDomSibling(void);
// public: unsigned int * D3DXShader::Block::GetControllingBlockSet(void);
// public: unsigned int * D3DXShader::Block::GetControlSet(void);
// public: bool D3DXShader::Block::StartsNewExecBlock(void);
// public: unsigned long D3DXShader::Block::GetAddress(void);
// public: void D3DXShader::Compiler::PrintResult(class D3DXShader::Result *, char const *);
// public: void D3DXShader::Compiler::PrintDominanceSet(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::PrintDominanceSets(void);
// public: void D3DXShader::Compiler::PrintDominanceGraph(void);
// public: void D3DXShader::Compiler::PrintDominanceFrontiers(void);
// public: void D3DXShader::Compiler::PrintControlSets(void);
// public: void D3DXShader::Compiler::PrintControllingBlockSets(void);
// public: void D3DXShader::Compiler::CheckDependents(class D3DXShader::Block *, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::UpdateLiveInstrCount(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::AddToTail(struct D3DXShader::CompilerHeap::HeapAllocation *);
// public: bool D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::IsEmpty(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::GetBitRange(unsigned int, unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *);
// private: void * D3DXShader::CompilerHeap::GetHeapMemory(unsigned long);
// public: void * D3DXShader::CompilerHeap::Alloc(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: static void * D3DXShader::CompilerHeap::AllocInContext(void *, unsigned long);
// public: void * D3DXShader::Compiler::AllocPhaseMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: void * D3DXShader::Compiler::AllocSmallPhaseMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: void D3DXShader::Compiler::FreePhaseMem(void *, unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// void * D3DXShader::AllocMemForBitSet(void *, unsigned long);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FindAddressDef(void);
// public: void D3DXShader::Compiler::CheckDependencies(class D3DXShader::Block *, class D3DXShader::Instruction *);
// public: void D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::RemoveAll(void);
// public: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetNext(void);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::GetField(unsigned int);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: void D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::RemoveAll(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetSpaceWorker(unsigned int);
// public: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::GetSpaceWorker(unsigned int);
// public: void D3DXShader::Compiler::PrintVariableDebugInfoDeltas(struct D3DXShader::VariableDebugInfoDeltaState *);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::operator[](unsigned int);
// public: void D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Init(void);
// public: void D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::PopAll(void);
// private: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetSpace(unsigned int);
// public: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetPrev(void);
// public: void D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Init(void);
// public: class D3DXShader::CNode * D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::RemoveLast(void);
// private: class D3DXShader::CNode ** D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::GetSpace(unsigned int);
// public: bool D3DXShader::Dependency::IsConstant(double);
// public: void D3DXShader::Compiler::CheckInstructionList(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::Compiler::CheckBlock(class D3DXShader::Block *);
// public: void D3DXShader::Compiler::CheckFunction(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Append(struct D3DXShader::VariableDebugInfo *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::RemoveNext(void);
// public: void D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Init(void);
// public: class D3DXShader::CNode * D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Pop(void);
// public: void D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Append(class D3DXShader::CNode *);
// public: void D3DXShader::Compiler::UpdateVariableDebugInfoDeltas(struct D3DXShader::VariableDebugInfoDeltaState *, bool, class D3DXShader::Instruction *);
// public: void D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Push(class D3DXShader::CNode *);
// public: void D3DXShader::Compiler::PrintAsm(void);
// public: unsigned int D3DXShader::Compiler::ScanForMultipleLineNumbers(class D3DXShader::CNode *);

//unsigned __int64 D3DXShader::GetLowestBitMask(unsigned __int64)
//{
//    mangled_ppc("?GetLowestBitMask@D3DXShader@@YA_K_K@Z");
//};

//unsigned int D3DXShader::FindHighestBit(unsigned int)
//{
//    mangled_ppc("?FindHighestBit@D3DXShader@@YAII@Z");
//};

//bool D3DXShader::IsSingleBit(unsigned __int64)
//{
//    mangled_ppc("?IsSingleBit@D3DXShader@@YA_N_K@Z");
//};

//unsigned int D3DXShader::FindSingleBit(unsigned int)
//{
//    mangled_ppc("?FindSingleBit@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::FindSingleBit(unsigned __int64)
//{
//    mangled_ppc("?FindSingleBit@D3DXShader@@YAI_K@Z");
//};

//unsigned int D3DXShader::FindLowestBit(unsigned int)
//{
//    mangled_ppc("?FindLowestBit@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::FindLowestBit(unsigned __int64)
//{
//    mangled_ppc("?FindLowestBit@D3DXShader@@YAI_K@Z");
//};

//unsigned int D3DXShader::CompMask(enum D3DXShader::Component)
//{
//    mangled_ppc("?CompMask@D3DXShader@@YAIW4Component@1@@Z");
//};

//unsigned int D3DXShader::GetRegIndex(unsigned int)
//{
//    mangled_ppc("?GetRegIndex@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::GetRegComponentMask(unsigned int)
//{
//    mangled_ppc("?GetRegComponentMask@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::MakeReg(unsigned int, unsigned int)
//{
//    mangled_ppc("?MakeReg@D3DXShader@@YAIII@Z");
//};

//enum D3DXShader::Component D3DXShader::GetSwizzleComponent(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetSwizzleComponent@D3DXShader@@YA?AW4Component@1@II@Z");
//};

//unsigned int D3DXShader::MaskSwizzle(unsigned int, unsigned int)
//{
//    mangled_ppc("?MaskSwizzle@D3DXShader@@YAIII@Z");
//};

//public: class D3DXShader::Compiler * D3DXShader::Instruction_ControlTransfer::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@Instruction_ControlTransfer@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: bool D3DXShader::Instruction_SIDE_EFFECT::IsEndOfVariableLifetime(void)
//{
//    mangled_ppc("?IsEndOfVariableLifetime@Instruction_SIDE_EFFECT@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::GetDependents(void)
//{
//    mangled_ppc("?GetDependents@Instruction@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::GetDependencies(void)
//{
//    mangled_ppc("?GetDependencies@Instruction@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: bool D3DXShader::Instruction::IsClamped(void)
//{
//    mangled_ppc("?IsClamped@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetWriteMask(void)
//{
//    mangled_ppc("?GetWriteMask@Instruction@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Instruction::IsExport(void)
//{
//    mangled_ppc("?IsExport@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::SetsSpecialRegister(void)
//{
//    mangled_ppc("?SetsSpecialRegister@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::SetsPredicate(void)
//{
//    mangled_ppc("?SetsPredicate@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::SetsAddress(void)
//{
//    mangled_ppc("?SetsAddress@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::SetsLOD(void)
//{
//    mangled_ppc("?SetsLOD@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: enum D3DXShader::Opcode D3DXShader::Instruction::GetOpcode(void)
//{
//    mangled_ppc("?GetOpcode@Instruction@D3DXShader@@QAA?AW4Opcode@2@XZ");
//};

//public: bool D3DXShader::Instruction::IsScalar(void)
//{
//    mangled_ppc("?IsScalar@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsVector(void)
//{
//    mangled_ppc("?IsVector@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsALU(void)
//{
//    mangled_ppc("?IsALU@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsControl(void)
//{
//    mangled_ppc("?IsControl@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsTexture(void)
//{
//    mangled_ppc("?IsTexture@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsMicrocode(void)
//{
//    mangled_ppc("?IsMicrocode@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsCONSTANT(void)
//{
//    mangled_ppc("?IsCONSTANT@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsVARIABLE(void)
//{
//    mangled_ppc("?IsVARIABLE@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::DefinesConstantRegister(void)
//{
//    mangled_ppc("?DefinesConstantRegister@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsPHI(void)
//{
//    mangled_ppc("?IsPHI@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsMERGE(void)
//{
//    mangled_ppc("?IsMERGE@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsINPUT(void)
//{
//    mangled_ppc("?IsINPUT@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsVFETCH(void)
//{
//    mangled_ppc("?IsVFETCH@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsTFETCH(void)
//{
//    mangled_ppc("?IsTFETCH@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsRELATIVE(void)
//{
//    mangled_ppc("?IsRELATIVE@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsCall(void)
//{
//    mangled_ppc("?IsCall@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsPredicatePush(void)
//{
//    mangled_ppc("?IsPredicatePush@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsPredicateStackOp(void)
//{
//    mangled_ppc("?IsPredicateStackOp@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsAlloc(void)
//{
//    mangled_ppc("?IsAlloc@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetNumOutputComponents(void)
//{
//    mangled_ppc("?GetNumOutputComponents@Instruction@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Instruction::IsPredicated(void)
//{
//    mangled_ppc("?IsPredicated@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::GetPredicateCondition(void)
//{
//    mangled_ppc("?GetPredicateCondition@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsStatic(void)
//{
//    mangled_ppc("?IsStatic@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsCleaned(void)
//{
//    mangled_ppc("?IsCleaned@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::HasGlobalUses(void)
//{
//    mangled_ppc("?HasGlobalUses@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::HasSideEffects(void)
//{
//    mangled_ppc("?HasSideEffects@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsMarked(void)
//{
//    mangled_ppc("?IsMarked@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsThreadDependent(void)
//{
//    mangled_ppc("?IsThreadDependent@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetNumOperands(void)
//{
//    mangled_ppc("?GetNumOperands@Instruction@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::GetOperand(unsigned int)
//{
//    mangled_ppc("?GetOperand@Instruction@D3DXShader@@QAAPAVDependency@2@I@Z");
//};

//public: bool D3DXShader::Instruction::HasOperand(unsigned int)
//{
//    mangled_ppc("?HasOperand@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::HasTFETCHInfo(void)
//{
//    mangled_ppc("?HasTFETCHInfo@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::HasControlTransferInfo(void)
//{
//    mangled_ppc("?HasControlTransferInfo@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsVirtualRegisterAssigned(void)
//{
//    mangled_ppc("?IsVirtualRegisterAssigned@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetRegOptIndex(void)
//{
//    mangled_ppc("?GetRegOptIndex@Instruction@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ReadOnlyDependencyListHolder::Cancel(void)
//{
//    mangled_ppc("?Cancel@ReadOnlyDependencyListHolder@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::ReadOnlyDependencyListHolder::~ReadOnlyDependencyListHolder(void)
//{
//    mangled_ppc("??1ReadOnlyDependencyListHolder@D3DXShader@@QAA@XZ");
//};

//public: void D3DXShader::ReadOnlyDependentListHolder::Cancel(void)
//{
//    mangled_ppc("?Cancel@ReadOnlyDependentListHolder@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::ReadOnlyDependentListHolder::~ReadOnlyDependentListHolder(void)
//{
//    mangled_ppc("??1ReadOnlyDependentListHolder@D3DXShader@@QAA@XZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::Dependency::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@Dependency@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: unsigned int D3DXShader::Dependency::GetNumComponents(void)
//{
//    mangled_ppc("?GetNumComponents@Dependency@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Dependency::IsOrderingDependency(void)
//{
//    mangled_ppc("?IsOrderingDependency@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Dependency::IsSideEffectDependency(void)
//{
//    mangled_ppc("?IsSideEffectDependency@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Dependency::IsVectorRegisterDependency(void)
//{
//    mangled_ppc("?IsVectorRegisterDependency@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Dependency::IsSpecialRegisterDependency(void)
//{
//    mangled_ppc("?IsSpecialRegisterDependency@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Dependency::IsScalar(void)
//{
//    mangled_ppc("?IsScalar@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetSwizzle(void)
//{
//    mangled_ppc("?GetSwizzle@Dependency@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetRegister(void)
//{
//    mangled_ppc("?GetRegister@Dependency@D3DXShader@@QAAIXZ");
//};

//public: enum D3DXShader::SpecialRegister D3DXShader::Dependency::GetSpecialRegister(void)
//{
//    mangled_ppc("?GetSpecialRegister@Dependency@D3DXShader@@QAA?AW4SpecialRegister@2@XZ");
//};

//public: enum D3DXShader::SideEffect D3DXShader::Dependency::GetSideEffect(void)
//{
//    mangled_ppc("?GetSideEffect@Dependency@D3DXShader@@QAA?AW4SideEffect@2@XZ");
//};

//public: bool D3DXShader::Dependency::IsRegisterAssigned(void)
//{
//    mangled_ppc("?IsRegisterAssigned@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Dependency::GetNextDependent(void)
//{
//    mangled_ppc("?GetNextDependent@Dependency@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Dependency::GetNextDependency(void)
//{
//    mangled_ppc("?GetNextDependency@Dependency@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Dependency::GetDef(void)
//{
//    mangled_ppc("?GetDef@Dependency@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: bool D3DXShader::Dependency::InUse(void)
//{
//    mangled_ppc("?InUse@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Dependency::GetUse(void)
//{
//    mangled_ppc("?GetUse@Dependency@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::Dependency::FindScalarOperandSource(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *)
//{
//    mangled_ppc("?FindScalarOperandSource@Dependency@D3DXShader@@QAAXW4Component@2@PAPAVInstruction@2@PAW432@PAI@Z");
//};

//public: enum D3DXShader::Result::DataTypes D3DXShader::Result::GetType(void)
//{
//    mangled_ppc("?GetType@Result@D3DXShader@@QAA?AW4DataTypes@12@XZ");
//};

//public: bool D3DXShader::Result::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@Result@D3DXShader@@QAA_NXZ");
//};

//private: bool D3DXShader::Block::ValidUnionState(enum D3DXShader::Block::UnionState)
//{
//    mangled_ppc("?ValidUnionState@Block@D3DXShader@@AAA_NW4UnionState@12@@Z");
//};

//public: bool D3DXShader::Block::IsSubEntryPoint(void)
//{
//    mangled_ppc("?IsSubEntryPoint@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::IsSubReturnBlock(void)
//{
//    mangled_ppc("?IsSubReturnBlock@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::IsSubReturnSite(void)
//{
//    mangled_ppc("?IsSubReturnSite@Block@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::SubEntryBlockInfo * D3DXShader::Block::GetSubEntryBlockInfo(void)
//{
//    mangled_ppc("?GetSubEntryBlockInfo@Block@D3DXShader@@QAAPAUSubEntryBlockInfo@2@XZ");
//};

//public: struct D3DXShader::Function * D3DXShader::Block::GetFunction(void)
//{
//    mangled_ppc("?GetFunction@Block@D3DXShader@@QAAPAUFunction@2@XZ");
//};

//public: struct D3DXShader::ControlFlowEdge * D3DXShader::Block::GetPredecessorList(void)
//{
//    mangled_ppc("?GetPredecessorList@Block@D3DXShader@@QAAPAUControlFlowEdge@2@XZ");
//};

//public: struct D3DXShader::ControlFlowEdge * D3DXShader::Block::GetSuccessorList(void)
//{
//    mangled_ppc("?GetSuccessorList@Block@D3DXShader@@QAAPAUControlFlowEdge@2@XZ");
//};

//public: bool D3DXShader::Block::HasMultipleSuccessors(void)
//{
//    mangled_ppc("?HasMultipleSuccessors@Block@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Block::GetDebugBlkNum(void)
//{
//    mangled_ppc("?GetDebugBlkNum@Block@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Block::GetBitIndex(void)
//{
//    mangled_ppc("?GetBitIndex@Block@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetTwin(void)
//{
//    mangled_ppc("?GetTwin@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: unsigned int D3DXShader::Block::GetWeight(void)
//{
//    mangled_ppc("?GetWeight@Block@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Block::IsPredicated(void)
//{
//    mangled_ppc("?IsPredicated@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::UsesConditionalExecute(void)
//{
//    mangled_ppc("?UsesConditionalExecute@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::HasPredicatedControlTransfer(void)
//{
//    mangled_ppc("?HasPredicatedControlTransfer@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::HasPredicatedFallThrough(void)
//{
//    mangled_ppc("?HasPredicatedFallThrough@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::UsesPredicateRegister(void)
//{
//    mangled_ppc("?UsesPredicateRegister@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::GetPredicateRegisterCondition(void)
//{
//    mangled_ppc("?GetPredicateRegisterCondition@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::UsesConditionRegister(void)
//{
//    mangled_ppc("?UsesConditionRegister@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::GetConditionRegisterCondition(void)
//{
//    mangled_ppc("?GetConditionRegisterCondition@Block@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Block::GetConditionDependency(void)
//{
//    mangled_ppc("?GetConditionDependency@Block@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: D3DXShader::DataFlowPredecessorEnumerator::DataFlowPredecessorEnumerator(class D3DXShader::Block *, bool)
//{
//    mangled_ppc("??0DataFlowPredecessorEnumerator@D3DXShader@@QAA@PAVBlock@1@_N@Z");
//};

//public: class D3DXShader::Block * D3DXShader::DataFlowPredecessorEnumerator::GetNextPredecessor(void)
//{
//    mangled_ppc("?GetNextPredecessor@DataFlowPredecessorEnumerator@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: unsigned long D3DXShader::Compiler::GetContextData(void)
//{
//    mangled_ppc("?GetContextData@Compiler@D3DXShader@@QAAKXZ");
//};

//public: bool D3DXShader::Compiler::IsContextInstr(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsContextInstr@Compiler@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Compiler::NeedStatementDebugInfo(void)
//{
//    mangled_ppc("?NeedStatementDebugInfo@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::InPhase(unsigned int)
//{
//    mangled_ppc("?InPhase@Compiler@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Compiler::AfterPhase(unsigned int)
//{
//    mangled_ppc("?AfterPhase@Compiler@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Compiler::InOrAfterPhase(unsigned int)
//{
//    mangled_ppc("?InOrAfterPhase@Compiler@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::Compiler::StartNewPass(void)
//{
//    mangled_ppc("?StartNewPass@Compiler@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Compiler::Visited(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Visited@Compiler@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: char const * D3DXShader::Compiler::GetFunctionName(struct D3DXShader::Function *)
//{
//    mangled_ppc("?GetFunctionName@Compiler@D3DXShader@@QAAPBDPAUFunction@2@@Z");
//};

//public: char const * D3DXShader::Compiler::GetCurrentFunctionName(void)
//{
//    mangled_ppc("?GetCurrentFunctionName@Compiler@D3DXShader@@QAAPBDXZ");
//};

//public: char const * D3DXShader::Compiler::GetCurrentFunctionFileName(void)
//{
//    mangled_ppc("?GetCurrentFunctionFileName@Compiler@D3DXShader@@QAAPBDXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetNumImportDefs(void)
//{
//    mangled_ppc("?GetNumImportDefs@Compiler@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Compiler::PreCleanInstructionUnionStateIsValid(void)
//{
//    mangled_ppc("?PreCleanInstructionUnionStateIsValid@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction_ControlTransfer::GetTargetLabel(void)
//{
//    mangled_ppc("?GetTargetLabel@Instruction_ControlTransfer@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: unsigned long D3DXShader::Instruction_ControlTransfer::GetTargetLabelAddress(void)
//{
//    mangled_ppc("?GetTargetLabelAddress@Instruction_ControlTransfer@D3DXShader@@QAAKXZ");
//};

//public: enum D3DXShader::ControlFlowPreference D3DXShader::Instruction_ControlTransfer::GetControlFlowPreference(void)
//{
//    mangled_ppc("?GetControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAA?AW4ControlFlowPreference@2@XZ");
//};

//public: bool D3DXShader::Instruction_ControlTransfer::IsAttributeControlFlowPreference(void)
//{
//    mangled_ppc("?IsAttributeControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction_ControlTransfer::IsInternalControlFlowPreference(void)
//{
//    mangled_ppc("?IsInternalControlFlowPreference@Instruction_ControlTransfer@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction_ControlTransfer::HasUnrollIterationCountDependency(void)
//{
//    mangled_ppc("?HasUnrollIterationCountDependency@Instruction_ControlTransfer@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::HasMultipleDependencies(void)
//{
//    mangled_ppc("?HasMultipleDependencies@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: static unsigned long D3DXShader::Instruction::ComputeAllocSize(class D3DXShader::Compiler *, enum D3DXShader::Opcode, unsigned int, unsigned int)
//{
//    mangled_ppc("?ComputeAllocSize@Instruction@D3DXShader@@SAKPAVCompiler@2@W4Opcode@2@II@Z");
//};

//public: bool D3DXShader::Instruction::IsPerComponent(void)
//{
//    mangled_ppc("?IsPerComponent@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::SupportsInputModifiers(unsigned int)
//{
//    mangled_ppc("?SupportsInputModifiers@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetDefIndex(void)
//{
//    mangled_ppc("?GetDefIndex@Instruction@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Instruction::IsScheduled(void)
//{
//    mangled_ppc("?IsScheduled@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetReverseSlotNumber(void)
//{
//    mangled_ppc("?GetReverseSlotNumber@Instruction@D3DXShader@@QAAIXZ");
//};

//public: enum D3DXShader::ConstantValueType D3DXShader::Instruction::GetConstantValueType(unsigned int)
//{
//    mangled_ppc("?GetConstantValueType@Instruction@D3DXShader@@QAA?AW4ConstantValueType@2@I@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetConstraintFlags(unsigned int)
//{
//    mangled_ppc("?GetConstraintFlags@Instruction@D3DXShader@@QAAII@Z");
//};

//public: D3DXShader::ReadOnlyDependencyListHolder::ReadOnlyDependencyListHolder(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("??0ReadOnlyDependencyListHolder@D3DXShader@@QAA@PAVInstruction@1@PAVDependency@1@@Z");
//};

//public: D3DXShader::ReadOnlyDependentListHolder::ReadOnlyDependentListHolder(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("??0ReadOnlyDependentListHolder@D3DXShader@@QAA@PAVInstruction@1@PAVDependency@1@@Z");
//};

//public: bool D3DXShader::Instruction::IsOutputRegisterAssigned(void)
//{
//    mangled_ppc("?IsOutputRegisterAssigned@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetOutputRegisterIndex(void)
//{
//    mangled_ppc("?GetOutputRegisterIndex@Instruction@D3DXShader@@QAAIXZ");
//};

//private: void D3DXShader::Block::SetUnionState(enum D3DXShader::Block::UnionState)
//{
//    mangled_ppc("?SetUnionState@Block@D3DXShader@@AAAXW4UnionState@12@@Z");
//};

//char const * D3DXShader::GetUnitName(enum D3DXShader::InstructionUnitType)
//{
//    mangled_ppc("?GetUnitName@D3DXShader@@YAPBDW4InstructionUnitType@1@@Z");
//};

//char const * D3DXShader::GetPhaseName(unsigned int)
//{
//    mangled_ppc("?GetPhaseName@D3DXShader@@YAPBDI@Z");
//};

//public: void D3DXShader::Compiler::dbgprintf(char const *, ...)
//{
//    mangled_ppc("?dbgprintf@Compiler@D3DXShader@@QAAXPBDZZ");
//};

//public: void D3DXShader::Compiler::PrintSwizzle(unsigned int, unsigned int)
//{
//    mangled_ppc("?PrintSwizzle@Compiler@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::Compiler::PrintRegisterNumber(unsigned int)
//{
//    mangled_ppc("?PrintRegisterNumber@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintTempRegister(unsigned int)
//{
//    mangled_ppc("?PrintTempRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintConstantRegister(unsigned int)
//{
//    mangled_ppc("?PrintConstantRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintSamplerRegister(unsigned int)
//{
//    mangled_ppc("?PrintSamplerRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintVertexFetchRegister(unsigned int)
//{
//    mangled_ppc("?PrintVertexFetchRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintConditionRegister(unsigned int)
//{
//    mangled_ppc("?PrintConditionRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintIntegerRegister(unsigned int)
//{
//    mangled_ppc("?PrintIntegerRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintVirtualRegister(unsigned int)
//{
//    mangled_ppc("?PrintVirtualRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintVariableRegister(unsigned int, unsigned int)
//{
//    mangled_ppc("?PrintVariableRegister@Compiler@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::Compiler::PrintOutputRegister(unsigned int)
//{
//    mangled_ppc("?PrintOutputRegister@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::PrintDependencyDef(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?PrintDependencyDef@Compiler@D3DXShader@@QAAXPAVInstruction@2@I@Z");
//};

//public: void D3DXShader::Compiler::PrintBlockName(class D3DXShader::Block *)
//{
//    mangled_ppc("?PrintBlockName@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::SaveBlockGraph(void)
//{
//    mangled_ppc("?SaveBlockGraph@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::CompilerHeap::HeapAllocation>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UHeapAllocation@CompilerHeap@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: static unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$FixedSizeBitSet@I$00@D3DXShader@@SAIXZ");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::IsAnyBitSet(void)
//{
//    mangled_ppc("?IsAnyBitSet@?$FixedSizeBitSet@I$00@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindSetBit(unsigned int)
//{
//    mangled_ppc("?FindSetBit@?$FixedSizeBitSet@I$00@D3DXShader@@QAAII@Z");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//private: bool D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsPointer(void) const
//{
//    mangled_ppc("?IsPointer@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@ABA_NXZ");
//};

//private: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ComputeArrayOffset(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAII@Z");
//};

//private: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ComputeBitShift(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAII@Z");
//};

//private: unsigned int * D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAPAII@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 1>::ComputeBitShift(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift@?$FixedSizeBitSet@I$00@D3DXShader@@AAAKI@Z");
//};

//private: unsigned int D3DXShader::ArrayBitSet<unsigned int>::ComputeBitShift_NoValidation(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift_NoValidation@?$ArrayBitSet@I@D3DXShader@@AAAII@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned int, 1>::ComputeArrayOffset(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset@?$FixedSizeBitSet@I$00@D3DXShader@@AAAKI@Z");
//};

//private: unsigned int D3DXShader::ArrayBitSet<unsigned int>::ComputeArrayOffset_NoValidation(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset_NoValidation@?$ArrayBitSet@I@D3DXShader@@AAAII@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//bool D3DXShader::IsAnyBitSetInArray<unsigned int>(unsigned int *, unsigned long)
//{
//    mangled_ppc("??$IsAnyBitSetInArray@I@D3DXShader@@YA_NPAIK@Z");
//};

//unsigned int D3DXShader::FindSetBitInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned long)
//{
//    mangled_ppc("??$FindSetBitInArray@_K@D3DXShader@@YAIPA_KIK@Z");
//};

//public: void D3DXShader::CompilerHeap::HeapAllocation::Init(void)
//{
//    mangled_ppc("?Init@HeapAllocation@CompilerHeap@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction_ControlTransfer::GetUnrollIterationCountDependency(void)
//{
//    mangled_ppc("?GetUnrollIterationCountDependency@Instruction_ControlTransfer@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: unsigned long D3DXShader::Instruction::GetAllocSize(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetAllocSize@Instruction@D3DXShader@@QAAKPAVCompiler@2@@Z");
//};

//public: float * D3DXShader::Instruction::GetConstantValuePtr(unsigned int)
//{
//    mangled_ppc("?GetConstantValuePtr@Instruction@D3DXShader@@QAAPAMI@Z");
//};

//public: float D3DXShader::Instruction::GetFloatConstantValue(unsigned int)
//{
//    mangled_ppc("?GetFloatConstantValue@Instruction@D3DXShader@@QAAMI@Z");
//};

//public: bool D3DXShader::Instruction::IsFloatConstant(unsigned int)
//{
//    mangled_ppc("?IsFloatConstant@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::IsIntegerConstant(unsigned int)
//{
//    mangled_ppc("?IsIntegerConstant@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::IsSignedIntegerConstant(unsigned int)
//{
//    mangled_ppc("?IsSignedIntegerConstant@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetIntegerConstantValue(unsigned int)
//{
//    mangled_ppc("?GetIntegerConstantValue@Instruction@D3DXShader@@QAAII@Z");
//};

//public: struct D3DXShader::Instruction_VARIABLE * D3DXShader::Instruction::GetVarInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetVarInfo@Instruction@D3DXShader@@QAAPAUInstruction_VARIABLE@2@PAVCompiler@2@@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetVarIndex(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetVarIndex@Instruction@D3DXShader@@QAAIPAVCompiler@2@@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetVarRegIndex(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetVarRegIndex@Instruction@D3DXShader@@QAAIPAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_VFETCH * D3DXShader::Instruction::GetVFETCHInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetVFETCHInfo@Instruction@D3DXShader@@QAAPAUInstruction_VFETCH@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_TFETCH * D3DXShader::Instruction::GetTFETCHInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetTFETCHInfo@Instruction@D3DXShader@@QAAPAUInstruction_TFETCH@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_ControlTransfer * D3DXShader::Instruction::GetControlTransferInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetControlTransferInfo@Instruction@D3DXShader@@QAAPAUInstruction_ControlTransfer@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_PHI * D3DXShader::Instruction::GetPHIInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetPHIInfo@Instruction@D3DXShader@@QAAPAUInstruction_PHI@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_MISSING_DEF * D3DXShader::Instruction::GetMissingDefInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetMissingDefInfo@Instruction@D3DXShader@@QAAPAUInstruction_MISSING_DEF@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_LoopStart * D3DXShader::Instruction::GetLoopStartInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetLoopStartInfo@Instruction@D3DXShader@@QAAPAUInstruction_LoopStart@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_LoopEnd * D3DXShader::Instruction::GetLoopEndInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetLoopEndInfo@Instruction@D3DXShader@@QAAPAUInstruction_LoopEnd@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_ALLOC_EXPORT * D3DXShader::Instruction::GetAllocExportInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetAllocExportInfo@Instruction@D3DXShader@@QAAPAUInstruction_ALLOC_EXPORT@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_SIDE_EFFECT * D3DXShader::Instruction::GetSideEffectInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetSideEffectInfo@Instruction@D3DXShader@@QAAPAUInstruction_SIDE_EFFECT@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_INTEGER_MATH * D3DXShader::Instruction::GetIntegerMathInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetIntegerMathInfo@Instruction@D3DXShader@@QAAPAUInstruction_INTEGER_MATH@2@PAVCompiler@2@@Z");
//};

//public: enum D3DXShader::IntegerMathOp D3DXShader::Instruction::GetIntegerOp(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetIntegerOp@Instruction@D3DXShader@@QAA?AW4IntegerMathOp@2@PAVCompiler@2@@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetVirtualRegister(void)
//{
//    mangled_ppc("?GetVirtualRegister@Instruction@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetModifiers(void)
//{
//    mangled_ppc("?GetModifiers@Dependency@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetInputModifiers(void)
//{
//    mangled_ppc("?GetInputModifiers@Dependency@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetOutputModifiers(void)
//{
//    mangled_ppc("?GetOutputModifiers@Dependency@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetRelativeModifiers(void)
//{
//    mangled_ppc("?GetRelativeModifiers@Dependency@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> * D3DXShader::Block::GetPrologue(void)
//{
//    mangled_ppc("?GetPrologue@Block@D3DXShader@@QAAPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@XZ");
//};

//public: class D3DXShader::FixedSizeBitSet<unsigned int, 1> * D3DXShader::Block::GetLoopSet(void)
//{
//    mangled_ppc("?GetLoopSet@Block@D3DXShader@@QAAPAV?$FixedSizeBitSet@I$00@2@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetPredicateRegisterControllingBlock(void)
//{
//    mangled_ppc("?GetPredicateRegisterControllingBlock@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetConditionRegisterControllingBlock(void)
//{
//    mangled_ppc("?GetConditionRegisterControllingBlock@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: unsigned int D3DXShader::Instruction::CountDependencies(void)
//{
//    mangled_ppc("?CountDependencies@Instruction@D3DXShader@@QAAIXZ");
//};

//public: double D3DXShader::Instruction::GetConstantValue_InAnyPhase(unsigned int)
//{
//    mangled_ppc("?GetConstantValue_InAnyPhase@Instruction@D3DXShader@@QAANI@Z");
//};

//public: double D3DXShader::Instruction::GetConstantValue(unsigned int)
//{
//    mangled_ppc("?GetConstantValue@Instruction@D3DXShader@@QAANI@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SetBit(unsigned int)
//{
//    mangled_ppc("?SetBit@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::Contains(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Contains@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 27>::SetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetBitRange@?$FixedSizeBitSet@I$0BL@@D3DXShader@@QAAXII@Z");
//};

//private: unsigned int * D3DXShader::FixedSizeBitSet<unsigned int, 1>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$FixedSizeBitSet@I$00@D3DXShader@@AAAPAII@Z");
//};

//private: unsigned int * D3DXShader::ArrayBitSet<unsigned int>::ComputeWordPtr_NoValidation(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr_NoValidation@?$ArrayBitSet@I@D3DXShader@@AAAPAII@Z");
//};

//private: unsigned int * D3DXShader::ArrayBitSet<unsigned int>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$ArrayBitSet@I@D3DXShader@@AAAPAII@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsConvertedToMicrocode(void)
//{
//    mangled_ppc("?IsConvertedToMicrocode@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::ShouldBeInBody_BeforeScheduling(void)
//{
//    mangled_ppc("?ShouldBeInBody_BeforeScheduling@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::ShouldBeInBody(void)
//{
//    mangled_ppc("?ShouldBeInBody@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Block * D3DXShader::Compiler::GetEntryBlock(void)
//{
//    mangled_ppc("?GetEntryBlock@Compiler@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: bool D3DXShader::Instruction::IsInPrologue(void)
//{
//    mangled_ppc("?IsInPrologue@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Compiler::PrintDebugOption(unsigned int)
//{
//    mangled_ppc("?PrintDebugOption@Compiler@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Compiler::SetDebugOptions(void)
//{
//    mangled_ppc("?SetDebugOptions@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::PrintDependency(class D3DXShader::Dependency *, bool)
//{
//    mangled_ppc("?PrintDependency@Compiler@D3DXShader@@QAAXPAVDependency@2@_N@Z");
//};

//public: bool D3DXShader::Compiler::PrintDependencyList(class D3DXShader::Instruction *, bool, bool, bool)
//{
//    mangled_ppc("?PrintDependencyList@Compiler@D3DXShader@@QAA_NPAVInstruction@2@_N11@Z");
//};

//public: int D3DXShader::Compiler::NumberInstructions(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, int)
//{
//    mangled_ppc("?NumberInstructions@Compiler@D3DXShader@@QAAHPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@H@Z");
//};

//public: int D3DXShader::Compiler::NumberInstructions(class D3DXShader::Block *, int)
//{
//    mangled_ppc("?NumberInstructions@Compiler@D3DXShader@@QAAHPAVBlock@2@H@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::Instruction::CanHaveOrderingDependencies(void)
//{
//    mangled_ppc("?CanHaveOrderingDependencies@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Compiler::SetContextData(unsigned long)
//{
//    mangled_ppc("?SetContextData@Compiler@D3DXShader@@QAAXK@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindBranchInstruction(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindBranchInstruction@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?PrintInstruction@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintInstructionList(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?PrintInstructionList@Compiler@D3DXShader@@QAAXPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintBlockFlowInfo(class D3DXShader::Block *)
//{
//    mangled_ppc("?PrintBlockFlowInfo@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?PrintBlock@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintFunction(void)
//{
//    mangled_ppc("?PrintFunction@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::PrintNewInstructions(void)
//{
//    mangled_ppc("?PrintNewInstructions@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//void D3DXShader::AssertionFailedW(class D3DXShader::Compiler *, wchar_t const *, wchar_t const *, unsigned int, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AssertionFailedW@D3DXShader@@YAXPAVCompiler@1@PB_W1IPAVInstruction@1@2@Z");
//};

//public: void D3DXShader::Compiler::CleanDebugInfo(void *, unsigned long, unsigned long, unsigned long, bool)
//{
//    mangled_ppc("?CleanDebugInfo@Compiler@D3DXShader@@QAAXPAXKKK_N@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::InitFixedSize(unsigned int, void * (*)(void *, unsigned long), void *)
//{
//    mangled_ppc("?InitFixedSize@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXIP6APAXPAXK@Z0@Z");
//};

//public: bool D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsAnyBitClear(unsigned int, unsigned int)
//{
//    mangled_ppc("?IsAnyBitClear@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAA_NII@Z");
//};

//public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::FindSetBit(unsigned int)
//{
//    mangled_ppc("?FindSetBit@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAII@Z");
//};

//public: D3DXShader::ArrayBitSet<unsigned int>::ArrayBitSet<unsigned int>(unsigned int *, unsigned int)
//{
//    mangled_ppc("??0?$ArrayBitSet@I@D3DXShader@@QAA@PAII@Z");
//};

//public: unsigned int D3DXShader::ArrayBitSet<unsigned int>::GetBitRangeAligned(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRangeAligned@?$ArrayBitSet@I@D3DXShader@@QAAIII@Z");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::PeekNext(void)
//{
//    mangled_ppc("?PeekNext@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAUVariableDebugInfo@2@XZ");
//};

//private: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ValidateIndex(unsigned int)
//{
//    mangled_ppc("?ValidateIndex@?$FixedSizeBitSet@I$00@D3DXShader@@AAAXI@Z");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::GetBitRangeAligned(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRangeAligned@?$FixedSizeBitSet@I$00@D3DXShader@@QAAIII@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//bool D3DXShader::IsBitSetInArray<unsigned int>(unsigned int *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$IsBitSetInArray@I@D3DXShader@@YA_NPAIII@Z");
//};

//unsigned int D3DXShader::FindSetBitInArray<unsigned int>(unsigned int *, unsigned int, unsigned long)
//{
//    mangled_ppc("??$FindSetBitInArray@I@D3DXShader@@YAIPAIIK@Z");
//};

//public: enum D3DXShader::InstructionUnitType D3DXShader::Instruction::GetUnit(void)
//{
//    mangled_ppc("?GetUnit@Instruction@D3DXShader@@QAA?AW4InstructionUnitType@2@XZ");
//};

//public: unsigned long D3DXShader::Instruction::GetExecAddress(void)
//{
//    mangled_ppc("?GetExecAddress@Instruction@D3DXShader@@QAAKXZ");
//};

//public: bool D3DXShader::Instruction::StartsNewExecBlock(void)
//{
//    mangled_ppc("?StartsNewExecBlock@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::GetWorkList(void)
//{
//    mangled_ppc("?GetWorkList@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: bool D3DXShader::Dependency::IsNegated(void)
//{
//    mangled_ppc("?IsNegated@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Dependency::IsAbs(void)
//{
//    mangled_ppc("?IsAbs@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetMaskedSwizzle(void)
//{
//    mangled_ppc("?GetMaskedSwizzle@Dependency@D3DXShader@@QAAIXZ");
//};

//public: enum D3DXShader::Component D3DXShader::Dependency::GetSwizzleComponent(unsigned int)
//{
//    mangled_ppc("?GetSwizzleComponent@Dependency@D3DXShader@@QAA?AW4Component@2@I@Z");
//};

//public: unsigned int D3DXShader::Dependency::GetWriteMaskRequired(void)
//{
//    mangled_ppc("?GetWriteMaskRequired@Dependency@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Dependency::IsEquivalentVectorDependency(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?IsEquivalentVectorDependency@Dependency@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Result::IsIndexed(void)
//{
//    mangled_ppc("?IsIndexed@Result@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Result::GetInstruction(void)
//{
//    mangled_ppc("?GetInstruction@Result@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Result::GetDependency(void)
//{
//    mangled_ppc("?GetDependency@Result@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: class D3DXShader::Result * D3DXShader::Result::GetResultPtr(void)
//{
//    mangled_ppc("?GetResultPtr@Result@D3DXShader@@QAAPAV12@XZ");
//};

//public: struct D3DXShader::IndexedResult * D3DXShader::Result::GetIndexedResultPtr(void)
//{
//    mangled_ppc("?GetIndexedResultPtr@Result@D3DXShader@@QAAPAUIndexedResult@2@XZ");
//};

//public: unsigned int D3DXShader::Result::GetComponentIndex(void)
//{
//    mangled_ppc("?GetComponentIndex@Result@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Result::GetVarIndex(void)
//{
//    mangled_ppc("?GetVarIndex@Result@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Result::GetVarComponentIndex(void)
//{
//    mangled_ppc("?GetVarComponentIndex@Result@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetFirstPredecessor(void)
//{
//    mangled_ppc("?GetFirstPredecessor@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetFirstSuccessor(void)
//{
//    mangled_ppc("?GetFirstSuccessor@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: bool D3DXShader::Block::HasMultiplePredecessors(void)
//{
//    mangled_ppc("?HasMultiplePredecessors@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::HasDomSet(void)
//{
//    mangled_ppc("?HasDomSet@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::IsUnreachable(void)
//{
//    mangled_ppc("?IsUnreachable@Block@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)> * D3DXShader::Block::GetDomFrontier(void)
//{
//    mangled_ppc("?GetDomFrontier@Block@D3DXShader@@QAAPAV?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: class D3DXShader::Result * D3DXShader::Block::GetVariableDefs(unsigned int)
//{
//    mangled_ppc("?GetVariableDefs@Block@D3DXShader@@QAAPAVResult@2@I@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Block::GetLastSideEffect(enum D3DXShader::SideEffect)
//{
//    mangled_ppc("?GetLastSideEffect@Block@D3DXShader@@QAAPAVInstruction@2@W4SideEffect@2@@Z");
//};

//public: unsigned long D3DXShader::Compiler::ComputeContextDataForBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?ComputeContextDataForBlock@Compiler@D3DXShader@@QAAKPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::SetContextInstr(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SetContextInstr@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Compiler::SetContextBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?SetContextBlock@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::VisitOnce(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?VisitOnce@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: class D3DXShader::Block * D3DXShader::Instruction_ControlTransfer::GetTarget(void)
//{
//    mangled_ppc("?GetTarget@Instruction_ControlTransfer@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: bool D3DXShader::Dependency::IsClamped(void)
//{
//    mangled_ppc("?IsClamped@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FindMERGEDependent(void)
//{
//    mangled_ppc("?FindMERGEDependent@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::FindPredicateDep(void)
//{
//    mangled_ppc("?FindPredicateDep@Instruction@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FindPredicateDef(void)
//{
//    mangled_ppc("?FindPredicateDef@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: unsigned int D3DXShader::Instruction::GetPHIVisitNumber(void)
//{
//    mangled_ppc("?GetPHIVisitNumber@Instruction@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Instruction::IsUselessInstruction(void)
//{
//    mangled_ppc("?IsUselessInstruction@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsScheduledBefore(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsScheduledBefore@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetOutputRegister(void)
//{
//    mangled_ppc("?GetOutputRegister@Instruction@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::GetRELATIVEBaseDef(void)
//{
//    mangled_ppc("?GetRELATIVEBaseDef@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FindAddressDef_AfterCleanPhase(void)
//{
//    mangled_ppc("?FindAddressDef_AfterCleanPhase@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: bool D3DXShader::Block::IsPredecessorOf(class D3DXShader::Block *)
//{
//    mangled_ppc("?IsPredecessorOf@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Block::IsSuccessorOf(class D3DXShader::Block *)
//{
//    mangled_ppc("?IsSuccessorOf@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: unsigned int * D3DXShader::Block::GetDomSet(void)
//{
//    mangled_ppc("?GetDomSet@Block@D3DXShader@@QAAPAIXZ");
//};

//public: bool D3DXShader::Block::Dominates(class D3DXShader::Block *)
//{
//    mangled_ppc("?Dominates@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Block::StrictlyDominates(class D3DXShader::Block *)
//{
//    mangled_ppc("?StrictlyDominates@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetDomParent(void)
//{
//    mangled_ppc("?GetDomParent@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetDomChild(void)
//{
//    mangled_ppc("?GetDomChild@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetDomSibling(void)
//{
//    mangled_ppc("?GetDomSibling@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: unsigned int * D3DXShader::Block::GetControllingBlockSet(void)
//{
//    mangled_ppc("?GetControllingBlockSet@Block@D3DXShader@@QAAPAIXZ");
//};

//public: unsigned int * D3DXShader::Block::GetControlSet(void)
//{
//    mangled_ppc("?GetControlSet@Block@D3DXShader@@QAAPAIXZ");
//};

//public: bool D3DXShader::Block::StartsNewExecBlock(void)
//{
//    mangled_ppc("?StartsNewExecBlock@Block@D3DXShader@@QAA_NXZ");
//};

//public: unsigned long D3DXShader::Block::GetAddress(void)
//{
//    mangled_ppc("?GetAddress@Block@D3DXShader@@QAAKXZ");
//};

//public: void D3DXShader::Compiler::PrintResult(class D3DXShader::Result *, char const *)
//{
//    mangled_ppc("?PrintResult@Compiler@D3DXShader@@QAAXPAVResult@2@PBD@Z");
//};

//public: void D3DXShader::Compiler::PrintDominanceSet(class D3DXShader::Block *)
//{
//    mangled_ppc("?PrintDominanceSet@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintDominanceSets(void)
//{
//    mangled_ppc("?PrintDominanceSets@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::PrintDominanceGraph(void)
//{
//    mangled_ppc("?PrintDominanceGraph@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::PrintDominanceFrontiers(void)
//{
//    mangled_ppc("?PrintDominanceFrontiers@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::PrintControlSets(void)
//{
//    mangled_ppc("?PrintControlSets@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::PrintControllingBlockSets(void)
//{
//    mangled_ppc("?PrintControllingBlockSets@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::CheckDependents(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CheckDependents@Compiler@D3DXShader@@QAAXPAVBlock@2@PAVInstruction@2@@Z");
//};

//public: void D3DXShader::Compiler::UpdateLiveInstrCount(void)
//{
//    mangled_ppc("?UpdateLiveInstrCount@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::CompilerHeap::HeapAllocation, 0>::AddToTail(struct D3DXShader::CompilerHeap::HeapAllocation *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UHeapAllocation@CompilerHeap@D3DXShader@@$0A@@D3DXShader@@QAAXPAUHeapAllocation@CompilerHeap@2@@Z");
//};

//public: bool D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::GetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRange@?$FixedSizeBitSet@I$00@D3DXShader@@QAAIII@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void * D3DXShader::CompilerHeap::GetHeapMemory(unsigned long)
//{
//    mangled_ppc("?GetHeapMemory@CompilerHeap@D3DXShader@@AAAPAXK@Z");
//};

//public: void * D3DXShader::CompilerHeap::Alloc(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?Alloc@CompilerHeap@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: static void * D3DXShader::CompilerHeap::AllocInContext(void *, unsigned long)
//{
//    mangled_ppc("?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z");
//};

//public: void * D3DXShader::Compiler::AllocPhaseMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocPhaseMem@Compiler@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: void * D3DXShader::Compiler::AllocSmallPhaseMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocSmallPhaseMem@Compiler@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: void D3DXShader::Compiler::FreePhaseMem(void *, unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?FreePhaseMem@Compiler@D3DXShader@@QAAXPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//void * D3DXShader::AllocMemForBitSet(void *, unsigned long)
//{
//    mangled_ppc("?AllocMemForBitSet@D3DXShader@@YAPAXPAXK@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FindAddressDef(void)
//{
//    mangled_ppc("?FindAddressDef@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: void D3DXShader::Compiler::CheckDependencies(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CheckDependencies@Compiler@D3DXShader@@QAAXPAVBlock@2@PAVInstruction@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAUVariableDebugInfo@2@XZ");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::GetField(unsigned int)
//{
//    mangled_ppc("?GetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: void D3DXShader::Compiler::PrintVariableDebugInfoDeltas(struct D3DXShader::VariableDebugInfoDeltaState *)
//{
//    mangled_ppc("?PrintVariableDebugInfoDeltas@Compiler@D3DXShader@@QAAXPAUVariableDebugInfoDeltaState@2@@Z");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAUVariableDebugInfo@2@I@Z");
//};

//public: struct D3DXShader::VariableDebugInfo ** D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAUVariableDebugInfo@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::CNode * D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//private: class D3DXShader::CNode ** D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAVCNode@2@I@Z");
//};

//public: bool D3DXShader::Dependency::IsConstant(double)
//{
//    mangled_ppc("?IsConstant@Dependency@D3DXShader@@QAA_NN@Z");
//};

//public: void D3DXShader::Compiler::CheckInstructionList(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?CheckInstructionList@Compiler@D3DXShader@@QAAXPAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: void D3DXShader::Compiler::CheckBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?CheckBlock@Compiler@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Compiler::CheckFunction(void)
//{
//    mangled_ppc("?CheckFunction@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::Append(struct D3DXShader::VariableDebugInfo *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUVariableDebugInfo@2@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::VariableDebugInfo *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::VariableDebugInfo *, struct D3DXShader::VariableDebugInfo *, unsigned long)>::RemoveNext(void)
//{
//    mangled_ppc("?RemoveNext@?$ArrayListEnumerator@PAUVariableDebugInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::CNode * D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Append(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVCNode@2@@Z");
//};

//public: void D3DXShader::Compiler::UpdateVariableDebugInfoDeltas(struct D3DXShader::VariableDebugInfoDeltaState *, bool, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?UpdateVariableDebugInfoDeltas@Compiler@D3DXShader@@QAAXPAUVariableDebugInfoDeltaState@2@_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::CNode *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned long)>::Push(class D3DXShader::CNode *)
//{
//    mangled_ppc("?Push@?$Stack@PAVCNode@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVCNode@2@@Z");
//};

//public: void D3DXShader::Compiler::PrintAsm(void)
//{
//    mangled_ppc("?PrintAsm@Compiler@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Compiler::ScanForMultipleLineNumbers(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ScanForMultipleLineNumbers@Compiler@D3DXShader@@QAAIPAVCNode@2@@Z");
//};

