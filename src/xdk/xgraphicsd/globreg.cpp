/* ---------- headers */

#include "xdk\xgraphicsd\globreg.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int D3DXShader::___ConstantUInt(unsigned int);
// unsigned int D3DXShader::CountBits(unsigned __int64);
// public: void D3DXShader::Instruction::PermitEditDependencies(void);
// unsigned int D3DXShader::AddBlockWeights(unsigned int, unsigned int);
// public: unsigned __int64* D3DXShader::Block::GetOrigLiveOutSet(void);
// public: unsigned __int64* D3DXShader::Block::GetDefSet(void);
// public: struct D3DXShader::ControlFlowEdge * D3DXShader::DataFlowPredecessorEnumerator::GetLastEdge(void);
// public: class D3DXShader::Block * D3DXShader::DataFlowPredecessorEnumerator::GetLastSubEntryBlock(void);
// public: class D3DXShader::Block * D3DXShader::DataFlowPredecessorEnumerator::GetLastSubCallSite(void);
// public: void D3DXShader::Compiler::DisableValidation(void);
// public: void D3DXShader::Compiler::EnableValidation(void);
// public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertAtHead(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::FindPHIUseForPredecessor_ReplacingEdge(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Dependency *);
// private: unsigned __int64* D3DXShader::Compiler::GetDefIntfSet(unsigned int);
// public: class D3DXShader::Block * D3DXShader::Block::FindSubEntryPoint(void);
// public: class D3DXShader::Block * D3DXShader::Block::GetSubEntryPoint(void);
// public: unsigned int D3DXShader::Instruction::GetFirstDefIndex_ForVectorizing(void);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrigInstrForDef(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::HaveExclusiveRegisterChoices(unsigned int, unsigned int);
// unsigned long D3DXShader::ComputeGroupSize(unsigned long);
// int D3DXShader::CompareDefIndices(void const *, void const *);
// int D3DXShader::CompareDefs(void const *, void const *);
// int D3DXShader::CompareGroups(void const *, void const *);
// private: void D3DXShader::Compiler::AddPHICopyCost(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned int *, unsigned int *);
// public: char const * D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetDebugTag(void);
// public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::IsAnyBitSet(void);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::CountSetBits(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::SetBitInEveryNibble(unsigned int);
// public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::AreAnyCommonBitsClear(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4> *);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ClearAll(void);
// void D3DXShader::SetBitInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int);
// unsigned __int64 D3DXShader::GetAlignedBitRangeFromArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int, unsigned int);
// bool D3DXShader::IsBitSetInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int);
// void D3DXShader::ReplaceAlignedBitRangeInArray<unsigned __int64, enum D3DXShader::Component>(unsigned __int64*, unsigned int, unsigned int, enum D3DXShader::Component, unsigned int);
// bool D3DXShader::AnyCommonBitsSetInArrays<unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned long);
// void D3DXShader::OrBitArray<unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned long);
// void D3DXShader::ReplaceAlignedBitRangeInArray<unsigned __int64, unsigned __int64>(unsigned __int64*, unsigned int, unsigned int, unsigned __int64, unsigned int);
// void D3DXShader::ClearAllBitsInArray<unsigned __int64>(unsigned __int64*, unsigned long);
// bool D3DXShader::IsAnyBitSetInArray<unsigned __int64>(unsigned __int64*, unsigned long);
// void D3DXShader::AndInverseBitArray<unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned long);
// void D3DXShader::ClearBitInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int);
// void D3DXShader::SubtractBitFromArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int);
// public: void D3DXShader::Block::SetLiveAcrossSet(unsigned __int64*);
// public: void D3DXShader::Block::SetOrigLiveOutSet(unsigned __int64*);
// public: void D3DXShader::Block::SetDefSet(unsigned __int64*);
// private: void D3DXShader::Compiler::SetDefBit(unsigned __int64*, unsigned int);
// private: void D3DXShader::Compiler::DumpDefSet(unsigned __int64*);
// private: void D3DXShader::Compiler::DumpDefSetInstructions(unsigned __int64*);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::CountComponentsInUse(void);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::CountRegsInUse(void);
// public: bool D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::AnyRegsInUse(void);
// public: bool D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::AreAnyCommonBitsClear(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)> *);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureComponentInUseForAllRegisters(enum D3DXShader::Component);
// public: bool D3DXShader::FixedSizeBitSet<unsigned int, 27>::IsAnyBitSet(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::ClearAll(void);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::ClearAll(void);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetBitCapacity(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ReplaceAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: bool D3DXShader::Compiler::IsAnyDebugOptionEnabled(int, int);
// private: void D3DXShader::Compiler::FreeDefSet(unsigned __int64*);
// private: void D3DXShader::Compiler::MarkDefIntf(unsigned int, unsigned int);
// public: unsigned int D3DXShader::GeneralRegisterSet::CountComponentsInUse(void);
// public: unsigned int D3DXShader::GeneralRegisterSet::CountRegsInUse(void);
// private: void D3DXShader::Compiler::CheckDefSet(unsigned __int64*);
// private: unsigned int D3DXShader::Compiler::MapDefIndex(unsigned int, bool);
// private: bool D3DXShader::Compiler::CanAddRedundantScalarOutput(class D3DXShader::Instruction *, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetEffectiveBitCapacity(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetBitMask(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ReplaceBitRange(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::Block::SetPredicatedByConditionRegister(class D3DXShader::Dependency *, bool, class D3DXShader::Block *);
// public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertAfter(class D3DXShader::Instruction *);
// private: unsigned __int64* D3DXShader::Compiler::AllocDefSet(void);
// private: enum D3DXShader::Component D3DXShader::Compiler::GetDefComponent(unsigned int);
// private: void D3DXShader::Compiler::AssignDefGroup(unsigned int, struct D3DXShader::RegGroupInfo *, enum D3DXShader::Component);
// private: void D3DXShader::Compiler::MergeGroupComponents(struct D3DXShader::RegGroupInfo *, enum D3DXShader::Component, struct D3DXShader::RegGroupInfo *, enum D3DXShader::Component, bool);
// private: bool D3DXShader::Compiler::HaveComponentInterference(unsigned int, unsigned int);
// private: void D3DXShader::Compiler::StoreDefMapping(unsigned int, unsigned int);
// private: void D3DXShader::Compiler::ValidateGroups(void);
// private: void D3DXShader::Compiler::DumpGroups(bool);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::InsertIsolatedVariableCopy(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::BuildInterferenceFromLiveness(unsigned __int64*, unsigned long, bool);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::GetField(unsigned int);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::GetFields(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::ReplaceField(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::SetField(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::SetBitInField(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::DecNonZeroField(unsigned int);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::GetFields(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::SetFields(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::SetField(unsigned int, unsigned int);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::GetDefGroup(unsigned int);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::GetDefGroupForInstr(class D3DXShader::Instruction *);
// private: unsigned int D3DXShader::Compiler::GetFirstDefIndex_ForFinalScheduling(class D3DXShader::Instruction *);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::GetDefGroupForInstr_ForVectorizing(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::AddToGroupComponent(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int, enum D3DXShader::Component, bool);
// class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> D3DXShader::AssignRegToGroup(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int, unsigned int);
// private: unsigned int D3DXShader::Compiler::PickRegForGroup(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int, class D3DXShader::GeneralRegisterSet *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> *);
// private: void D3DXShader::Compiler::UpdateDefGroupStateAfterRemovingInstructionOutput(class D3DXShader::Instruction *, unsigned int);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::CreateGroup(void);
// private: void D3DXShader::Compiler::FreeGroup(struct D3DXShader::RegGroupInfo *);
// private: void D3DXShader::Compiler::RestrictRegister(class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::WeightZPassRegGroups(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::AssignGroupRegToInstr(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::CanAddToGroup(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int);
// private: void D3DXShader::Compiler::AddToGroup(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int, bool);
// private: class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4> D3DXShader::Compiler::FindGroupMapping(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int);
// private: bool D3DXShader::Compiler::CanMergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int, bool);
// private: bool D3DXShader::Compiler::CanMergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int);
// private: bool D3DXShader::Compiler::CanMergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, bool);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *);
// private: bool D3DXShader::Compiler::CanAddToGroupComponent(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int, unsigned int);
// private: bool D3DXShader::Compiler::BuildRegGroups(bool, class D3DXShader::Instruction ***, unsigned int);
// private: void D3DXShader::Compiler::GlobalRegisterAllocation(void);

//unsigned int D3DXShader::___ConstantUInt(unsigned int)
//{
//    mangled_ppc("?___ConstantUInt@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::CountBits(unsigned __int64)
//{
//    mangled_ppc("?CountBits@D3DXShader@@YAI_K@Z");
//};

//public: void D3DXShader::Instruction::PermitEditDependencies(void)
//{
//    mangled_ppc("?PermitEditDependencies@Instruction@D3DXShader@@QAAXXZ");
//};

//unsigned int D3DXShader::AddBlockWeights(unsigned int, unsigned int)
//{
//    mangled_ppc("?AddBlockWeights@D3DXShader@@YAIII@Z");
//};

//public: unsigned __int64* D3DXShader::Block::GetOrigLiveOutSet(void)
//{
//    mangled_ppc("?GetOrigLiveOutSet@Block@D3DXShader@@QAAPA_KXZ");
//};

//public: unsigned __int64* D3DXShader::Block::GetDefSet(void)
//{
//    mangled_ppc("?GetDefSet@Block@D3DXShader@@QAAPA_KXZ");
//};

//public: struct D3DXShader::ControlFlowEdge * D3DXShader::DataFlowPredecessorEnumerator::GetLastEdge(void)
//{
//    mangled_ppc("?GetLastEdge@DataFlowPredecessorEnumerator@D3DXShader@@QAAPAUControlFlowEdge@2@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::DataFlowPredecessorEnumerator::GetLastSubEntryBlock(void)
//{
//    mangled_ppc("?GetLastSubEntryBlock@DataFlowPredecessorEnumerator@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::DataFlowPredecessorEnumerator::GetLastSubCallSite(void)
//{
//    mangled_ppc("?GetLastSubCallSite@DataFlowPredecessorEnumerator@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: void D3DXShader::Compiler::DisableValidation(void)
//{
//    mangled_ppc("?DisableValidation@Compiler@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Compiler::EnableValidation(void)
//{
//    mangled_ppc("?EnableValidation@Compiler@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertAtHead(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?InsertAtHead@Compiler@D3DXShader@@QAA?AUInstructionPlacementPoint@12@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::FindPHIUseForPredecessor_ReplacingEdge(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?FindPHIUseForPredecessor_ReplacingEdge@Compiler@D3DXShader@@AAAPAVDependency@2@PAVInstruction@2@PAVBlock@2@PAV32@@Z");
//};

//private: unsigned __int64* D3DXShader::Compiler::GetDefIntfSet(unsigned int)
//{
//    mangled_ppc("?GetDefIntfSet@Compiler@D3DXShader@@AAAPA_KI@Z");
//};

//public: class D3DXShader::Block * D3DXShader::Block::FindSubEntryPoint(void)
//{
//    mangled_ppc("?FindSubEntryPoint@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetSubEntryPoint(void)
//{
//    mangled_ppc("?GetSubEntryPoint@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: unsigned int D3DXShader::Instruction::GetFirstDefIndex_ForVectorizing(void)
//{
//    mangled_ppc("?GetFirstDefIndex_ForVectorizing@Instruction@D3DXShader@@QAAIXZ");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrigInstrForDef(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetOrigInstrForDef@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: bool D3DXShader::Compiler::HaveExclusiveRegisterChoices(unsigned int, unsigned int)
//{
//    mangled_ppc("?HaveExclusiveRegisterChoices@Compiler@D3DXShader@@AAA_NII@Z");
//};

//unsigned long D3DXShader::ComputeGroupSize(unsigned long)
//{
//    mangled_ppc("?ComputeGroupSize@D3DXShader@@YAKK@Z");
//};

//int D3DXShader::CompareDefIndices(void const *, void const *)
//{
//    mangled_ppc("?CompareDefIndices@D3DXShader@@YAHPBX0@Z");
//};

//int D3DXShader::CompareDefs(void const *, void const *)
//{
//    mangled_ppc("?CompareDefs@D3DXShader@@YAHPBX0@Z");
//};

//int D3DXShader::CompareGroups(void const *, void const *)
//{
//    mangled_ppc("?CompareGroups@D3DXShader@@YAHPBX0@Z");
//};

//private: void D3DXShader::Compiler::AddPHICopyCost(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?AddPHICopyCost@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAVDependency@2@1PAI2@Z");
//};

//public: char const * D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetDebugTag(void)
//{
//    mangled_ppc("?GetDebugTag@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAPBDXZ");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::IsAnyBitSet(void)
//{
//    mangled_ppc("?IsAnyBitSet@?$FixedSizeBitSet@_K$03@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::CountSetBits(void)
//{
//    mangled_ppc("?CountSetBits@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::SetBitInEveryNibble(unsigned int)
//{
//    mangled_ppc("?SetBitInEveryNibble@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::AreAnyCommonBitsClear(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4> *)
//{
//    mangled_ppc("?AreAnyCommonBitsClear@?$FixedSizeBitSet@_K$03@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXXZ");
//};

//void D3DXShader::SetBitInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int)
//{
//    mangled_ppc("??$SetBitInArray@_K@D3DXShader@@YAXPA_KII@Z");
//};

//unsigned __int64 D3DXShader::GetAlignedBitRangeFromArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("??$GetAlignedBitRangeFromArray@_K@D3DXShader@@YA_KPA_KIII@Z");
//};

//bool D3DXShader::IsBitSetInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int)
//{
//    mangled_ppc("??$IsBitSetInArray@_K@D3DXShader@@YA_NPA_KII@Z");
//};

//void D3DXShader::ReplaceAlignedBitRangeInArray<unsigned __int64, enum D3DXShader::Component>(unsigned __int64*, unsigned int, unsigned int, enum D3DXShader::Component, unsigned int)
//{
//    mangled_ppc("??$ReplaceAlignedBitRangeInArray@_KW4Component@D3DXShader@@@D3DXShader@@YAXPA_KIIW4Component@0@I@Z");
//};

//bool D3DXShader::AnyCommonBitsSetInArrays<unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned long)
//{
//    mangled_ppc("??$AnyCommonBitsSetInArrays@_K@D3DXShader@@YA_NPA_K0K@Z");
//};

//void D3DXShader::OrBitArray<unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned long)
//{
//    mangled_ppc("??$OrBitArray@_K@D3DXShader@@YAXPA_K0K@Z");
//};

//void D3DXShader::ReplaceAlignedBitRangeInArray<unsigned __int64, unsigned __int64>(unsigned __int64*, unsigned int, unsigned int, unsigned __int64, unsigned int)
//{
//    mangled_ppc("??$ReplaceAlignedBitRangeInArray@_K_K@D3DXShader@@YAXPA_KII_KI@Z");
//};

//void D3DXShader::ClearAllBitsInArray<unsigned __int64>(unsigned __int64*, unsigned long)
//{
//    mangled_ppc("??$ClearAllBitsInArray@_K@D3DXShader@@YAXPA_KK@Z");
//};

//bool D3DXShader::IsAnyBitSetInArray<unsigned __int64>(unsigned __int64*, unsigned long)
//{
//    mangled_ppc("??$IsAnyBitSetInArray@_K@D3DXShader@@YA_NPA_KK@Z");
//};

//void D3DXShader::AndInverseBitArray<unsigned __int64>(unsigned __int64*, unsigned __int64*, unsigned long)
//{
//    mangled_ppc("??$AndInverseBitArray@_K@D3DXShader@@YAXPA_K0K@Z");
//};

//void D3DXShader::ClearBitInArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int)
//{
//    mangled_ppc("??$ClearBitInArray@_K@D3DXShader@@YAXPA_KII@Z");
//};

//void D3DXShader::SubtractBitFromArray<unsigned __int64>(unsigned __int64*, unsigned int, unsigned int)
//{
//    mangled_ppc("??$SubtractBitFromArray@_K@D3DXShader@@YAXPA_KII@Z");
//};

//public: void D3DXShader::Block::SetLiveAcrossSet(unsigned __int64*)
//{
//    mangled_ppc("?SetLiveAcrossSet@Block@D3DXShader@@QAAXPA_K@Z");
//};

//public: void D3DXShader::Block::SetOrigLiveOutSet(unsigned __int64*)
//{
//    mangled_ppc("?SetOrigLiveOutSet@Block@D3DXShader@@QAAXPA_K@Z");
//};

//public: void D3DXShader::Block::SetDefSet(unsigned __int64*)
//{
//    mangled_ppc("?SetDefSet@Block@D3DXShader@@QAAXPA_K@Z");
//};

//private: void D3DXShader::Compiler::SetDefBit(unsigned __int64*, unsigned int)
//{
//    mangled_ppc("?SetDefBit@Compiler@D3DXShader@@AAAXPA_KI@Z");
//};

//private: void D3DXShader::Compiler::DumpDefSet(unsigned __int64*)
//{
//    mangled_ppc("?DumpDefSet@Compiler@D3DXShader@@AAAXPA_K@Z");
//};

//private: void D3DXShader::Compiler::DumpDefSetInstructions(unsigned __int64*)
//{
//    mangled_ppc("?DumpDefSetInstructions@Compiler@D3DXShader@@AAAXPA_K@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::CountComponentsInUse(void)
//{
//    mangled_ppc("?CountComponentsInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::CountRegsInUse(void)
//{
//    mangled_ppc("?CountRegsInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::AnyRegsInUse(void)
//{
//    mangled_ppc("?AnyRegsInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::AreAnyCommonBitsClear(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)> *)
//{
//    mangled_ppc("?AreAnyCommonBitsClear@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureComponentInUseForAllRegisters(enum D3DXShader::Component)
//{
//    mangled_ppc("?EnsureComponentInUseForAllRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXW4Component@2@@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned int, 27>::IsAnyBitSet(unsigned int, unsigned int)
//{
//    mangled_ppc("?IsAnyBitSet@?$FixedSizeBitSet@I$0BL@@D3DXShader@@QAA_NII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetAlignedBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ReplaceAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceAlignedBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: bool D3DXShader::Compiler::IsAnyDebugOptionEnabled(int, int)
//{
//    mangled_ppc("?IsAnyDebugOptionEnabled@Compiler@D3DXShader@@QAA_NHH@Z");
//};

//private: void D3DXShader::Compiler::FreeDefSet(unsigned __int64*)
//{
//    mangled_ppc("?FreeDefSet@Compiler@D3DXShader@@AAAXPA_K@Z");
//};

//private: void D3DXShader::Compiler::MarkDefIntf(unsigned int, unsigned int)
//{
//    mangled_ppc("?MarkDefIntf@Compiler@D3DXShader@@AAAXII@Z");
//};

//public: unsigned int D3DXShader::GeneralRegisterSet::CountComponentsInUse(void)
//{
//    mangled_ppc("?CountComponentsInUse@GeneralRegisterSet@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::GeneralRegisterSet::CountRegsInUse(void)
//{
//    mangled_ppc("?CountRegsInUse@GeneralRegisterSet@D3DXShader@@QAAIXZ");
//};

//private: void D3DXShader::Compiler::CheckDefSet(unsigned __int64*)
//{
//    mangled_ppc("?CheckDefSet@Compiler@D3DXShader@@AAAXPA_K@Z");
//};

//private: unsigned int D3DXShader::Compiler::MapDefIndex(unsigned int, bool)
//{
//    mangled_ppc("?MapDefIndex@Compiler@D3DXShader@@AAAII_N@Z");
//};

//private: bool D3DXShader::Compiler::CanAddRedundantScalarOutput(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?CanAddRedundantScalarOutput@Compiler@D3DXShader@@AAA_NPAVInstruction@2@I@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetEffectiveBitCapacity(void)
//{
//    mangled_ppc("?GetEffectiveBitCapacity@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ReplaceBitRange(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceBitRange@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SubtractAlignedBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::Block::SetPredicatedByConditionRegister(class D3DXShader::Dependency *, bool, class D3DXShader::Block *)
//{
//    mangled_ppc("?SetPredicatedByConditionRegister@Block@D3DXShader@@QAAXPAVDependency@2@_NPAV12@@Z");
//};

//public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertAfter(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertAfter@Compiler@D3DXShader@@QAA?AUInstructionPlacementPoint@12@PAVInstruction@2@@Z");
//};

//private: unsigned __int64* D3DXShader::Compiler::AllocDefSet(void)
//{
//    mangled_ppc("?AllocDefSet@Compiler@D3DXShader@@AAAPA_KXZ");
//};

//private: enum D3DXShader::Component D3DXShader::Compiler::GetDefComponent(unsigned int)
//{
//    mangled_ppc("?GetDefComponent@Compiler@D3DXShader@@AAA?AW4Component@2@I@Z");
//};

//private: void D3DXShader::Compiler::AssignDefGroup(unsigned int, struct D3DXShader::RegGroupInfo *, enum D3DXShader::Component)
//{
//    mangled_ppc("?AssignDefGroup@Compiler@D3DXShader@@AAAXIPAURegGroupInfo@2@W4Component@2@@Z");
//};

//private: void D3DXShader::Compiler::MergeGroupComponents(struct D3DXShader::RegGroupInfo *, enum D3DXShader::Component, struct D3DXShader::RegGroupInfo *, enum D3DXShader::Component, bool)
//{
//    mangled_ppc("?MergeGroupComponents@Compiler@D3DXShader@@AAAXPAURegGroupInfo@2@W4Component@2@01_N@Z");
//};

//private: bool D3DXShader::Compiler::HaveComponentInterference(unsigned int, unsigned int)
//{
//    mangled_ppc("?HaveComponentInterference@Compiler@D3DXShader@@AAA_NII@Z");
//};

//private: void D3DXShader::Compiler::StoreDefMapping(unsigned int, unsigned int)
//{
//    mangled_ppc("?StoreDefMapping@Compiler@D3DXShader@@AAAXII@Z");
//};

//private: void D3DXShader::Compiler::ValidateGroups(void)
//{
//    mangled_ppc("?ValidateGroups@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::DumpGroups(bool)
//{
//    mangled_ppc("?DumpGroups@Compiler@D3DXShader@@AAAX_N@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::InsertIsolatedVariableCopy(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertIsolatedVariableCopy@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::BuildInterferenceFromLiveness(unsigned __int64*, unsigned long, bool)
//{
//    mangled_ppc("?BuildInterferenceFromLiveness@Compiler@D3DXShader@@AAAXPA_KK_N@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintTempRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int)
//{
//    mangled_ppc("?EnsureContiguousRegistersInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintTempRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::GetField(unsigned int)
//{
//    mangled_ppc("?GetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::GetFields(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetFields@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAIII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::ReplaceField(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::SetField(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::SetBitInField(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetBitInField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::DecNonZeroField(unsigned int)
//{
//    mangled_ppc("?DecNonZeroField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXI@Z");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::GetFields(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetFields@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAIII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::SetFields(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetFields@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::SetField(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAXII@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::GetDefGroup(unsigned int)
//{
//    mangled_ppc("?GetDefGroup@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@I@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::GetDefGroupForInstr(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetDefGroupForInstr@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@PAVInstruction@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::GetFirstDefIndex_ForFinalScheduling(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetFirstDefIndex_ForFinalScheduling@Compiler@D3DXShader@@AAAIPAVInstruction@2@@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::GetDefGroupForInstr_ForVectorizing(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GetDefGroupForInstr_ForVectorizing@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@PAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::AddToGroupComponent(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int, enum D3DXShader::Component, bool)
//{
//    mangled_ppc("?AddToGroupComponent@Compiler@D3DXShader@@AAAXPAURegGroupInfo@2@IIW4Component@2@_N@Z");
//};

//class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> D3DXShader::AssignRegToGroup(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?AssignRegToGroup@D3DXShader@@YA?AV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@1@PAURegGroupInfo@1@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@1@IIII@Z");
//};

//private: unsigned int D3DXShader::Compiler::PickRegForGroup(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int, class D3DXShader::GeneralRegisterSet *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> *)
//{
//    mangled_ppc("?PickRegForGroup@Compiler@D3DXShader@@AAAIPAURegGroupInfo@2@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@IIIPAVGeneralRegisterSet@2@PAV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@@Z");
//};

//private: void D3DXShader::Compiler::UpdateDefGroupStateAfterRemovingInstructionOutput(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?UpdateDefGroupStateAfterRemovingInstructionOutput@Compiler@D3DXShader@@AAAXPAVInstruction@2@I@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::CreateGroup(void)
//{
//    mangled_ppc("?CreateGroup@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@XZ");
//};

//private: void D3DXShader::Compiler::FreeGroup(struct D3DXShader::RegGroupInfo *)
//{
//    mangled_ppc("?FreeGroup@Compiler@D3DXShader@@AAAXPAURegGroupInfo@2@@Z");
//};

//private: void D3DXShader::Compiler::RestrictRegister(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?RestrictRegister@Compiler@D3DXShader@@AAAXPAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::WeightZPassRegGroups(class D3DXShader::Block *)
//{
//    mangled_ppc("?WeightZPassRegGroups@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::AssignGroupRegToInstr(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AssignGroupRegToInstr@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanAddToGroup(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CanAddToGroup@Compiler@D3DXShader@@AAA_NPAURegGroupInfo@2@II@Z");
//};

//private: void D3DXShader::Compiler::AddToGroup(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?AddToGroup@Compiler@D3DXShader@@AAAXPAURegGroupInfo@2@II_N@Z");
//};

//private: class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4> D3DXShader::Compiler::FindGroupMapping(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?FindGroupMapping@Compiler@D3DXShader@@AAA?AV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@PAURegGroupInfo@2@0V32@III@Z");
//};

//private: bool D3DXShader::Compiler::CanMergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CanMergeGroups@Compiler@D3DXShader@@AAA_NPAURegGroupInfo@2@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@III@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, unsigned int, unsigned int, bool)
//{
//    mangled_ppc("?MergeGroups@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@PAU32@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@III_N@Z");
//};

//private: bool D3DXShader::Compiler::CanMergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int)
//{
//    mangled_ppc("?CanMergeGroups@Compiler@D3DXShader@@AAA_NPAURegGroupInfo@2@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@I@Z");
//};

//private: bool D3DXShader::Compiler::CanMergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *)
//{
//    mangled_ppc("?CanMergeGroups@Compiler@D3DXShader@@AAA_NPAURegGroupInfo@2@0@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int, bool)
//{
//    mangled_ppc("?MergeGroups@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@PAU32@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@I_N@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *)
//{
//    mangled_ppc("?MergeGroups@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@PAU32@0@Z");
//};

//private: bool D3DXShader::Compiler::CanAddToGroupComponent(struct D3DXShader::RegGroupInfo *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CanAddToGroupComponent@Compiler@D3DXShader@@AAA_NPAURegGroupInfo@2@III@Z");
//};

//private: bool D3DXShader::Compiler::BuildRegGroups(bool, class D3DXShader::Instruction ***, unsigned int)
//{
//    mangled_ppc("?BuildRegGroups@Compiler@D3DXShader@@AAA_N_NPAPAPAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::GlobalRegisterAllocation(void)
//{
//    mangled_ppc("?GlobalRegisterAllocation@Compiler@D3DXShader@@AAAXXZ");
//};

