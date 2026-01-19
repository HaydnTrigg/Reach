/* ---------- headers */

#include "xdk\xgraphicsd\finalopts.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: bool D3DXShader::EmptyRegisterSet::ShouldDumpRegSetChanges(void);
// public: class D3DXShader::Compiler * D3DXShader::EmptyRegisterSet::GetCompiler(void);
// public: unsigned int D3DXShader::Instruction::GetDebugNumber(void);
// public: unsigned int D3DXShader::Instruction::ComputeNumInstrsIfSmashedToScalars(void);
// public: bool D3DXShader::Block::IsIsolated(void);
// public: unsigned int D3DXShader::Compiler::GetTempRegisterLimit(void);
// void D3DXShader::PrintTempRegister(class D3DXShader::Compiler *, unsigned int);
// public: unsigned int D3DXShader::Dependency::GetSwizzledRegister(void);
// private: void D3DXShader::MachineState::PrintResourceChange(class D3DXShader::Instruction *, char, char const *, class D3DXShader::Instruction *);
// public: class D3DXShader::Compiler * D3DXShader::MachineState::GetCompiler(void);
// public: bool D3DXShader::MachineState::CanYield(class D3DXShader::Instruction *);
// public: void D3DXShader::MachineState::ResetCurrentUnitState(void);
// public: D3DXShader::FinalSchedulingSimulator::~FinalSchedulingSimulator(void);
// public: class D3DXShader::Compiler * D3DXShader::FinalSchedulingSimulator::GetCompiler(void);
// public: class D3DXShader::Instruction * D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::GetSpecialRegisterOwner(enum D3DXShader::SpecialRegister);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::Init(void);
// public: static unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::GetBitCapacity(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ClearAll(void);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::FindSetBit(unsigned int);
// private: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ValidateIndex(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ComputeBitShift(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ComputeArrayOffset(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Dump(void);
// public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::FreeSpecialRegister(enum D3DXShader::SpecialRegister, class D3DXShader::Instruction *);
// public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::AllocSpecialRegister(enum D3DXShader::SpecialRegister, class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::DirectlyDependsOn(class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::ReadsTempRegister(unsigned int);
// public: bool D3DXShader::Instruction::WritesTempRegister(unsigned int);
// private: char const * D3DXShader::MachineState::GetPhaseName(void);
// public: void D3DXShader::MachineState::Dump(void);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::ClearAll(void);
// private: unsigned __int64* D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ComputeWordPtr(unsigned int);
// public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::EnsureSpecialRegisterInUse(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::IsAnyBitSet(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::SetBitRange(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::AddAlignedBitMask(unsigned int, unsigned int, unsigned __int64);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned __int64);
// protected: bool D3DXShader::EmptyRegisterSet::InitDumpRegSetChanges(void);
// public: bool D3DXShader::MachineState::CanScheduleInstruction(class D3DXShader::Instruction *);
// public: void D3DXShader::MachineState::ReleaseResources(class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: bool D3DXShader::MachineState::UpdateCurrentUnit(class D3DXShader::Instruction *);
// public: void D3DXShader::MachineState::ReserveResources(class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: void D3DXShader::MachineState::SimulateBackwards(class D3DXShader::Instruction *);
// public: bool D3DXShader::FinalSchedulingSimulator::CanScheduleInstruction(class D3DXShader::Instruction *);
// public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet>::ClearAll(void);
// public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::GetBitRangeAligned(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Reserve(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::ReserveContiguousRegisters(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Free(unsigned int);
// public: void D3DXShader::EmptyRegisterSet::Init(class D3DXShader::Compiler *, char const *);
// private: bool D3DXShader::Compiler::IsFinalSchedulingCandidate(class D3DXShader::Instruction *);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Init(class D3DXShader::Compiler *, char const *);
// public: D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::DoubleLinkList<class D3DXShader::Instruction, 68>(void);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetComponentMaskInUse(unsigned int);
// public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::Init(class D3DXShader::Compiler *);
// public: void D3DXShader::GeneralRegisterSet::Init(class D3DXShader::Compiler *, char const *);
// public: void D3DXShader::MachineState::Init(class D3DXShader::Compiler *);
// public: D3DXShader::FinalSchedulingSimulator::FinalSchedulingSimulator(class D3DXShader::Block *, class D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet> *, class D3DXShader::Compiler *);
// public: void D3DXShader::FinalSchedulingSimulator::Reset(void);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureInUse(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureFree(unsigned int);
// public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet>::Init(class D3DXShader::Compiler *);
// public: void D3DXShader::FinalSchedulingSimulator::SimulateBackwards(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::ReserveBlockOutputRegisters(class D3DXShader::Block *, class D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet> *);
// private: void D3DXShader::Compiler::CoissueInBlock(class D3DXShader::Block *, bool, class D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet> *);
// private: void D3DXShader::Compiler::FinalScheduling(void);

//protected: bool D3DXShader::EmptyRegisterSet::ShouldDumpRegSetChanges(void)
//{
//    mangled_ppc("?ShouldDumpRegSetChanges@EmptyRegisterSet@D3DXShader@@IAA_NXZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::EmptyRegisterSet::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@EmptyRegisterSet@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: unsigned int D3DXShader::Instruction::GetDebugNumber(void)
//{
//    mangled_ppc("?GetDebugNumber@Instruction@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Instruction::ComputeNumInstrsIfSmashedToScalars(void)
//{
//    mangled_ppc("?ComputeNumInstrsIfSmashedToScalars@Instruction@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Block::IsIsolated(void)
//{
//    mangled_ppc("?IsIsolated@Block@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetTempRegisterLimit(void)
//{
//    mangled_ppc("?GetTempRegisterLimit@Compiler@D3DXShader@@QAAIXZ");
//};

//void D3DXShader::PrintTempRegister(class D3DXShader::Compiler *, unsigned int)
//{
//    mangled_ppc("?PrintTempRegister@D3DXShader@@YAXPAVCompiler@1@I@Z");
//};

//public: unsigned int D3DXShader::Dependency::GetSwizzledRegister(void)
//{
//    mangled_ppc("?GetSwizzledRegister@Dependency@D3DXShader@@QAAIXZ");
//};

//private: void D3DXShader::MachineState::PrintResourceChange(class D3DXShader::Instruction *, char, char const *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?PrintResourceChange@MachineState@D3DXShader@@AAAXPAVInstruction@2@DPBD0@Z");
//};

//public: class D3DXShader::Compiler * D3DXShader::MachineState::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@MachineState@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: bool D3DXShader::MachineState::CanYield(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanYield@MachineState@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::MachineState::ResetCurrentUnitState(void)
//{
//    mangled_ppc("?ResetCurrentUnitState@MachineState@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::FinalSchedulingSimulator::~FinalSchedulingSimulator(void)
//{
//    mangled_ppc("??1FinalSchedulingSimulator@D3DXShader@@QAA@XZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::FinalSchedulingSimulator::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@FinalSchedulingSimulator@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::GetSpecialRegisterOwner(enum D3DXShader::SpecialRegister)
//{
//    mangled_ppc("?GetSpecialRegisterOwner@?$_SpecialRegisterSet@VEmptyRegisterSet@D3DXShader@@@D3DXShader@@QAAPAVInstruction@2@W4SpecialRegister@2@@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAXXZ");
//};

//public: static unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$FixedSizeBitSet@_K$03@D3DXShader@@SAIXZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::FindSetBit(unsigned int)
//{
//    mangled_ppc("?FindSetBit@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAII@Z");
//};

//private: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ValidateIndex(unsigned int)
//{
//    mangled_ppc("?ValidateIndex@?$FixedSizeBitSet@_K$03@D3DXShader@@AAAXI@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ComputeBitShift(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift@?$FixedSizeBitSet@_K$03@D3DXShader@@AAAKI@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ComputeArrayOffset(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset@?$FixedSizeBitSet@_K$03@D3DXShader@@AAAKI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Dump(void)
//{
//    mangled_ppc("?Dump@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::FreeSpecialRegister(enum D3DXShader::SpecialRegister, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FreeSpecialRegister@?$_SpecialRegisterSet@VEmptyRegisterSet@D3DXShader@@@D3DXShader@@QAAXW4SpecialRegister@2@PAVInstruction@2@@Z");
//};

//public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::AllocSpecialRegister(enum D3DXShader::SpecialRegister, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AllocSpecialRegister@?$_SpecialRegisterSet@VEmptyRegisterSet@D3DXShader@@@D3DXShader@@QAAXW4SpecialRegister@2@PAVInstruction@2@@Z");
//};

//public: bool D3DXShader::Instruction::DirectlyDependsOn(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?DirectlyDependsOn@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::Instruction::ReadsTempRegister(unsigned int)
//{
//    mangled_ppc("?ReadsTempRegister@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::WritesTempRegister(unsigned int)
//{
//    mangled_ppc("?WritesTempRegister@Instruction@D3DXShader@@QAA_NI@Z");
//};

//private: char const * D3DXShader::MachineState::GetPhaseName(void)
//{
//    mangled_ppc("?GetPhaseName@MachineState@D3DXShader@@AAAPBDXZ");
//};

//public: void D3DXShader::MachineState::Dump(void)
//{
//    mangled_ppc("?Dump@MachineState@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXXZ");
//};

//private: unsigned __int64* D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$FixedSizeBitSet@_K$03@D3DXShader@@AAAPA_KI@Z");
//};

//public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::EnsureSpecialRegisterInUse(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?EnsureSpecialRegisterInUse@?$_SpecialRegisterSet@VEmptyRegisterSet@D3DXShader@@@D3DXShader@@QAAXPAVDependency@2@PAVInstruction@2@@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::IsAnyBitSet(unsigned int, unsigned int)
//{
//    mangled_ppc("?IsAnyBitSet@?$FixedSizeBitSet@_K$03@D3DXShader@@QAA_NII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::SetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetBitRange@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::AddAlignedBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?AddAlignedBitMask@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAXII_K@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?SubtractAlignedBitMask@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAXII_K@Z");
//};

//protected: bool D3DXShader::EmptyRegisterSet::InitDumpRegSetChanges(void)
//{
//    mangled_ppc("?InitDumpRegSetChanges@EmptyRegisterSet@D3DXShader@@IAA_NXZ");
//};

//public: bool D3DXShader::MachineState::CanScheduleInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanScheduleInstruction@MachineState@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::MachineState::ReleaseResources(class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?ReleaseResources@MachineState@D3DXShader@@QAAXPAVInstruction@2@PAVDependency@2@@Z");
//};

//public: bool D3DXShader::MachineState::UpdateCurrentUnit(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?UpdateCurrentUnit@MachineState@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::MachineState::ReserveResources(class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReserveResources@MachineState@D3DXShader@@QAAXPAVDependency@2@PAVInstruction@2@1@Z");
//};

//public: void D3DXShader::MachineState::SimulateBackwards(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SimulateBackwards@MachineState@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::FinalSchedulingSimulator::CanScheduleInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanScheduleInstruction@FinalSchedulingSimulator@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$_SpecialRegisterSet@VGeneralRegisterSet@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::GetBitRangeAligned(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRangeAligned@?$FixedSizeBitSet@_K$03@D3DXShader@@QAA_KII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Reserve(unsigned int)
//{
//    mangled_ppc("?Reserve@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::ReserveContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReserveContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Free(unsigned int)
//{
//    mangled_ppc("?Free@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::EmptyRegisterSet::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@EmptyRegisterSet@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//private: bool D3DXShader::Compiler::IsFinalSchedulingCandidate(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsFinalSchedulingCandidate@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::DoubleLinkList<class D3DXShader::Instruction, 68>(void)
//{
//    mangled_ppc("??0?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAA@XZ");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::EmptyRegisterSet>::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@?$_SpecialRegisterSet@VEmptyRegisterSet@D3DXShader@@@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: void D3DXShader::GeneralRegisterSet::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@GeneralRegisterSet@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: void D3DXShader::MachineState::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@MachineState@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: D3DXShader::FinalSchedulingSimulator::FinalSchedulingSimulator(class D3DXShader::Block *, class D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet> *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("??0FinalSchedulingSimulator@D3DXShader@@QAA@PAVBlock@1@PAV?$_SpecialRegisterSet@VGeneralRegisterSet@D3DXShader@@@1@PAVCompiler@1@@Z");
//};

//public: void D3DXShader::FinalSchedulingSimulator::Reset(void)
//{
//    mangled_ppc("?Reset@FinalSchedulingSimulator@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureInUse(unsigned int)
//{
//    mangled_ppc("?EnsureInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureFree(unsigned int)
//{
//    mangled_ppc("?EnsureFree@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet>::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@?$_SpecialRegisterSet@VGeneralRegisterSet@D3DXShader@@@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//public: void D3DXShader::FinalSchedulingSimulator::SimulateBackwards(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SimulateBackwards@FinalSchedulingSimulator@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::ReserveBlockOutputRegisters(class D3DXShader::Block *, class D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet> *)
//{
//    mangled_ppc("?ReserveBlockOutputRegisters@Compiler@D3DXShader@@AAAXPAVBlock@2@PAV?$_SpecialRegisterSet@VGeneralRegisterSet@D3DXShader@@@2@@Z");
//};

//private: void D3DXShader::Compiler::CoissueInBlock(class D3DXShader::Block *, bool, class D3DXShader::_SpecialRegisterSet<class D3DXShader::GeneralRegisterSet> *)
//{
//    mangled_ppc("?CoissueInBlock@Compiler@D3DXShader@@AAAXPAVBlock@2@_NPAV?$_SpecialRegisterSet@VGeneralRegisterSet@D3DXShader@@@2@@Z");
//};

//private: void D3DXShader::Compiler::FinalScheduling(void)
//{
//    mangled_ppc("?FinalScheduling@Compiler@D3DXShader@@AAAXXZ");
//};

