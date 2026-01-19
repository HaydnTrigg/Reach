/* ---------- headers */

#include "xdk\xgraphicsd\predication.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void D3DXShader::Instruction::PermitEditDependents(void);
// public: bool D3DXShader::Instruction::CanBePredicated(void);
// public: void D3DXShader::Instruction::SetNumOutputComponents(unsigned int);
// public: void D3DXShader::Instruction::SetThreadDependent(void);
// public: void D3DXShader::Dependency::InitOrdering(void);
// public: void D3DXShader::Dependency::InitSideEffect(enum D3DXShader::SideEffect);
// public: bool D3DXShader::Dependency::IsSideEffectDependency(enum D3DXShader::SideEffect);
// public: void D3DXShader::Dependency::ConvertToScalar(void);
// public: unsigned int D3DXShader::Dependency::GetRegisterMask(void);
// public: bool D3DXShader::Dependency::IsStatic(void);
// public: void D3DXShader::Dependency::FindScalarOperandSource_Isolated(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Instruction *);
// public: bool D3DXShader::Block::Visited(unsigned int);
// public: void D3DXShader::Block::CopyPredicateConditions(class D3DXShader::Block *);
// public: void D3DXShader::Block::ClearPredicateConditions(void);
// public: bool D3DXShader::Block::InSameIsolationGroup(class D3DXShader::Block *);
// public: D3DXShader::DomGraphDepthFirstEnumerator::DomGraphDepthFirstEnumerator(class D3DXShader::Block *);
// public: unsigned int D3DXShader::Compiler::BeginTraverseBlocks(void);
// public: void D3DXShader::Compiler::EndTraverseBlocks(void);
// public: unsigned int D3DXShader::Compiler::BeginTraversePHIs(void);
// public: void D3DXShader::Compiler::EndTraversePHIs(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SET_CLR(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_EXIT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::FindPHIUseForPredecessor_PredecessorsInvalid(class D3DXShader::Instruction *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::VisitReachableBlocks_IgnoreBackEdges(unsigned int);
// public: void D3DXShader::Instruction::SetDefIndex(unsigned int);
// public: void D3DXShader::Instruction::VisitPHI(unsigned int);
// public: bool D3DXShader::Instruction::VisitedPHI(unsigned int);
// public: class D3DXShader::Block * D3DXShader::Block::GetImmediateDominator(void);
// public: bool D3DXShader::Block::IsControllingBlock(void);
// public: unsigned int D3DXShader::Block::GetControlSetLength(void);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindPredicateStackDef(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::FindPredicateInvAndPop(class D3DXShader::Instruction *, class D3DXShader::Instruction **, class D3DXShader::Instruction **);
// private: void D3DXShader::Compiler::PrintCodeState(unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::CopyFrom(class D3DXShader::FixedSizeBitSet<unsigned int, 1> *);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::AtEnd(void);
// public: unsigned int * D3DXShader::ArrayBitSet<unsigned int>::GetArray(void);
// public: unsigned int D3DXShader::ArrayBitSet<unsigned int>::GetBitCapacity(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: bool D3DXShader::Instruction::IsMemExport(void);
// public: bool D3DXShader::Instruction::HasExternalSideEffects(void);
// public: unsigned long D3DXShader::Dependency::GetAllocSize(class D3DXShader::Compiler *);
// private: class D3DXShader::Block * D3DXShader::DomGraphDepthFirstEnumerator::FindNextBlock(class D3DXShader::Block *);
// public: class D3DXShader::Block * D3DXShader::DomGraphDepthFirstEnumerator::GetNext(void);
// public: void D3DXShader::DomGraphDepthFirstEnumerator::AbortSubtree(class D3DXShader::Block *);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::AddDependency(class D3DXShader::Dependency *);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::FindPrevSideEffectDependency(enum D3DXShader::SideEffect);
// public: void D3DXShader::Instruction::RecomputeWriteMask(void);
// private: void D3DXShader::Compiler::SimplifyScalarCNDDependency(class D3DXShader::Instruction **, unsigned int *);
// private: class D3DXShader::Block * D3DXShader::Compiler::FindScopeExitPredecessor(class D3DXShader::Block *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::RemoveUselessPredicateStackOp(class D3DXShader::Instruction *, unsigned int);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::Remove(class D3DXShader::Block *);
// public: bool D3DXShader::ArrayBitSet<unsigned int>::IsSet(unsigned int);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateScalarOutput(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int);
// public: void D3DXShader::Instruction::RemoveDependency(class D3DXShader::Dependency *, class D3DXShader::Compiler *, bool);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::AddSideEffectDependency(enum D3DXShader::SideEffect, class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::IsInEpilogue(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::RemoveFromWorkList(void);
// public: void D3DXShader::Block::Visit(unsigned int);
// public: bool D3DXShader::Block::IsControlledBy(class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FlipJumpCondition(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::FindScopeExits(class D3DXShader::Block *, class D3DXShader::Block *, bool *, bool *, class D3DXShader::Block **);
// private: void D3DXShader::Compiler::MarkPredicatedControlFlow(class D3DXShader::Block *, class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindControllingPredicateStackOp(class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::ConvertPredicateToPush(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::BlockContainsMERGEWithGroupedInput(struct D3DXShader::RegGroupInfo *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::RemoveRedundantPHIs(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::CanUseConditionalExecute(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool *);
// private: bool D3DXShader::Compiler::CanUnpredicateBlock(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::CanRemoveInvOp(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::PrintPredicationStackSummary(void);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::AddToTail(class D3DXShader::Instruction *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::AddToTail(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::IsSet(unsigned int);
// public: struct D3DXShader::CNDOperation * D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GetNext(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::ReplaceOperand(unsigned int, class D3DXShader::Dependency *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Block::IsInLoop(unsigned int);
// public: void D3DXShader::Block::SetPredicatedByPredicateRegister(bool, class D3DXShader::Block *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SET_CLR(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SET_RESTORE(class D3DXShader::Block *, class D3DXShader::Dependency *);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::AddNewOrderingDependency(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::AddOrderingDependency(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: unsigned int D3DXShader::Block::GetControlBits(class D3DXShader::Block *);
// private: enum D3DXShader::Compiler::ControlStructureType D3DXShader::Compiler::FindControlChildren(class D3DXShader::Block *, class D3DXShader::Instruction *, bool *, class D3DXShader::Block **, class D3DXShader::Block **);
// private: bool D3DXShader::Compiler::HoistExportsFromBlock(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int);
// private: class D3DXShader::Block * D3DXShader::Compiler::FindLexicalFollowBlock(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::PredicateBlocks(class D3DXShader::Block *, unsigned int, unsigned int, unsigned int, class D3DXShader::Block *, class D3DXShader::Block **, class D3DXShader::Block **);
// private: class D3DXShader::Block * D3DXShader::Compiler::InsertPredicateOp(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, enum D3DXShader::Opcode, class D3DXShader::Instruction *);
// private: class D3DXShader::Block * D3DXShader::Compiler::AppendPredicateOp(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, enum D3DXShader::Opcode, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::InsertPredicateClear(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: class D3DXShader::Block * D3DXShader::Compiler::ClearNestedPredicateStack(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::PredicateNonLexicalScopeExit(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::PHIHasMERGEDependentInBlocks(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::MergeBlocks_ForPredicationReduction(class D3DXShader::Block *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::ConvertBlocksToConditionalExecute(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, bool, bool);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindPreviousPredicateStackDef(class D3DXShader::Instruction *, unsigned int);
// private: bool D3DXShader::Compiler::IdentifySimpleControlFlow(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Compiler::ControlStructureType *, bool *, class D3DXShader::Block **, class D3DXShader::Block **, class D3DXShader::Block **, class D3DXShader::Block **);
// private: void D3DXShader::Compiler::CleanPredication(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::IsEmpty(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::RemoveAll(void);
// public: unsigned int D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::CountItems(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Dependency * D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::RemoveAll(void);
// public: class D3DXShader::Instruction * D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GoToBeginning(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::GetSpaceWorker(unsigned int);
// private: void D3DXShader::Compiler::HoistExports(class D3DXShader::Block *);
// public: void D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Instruction * D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Pop(void);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)> *);
// private: struct D3DXShader::CNDOperation * D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GetSpace(unsigned int);
// private: class D3DXShader::Dependency ** D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::GetSpace(unsigned int);
// private: bool D3DXShader::Compiler::OptimizePredication(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::Append(struct D3DXShader::CNDOperation);
// public: struct D3DXShader::CNDOperation * D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::Append(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Append(class D3DXShader::Dependency *);
// private: bool D3DXShader::Compiler::CanCombineBlocks(class D3DXShader::Block *, class D3DXShader::Block *, bool, unsigned int *);
// public: void D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Push(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::MarkThreadDependentInstruction(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::MarkThreadDependentPHIs(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::MarkReachableBranchesAsThreadDependent(class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::MarkReachableScopeExitBranchesAsThreadDependent(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::HoistExports_AfterPredication(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::ApplyCNDOperations(class D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)> *, class D3DXShader::Instruction *, bool, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: bool D3DXShader::Compiler::ConvertJumpToCNDInstructions(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::MarkThreadDependentInstructions(void);
// private: void D3DXShader::Compiler::RemarkThreadDependentInstructions(void);
// private: void D3DXShader::Compiler::Predication(void);
// private: bool D3DXShader::Compiler::ReducePredication(class D3DXShader::Block *);

//public: void D3DXShader::Instruction::PermitEditDependents(void)
//{
//    mangled_ppc("?PermitEditDependents@Instruction@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::CanBePredicated(void)
//{
//    mangled_ppc("?CanBePredicated@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::SetNumOutputComponents(unsigned int)
//{
//    mangled_ppc("?SetNumOutputComponents@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Instruction::SetThreadDependent(void)
//{
//    mangled_ppc("?SetThreadDependent@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Dependency::InitOrdering(void)
//{
//    mangled_ppc("?InitOrdering@Dependency@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Dependency::InitSideEffect(enum D3DXShader::SideEffect)
//{
//    mangled_ppc("?InitSideEffect@Dependency@D3DXShader@@QAAXW4SideEffect@2@@Z");
//};

//public: bool D3DXShader::Dependency::IsSideEffectDependency(enum D3DXShader::SideEffect)
//{
//    mangled_ppc("?IsSideEffectDependency@Dependency@D3DXShader@@QAA_NW4SideEffect@2@@Z");
//};

//public: void D3DXShader::Dependency::ConvertToScalar(void)
//{
//    mangled_ppc("?ConvertToScalar@Dependency@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetRegisterMask(void)
//{
//    mangled_ppc("?GetRegisterMask@Dependency@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Dependency::IsStatic(void)
//{
//    mangled_ppc("?IsStatic@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Dependency::FindScalarOperandSource_Isolated(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FindScalarOperandSource_Isolated@Dependency@D3DXShader@@QAAXW4Component@2@PAPAVInstruction@2@PAW432@PAIPAV42@@Z");
//};

//public: bool D3DXShader::Block::Visited(unsigned int)
//{
//    mangled_ppc("?Visited@Block@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::Block::CopyPredicateConditions(class D3DXShader::Block *)
//{
//    mangled_ppc("?CopyPredicateConditions@Block@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::Block::ClearPredicateConditions(void)
//{
//    mangled_ppc("?ClearPredicateConditions@Block@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Block::InSameIsolationGroup(class D3DXShader::Block *)
//{
//    mangled_ppc("?InSameIsolationGroup@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: D3DXShader::DomGraphDepthFirstEnumerator::DomGraphDepthFirstEnumerator(class D3DXShader::Block *)
//{
//    mangled_ppc("??0DomGraphDepthFirstEnumerator@D3DXShader@@QAA@PAVBlock@1@@Z");
//};

//public: unsigned int D3DXShader::Compiler::BeginTraverseBlocks(void)
//{
//    mangled_ppc("?BeginTraverseBlocks@Compiler@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Compiler::EndTraverseBlocks(void)
//{
//    mangled_ppc("?EndTraverseBlocks@Compiler@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Compiler::BeginTraversePHIs(void)
//{
//    mangled_ppc("?BeginTraversePHIs@Compiler@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Compiler::EndTraversePHIs(void)
//{
//    mangled_ppc("?EndTraversePHIs@Compiler@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SET_CLR(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SET_CLR@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_EXIT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_EXIT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::FindPHIUseForPredecessor_PredecessorsInvalid(class D3DXShader::Instruction *, class D3DXShader::Block *)
//{
//    mangled_ppc("?FindPHIUseForPredecessor_PredecessorsInvalid@Compiler@D3DXShader@@AAAPAVDependency@2@PAVInstruction@2@PAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::VisitReachableBlocks_IgnoreBackEdges(unsigned int)
//{
//    mangled_ppc("?VisitReachableBlocks_IgnoreBackEdges@Compiler@D3DXShader@@AAAXI@Z");
//};

//public: void D3DXShader::Instruction::SetDefIndex(unsigned int)
//{
//    mangled_ppc("?SetDefIndex@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Instruction::VisitPHI(unsigned int)
//{
//    mangled_ppc("?VisitPHI@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Instruction::VisitedPHI(unsigned int)
//{
//    mangled_ppc("?VisitedPHI@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetImmediateDominator(void)
//{
//    mangled_ppc("?GetImmediateDominator@Block@D3DXShader@@QAAPAV12@XZ");
//};

//public: bool D3DXShader::Block::IsControllingBlock(void)
//{
//    mangled_ppc("?IsControllingBlock@Block@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Block::GetControlSetLength(void)
//{
//    mangled_ppc("?GetControlSetLength@Block@D3DXShader@@QAAIXZ");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindPredicateStackDef(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FindPredicateStackDef@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::FindPredicateInvAndPop(class D3DXShader::Instruction *, class D3DXShader::Instruction **, class D3DXShader::Instruction **)
//{
//    mangled_ppc("?FindPredicateInvAndPop@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAPAV32@1@Z");
//};

//private: void D3DXShader::Compiler::PrintCodeState(unsigned int)
//{
//    mangled_ppc("?PrintCodeState@Compiler@D3DXShader@@AAAXI@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::CopyFrom(class D3DXShader::FixedSizeBitSet<unsigned int, 1> *)
//{
//    mangled_ppc("?CopyFrom@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXPAV12@@Z");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int * D3DXShader::ArrayBitSet<unsigned int>::GetArray(void)
//{
//    mangled_ppc("?GetArray@?$ArrayBitSet@I@D3DXShader@@QAAPAIXZ");
//};

//public: unsigned int D3DXShader::ArrayBitSet<unsigned int>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$ArrayBitSet@I@D3DXShader@@QAAIXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::IsMemExport(void)
//{
//    mangled_ppc("?IsMemExport@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::HasExternalSideEffects(void)
//{
//    mangled_ppc("?HasExternalSideEffects@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned long D3DXShader::Dependency::GetAllocSize(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetAllocSize@Dependency@D3DXShader@@QAAKPAVCompiler@2@@Z");
//};

//private: class D3DXShader::Block * D3DXShader::DomGraphDepthFirstEnumerator::FindNextBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindNextBlock@DomGraphDepthFirstEnumerator@D3DXShader@@AAAPAVBlock@2@PAV32@@Z");
//};

//public: class D3DXShader::Block * D3DXShader::DomGraphDepthFirstEnumerator::GetNext(void)
//{
//    mangled_ppc("?GetNext@DomGraphDepthFirstEnumerator@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: void D3DXShader::DomGraphDepthFirstEnumerator::AbortSubtree(class D3DXShader::Block *)
//{
//    mangled_ppc("?AbortSubtree@DomGraphDepthFirstEnumerator@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::AddDependency(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?AddDependency@Instruction@D3DXShader@@QAAPAVDependency@2@PAV32@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::FindPrevSideEffectDependency(enum D3DXShader::SideEffect)
//{
//    mangled_ppc("?FindPrevSideEffectDependency@Instruction@D3DXShader@@QAAPAVDependency@2@W4SideEffect@2@@Z");
//};

//public: void D3DXShader::Instruction::RecomputeWriteMask(void)
//{
//    mangled_ppc("?RecomputeWriteMask@Instruction@D3DXShader@@QAAXXZ");
//};

//private: void D3DXShader::Compiler::SimplifyScalarCNDDependency(class D3DXShader::Instruction **, unsigned int *)
//{
//    mangled_ppc("?SimplifyScalarCNDDependency@Compiler@D3DXShader@@AAAXPAPAVInstruction@2@PAI@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::FindScopeExitPredecessor(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?FindScopeExitPredecessor@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@0@Z");
//};

//private: void D3DXShader::Compiler::RemoveUselessPredicateStackOp(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?RemoveUselessPredicateStackOp@Compiler@D3DXShader@@AAAXPAVInstruction@2@I@Z");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::Remove(class D3DXShader::Block *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@SAXPAVBlock@2@@Z");
//};

//public: bool D3DXShader::ArrayBitSet<unsigned int>::IsSet(unsigned int)
//{
//    mangled_ppc("?IsSet@?$ArrayBitSet@I@D3DXShader@@QAA_NI@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::CreateScalarOutput(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int)
//{
//    mangled_ppc("?CreateScalarOutput@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@W4Component@2@I@Z");
//};

//public: void D3DXShader::Instruction::RemoveDependency(class D3DXShader::Dependency *, class D3DXShader::Compiler *, bool)
//{
//    mangled_ppc("?RemoveDependency@Instruction@D3DXShader@@QAAXPAVDependency@2@PAVCompiler@2@_N@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::AddSideEffectDependency(enum D3DXShader::SideEffect, class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?AddSideEffectDependency@Instruction@D3DXShader@@QAAPAVDependency@2@W4SideEffect@2@PAV12@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Instruction::IsInEpilogue(void)
//{
//    mangled_ppc("?IsInEpilogue@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::RemoveFromWorkList(void)
//{
//    mangled_ppc("?RemoveFromWorkList@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: void D3DXShader::Block::Visit(unsigned int)
//{
//    mangled_ppc("?Visit@Block@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Block::IsControlledBy(class D3DXShader::Block *)
//{
//    mangled_ppc("?IsControlledBy@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FlipJumpCondition(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FlipJumpCondition@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: bool D3DXShader::Compiler::FindScopeExits(class D3DXShader::Block *, class D3DXShader::Block *, bool *, bool *, class D3DXShader::Block **)
//{
//    mangled_ppc("?FindScopeExits@Compiler@D3DXShader@@AAA_NPAVBlock@2@0PA_N1PAPAV32@@Z");
//};

//private: void D3DXShader::Compiler::MarkPredicatedControlFlow(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?MarkPredicatedControlFlow@Compiler@D3DXShader@@AAAXPAVBlock@2@0@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindControllingPredicateStackOp(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindControllingPredicateStackOp@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::ConvertPredicateToPush(class D3DXShader::Block *)
//{
//    mangled_ppc("?ConvertPredicateToPush@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::BlockContainsMERGEWithGroupedInput(struct D3DXShader::RegGroupInfo *, class D3DXShader::Block *)
//{
//    mangled_ppc("?BlockContainsMERGEWithGroupedInput@Compiler@D3DXShader@@AAA_NPAURegGroupInfo@2@PAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::RemoveRedundantPHIs(class D3DXShader::Block *)
//{
//    mangled_ppc("?RemoveRedundantPHIs@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanUseConditionalExecute(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool *)
//{
//    mangled_ppc("?CanUseConditionalExecute@Compiler@D3DXShader@@AAA_NPAVBlock@2@0PAVInstruction@2@1PA_N@Z");
//};

//private: bool D3DXShader::Compiler::CanUnpredicateBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?CanUnpredicateBlock@Compiler@D3DXShader@@AAA_NPAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanRemoveInvOp(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanRemoveInvOp@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::PrintPredicationStackSummary(void)
//{
//    mangled_ppc("?PrintPredicationStackSummary@Compiler@D3DXShader@@AAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::AddToTail(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68>::AddToTail(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@D3DXShader@@QAAXPAV12@@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::IsSet(unsigned int)
//{
//    mangled_ppc("?IsSet@?$FixedSizeBitSet@I$00@D3DXShader@@QAA_NI@Z");
//};

//public: struct D3DXShader::CNDOperation * D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUCNDOperation@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::ReplaceOperand(unsigned int, class D3DXShader::Dependency *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ReplaceOperand@Instruction@D3DXShader@@QAAPAVDependency@2@IPAV32@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Block::IsInLoop(unsigned int)
//{
//    mangled_ppc("?IsInLoop@Block@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::Block::SetPredicatedByPredicateRegister(bool, class D3DXShader::Block *)
//{
//    mangled_ppc("?SetPredicatedByPredicateRegister@Block@D3DXShader@@QAAX_NPAV12@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SET_CLR(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SET_CLR@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SET_RESTORE(class D3DXShader::Block *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SET_RESTORE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::AddNewOrderingDependency(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?AddNewOrderingDependency@Instruction@D3DXShader@@QAAPAVDependency@2@PAV12@PAVCompiler@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::AddOrderingDependency(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?AddOrderingDependency@Instruction@D3DXShader@@QAAPAVDependency@2@PAV12@PAVCompiler@2@@Z");
//};

//public: unsigned int D3DXShader::Block::GetControlBits(class D3DXShader::Block *)
//{
//    mangled_ppc("?GetControlBits@Block@D3DXShader@@QAAIPAV12@@Z");
//};

//private: enum D3DXShader::Compiler::ControlStructureType D3DXShader::Compiler::FindControlChildren(class D3DXShader::Block *, class D3DXShader::Instruction *, bool *, class D3DXShader::Block **, class D3DXShader::Block **)
//{
//    mangled_ppc("?FindControlChildren@Compiler@D3DXShader@@AAA?AW4ControlStructureType@12@PAVBlock@2@PAVInstruction@2@PA_NPAPAV42@3@Z");
//};

//private: bool D3DXShader::Compiler::HoistExportsFromBlock(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?HoistExportsFromBlock@Compiler@D3DXShader@@AAA_NPAVBlock@2@0PAVInstruction@2@I@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::FindLexicalFollowBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindLexicalFollowBlock@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@@Z");
//};

//private: bool D3DXShader::Compiler::PredicateBlocks(class D3DXShader::Block *, unsigned int, unsigned int, unsigned int, class D3DXShader::Block *, class D3DXShader::Block **, class D3DXShader::Block **)
//{
//    mangled_ppc("?PredicateBlocks@Compiler@D3DXShader@@AAA_NPAVBlock@2@III0PAPAV32@1@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::InsertPredicateOp(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, enum D3DXShader::Opcode, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertPredicateOp@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@00W4Opcode@2@PAVInstruction@2@@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::AppendPredicateOp(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, enum D3DXShader::Opcode, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AppendPredicateOp@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@00W4Opcode@2@PAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::InsertPredicateClear(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertPredicateClear@Compiler@D3DXShader@@AAAXPAVInstruction@2@0@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::ClearNestedPredicateStack(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ClearNestedPredicateStack@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@PAVInstruction@2@1@Z");
//};

//private: void D3DXShader::Compiler::PredicateNonLexicalScopeExit(class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?PredicateNonLexicalScopeExit@Compiler@D3DXShader@@AAAXPAVBlock@2@PAVInstruction@2@00@Z");
//};

//private: bool D3DXShader::Compiler::PHIHasMERGEDependentInBlocks(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?PHIHasMERGEDependentInBlocks@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVBlock@2@111@Z");
//};

//private: bool D3DXShader::Compiler::MergeBlocks_ForPredicationReduction(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?MergeBlocks_ForPredicationReduction@Compiler@D3DXShader@@AAA_NPAVBlock@2@0@Z");
//};

//private: void D3DXShader::Compiler::ConvertBlocksToConditionalExecute(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *, bool, bool)
//{
//    mangled_ppc("?ConvertBlocksToConditionalExecute@Compiler@D3DXShader@@AAAXPAVBlock@2@00_N1@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindPreviousPredicateStackDef(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?FindPreviousPredicateStackDef@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@I@Z");
//};

//private: bool D3DXShader::Compiler::IdentifySimpleControlFlow(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Compiler::ControlStructureType *, bool *, class D3DXShader::Block **, class D3DXShader::Block **, class D3DXShader::Block **, class D3DXShader::Block **)
//{
//    mangled_ppc("?IdentifySimpleControlFlow@Compiler@D3DXShader@@AAA_NPAVBlock@2@PAVInstruction@2@PAW4ControlStructureType@12@PA_NPAPAV32@444@Z");
//};

//private: void D3DXShader::Compiler::CleanPredication(void)
//{
//    mangled_ppc("?CleanPredication@Compiler@D3DXShader@@AAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: void D3DXShader::Compiler::HoistExports(class D3DXShader::Block *)
//{
//    mangled_ppc("?HoistExports@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::ArrayListEnumerator<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//private: struct D3DXShader::CNDOperation * D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUCNDOperation@2@I@Z");
//};

//private: class D3DXShader::Dependency ** D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAVDependency@2@I@Z");
//};

//private: bool D3DXShader::Compiler::OptimizePredication(void)
//{
//    mangled_ppc("?OptimizePredication@Compiler@D3DXShader@@AAA_NXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::Append(struct D3DXShader::CNDOperation)
//{
//    mangled_ppc("?Append@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUCNDOperation@2@@Z");
//};

//public: struct D3DXShader::CNDOperation * D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUCNDOperation@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Append(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanCombineBlocks(class D3DXShader::Block *, class D3DXShader::Block *, bool, unsigned int *)
//{
//    mangled_ppc("?CanCombineBlocks@Compiler@D3DXShader@@AAA_NPAVBlock@2@0_NPAI@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Push(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Push@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkThreadDependentInstruction(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkThreadDependentInstruction@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkThreadDependentPHIs(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkThreadDependentPHIs@Compiler@D3DXShader@@AAAXPAVBlock@2@0PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkReachableBranchesAsThreadDependent(class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkReachableBranchesAsThreadDependent@Compiler@D3DXShader@@AAAXPAVBlock@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkReachableScopeExitBranchesAsThreadDependent(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkReachableScopeExitBranchesAsThreadDependent@Compiler@D3DXShader@@AAAXPAVBlock@2@0PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::HoistExports_AfterPredication(class D3DXShader::Block *)
//{
//    mangled_ppc("?HoistExports_AfterPredication@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::ApplyCNDOperations(class D3DXShader::ArrayList<struct D3DXShader::CNDOperation, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::CNDOperation, struct D3DXShader::CNDOperation, unsigned long)> *, class D3DXShader::Instruction *, bool, class D3DXShader::Block *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?ApplyCNDOperations@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UCNDOperation@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVInstruction@2@_NPAVBlock@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::ConvertJumpToCNDInstructions(class D3DXShader::Instruction *, class D3DXShader::Instruction *, bool, class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?ConvertJumpToCNDInstructions@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0_NPAVBlock@2@22@Z");
//};

//private: void D3DXShader::Compiler::MarkThreadDependentInstructions(void)
//{
//    mangled_ppc("?MarkThreadDependentInstructions@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::RemarkThreadDependentInstructions(void)
//{
//    mangled_ppc("?RemarkThreadDependentInstructions@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::Predication(void)
//{
//    mangled_ppc("?Predication@Compiler@D3DXShader@@AAAXXZ");
//};

//private: bool D3DXShader::Compiler::ReducePredication(class D3DXShader::Block *)
//{
//    mangled_ppc("?ReducePredication@Compiler@D3DXShader@@AAA_NPAVBlock@2@@Z");
//};

