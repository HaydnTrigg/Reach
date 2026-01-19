/* ---------- headers */

#include "xdk\xgraphicsd\scheduler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class D3DXShader::Instruction D3DXShader::g_instrNeverIssue; // "?g_instrNeverIssue@D3DXShader@@3VInstruction@1@A"
// class D3DXShader::Dependency D3DXShader::g_depNeverIssue; // "?g_depNeverIssue@D3DXShader@@3VDependency@1@A"

// unsigned int D3DXShader::AddLatencyToPathLength(unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::DependsOnLocal(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::SupportsClampedModifier(void);
// public: bool D3DXShader::Instruction::FirstTwoOperandsAreCommutative(void);
// public: int D3DXShader::Instruction::GetReverseRegisterEffect(void);
// public: bool D3DXShader::Instruction::IsClauseAgnostic(void);
// public: bool D3DXShader::Instruction::MustSerializeDependents(void);
// public: class D3DXShader::Instruction ** D3DXShader::Instruction::GetWorkListPtr(void);
// public: void D3DXShader::Instruction::SwapOperands(unsigned int, unsigned int);
// public: unsigned int D3DXShader::Dependency::GetLatency(void);
// public: void D3DXShader::Dependency::SetLatency(unsigned int);
// public: bool D3DXShader::Dependency::IsSwizzled(void);
// public: void D3DXShader::Block::MovedSideEffect(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: bool D3DXShader::Compiler::FinishedRegisterAssignments(void);
// public: void D3DXShader::Compiler::RemoveDeadInstruction_Unlinked(class D3DXShader::Instruction *);
// public: void D3DXShader::Instruction::AddStaticDependent(class D3DXShader::Dependency *);
// public: void D3DXShader::Instruction::RemoveStaticDependent(class D3DXShader::Dependency *);
// public: unsigned int D3DXShader::Instruction::GetPathLength(void);
// public: void D3DXShader::Instruction::SetPathLength(unsigned int);
// public: bool D3DXShader::Instruction::IsUnblocked(void);
// public: void D3DXShader::Instruction::SetUnblocked(void);
// public: bool D3DXShader::Instruction::IsSchedulingBlockedOn(class D3DXShader::Instruction *);
// public: enum D3DXShader::InstructionUnitType D3DXShader::MachineState::GetCurrentUnit(void);
// private: void D3DXShader::Scheduler::DumpQueue(void);
// public: class D3DXShader::Compiler * D3DXShader::Scheduler::GetCompiler(void);
// public: class D3DXShader::MachineState const * D3DXShader::Scheduler::GetMachineState(void);
// public: bool D3DXShader::Scheduler::IsQueueEmpty(void);
// public: class D3DXShader::Compiler * D3DXShader::ScheduledBundleEnumerator::GetCompiler(void);
// public: class D3DXShader::MachineState * D3DXShader::ScheduledBundleEnumerator::GetMachineState(void);
// public: class D3DXShader::Instruction * D3DXShader::ScheduledBundleEnumerator::GetBundleStartInstr(void);
// public: void D3DXShader::ScheduledBundleEnumerator::ReplacedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::PrepPrologueInstrForScheduler(class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::CanPossiblySmashToScalars(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::FindTwoOperandScalarUseConstantMask(unsigned int *, unsigned int *);
// public: void D3DXShader::Instruction::SetClamped(void);
// public: void D3DXShader::Instruction::RecomputePathLength(void);
// public: float D3DXShader::Dependency::GetFloatConstantValue(unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::MachineState::GetSpecialRegisterOwner(enum D3DXShader::SpecialRegister);
// public: void D3DXShader::Scheduler::DumpState(void);
// public: bool D3DXShader::Instruction::CanSmashToTwoOperandScalarInstruction(bool *);
// public: bool D3DXShader::Instruction::CanPossiblyCauseConstantWaterfall(void);
// public: void D3DXShader::MachineState::ScheduleInstruction(class D3DXShader::Instruction *);
// public: void D3DXShader::MachineState::SimulateForwards(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::CleanPrologueAfterScheduling(class D3DXShader::Block *);
// public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetPredicateInstruction(void);
// public: void D3DXShader::Scheduler::ScheduleInstruction(class D3DXShader::Instruction *);
// public: bool D3DXShader::Scheduler::DependentsHaveBeenScheduled(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::ScheduledBundleEnumerator::FindBundleStart(class D3DXShader::Instruction *);
// public: void D3DXShader::ScheduledBundleEnumerator::Reset(class D3DXShader::Scheduler *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Instruction *);
// public: bool D3DXShader::ScheduledBundleEnumerator::AtFirstBundle(void);
// public: bool D3DXShader::ScheduledBundleEnumerator::GoToPrevBundle(void);
// public: bool D3DXShader::ScheduledBundleEnumerator::CanInsertBundle(class D3DXShader::Instruction *);
// public: bool D3DXShader::ScheduledBundleEnumerator::CanReplaceBundle(class D3DXShader::Instruction *);
// public: void D3DXShader::ScheduledBundleEnumerator::SpeculativelyInsertBundle(class D3DXShader::Instruction *);
// public: void D3DXShader::ScheduledBundleEnumerator::AddNonMicrocodeToSlot(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::CheckMergeInterference(class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::CanCoIssue(void);
// public: bool D3DXShader::Compiler::CanCoIssueWith(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: unsigned int D3DXShader::Instruction::ComputeNumInstrsIfSmashedToScalars_PermitSideEffects(void);
// private: void D3DXShader::Compiler::PrepareSmashedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int);
// private: void D3DXShader::Compiler::ReplaceSmashedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::RemoveSmashedInstructions(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertAtHead(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::RemoveAll(void);
// public: bool D3DXShader::Compiler::IsSchedulerEnabled(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAXA(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAX(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA_FLOOR(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MUL_CONST_0(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_ADD_CONST_0(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SUB_CONST_0(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_TEX_LOD(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_H(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_V(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// private: void D3DXShader::Scheduler::Validate(void);
// public: bool D3DXShader::Scheduler::CanScheduleVFETCHGroup(class D3DXShader::Instruction *);
// public: void D3DXShader::Scheduler::QueueInstruction(class D3DXShader::Instruction *);
// public: D3DXShader::ScheduledBundleEnumerator::ScheduledBundleEnumerator(class D3DXShader::Scheduler *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Instruction *);
// public: bool D3DXShader::ScheduledBundleEnumerator::HasEmptyScalarSlot(void);
// public: bool D3DXShader::ScheduledBundleEnumerator::HasEmptySlotForInstr(class D3DXShader::Instruction *);
// public: void D3DXShader::ScheduledBundleEnumerator::SpeculativelyFillEmptySlot(class D3DXShader::Instruction *);
// public: void D3DXShader::ScheduledBundleEnumerator::FillEmptySlot(class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::PrepBlockForScheduling(class D3DXShader::Block *, class D3DXShader::Instruction **);
// private: void D3DXShader::Compiler::Schedule(class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::SmashSingleSourceUnary(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: void D3DXShader::Compiler::SmashSingleSourceBinary(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: void D3DXShader::Compiler::SmashMultipleSourceBinary(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, bool);
// private: void D3DXShader::Compiler::CheckSchedulerState(class D3DXShader::Scheduler *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, unsigned int);
// private: void D3DXShader::Compiler::SmashMultipleSourceBinary_UsingPrev(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::Scheduler::Init(class D3DXShader::Compiler *);
// public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetNextInstructionWorker(class D3DXShader::Instruction *, class D3DXShader::MachineState *);
// public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetNextInstruction(void);
// public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetCompatibleInstruction(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetCompatibleInstructionForSmashing(class D3DXShader::Instruction *, class D3DXShader::MachineState *);
// public: void D3DXShader::Scheduler::QueueDependencies(class D3DXShader::Instruction *, bool);
// public: void D3DXShader::Scheduler::QueueDependencies_InEpilogue(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::SmashToScalars(class D3DXShader::Instruction *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Dependency * D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Pop(void);
// public: void D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::PopAll(void);
// public: void D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::PopAll(void);
// private: void D3DXShader::Compiler::ScheduleInBlock(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::LocalScheduling(void);

//unsigned int D3DXShader::AddLatencyToPathLength(unsigned int, unsigned int)
//{
//    mangled_ppc("?AddLatencyToPathLength@D3DXShader@@YAIII@Z");
//};

//public: bool D3DXShader::Instruction::DependsOnLocal(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?DependsOnLocal@Instruction@D3DXShader@@QAA_NPAV12@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Instruction::SupportsClampedModifier(void)
//{
//    mangled_ppc("?SupportsClampedModifier@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::FirstTwoOperandsAreCommutative(void)
//{
//    mangled_ppc("?FirstTwoOperandsAreCommutative@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: int D3DXShader::Instruction::GetReverseRegisterEffect(void)
//{
//    mangled_ppc("?GetReverseRegisterEffect@Instruction@D3DXShader@@QAAHXZ");
//};

//public: bool D3DXShader::Instruction::IsClauseAgnostic(void)
//{
//    mangled_ppc("?IsClauseAgnostic@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::MustSerializeDependents(void)
//{
//    mangled_ppc("?MustSerializeDependents@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction ** D3DXShader::Instruction::GetWorkListPtr(void)
//{
//    mangled_ppc("?GetWorkListPtr@Instruction@D3DXShader@@QAAPAPAV12@XZ");
//};

//public: void D3DXShader::Instruction::SwapOperands(unsigned int, unsigned int)
//{
//    mangled_ppc("?SwapOperands@Instruction@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::Dependency::GetLatency(void)
//{
//    mangled_ppc("?GetLatency@Dependency@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Dependency::SetLatency(unsigned int)
//{
//    mangled_ppc("?SetLatency@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Dependency::IsSwizzled(void)
//{
//    mangled_ppc("?IsSwizzled@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Block::MovedSideEffect(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MovedSideEffect@Block@D3DXShader@@QAAXPAVInstruction@2@0@Z");
//};

//public: bool D3DXShader::Compiler::FinishedRegisterAssignments(void)
//{
//    mangled_ppc("?FinishedRegisterAssignments@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Compiler::RemoveDeadInstruction_Unlinked(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?RemoveDeadInstruction_Unlinked@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Instruction::AddStaticDependent(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?AddStaticDependent@Instruction@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//public: void D3DXShader::Instruction::RemoveStaticDependent(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?RemoveStaticDependent@Instruction@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetPathLength(void)
//{
//    mangled_ppc("?GetPathLength@Instruction@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Instruction::SetPathLength(unsigned int)
//{
//    mangled_ppc("?SetPathLength@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Instruction::IsUnblocked(void)
//{
//    mangled_ppc("?IsUnblocked@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::SetUnblocked(void)
//{
//    mangled_ppc("?SetUnblocked@Instruction@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::IsSchedulingBlockedOn(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsSchedulingBlockedOn@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: enum D3DXShader::InstructionUnitType D3DXShader::MachineState::GetCurrentUnit(void)
//{
//    mangled_ppc("?GetCurrentUnit@MachineState@D3DXShader@@QAA?AW4InstructionUnitType@2@XZ");
//};

//private: void D3DXShader::Scheduler::DumpQueue(void)
//{
//    mangled_ppc("?DumpQueue@Scheduler@D3DXShader@@AAAXXZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::Scheduler::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@Scheduler@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: class D3DXShader::MachineState const * D3DXShader::Scheduler::GetMachineState(void)
//{
//    mangled_ppc("?GetMachineState@Scheduler@D3DXShader@@QAAPBVMachineState@2@XZ");
//};

//public: bool D3DXShader::Scheduler::IsQueueEmpty(void)
//{
//    mangled_ppc("?IsQueueEmpty@Scheduler@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::ScheduledBundleEnumerator::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@ScheduledBundleEnumerator@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: class D3DXShader::MachineState * D3DXShader::ScheduledBundleEnumerator::GetMachineState(void)
//{
//    mangled_ppc("?GetMachineState@ScheduledBundleEnumerator@D3DXShader@@QAAPAVMachineState@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::ScheduledBundleEnumerator::GetBundleStartInstr(void)
//{
//    mangled_ppc("?GetBundleStartInstr@ScheduledBundleEnumerator@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::ScheduledBundleEnumerator::ReplacedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReplacedInstruction@ScheduledBundleEnumerator@D3DXShader@@QAAXPAVInstruction@2@0@Z");
//};

//private: void D3DXShader::Compiler::PrepPrologueInstrForScheduler(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?PrepPrologueInstrForScheduler@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Instruction::CanPossiblySmashToScalars(void)
//{
//    mangled_ppc("?CanPossiblySmashToScalars@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::FindTwoOperandScalarUseConstantMask(unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindTwoOperandScalarUseConstantMask@Instruction@D3DXShader@@QAAPAV12@PAI0@Z");
//};

//public: void D3DXShader::Instruction::SetClamped(void)
//{
//    mangled_ppc("?SetClamped@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::RecomputePathLength(void)
//{
//    mangled_ppc("?RecomputePathLength@Instruction@D3DXShader@@QAAXXZ");
//};

//public: float D3DXShader::Dependency::GetFloatConstantValue(unsigned int)
//{
//    mangled_ppc("?GetFloatConstantValue@Dependency@D3DXShader@@QAAMI@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::MachineState::GetSpecialRegisterOwner(enum D3DXShader::SpecialRegister)
//{
//    mangled_ppc("?GetSpecialRegisterOwner@MachineState@D3DXShader@@QAAPAVInstruction@2@W4SpecialRegister@2@@Z");
//};

//public: void D3DXShader::Scheduler::DumpState(void)
//{
//    mangled_ppc("?DumpState@Scheduler@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::CanSmashToTwoOperandScalarInstruction(bool *)
//{
//    mangled_ppc("?CanSmashToTwoOperandScalarInstruction@Instruction@D3DXShader@@QAA_NPA_N@Z");
//};

//public: bool D3DXShader::Instruction::CanPossiblyCauseConstantWaterfall(void)
//{
//    mangled_ppc("?CanPossiblyCauseConstantWaterfall@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::MachineState::ScheduleInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ScheduleInstruction@MachineState@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::MachineState::SimulateForwards(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SimulateForwards@MachineState@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::CleanPrologueAfterScheduling(class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanPrologueAfterScheduling@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetPredicateInstruction(void)
//{
//    mangled_ppc("?GetPredicateInstruction@Scheduler@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::Scheduler::ScheduleInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ScheduleInstruction@Scheduler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Scheduler::DependentsHaveBeenScheduled(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?DependentsHaveBeenScheduled@Scheduler@D3DXShader@@QAA_NPAVInstruction@2@0@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::ScheduledBundleEnumerator::FindBundleStart(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FindBundleStart@ScheduledBundleEnumerator@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//public: void D3DXShader::ScheduledBundleEnumerator::Reset(class D3DXShader::Scheduler *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Reset@ScheduledBundleEnumerator@D3DXShader@@QAAXPAVScheduler@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVInstruction@2@@Z");
//};

//public: bool D3DXShader::ScheduledBundleEnumerator::AtFirstBundle(void)
//{
//    mangled_ppc("?AtFirstBundle@ScheduledBundleEnumerator@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ScheduledBundleEnumerator::GoToPrevBundle(void)
//{
//    mangled_ppc("?GoToPrevBundle@ScheduledBundleEnumerator@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ScheduledBundleEnumerator::CanInsertBundle(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanInsertBundle@ScheduledBundleEnumerator@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::ScheduledBundleEnumerator::CanReplaceBundle(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanReplaceBundle@ScheduledBundleEnumerator@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ScheduledBundleEnumerator::SpeculativelyInsertBundle(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SpeculativelyInsertBundle@ScheduledBundleEnumerator@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ScheduledBundleEnumerator::AddNonMicrocodeToSlot(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddNonMicrocodeToSlot@ScheduledBundleEnumerator@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::CheckMergeInterference(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CheckMergeInterference@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Instruction::CanCoIssue(void)
//{
//    mangled_ppc("?CanCoIssue@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::CanCoIssueWith(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanCoIssueWith@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0@Z");
//};

//public: unsigned int D3DXShader::Instruction::ComputeNumInstrsIfSmashedToScalars_PermitSideEffects(void)
//{
//    mangled_ppc("?ComputeNumInstrsIfSmashedToScalars_PermitSideEffects@Instruction@D3DXShader@@QAAIXZ");
//};

//private: void D3DXShader::Compiler::PrepareSmashedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?PrepareSmashedInstruction@Compiler@D3DXShader@@AAAXPAVInstruction@2@00II@Z");
//};

//private: void D3DXShader::Compiler::ReplaceSmashedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReplaceSmashedInstruction@Compiler@D3DXShader@@AAAXPAVInstruction@2@0@Z");
//};

//private: void D3DXShader::Compiler::RemoveSmashedInstructions(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?RemoveSmashedInstructions@Compiler@D3DXShader@@AAAXPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::InsertAtHead(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?InsertAtHead@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Compiler::IsSchedulerEnabled(void)
//{
//    mangled_ppc("?IsSchedulerEnabled@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAXA(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAXA@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAX(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_MAXA@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA_FLOOR(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_MAXA_FLOOR@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MUL_CONST_0(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_MUL_CONST_0@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_ADD_CONST_0(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_ADD_CONST_0@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SUB_CONST_0(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_SUB_CONST_0@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_TEX_LOD(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_SET_TEX_LOD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_H(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_SET_GRADIENTS_H@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_T_SET_GRADIENTS_V(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_T_SET_GRADIENTS_V@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//private: void D3DXShader::Scheduler::Validate(void)
//{
//    mangled_ppc("?Validate@Scheduler@D3DXShader@@AAAXXZ");
//};

//public: bool D3DXShader::Scheduler::CanScheduleVFETCHGroup(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanScheduleVFETCHGroup@Scheduler@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Scheduler::QueueInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?QueueInstruction@Scheduler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: D3DXShader::ScheduledBundleEnumerator::ScheduledBundleEnumerator(class D3DXShader::Scheduler *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("??0ScheduledBundleEnumerator@D3DXShader@@QAA@PAVScheduler@1@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@1@PAVInstruction@1@@Z");
//};

//public: bool D3DXShader::ScheduledBundleEnumerator::HasEmptyScalarSlot(void)
//{
//    mangled_ppc("?HasEmptyScalarSlot@ScheduledBundleEnumerator@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ScheduledBundleEnumerator::HasEmptySlotForInstr(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?HasEmptySlotForInstr@ScheduledBundleEnumerator@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ScheduledBundleEnumerator::SpeculativelyFillEmptySlot(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SpeculativelyFillEmptySlot@ScheduledBundleEnumerator@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ScheduledBundleEnumerator::FillEmptySlot(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FillEmptySlot@ScheduledBundleEnumerator@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::PrepBlockForScheduling(class D3DXShader::Block *, class D3DXShader::Instruction **)
//{
//    mangled_ppc("?PrepBlockForScheduling@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAPAV32@@Z");
//};

//private: void D3DXShader::Compiler::Schedule(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?Schedule@Compiler@D3DXShader@@AAAXPAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::SmashSingleSourceUnary(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?SmashSingleSourceUnary@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Opcode@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//private: void D3DXShader::Compiler::SmashSingleSourceBinary(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?SmashSingleSourceBinary@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Opcode@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//private: void D3DXShader::Compiler::SmashMultipleSourceBinary(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, bool)
//{
//    mangled_ppc("?SmashMultipleSourceBinary@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Opcode@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@_N@Z");
//};

//private: void D3DXShader::Compiler::CheckSchedulerState(class D3DXShader::Scheduler *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, unsigned int)
//{
//    mangled_ppc("?CheckSchedulerState@Compiler@D3DXShader@@AAAXPAVScheduler@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@I@Z");
//};

//private: void D3DXShader::Compiler::SmashMultipleSourceBinary_UsingPrev(class D3DXShader::Instruction *, enum D3DXShader::Opcode, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?SmashMultipleSourceBinary_UsingPrev@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Opcode@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: void D3DXShader::Scheduler::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@Scheduler@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetNextInstructionWorker(class D3DXShader::Instruction *, class D3DXShader::MachineState *)
//{
//    mangled_ppc("?GetNextInstructionWorker@Scheduler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVMachineState@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetNextInstruction(void)
//{
//    mangled_ppc("?GetNextInstruction@Scheduler@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetCompatibleInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetCompatibleInstruction@Scheduler@D3DXShader@@QAAPAVInstruction@2@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Scheduler::GetCompatibleInstructionForSmashing(class D3DXShader::Instruction *, class D3DXShader::MachineState *)
//{
//    mangled_ppc("?GetCompatibleInstructionForSmashing@Scheduler@D3DXShader@@QAAPAVInstruction@2@PAV32@PAVMachineState@2@@Z");
//};

//public: void D3DXShader::Scheduler::QueueDependencies(class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?QueueDependencies@Scheduler@D3DXShader@@QAAXPAVInstruction@2@_N@Z");
//};

//public: void D3DXShader::Scheduler::QueueDependencies_InEpilogue(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?QueueDependencies_InEpilogue@Scheduler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::SmashToScalars(class D3DXShader::Instruction *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?SmashToScalars@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: void D3DXShader::Compiler::ScheduleInBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?ScheduleInBlock@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::LocalScheduling(void)
//{
//    mangled_ppc("?LocalScheduling@Compiler@D3DXShader@@AAAXXZ");
//};

