/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **D3DXShader::g_rgRegPrefixes; // "?g_rgRegPrefixes@D3DXShader@@3PAPBDA"

// public: enum _D3DXREGISTER_SET D3DXShader::Instruction::GetConstantRegisterUseType(void);
// public: bool D3DXShader::Compiler::WasSamplerRegisterLimitSpecified(void);
// public: unsigned int D3DXShader::Compiler::GetSamplerRegisterCount(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateUniformVariableInstr_FromComponent(unsigned int, unsigned int);
// public: static bool D3DXShader::Compiler::IsIntegerComponentType(enum D3DXShader::_D3DCOMPONENT_TYPE);
// public: static bool D3DXShader::Compiler::IsSignedIntegerComponentType(enum D3DXShader::_D3DCOMPONENT_TYPE);
// void D3DXShader::PrintConstantRegister(class D3DXShader::Compiler *, unsigned int);
// void D3DXShader::PrintSamplerRegister(class D3DXShader::Compiler *, unsigned int);
// void D3DXShader::PrintConditionRegister(class D3DXShader::Compiler *, unsigned int);
// void D3DXShader::PrintIntegerRegister(class D3DXShader::Compiler *, unsigned int);
// void D3DXShader::ReportOutOfConstantRegistersError(class D3DXShader::Compiler *);
// void D3DXShader::ReportOutOfSamplerRegistersError(class D3DXShader::Compiler *);
// void D3DXShader::ReportOutOfBooleanRegistersError(class D3DXShader::Compiler *);
// void D3DXShader::ReportOutOfIntegerRegistersError(class D3DXShader::Compiler *);
// public: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::GetBaseSemantic(void);
// public: unsigned int D3DXShader::ComponentTypeEnumerator::GetSemanticFieldIndex(void);
// public: void D3DXShader::ComponentTypeEnumerator::SetSemanticFieldIndex(unsigned int);
// public: void D3DXShader::ComponentTypeEnumerator::IncSemanticFieldIndex(void);
// public: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::GetBaseRegister(void);
// public: unsigned long D3DXShader::ComponentTypeEnumerator::GetUsage(void);
// public: unsigned int D3DXShader::ComponentTypeEnumerator::GetNumComponentsRemainingInField(void);
// public: unsigned int D3DXShader::ComponentTypeEnumerator::GetNumRows(void);
// public: unsigned int D3DXShader::ComponentTypeEnumerator::GetNumCols(void);
// public: void D3DXShader::ComponentTypeEnumerator::SkipToNextField(void);
// public: bool D3DXShader::ComponentTypeEnumerator::RequiresPackingBoundary(void);
// public: bool D3DXShader::ComponentTypeEnumerator::AtEnd(void);
// void D3DXShader::SetVariableComponentInfo(struct D3DXShader::VariableComponentInfo *, unsigned int, unsigned int, unsigned int, enum D3DXShader::_D3DCOMPONENT_TYPE, bool);
// private: void D3DXShader::Compiler::ParseRegisterToken(class D3DXShader::CNodeToken *, enum _D3DXREGISTER_SET, enum _D3DXREGISTER_SET *, unsigned int *, bool *);
// int D3DXShader::CompareConstants(void const *, void const *);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::Init(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::Init(void);
// public: static unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::GetBitCapacity(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ClearAll(void);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindSetBit(unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::CopyFrom(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **);
// private: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ValidateIndex(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ComputeBitShift(unsigned int);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ComputeArrayOffset(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::FindNextRegInUse(unsigned int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindClearBit(unsigned int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindNibbleWithClearBit(unsigned int, unsigned int *);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindLastNibbleWithClearBit(unsigned int, unsigned int *);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::FindClearBit(unsigned int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindClearBit(unsigned int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindNibbleWithClearBit(unsigned int, unsigned int *);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindLastNibbleWithClearBit(unsigned int, unsigned int *);
// public: unsigned int D3DXShader::Instruction::GetVarReg(class D3DXShader::Compiler *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::FindSetBit(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::CopyFrom(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)> *);
// public: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::GetBitCapacity(void);
// private: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: unsigned __int64* D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ComputeWordPtr(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Find(unsigned int, unsigned int, int);
// public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::IsAnyBitSet(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetBitRange(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::AddAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::IsAnyBitSet(unsigned int, unsigned int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindLastBitSetInRange(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::SetBitRange(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::AddAlignedBitMask(unsigned int, unsigned int, unsigned __int64);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned __int64);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Find(unsigned int, unsigned int, int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Find(unsigned int, unsigned int, int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Find(unsigned int, unsigned int, int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::FindLastBitSetInRange(unsigned int, unsigned int);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindLastBitSetInRange(unsigned int, unsigned int);
// public: void D3DXShader::Compiler::FreeTypeEnumerator(class D3DXShader::ComponentTypeEnumerator *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::GetRegCapacity(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::GetBitRangeAligned(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Reserve(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::ReserveContiguousRegisters(unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Alloc(unsigned int, bool);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::AllocTopDown(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::FindContiguousRegisters(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Free(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Reserve(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::ReserveContiguousRegisters(unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Alloc(unsigned int, bool);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Free(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Reserve(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::ReserveContiguousRegisters(unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Alloc(unsigned int, bool);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Reserve(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::ReserveContiguousRegisters(unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::AllocTopDown(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::FindContiguousRegisters(unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::FindContiguousRegisters(unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::FindContiguousRegisters(unsigned int, unsigned int);
// private: void D3DXShader::Compiler::PackConstants(void);
// private: unsigned int D3DXShader::Compiler::AllocRegsForUniformVariable(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)> *, unsigned int);
// private: bool D3DXShader::Compiler::SubstituteUniformConstants(void);
// public: void D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void);
// public: unsigned int D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Find(void *);
// public: void ** D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Get(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Init(class D3DXShader::Compiler *, char const *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Alloc_NoExceptionOnFailure(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Init(class D3DXShader::Compiler *, char const *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Alloc_NoExceptionOnFailure(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Init(class D3DXShader::Compiler *, char const *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Alloc_NoExceptionOnFailure(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Init(class D3DXShader::Compiler *, char const *);
// public: void D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Init(void);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::GetComponentMaskInUse(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::GetComponentMaskInUse(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetComponentMaskInUse(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::GetComponentMaskInUse(unsigned int);
// private: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpaceWorker(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::AllocContiguousRegisters(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::AllocContiguousRegisters(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::AllocContiguousRegisters(unsigned int);
// public: void * D3DXShader::Compiler::FindAssociatedErrorData(void *);
// private: void D3DXShader::Compiler::GetVariableRegisterBounds(unsigned int, unsigned int *, unsigned int *);
// private: void D3DXShader::Compiler::ReportInvalidRegisterSemanticError(unsigned int);
// public: void D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Init(void);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::EnsureContiguousRegistersFree(unsigned int, unsigned int);
// public: bool D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::IsInUse(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int);
// private: void ** D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpace(unsigned int);
// public: void D3DXShader::ComponentTypeEnumerator::Init(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: class D3DXShader::ComponentTypeEnumerator * D3DXShader::Compiler::CreateTypeEnumerator(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// private: void D3DXShader::Compiler::PadConstantRegisterBlocks(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)> *);
// public: void D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Append(void *);
// public: void D3DXShader::Compiler::AssociateErrorData(void *, void *);
// private: void D3DXShader::Compiler::ComputeGlobalVariableLayout(unsigned int);
// private: void D3DXShader::Compiler::ConstantRegisterAllocation(void);

//public: enum _D3DXREGISTER_SET D3DXShader::Instruction::GetConstantRegisterUseType(void)
//{
//    mangled_ppc("?GetConstantRegisterUseType@Instruction@D3DXShader@@QAA?AW4_D3DXREGISTER_SET@@XZ");
//};

//public: bool D3DXShader::Compiler::WasSamplerRegisterLimitSpecified(void)
//{
//    mangled_ppc("?WasSamplerRegisterLimitSpecified@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetSamplerRegisterCount(void)
//{
//    mangled_ppc("?GetSamplerRegisterCount@Compiler@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateUniformVariableInstr_FromComponent(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetOrCreateUniformVariableInstr_FromComponent@Compiler@D3DXShader@@QAAPAVInstruction@2@II@Z");
//};

//public: static bool D3DXShader::Compiler::IsIntegerComponentType(enum D3DXShader::_D3DCOMPONENT_TYPE)
//{
//    mangled_ppc("?IsIntegerComponentType@Compiler@D3DXShader@@SA_NW4_D3DCOMPONENT_TYPE@2@@Z");
//};

//public: static bool D3DXShader::Compiler::IsSignedIntegerComponentType(enum D3DXShader::_D3DCOMPONENT_TYPE)
//{
//    mangled_ppc("?IsSignedIntegerComponentType@Compiler@D3DXShader@@SA_NW4_D3DCOMPONENT_TYPE@2@@Z");
//};

//void D3DXShader::PrintConstantRegister(class D3DXShader::Compiler *, unsigned int)
//{
//    mangled_ppc("?PrintConstantRegister@D3DXShader@@YAXPAVCompiler@1@I@Z");
//};

//void D3DXShader::PrintSamplerRegister(class D3DXShader::Compiler *, unsigned int)
//{
//    mangled_ppc("?PrintSamplerRegister@D3DXShader@@YAXPAVCompiler@1@I@Z");
//};

//void D3DXShader::PrintConditionRegister(class D3DXShader::Compiler *, unsigned int)
//{
//    mangled_ppc("?PrintConditionRegister@D3DXShader@@YAXPAVCompiler@1@I@Z");
//};

//void D3DXShader::PrintIntegerRegister(class D3DXShader::Compiler *, unsigned int)
//{
//    mangled_ppc("?PrintIntegerRegister@D3DXShader@@YAXPAVCompiler@1@I@Z");
//};

//void D3DXShader::ReportOutOfConstantRegistersError(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ReportOutOfConstantRegistersError@D3DXShader@@YAXPAVCompiler@1@@Z");
//};

//void D3DXShader::ReportOutOfSamplerRegistersError(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ReportOutOfSamplerRegistersError@D3DXShader@@YAXPAVCompiler@1@@Z");
//};

//void D3DXShader::ReportOutOfBooleanRegistersError(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ReportOutOfBooleanRegistersError@D3DXShader@@YAXPAVCompiler@1@@Z");
//};

//void D3DXShader::ReportOutOfIntegerRegistersError(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ReportOutOfIntegerRegistersError@D3DXShader@@YAXPAVCompiler@1@@Z");
//};

//public: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::GetBaseSemantic(void)
//{
//    mangled_ppc("?GetBaseSemantic@ComponentTypeEnumerator@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//public: unsigned int D3DXShader::ComponentTypeEnumerator::GetSemanticFieldIndex(void)
//{
//    mangled_ppc("?GetSemanticFieldIndex@ComponentTypeEnumerator@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ComponentTypeEnumerator::SetSemanticFieldIndex(unsigned int)
//{
//    mangled_ppc("?SetSemanticFieldIndex@ComponentTypeEnumerator@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::ComponentTypeEnumerator::IncSemanticFieldIndex(void)
//{
//    mangled_ppc("?IncSemanticFieldIndex@ComponentTypeEnumerator@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::CNode * D3DXShader::ComponentTypeEnumerator::GetBaseRegister(void)
//{
//    mangled_ppc("?GetBaseRegister@ComponentTypeEnumerator@D3DXShader@@QAAPAVCNode@2@XZ");
//};

//public: unsigned long D3DXShader::ComponentTypeEnumerator::GetUsage(void)
//{
//    mangled_ppc("?GetUsage@ComponentTypeEnumerator@D3DXShader@@QAAKXZ");
//};

//public: unsigned int D3DXShader::ComponentTypeEnumerator::GetNumComponentsRemainingInField(void)
//{
//    mangled_ppc("?GetNumComponentsRemainingInField@ComponentTypeEnumerator@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::ComponentTypeEnumerator::GetNumRows(void)
//{
//    mangled_ppc("?GetNumRows@ComponentTypeEnumerator@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::ComponentTypeEnumerator::GetNumCols(void)
//{
//    mangled_ppc("?GetNumCols@ComponentTypeEnumerator@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ComponentTypeEnumerator::SkipToNextField(void)
//{
//    mangled_ppc("?SkipToNextField@ComponentTypeEnumerator@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ComponentTypeEnumerator::RequiresPackingBoundary(void)
//{
//    mangled_ppc("?RequiresPackingBoundary@ComponentTypeEnumerator@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ComponentTypeEnumerator::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@ComponentTypeEnumerator@D3DXShader@@QAA_NXZ");
//};

//void D3DXShader::SetVariableComponentInfo(struct D3DXShader::VariableComponentInfo *, unsigned int, unsigned int, unsigned int, enum D3DXShader::_D3DCOMPONENT_TYPE, bool)
//{
//    mangled_ppc("?SetVariableComponentInfo@D3DXShader@@YAXPAUVariableComponentInfo@1@IIIW4_D3DCOMPONENT_TYPE@1@_N@Z");
//};

//private: void D3DXShader::Compiler::ParseRegisterToken(class D3DXShader::CNodeToken *, enum _D3DXREGISTER_SET, enum _D3DXREGISTER_SET *, unsigned int *, bool *)
//{
//    mangled_ppc("?ParseRegisterToken@Compiler@D3DXShader@@AAAXPAVCNodeToken@2@W4_D3DXREGISTER_SET@@PAW44@PAIPA_N@Z");
//};

//int D3DXShader::CompareConstants(void const *, void const *)
//{
//    mangled_ppc("?CompareConstants@D3DXShader@@YAHPBX0@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAXXZ");
//};

//public: static unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@SAIXZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindSetBit(unsigned int)
//{
//    mangled_ppc("?FindSetBit@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::CopyFrom(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16> *)
//{
//    mangled_ppc("?CopyFrom@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAXPAV12@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ValidateIndex(unsigned int)
//{
//    mangled_ppc("?ValidateIndex@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@AAAXI@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ComputeBitShift(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@AAAKI@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ComputeArrayOffset(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@AAAKI@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::FindNextRegInUse(unsigned int)
//{
//    mangled_ppc("?FindNextRegInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindClearBit(unsigned int)
//{
//    mangled_ppc("?FindClearBit@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindNibbleWithClearBit(unsigned int, unsigned int *)
//{
//    mangled_ppc("?FindNibbleWithClearBit@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAIIPAI@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindLastNibbleWithClearBit(unsigned int, unsigned int *)
//{
//    mangled_ppc("?FindLastNibbleWithClearBit@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAIIPAI@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::FindClearBit(unsigned int)
//{
//    mangled_ppc("?FindClearBit@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindClearBit(unsigned int)
//{
//    mangled_ppc("?FindClearBit@?$FixedSizeBitSet@I$00@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindNibbleWithClearBit(unsigned int, unsigned int *)
//{
//    mangled_ppc("?FindNibbleWithClearBit@?$FixedSizeBitSet@I$00@D3DXShader@@QAAIIPAI@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindLastNibbleWithClearBit(unsigned int, unsigned int *)
//{
//    mangled_ppc("?FindLastNibbleWithClearBit@?$FixedSizeBitSet@I$00@D3DXShader@@QAAIIPAI@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetVarReg(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetVarReg@Instruction@D3DXShader@@QAAIPAVCompiler@2@@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::FindSetBit(unsigned int)
//{
//    mangled_ppc("?FindSetBit@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::CopyFrom(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)> *)
//{
//    mangled_ppc("?CopyFrom@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAV12@@Z");
//};

//public: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAU342@@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//private: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@2@XZ");
//};

//private: static struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: unsigned __int64* D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@AAAPA_KI@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Find(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Find@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAIIIH@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::IsAnyBitSet(unsigned int, unsigned int)
//{
//    mangled_ppc("?IsAnyBitSet@?$FixedSizeBitSet@I$00@D3DXShader@@QAA_NII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetBitRange@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::AddAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?AddAlignedBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::IsAnyBitSet(unsigned int, unsigned int)
//{
//    mangled_ppc("?IsAnyBitSet@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAA_NII@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::FindLastBitSetInRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindLastBitSetInRange@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAIII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::SetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetBitRange@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::AddAlignedBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?AddAlignedBitMask@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAXII_K@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?SubtractAlignedBitMask@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAAXII_K@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Find(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Find@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAIIIH@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Find(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Find@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAIIIH@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Find(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Find@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAIIIH@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned __int64, 4>::FindLastBitSetInRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindLastBitSetInRange@?$FixedSizeBitSet@_K$03@D3DXShader@@QAAIII@Z");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::FindLastBitSetInRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindLastBitSetInRange@?$FixedSizeBitSet@I$00@D3DXShader@@QAAIII@Z");
//};

//public: void D3DXShader::Compiler::FreeTypeEnumerator(class D3DXShader::ComponentTypeEnumerator *)
//{
//    mangled_ppc("?FreeTypeEnumerator@Compiler@D3DXShader@@QAAXPAVComponentTypeEnumerator@2@@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::GetRegCapacity(void)
//{
//    mangled_ppc("?GetRegCapacity@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 16>::GetBitRangeAligned(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRangeAligned@?$FixedSizeBitSet@_K$0BA@@D3DXShader@@QAA_KII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Reserve(unsigned int)
//{
//    mangled_ppc("?Reserve@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::ReserveContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReserveContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Alloc(unsigned int, bool)
//{
//    mangled_ppc("?Alloc@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAII_N@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::AllocTopDown(unsigned int)
//{
//    mangled_ppc("?AllocTopDown@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::FindContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAIII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Free(unsigned int)
//{
//    mangled_ppc("?Free@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Reserve(unsigned int)
//{
//    mangled_ppc("?Reserve@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::ReserveContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReserveContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Alloc(unsigned int, bool)
//{
//    mangled_ppc("?Alloc@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAII_N@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Free(unsigned int)
//{
//    mangled_ppc("?Free@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Reserve(unsigned int)
//{
//    mangled_ppc("?Reserve@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::ReserveContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReserveContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Alloc(unsigned int, bool)
//{
//    mangled_ppc("?Alloc@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAII_N@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Reserve(unsigned int)
//{
//    mangled_ppc("?Reserve@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::ReserveContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReserveContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::AllocTopDown(unsigned int)
//{
//    mangled_ppc("?AllocTopDown@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::FindContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAIII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::FindContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAIII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::FindContiguousRegisters(unsigned int, unsigned int)
//{
//    mangled_ppc("?FindContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAIII@Z");
//};

//private: void D3DXShader::Compiler::PackConstants(void)
//{
//    mangled_ppc("?PackConstants@Compiler@D3DXShader@@AAAXXZ");
//};

//private: unsigned int D3DXShader::Compiler::AllocRegsForUniformVariable(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)> *, unsigned int)
//{
//    mangled_ppc("?AllocRegsForUniformVariable@Compiler@D3DXShader@@AAAIPAV?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@2@I@Z");
//};

//private: bool D3DXShader::Compiler::SubstituteUniformConstants(void)
//{
//    mangled_ppc("?SubstituteUniformConstants@Compiler@D3DXShader@@AAA_NXZ");
//};

//public: void D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Find(void *)
//{
//    mangled_ppc("?Find@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIPAX@Z");
//};

//public: void ** D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Get(unsigned int)
//{
//    mangled_ppc("?Get@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAPAPAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::Alloc_NoExceptionOnFailure(unsigned int)
//{
//    mangled_ppc("?Alloc_NoExceptionOnFailure@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Alloc_NoExceptionOnFailure(unsigned int)
//{
//    mangled_ppc("?Alloc_NoExceptionOnFailure@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::Alloc_NoExceptionOnFailure(unsigned int)
//{
//    mangled_ppc("?Alloc_NoExceptionOnFailure@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//private: struct D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::AllocContiguousRegisters(unsigned int)
//{
//    mangled_ppc("?AllocContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::AllocContiguousRegisters(unsigned int)
//{
//    mangled_ppc("?AllocContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::AllocContiguousRegisters(unsigned int)
//{
//    mangled_ppc("?AllocContiguousRegisters@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void * D3DXShader::Compiler::FindAssociatedErrorData(void *)
//{
//    mangled_ppc("?FindAssociatedErrorData@Compiler@D3DXShader@@QAAPAXPAX@Z");
//};

//private: void D3DXShader::Compiler::GetVariableRegisterBounds(unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?GetVariableRegisterBounds@Compiler@D3DXShader@@AAAXIPAI0@Z");
//};

//private: void D3DXShader::Compiler::ReportInvalidRegisterSemanticError(unsigned int)
//{
//    mangled_ppc("?ReportInvalidRegisterSemanticError@Compiler@D3DXShader@@AAAXI@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::ComponentTypeEnumerator::ContainerState, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ComponentTypeEnumerator::ContainerState, struct D3DXShader::ComponentTypeEnumerator::ContainerState, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UContainerState@ComponentTypeEnumerator@D3DXShader@@$1?AllocInContext@CompilerHeap@3@SAPAXPAXK@Z$1?FreeInContext@53@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int)
//{
//    mangled_ppc("?EnsureContiguousRegistersInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)>::EnsureContiguousRegistersFree(unsigned int, unsigned int)
//{
//    mangled_ppc("?EnsureContiguousRegistersFree@?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: bool D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::IsInUse(unsigned int)
//{
//    mangled_ppc("?IsInUse@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintSamplerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfSamplerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int)
//{
//    mangled_ppc("?EnsureContiguousRegistersInUse@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintSamplerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfSamplerRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>, void (D3DXShader::PrintConditionRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 1, void (D3DXShader::ReportOutOfBooleanRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 4>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int)
//{
//    mangled_ppc("?EnsureContiguousRegistersInUse@?$RegisterSet@V?$FixedSizeBitSet@_K$03@D3DXShader@@$1?PrintConditionRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$00$1?ReportOutOfBooleanRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, void (D3DXShader::PrintIntegerRegister::*)(class D3DXShader::Compiler *, unsigned int), 32, 1, void (D3DXShader::ReportOutOfIntegerRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned int, 1>)>::EnsureContiguousRegistersInUse(unsigned int, unsigned int)
//{
//    mangled_ppc("?EnsureContiguousRegistersInUse@?$RegisterSet@V?$FixedSizeBitSet@I$00@D3DXShader@@$1?PrintIntegerRegister@2@YAXPAVCompiler@2@I@Z$0CA@$00$1?ReportOutOfIntegerRegistersError@2@YAX0@Z@D3DXShader@@QAAXII@Z");
//};

//private: void ** D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAPAPAXI@Z");
//};

//public: void D3DXShader::ComponentTypeEnumerator::Init(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?Init@ComponentTypeEnumerator@D3DXShader@@QAAXPAVCNode@2@00@Z");
//};

//public: class D3DXShader::ComponentTypeEnumerator * D3DXShader::Compiler::CreateTypeEnumerator(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CreateTypeEnumerator@Compiler@D3DXShader@@QAAPAVComponentTypeEnumerator@2@PAVCNode@2@00@Z");
//};

//private: void D3DXShader::Compiler::PadConstantRegisterBlocks(class D3DXShader::RegisterSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>, void (D3DXShader::PrintConstantRegister::*)(class D3DXShader::Compiler *, unsigned int), 256, 4, void (D3DXShader::ReportOutOfConstantRegistersError::*)(class D3DXShader::FixedSizeBitSet<unsigned __int64, 16>)> *)
//{
//    mangled_ppc("?PadConstantRegisterBlocks@Compiler@D3DXShader@@AAAXPAV?$RegisterSet@V?$FixedSizeBitSet@_K$0BA@@D3DXShader@@$1?PrintConstantRegister@2@YAXPAVCompiler@2@I@Z$0BAA@$03$1?ReportOutOfConstantRegistersError@2@YAX0@Z@2@@Z");
//};

//public: void D3DXShader::ArrayList<void *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Append(void *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAX$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXPAX@Z");
//};

//public: void D3DXShader::Compiler::AssociateErrorData(void *, void *)
//{
//    mangled_ppc("?AssociateErrorData@Compiler@D3DXShader@@QAAXPAX0@Z");
//};

//private: void D3DXShader::Compiler::ComputeGlobalVariableLayout(unsigned int)
//{
//    mangled_ppc("?ComputeGlobalVariableLayout@Compiler@D3DXShader@@AAAXI@Z");
//};

//private: void D3DXShader::Compiler::ConstantRegisterAllocation(void)
//{
//    mangled_ppc("?ConstantRegisterAllocation@Compiler@D3DXShader@@AAAXXZ");
//};

