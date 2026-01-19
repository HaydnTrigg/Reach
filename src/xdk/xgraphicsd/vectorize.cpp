/* ---------- headers */

#include "xdk\xgraphicsd\vectorize.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned char const *const const D3DXShader::g_rgMergedRename; // "?g_rgMergedRename@D3DXShader@@3QBEB"

// unsigned int D3DXShader::InsertSwizzleComponent(unsigned int, unsigned int, enum D3DXShader::Component);
// unsigned int D3DXShader::ShiftSwizzleToW(unsigned int, unsigned int);
// unsigned int D3DXShader::ShiftSwizzleToX(unsigned int, unsigned int);
// unsigned int D3DXShader::InsertSwizzleAtX(unsigned int, unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::IsDotProduct(void);
// public: void D3DXShader::Instruction::ResetFieldsForVectorizing(void);
// public: void D3DXShader::Dependency::SetSwizzleComponent(unsigned int, enum D3DXShader::Component);
// public: void D3DXShader::Dependency::FindScalarOperandSource_ForVectorizing(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Block *);
// public: struct D3DXShader::ControlFlowEdge ** D3DXShader::Block::GetPredecessorListPtr(void);
// public: bool D3DXShader::Compiler::CanReorderAdjacent_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::ReorderAdjacent_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: bool D3DXShader::Compiler::CanReorderBefore_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::RemoveUnusedComponents_AfterCleanPhase(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: unsigned long D3DXShader::Compiler::EncodeVectorizeCostLimit(unsigned int);
// private: unsigned int D3DXShader::Compiler::DecodeVectorizeCostLimit(class D3DXShader::Instruction *);
// private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups_Reversible(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int);
// public: unsigned int D3DXShader::Instruction::GetSequenceNumber(void);
// public: bool D3DXShader::Instruction::IsLocatedAfter_Sequenced(class D3DXShader::Instruction *);
// public: void D3DXShader::Dependency::DisconnectUse(void);
// unsigned int D3DXShader::ApplyModifiersToConstraints(unsigned int, unsigned int);
// private: unsigned int D3DXShader::Compiler::ExamineConstant(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int, float *const);
// private: unsigned int D3DXShader::Compiler::ExamineConstantPair(float *const, unsigned int, float *const, unsigned int);
// private: unsigned int D3DXShader::Compiler::ComputeMergeComponents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: unsigned int D3DXShader::Compiler::ComputeMULCombinationValue(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: void D3DXShader::Instruction::CollectOperandSources(class D3DXShader::Instruction **const, enum D3DXShader::Component *const, unsigned int *const);
// private: bool D3DXShader::Compiler::FindMERGEMapping(unsigned int, class D3DXShader::Instruction **const, enum D3DXShader::Component *const, unsigned int *const, unsigned int, class D3DXShader::Instruction **const, enum D3DXShader::Component *const, unsigned int *const, unsigned int *, unsigned int *);
// private: static int D3DXShader::Compiler::SortCombineUnrelatedCandidates(void const *, void const *);
// private: bool D3DXShader::Compiler::FindPossibleVectorizationInTree_MemoizingSearch(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *);
// private: void D3DXShader::Compiler::FindPossibleVectorizationInTree_Cleanup(struct D3DXShader::PossibleVectorization *);
// private: void D3DXShader::Compiler::RedirectPossibleVectorizationLinks(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: unsigned int D3DXShader::Compiler::FindPossibleVectorizationBenefit(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::PrintPossibleVectorization(struct D3DXShader::PossibleVectorization *);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization>::Init(void);
// public: bool D3DXShader::FixedStack<enum D3DXShader::Component, 4>::IsEmpty(void);
// public: unsigned int D3DXShader::FixedStack<enum D3DXShader::Component, 4>::GetDepth(void);
// public: void D3DXShader::FixedStack<enum D3DXShader::Component, 4>::SetDepth(unsigned int);
// public: enum D3DXShader::Component D3DXShader::FixedStack<enum D3DXShader::Component, 4>::GetAtDepth(unsigned int);
// public: void D3DXShader::FixedStack<enum D3DXShader::Component, 4>::Push(enum D3DXShader::Component);
// public: enum D3DXShader::Component D3DXShader::FixedStack<enum D3DXShader::Component, 4>::Pop(void);
// public: bool D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::IsEmpty(void);
// public: unsigned int D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::GetDepth(void);
// public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::SetDepth(unsigned int);
// public: struct D3DXShader::AddChainEntry D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::GetAtDepth(unsigned int);
// public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::Push(struct D3DXShader::AddChainEntry);
// public: struct D3DXShader::AddChainEntry D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::Pop(void);
// public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::PopAll(void);
// public: unsigned int D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::GetDepth(void);
// public: class D3DXShader::Instruction * D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::GetAtDepth(unsigned int);
// public: void D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::Push(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::GetBottom(void);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ClearAll(void);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization>::IsLinked(void);
// public: void D3DXShader::FixedStack<enum D3DXShader::Component, 4>::Init(void);
// public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::Init(void);
// public: void D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::Init(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::AtEnd(void);
// public: struct D3DXShader::WeightedInstruction * D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::PeekNext(void);
// private: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization> * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::EntryFromT(struct D3DXShader::PossibleVectorization *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::IsRingEnd(struct D3DXShader::PossibleVectorization *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::IsRingStart(struct D3DXShader::PossibleVectorization **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::Validate(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::IsEmpty(void);
// private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::EntryFromT(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::SetPrev(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **, struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::IsRingEnd(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::Validate(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry>::Init(void);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization> * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::EntryFromPrev(struct D3DXShader::PossibleVectorization **);
// private: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::MarkListHead(struct D3DXShader::PossibleVectorization *);
// private: static struct D3DXShader::PossibleVectorization ** D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::MarkListTail(struct D3DXShader::PossibleVectorization **);
// private: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ValidateIndex(unsigned int);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ComputeBitShift(unsigned int);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::EntryFromPrev(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **);
// private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::MarkListHead(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::MarkListTail(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **);
// private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ComputeArrayOffset(unsigned int);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> *);
// public: bool D3DXShader::Instruction::IsVectorizeable(void);
// public: unsigned int D3DXShader::Dependency::GetConstraintFlags(unsigned int);
// public: bool D3DXShader::Dependency::IsAlwaysZero(unsigned int);
// private: unsigned int D3DXShader::Compiler::ExamineConstant(class D3DXShader::Dependency *, class D3DXShader::Instruction *, float *const);
// private: bool D3DXShader::Compiler::CanCombineRelativeOperands(class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Instruction **);
// private: bool D3DXShader::Compiler::ExcludeFromVectorizeIdenticalDependents(class D3DXShader::Instruction *);
// bool D3DXShader::CanUseInSumOfScalars(struct D3DXShader::AddChainEntry);
// private: void D3DXShader::Compiler::FindOperatorChain(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *);
// private: void D3DXShader::Compiler::DumpOperatorChain(struct D3DXShader::AddChainInfo *, bool, char);
// private: bool D3DXShader::Compiler::CanReplaceCombinedComponent(class D3DXShader::Instruction *, enum D3DXShader::Component);
// private: bool D3DXShader::Compiler::ExcludedFromVectorizing(class D3DXShader::Instruction *);
// private: static int D3DXShader::Compiler::SortIdenticalVectorizationCandidates(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::FindPossibleVectorizationInTree(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *);
// private: unsigned int D3DXShader::Compiler::ComputeVectorizeQueueLevel(class D3DXShader::Instruction *, unsigned int);
// private: static int D3DXShader::Compiler::SortVectorizeDependentInstructionState(void const *, void const *);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::ClearAll(void);
// public: D3DXShader::FixedStack<enum D3DXShader::Component, 4>::FixedStack<enum D3DXShader::Component, 4>(void);
// public: D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::FixedStack<struct D3DXShader::AddChainEntry, 8>(void);
// public: D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::FixedStack<class D3DXShader::Instruction *, 8>(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Mark(struct D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Reset(struct D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *);
// public: bool D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::IsAtTop(void);
// public: struct D3DXShader::WeightedInstruction * D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::PeekNextHigher(void);
// public: struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetHead(void);
// public: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetNext(struct D3DXShader::PossibleVectorization *);
// public: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetHead(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::Remove(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// public: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetNext(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// private: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::TFromPrev(struct D3DXShader::PossibleVectorization **);
// private: struct D3DXShader::PossibleVectorization ** D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetRingStart(void);
// private: struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetRingEnd(void);
// public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry::Init(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::TFromPrev(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **);
// private: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetRingEnd(void);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// private: unsigned __int64* D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ComputeWordPtr(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, float *const);
// private: void D3DXShader::Compiler::DumpAddChain(struct D3DXShader::AddChainInfo *, bool);
// public: bool D3DXShader::Compiler::IsTransformationEnabled(enum D3DXShader::DebugOption);
// private: bool D3DXShader::Compiler::CombineOperandGroups(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::RegGroupInfo **const, bool, bool);
// private: bool D3DXShader::Compiler::AddMergeDefinitionWorker(struct D3DXShader::MergeGroupInfo *, class D3DXShader::Instruction *, unsigned int);
// private: bool D3DXShader::Compiler::CanMergeGlobalDefs(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::CanMergeOperands(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *);
// private: unsigned int D3DXShader::Compiler::AddMissingMergeOperands(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::CleanConstantOperands(class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::CleanConstantOperands(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::FindAddChain(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindNonNanValue(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, enum D3DXShader::Component *, bool *);
// private: void D3DXShader::Compiler::CleanVectorizeableCopies(class D3DXShader::Block *);
// private: static int D3DXShader::Compiler::SortPossibleVectorizationCandidatesWorker(struct D3DXShader::PossibleVectorizationCandidate *, struct D3DXShader::PossibleVectorizationCandidate *);
// private: static int D3DXShader::Compiler::SortPossibleVectorizationCandidates(void const *, void const *);
// private: void D3DXShader::Compiler::AddDotProductMulCombinationBenefit(struct D3DXShader::PossibleVectorization *, class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::PrintPossibleVectorizations(class D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12> *);
// public: bool D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::IsEmpty(void);
// public: class D3DXShader::Instruction * D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::PeekHead(void);
// public: class D3DXShader::Instruction * D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::RemoveHead(void);
// public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::RemoveAll(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::Init(void);
// public: struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::InsertAtHead(struct D3DXShader::PossibleVectorization *);
// public: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetPrev(struct D3DXShader::PossibleVectorization *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::Init(void);
// public: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::AddToTail(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *);
// public: struct D3DXShader::WeightedInstruction * D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetNext(void);
// public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::GetBitRangeAligned(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::SetAlignedBitMask(unsigned int, unsigned int, unsigned __int64);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ReplaceAlignedBitMask(unsigned int, unsigned int, unsigned __int64);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GoToEnd(void);
// public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *);
// public: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_MERGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETNE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT4(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT2ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX4(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// private: bool D3DXShader::Compiler::AddMergeDefinition(struct D3DXShader::MergeGroupInfo *, class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::CleanCombinedOperandPair(class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *);
// private: bool D3DXShader::Compiler::CanReplaceDependency(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned int *, unsigned int *);
// private: void D3DXShader::Compiler::ReduceConstantWaterfalling(void);
// private: void D3DXShader::Compiler::BuildInterferenceFromDependencies(bool);
// public: unsigned int D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::CountItems(void);
// public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::Init(void);
// public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::AddToTail(class D3DXShader::Instruction *);
// public: struct D3DXShader::WeightedInstruction * D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetNextHigher(void);
// public: D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>(void);
// public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::GetBitRange(unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::SetBitMask(unsigned int, unsigned int, unsigned __int64);
// public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ReplaceBitRange(unsigned int, unsigned int, unsigned __int64);
// public: void D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::IsEmpty(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::RemoveAll(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::PossibleVectorizationCandidate * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::PossibleVectorizationCandidate D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::RemoveLast(void);
// public: unsigned int D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::CountItems(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::WeightedInstruction D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToBeginning(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::PossibleVectorization * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GoToTop(void);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::AtBeginning(void);
// public: struct D3DXShader::PendingVectorizeEntry * D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetPrev(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GoToEnd(void);
// public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::AtBeginning(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToEnd(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GoToBeginning(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::GetSpaceWorker(unsigned int);
// public: void D3DXShader::Compiler::CheckDebugVectorizeLimit(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::AddToVectorizeQueue(class D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10> *, unsigned int, class D3DXShader::Instruction *);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::GetField(unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::ReplaceField(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::SetField(unsigned int, unsigned int);
// public: unsigned int D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetDepth(void);
// public: void D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::IsEmpty(void);
// public: void D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::PopAll(void);
// public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::PossibleVectorizationCandidate D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Pop(void);
// public: struct D3DXShader::PossibleVectorizationCandidate * D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Peek(void);
// public: unsigned int D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::GetDepth(void);
// public: void D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::WeightedInstruction D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Pop(void);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToBottom(void);
// public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::PossibleVectorization * D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Pop(void);
// public: bool D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::IsAtBottom(void);
// public: struct D3DXShader::PendingVectorizeEntry * D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetNextLower(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GoToTop(void);
// public: class D3DXShader::Instruction ** D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetPrev(void);
// public: void D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToTop(void);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)> *);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)> *);
// private: struct D3DXShader::PendingVectorizeEntry * D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::PossibleVectorizationCandidate * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::WeightedInstruction * D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::PossibleVectorization ** D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::GetSpace(unsigned int);
// public: void D3DXShader::Dependency::GetConstantValues(double *const);
// private: bool D3DXShader::Compiler::FindRedundantComputations(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::RedundantComputationState *);
// private: unsigned int D3DXShader::Compiler::CountCombinedOutputs(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::CombineInstructionsState *);
// private: bool D3DXShader::Compiler::CanComputeValue(class D3DXShader::Instruction *, class D3DXShader::Dependency *, struct D3DXShader::CombineDependenciesState *, bool, unsigned int);
// private: bool D3DXShader::Compiler::CanCombineOperands_FirstTwoCommutative(class D3DXShader::Dependency **, class D3DXShader::Dependency **, class D3DXShader::Dependency **);
// public: D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>(class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// public: class D3DXShader::Instruction ** D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetNextLower(void);
// public: D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)> *);
// public: D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Append(struct D3DXShader::PendingVectorizeEntry);
// public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Append(struct D3DXShader::PossibleVectorizationCandidate);
// public: void D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Append(struct D3DXShader::WeightedInstruction);
// public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Append(struct D3DXShader::PossibleVectorization *);
// private: enum D3DXShader::CanCombineResult D3DXShader::Compiler::CanCombineSimpleDependencies(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *, bool);
// private: bool D3DXShader::Compiler::CanCombineDependencies(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *);
// private: bool D3DXShader::Compiler::CanCombineOperandPair(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency **, class D3DXShader::Dependency **, struct D3DXShader::CombineDependenciesState *, struct D3DXShader::CombineDependenciesState *);
// public: void D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Push(struct D3DXShader::PendingVectorizeEntry);
// public: void D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Push(class D3DXShader::Dependency *);
// public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Push(struct D3DXShader::PossibleVectorizationCandidate);
// public: void D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Push(struct D3DXShader::WeightedInstruction);
// public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Push(struct D3DXShader::PossibleVectorization *);
// private: void D3DXShader::Compiler::MarkForVectorize(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::MarkDependentsForVectorize(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::MarkForLowCostVectorize(class D3DXShader::Instruction *, unsigned int);
// private: unsigned int D3DXShader::Compiler::MergeOperandsAndOutputs(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, bool, bool);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveUnnecessaryMergeDependencies(class D3DXShader::Instruction *);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::FindComputedValue(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *);
// private: void D3DXShader::Compiler::CombineMERGEDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::CombineDependencies(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Block *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::RevertPendingStack(unsigned long, bool, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::CollectAddChainOperands(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)> *);
// private: void D3DXShader::Compiler::CollectMaxChainOperands(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)> *);
// private: bool D3DXShader::Compiler::WorthReplacingInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int);
// private: bool D3DXShader::Compiler::WorthUsingDotProduct(class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *, struct D3DXShader::AddChainInfo *);
// private: void D3DXShader::Compiler::ReplaceInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::ReplaceCombinedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, bool, bool);
// private: void D3DXShader::Compiler::ReplaceCombinedComponent(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::ReplaceDOT2ADD(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::ReplaceCombinedDependency(class D3DXShader::Instruction *, class D3DXShader::Dependency *, bool);
// private: void D3DXShader::Compiler::CleanExportMerges(class D3DXShader::Block *);
// private: unsigned int D3DXShader::Compiler::FindPossibleVectorizationsWorker(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorizationCandidate *, unsigned int, unsigned int, class D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)> *, struct D3DXShader::PossibleVectorization **);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveRedundantComputations(struct D3DXShader::RedundantComputationState *, class D3DXShader::Instruction *, unsigned int, unsigned int *);
// private: enum D3DXShader::CanCombineResult D3DXShader::Compiler::CanCombineWorker(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int *, struct D3DXShader::CombineInstructionsState *, bool);
// private: bool D3DXShader::Compiler::CombineOperandPair(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency **, class D3DXShader::Dependency **, struct D3DXShader::CombineDependenciesState *, struct D3DXShader::CombineDependenciesState *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::Combine(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::CombineInstructionsState *);
// private: bool D3DXShader::Compiler::VectorizeIdenticalDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::EditingDependenciesHolder *);
// private: bool D3DXShader::Compiler::CombineMERGEs(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::ReplaceAddChainWithDotProduct(struct D3DXShader::AddChainInfo *, enum D3DXShader::Component);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::ReplaceMaxChainWithMax4(class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::CanonicalizeDotProductAddWorker(struct D3DXShader::AddChainInfo *, class D3DXShader::Instruction *, enum D3DXShader::Component);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::CanonicalizeDotProductAdd(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Component);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::Unsimplify(class D3DXShader::Instruction *, unsigned int);
// private: unsigned int D3DXShader::Compiler::FindPossibleVectorizations(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorizationCandidate *, unsigned int, unsigned int, unsigned int, class D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)> *, struct D3DXShader::PossibleVectorization **);
// private: void D3DXShader::Compiler::DrainPossibleVectorizationStack(class D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)> *, struct D3DXShader::PossibleVectorization **);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::PrepareToVectorizeInstr(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::PrepareToVectorizeInstr2(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int);
// private: enum D3DXShader::CanCombineResult D3DXShader::Compiler::CanCombine(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int *, struct D3DXShader::CombineInstructionsState *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::CombineVectorOperations(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::CombineRelatedDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Block *, struct D3DXShader::VectorizeDependentInstructionState *, unsigned long, bool, bool *);
// private: bool D3DXShader::Compiler::CombineUnrelated(class D3DXShader::Instruction *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::QueueForVectorize(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10> **const);
// private: void D3DXShader::Compiler::VectorizeDependents(class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::CombineSiblings(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::CombineMERGEInputs(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::VectorizeInstr(class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::Vectorize(void);

//unsigned int D3DXShader::InsertSwizzleComponent(unsigned int, unsigned int, enum D3DXShader::Component)
//{
//    mangled_ppc("?InsertSwizzleComponent@D3DXShader@@YAIIIW4Component@1@@Z");
//};

//unsigned int D3DXShader::ShiftSwizzleToW(unsigned int, unsigned int)
//{
//    mangled_ppc("?ShiftSwizzleToW@D3DXShader@@YAIII@Z");
//};

//unsigned int D3DXShader::ShiftSwizzleToX(unsigned int, unsigned int)
//{
//    mangled_ppc("?ShiftSwizzleToX@D3DXShader@@YAIII@Z");
//};

//unsigned int D3DXShader::InsertSwizzleAtX(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?InsertSwizzleAtX@D3DXShader@@YAIIII@Z");
//};

//public: bool D3DXShader::Instruction::IsDotProduct(void)
//{
//    mangled_ppc("?IsDotProduct@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::ResetFieldsForVectorizing(void)
//{
//    mangled_ppc("?ResetFieldsForVectorizing@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Dependency::SetSwizzleComponent(unsigned int, enum D3DXShader::Component)
//{
//    mangled_ppc("?SetSwizzleComponent@Dependency@D3DXShader@@QAAXIW4Component@2@@Z");
//};

//public: void D3DXShader::Dependency::FindScalarOperandSource_ForVectorizing(enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *, class D3DXShader::Block *)
//{
//    mangled_ppc("?FindScalarOperandSource_ForVectorizing@Dependency@D3DXShader@@QAAXW4Component@2@PAPAVInstruction@2@PAW432@PAIPAVBlock@2@@Z");
//};

//public: struct D3DXShader::ControlFlowEdge ** D3DXShader::Block::GetPredecessorListPtr(void)
//{
//    mangled_ppc("?GetPredecessorListPtr@Block@D3DXShader@@QAAPAPAUControlFlowEdge@2@XZ");
//};

//public: bool D3DXShader::Compiler::CanReorderAdjacent_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanReorderAdjacent_Sequenced@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0@Z");
//};

//public: void D3DXShader::Compiler::ReorderAdjacent_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReorderAdjacent_Sequenced@Compiler@D3DXShader@@QAAXPAVInstruction@2@0@Z");
//};

//public: bool D3DXShader::Compiler::CanReorderBefore_Sequenced(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanReorderBefore_Sequenced@Compiler@D3DXShader@@QAA_NPAVInstruction@2@0@Z");
//};

//private: void D3DXShader::Compiler::RemoveUnusedComponents_AfterCleanPhase(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?RemoveUnusedComponents_AfterCleanPhase@Compiler@D3DXShader@@AAAXPAVInstruction@2@IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::EncodeVectorizeCostLimit(unsigned int)
//{
//    mangled_ppc("?EncodeVectorizeCostLimit@Compiler@D3DXShader@@AAAKI@Z");
//};

//private: unsigned int D3DXShader::Compiler::DecodeVectorizeCostLimit(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?DecodeVectorizeCostLimit@Compiler@D3DXShader@@AAAIPAVInstruction@2@@Z");
//};

//private: struct D3DXShader::RegGroupInfo * D3DXShader::Compiler::MergeGroups_Reversible(struct D3DXShader::RegGroupInfo *, struct D3DXShader::RegGroupInfo *, class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>, unsigned int)
//{
//    mangled_ppc("?MergeGroups_Reversible@Compiler@D3DXShader@@AAAPAURegGroupInfo@2@PAU32@0V?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@2@I@Z");
//};

//public: unsigned int D3DXShader::Instruction::GetSequenceNumber(void)
//{
//    mangled_ppc("?GetSequenceNumber@Instruction@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Instruction::IsLocatedAfter_Sequenced(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsLocatedAfter_Sequenced@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: void D3DXShader::Dependency::DisconnectUse(void)
//{
//    mangled_ppc("?DisconnectUse@Dependency@D3DXShader@@QAAXXZ");
//};

//unsigned int D3DXShader::ApplyModifiersToConstraints(unsigned int, unsigned int)
//{
//    mangled_ppc("?ApplyModifiersToConstraints@D3DXShader@@YAIII@Z");
//};

//private: unsigned int D3DXShader::Compiler::ExamineConstant(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int, float *const)
//{
//    mangled_ppc("?ExamineConstant@Compiler@D3DXShader@@AAAIPAVInstruction@2@IIIQAM@Z");
//};

//private: unsigned int D3DXShader::Compiler::ExamineConstantPair(float *const, unsigned int, float *const, unsigned int)
//{
//    mangled_ppc("?ExamineConstantPair@Compiler@D3DXShader@@AAAIQAMI0I@Z");
//};

//private: unsigned int D3DXShader::Compiler::ComputeMergeComponents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ComputeMergeComponents@Compiler@D3DXShader@@AAAIPAVInstruction@2@000@Z");
//};

//private: unsigned int D3DXShader::Compiler::ComputeMULCombinationValue(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ComputeMULCombinationValue@Compiler@D3DXShader@@AAAIPAVInstruction@2@0@Z");
//};

//public: void D3DXShader::Instruction::CollectOperandSources(class D3DXShader::Instruction **const, enum D3DXShader::Component *const, unsigned int *const)
//{
//    mangled_ppc("?CollectOperandSources@Instruction@D3DXShader@@QAAXQAPAV12@QAW4Component@2@QAI@Z");
//};

//private: bool D3DXShader::Compiler::FindMERGEMapping(unsigned int, class D3DXShader::Instruction **const, enum D3DXShader::Component *const, unsigned int *const, unsigned int, class D3DXShader::Instruction **const, enum D3DXShader::Component *const, unsigned int *const, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindMERGEMapping@Compiler@D3DXShader@@AAA_NIQAPAVInstruction@2@QAW4Component@2@QAII012PAI3@Z");
//};

//private: static int D3DXShader::Compiler::SortCombineUnrelatedCandidates(void const *, void const *)
//{
//    mangled_ppc("?SortCombineUnrelatedCandidates@Compiler@D3DXShader@@CAHPBX0@Z");
//};

//private: bool D3DXShader::Compiler::FindPossibleVectorizationInTree_MemoizingSearch(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?FindPossibleVectorizationInTree_MemoizingSearch@Compiler@D3DXShader@@AAA_NPAUPossibleVectorization@2@0@Z");
//};

//private: void D3DXShader::Compiler::FindPossibleVectorizationInTree_Cleanup(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?FindPossibleVectorizationInTree_Cleanup@Compiler@D3DXShader@@AAAXPAUPossibleVectorization@2@@Z");
//};

//private: void D3DXShader::Compiler::RedirectPossibleVectorizationLinks(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?RedirectPossibleVectorizationLinks@Compiler@D3DXShader@@AAAXPAVInstruction@2@0@Z");
//};

//private: unsigned int D3DXShader::Compiler::FindPossibleVectorizationBenefit(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?FindPossibleVectorizationBenefit@Compiler@D3DXShader@@AAAIPAVInstruction@2@0@Z");
//};

//private: void D3DXShader::Compiler::PrintPossibleVectorization(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?PrintPossibleVectorization@Compiler@D3DXShader@@AAAXPAUPossibleVectorization@2@@Z");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UPossibleVectorization@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::FixedStack<enum D3DXShader::Component, 4>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::FixedStack<enum D3DXShader::Component, 4>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::FixedStack<enum D3DXShader::Component, 4>::SetDepth(unsigned int)
//{
//    mangled_ppc("?SetDepth@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAAXI@Z");
//};

//public: enum D3DXShader::Component D3DXShader::FixedStack<enum D3DXShader::Component, 4>::GetAtDepth(unsigned int)
//{
//    mangled_ppc("?GetAtDepth@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAA?AW4Component@2@I@Z");
//};

//public: void D3DXShader::FixedStack<enum D3DXShader::Component, 4>::Push(enum D3DXShader::Component)
//{
//    mangled_ppc("?Push@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAAXW4Component@2@@Z");
//};

//public: enum D3DXShader::Component D3DXShader::FixedStack<enum D3DXShader::Component, 4>::Pop(void)
//{
//    mangled_ppc("?Pop@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAA?AW4Component@2@XZ");
//};

//public: bool D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::SetDepth(unsigned int)
//{
//    mangled_ppc("?SetDepth@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAAXI@Z");
//};

//public: struct D3DXShader::AddChainEntry D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::GetAtDepth(unsigned int)
//{
//    mangled_ppc("?GetAtDepth@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAA?AUAddChainEntry@2@I@Z");
//};

//public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::Push(struct D3DXShader::AddChainEntry)
//{
//    mangled_ppc("?Push@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAAXUAddChainEntry@2@@Z");
//};

//public: struct D3DXShader::AddChainEntry D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::Pop(void)
//{
//    mangled_ppc("?Pop@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAA?AUAddChainEntry@2@XZ");
//};

//public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$FixedStack@PAVInstruction@D3DXShader@@$07@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::GetAtDepth(unsigned int)
//{
//    mangled_ppc("?GetAtDepth@?$FixedStack@PAVInstruction@D3DXShader@@$07@D3DXShader@@QAAPAVInstruction@2@I@Z");
//};

//public: void D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::Push(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Push@?$FixedStack@PAVInstruction@D3DXShader@@$07@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::GetBottom(void)
//{
//    mangled_ppc("?GetBottom@?$FixedStack@PAVInstruction@D3DXShader@@$07@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$FixedSizeBitSet@_K$00@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UPossibleVectorization@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::FixedStack<enum D3DXShader::Component, 4>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedStack@PAVInstruction@D3DXShader@@$07@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Mark(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Reset(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::WeightedInstruction * D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::PeekNext(void)
//{
//    mangled_ppc("?PeekNext@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUWeightedInstruction@2@XZ");
//};

//private: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CAPAUPossibleVectorization@2@PAV?$DoubleLinkListEntry@UPossibleVectorization@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization> * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::EntryFromT(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UPossibleVectorization@D3DXShader@@@2@PAUPossibleVectorization@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::IsRingEnd(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CA_NPAUPossibleVectorization@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::IsRingStart(struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CA_NPAPAUPossibleVectorization@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@PAV?$DoubleLinkListEntry@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::EntryFromT(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@@2@PAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::SetPrev(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **, struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::IsRingEnd(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CA_NPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::PossibleVectorization> * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::EntryFromPrev(struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UPossibleVectorization@D3DXShader@@@2@PAPAUPossibleVectorization@2@@Z");
//};

//private: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::MarkListHead(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CAPAUPossibleVectorization@2@PAU32@@Z");
//};

//private: static struct D3DXShader::PossibleVectorization ** D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::MarkListTail(struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CAPAPAUPossibleVectorization@2@PAPAU32@@Z");
//};

//private: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ValidateIndex(unsigned int)
//{
//    mangled_ppc("?ValidateIndex@?$FixedSizeBitSet@_K$00@D3DXShader@@AAAXI@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ComputeBitShift(unsigned int)
//{
//    mangled_ppc("?ComputeBitShift@?$FixedSizeBitSet@_K$00@D3DXShader@@AAAKI@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::EntryFromPrev(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@@2@PAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@@Z");
//};

//private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::MarkListHead(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@PAU342@@Z");
//};

//private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::MarkListTail(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAPAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@PAPAU342@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: unsigned long D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ComputeArrayOffset(unsigned int)
//{
//    mangled_ppc("?ComputeArrayOffset@?$FixedSizeBitSet@_K$00@D3DXShader@@AAAKI@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//public: bool D3DXShader::Instruction::IsVectorizeable(void)
//{
//    mangled_ppc("?IsVectorizeable@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetConstraintFlags(unsigned int)
//{
//    mangled_ppc("?GetConstraintFlags@Dependency@D3DXShader@@QAAII@Z");
//};

//public: bool D3DXShader::Dependency::IsAlwaysZero(unsigned int)
//{
//    mangled_ppc("?IsAlwaysZero@Dependency@D3DXShader@@QAA_NI@Z");
//};

//private: unsigned int D3DXShader::Compiler::ExamineConstant(class D3DXShader::Dependency *, class D3DXShader::Instruction *, float *const)
//{
//    mangled_ppc("?ExamineConstant@Compiler@D3DXShader@@AAAIPAVDependency@2@PAVInstruction@2@QAM@Z");
//};

//private: bool D3DXShader::Compiler::CanCombineRelativeOperands(class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Instruction **)
//{
//    mangled_ppc("?CanCombineRelativeOperands@Compiler@D3DXShader@@AAA_NPAVDependency@2@PAVInstruction@2@0101PAPAV42@@Z");
//};

//private: bool D3DXShader::Compiler::ExcludeFromVectorizeIdenticalDependents(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ExcludeFromVectorizeIdenticalDependents@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//bool D3DXShader::CanUseInSumOfScalars(struct D3DXShader::AddChainEntry)
//{
//    mangled_ppc("?CanUseInSumOfScalars@D3DXShader@@YA_NUAddChainEntry@1@@Z");
//};

//private: void D3DXShader::Compiler::FindOperatorChain(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *)
//{
//    mangled_ppc("?FindOperatorChain@Compiler@D3DXShader@@AAAXPAVInstruction@2@0W4Component@2@I01I0PAUAddChainInfo@2@@Z");
//};

//private: void D3DXShader::Compiler::DumpOperatorChain(struct D3DXShader::AddChainInfo *, bool, char)
//{
//    mangled_ppc("?DumpOperatorChain@Compiler@D3DXShader@@AAAXPAUAddChainInfo@2@_ND@Z");
//};

//private: bool D3DXShader::Compiler::CanReplaceCombinedComponent(class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?CanReplaceCombinedComponent@Compiler@D3DXShader@@AAA_NPAVInstruction@2@W4Component@2@@Z");
//};

//private: bool D3DXShader::Compiler::ExcludedFromVectorizing(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ExcludedFromVectorizing@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//private: static int D3DXShader::Compiler::SortIdenticalVectorizationCandidates(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SortIdenticalVectorizationCandidates@Compiler@D3DXShader@@CAHPAVInstruction@2@0@Z");
//};

//private: bool D3DXShader::Compiler::FindPossibleVectorizationInTree(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?FindPossibleVectorizationInTree@Compiler@D3DXShader@@AAA_NPAUPossibleVectorization@2@0@Z");
//};

//private: unsigned int D3DXShader::Compiler::ComputeVectorizeQueueLevel(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?ComputeVectorizeQueueLevel@Compiler@D3DXShader@@AAAIPAVInstruction@2@I@Z");
//};

//private: static int D3DXShader::Compiler::SortVectorizeDependentInstructionState(void const *, void const *)
//{
//    mangled_ppc("?SortVectorizeDependentInstructionState@Compiler@D3DXShader@@CAHPBX0@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$BitFieldSet@V?$FixedSizeBitSet@_K$00@D3DXShader@@_KI$03@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::FixedStack<enum D3DXShader::Component, 4>::FixedStack<enum D3DXShader::Component, 4>(void)
//{
//    mangled_ppc("??0?$FixedStack@W4Component@D3DXShader@@$03@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::FixedStack<struct D3DXShader::AddChainEntry, 8>::FixedStack<struct D3DXShader::AddChainEntry, 8>(void)
//{
//    mangled_ppc("??0?$FixedStack@UAddChainEntry@D3DXShader@@$07@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::FixedStack<class D3DXShader::Instruction *, 8>::FixedStack<class D3DXShader::Instruction *, 8>(void)
//{
//    mangled_ppc("??0?$FixedStack@PAVInstruction@D3DXShader@@$07@D3DXShader@@QAA@XZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Mark(struct D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Mark@?$StackEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Reset(struct D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Position *)
//{
//    mangled_ppc("?Reset@?$StackEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPosition@12@@Z");
//};

//public: bool D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::IsAtTop(void)
//{
//    mangled_ppc("?IsAtTop@?$StackEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::WeightedInstruction * D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::PeekNextHigher(void)
//{
//    mangled_ppc("?PeekNextHigher@?$StackEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUWeightedInstruction@2@XZ");
//};

//public: struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAAPAUPossibleVectorization@2@XZ");
//};

//public: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetNext(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@SAPAUPossibleVectorization@2@PAU32@@Z");
//};

//public: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@QAAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@XZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::Remove(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@SAXPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@@Z");
//};

//public: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetNext(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@SAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@PAU342@@Z");
//};

//private: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::TFromPrev(struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@CAPAUPossibleVectorization@2@PAPAU32@@Z");
//};

//private: struct D3DXShader::PossibleVectorization ** D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@AAAPAPAUPossibleVectorization@2@XZ");
//};

//private: struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@AAAPAUPossibleVectorization@2@XZ");
//};

//public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry::Init(void)
//{
//    mangled_ppc("?Init@QueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAAXXZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::TFromPrev(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@CAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@XZ");
//};

//private: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@AAAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@XZ");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: unsigned __int64* D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ComputeWordPtr(unsigned int)
//{
//    mangled_ppc("?ComputeWordPtr@?$FixedSizeBitSet@_K$00@D3DXShader@@AAAPA_KI@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateConstantInstr(unsigned int, float *const)
//{
//    mangled_ppc("?GetOrCreateConstantInstr@Compiler@D3DXShader@@QAAPAVInstruction@2@IQAM@Z");
//};

//private: void D3DXShader::Compiler::DumpAddChain(struct D3DXShader::AddChainInfo *, bool)
//{
//    mangled_ppc("?DumpAddChain@Compiler@D3DXShader@@AAAXPAUAddChainInfo@2@_N@Z");
//};

//public: bool D3DXShader::Compiler::IsTransformationEnabled(enum D3DXShader::DebugOption)
//{
//    mangled_ppc("?IsTransformationEnabled@Compiler@D3DXShader@@QAA_NW4DebugOption@2@@Z");
//};

//private: bool D3DXShader::Compiler::CombineOperandGroups(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::RegGroupInfo **const, bool, bool)
//{
//    mangled_ppc("?CombineOperandGroups@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0QAPAURegGroupInfo@2@_N2@Z");
//};

//private: bool D3DXShader::Compiler::AddMergeDefinitionWorker(struct D3DXShader::MergeGroupInfo *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?AddMergeDefinitionWorker@Compiler@D3DXShader@@AAA_NPAUMergeGroupInfo@2@PAVInstruction@2@I@Z");
//};

//private: bool D3DXShader::Compiler::CanMergeGlobalDefs(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanMergeGlobalDefs@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0@Z");
//};

//private: bool D3DXShader::Compiler::CanMergeOperands(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?CanMergeOperands@Compiler@D3DXShader@@AAA_NPAVInstruction@2@000PAUCombineDependenciesState@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::AddMissingMergeOperands(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddMissingMergeOperands@Compiler@D3DXShader@@AAAIPAVInstruction@2@0I00@Z");
//};

//private: void D3DXShader::Compiler::CleanConstantOperands(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?CleanConstantOperands@Compiler@D3DXShader@@AAAXPAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::CleanConstantOperands(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CleanConstantOperands@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::FindAddChain(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *)
//{
//    mangled_ppc("?FindAddChain@Compiler@D3DXShader@@AAAXPAVInstruction@2@0W4Component@2@I01I0PAUAddChainInfo@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindNonNanValue(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, enum D3DXShader::Component *, bool *)
//{
//    mangled_ppc("?FindNonNanValue@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAW4Component@2@PA_N@Z");
//};

//private: void D3DXShader::Compiler::CleanVectorizeableCopies(class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanVectorizeableCopies@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: static int D3DXShader::Compiler::SortPossibleVectorizationCandidatesWorker(struct D3DXShader::PossibleVectorizationCandidate *, struct D3DXShader::PossibleVectorizationCandidate *)
//{
//    mangled_ppc("?SortPossibleVectorizationCandidatesWorker@Compiler@D3DXShader@@CAHPAUPossibleVectorizationCandidate@2@0@Z");
//};

//private: static int D3DXShader::Compiler::SortPossibleVectorizationCandidates(void const *, void const *)
//{
//    mangled_ppc("?SortPossibleVectorizationCandidates@Compiler@D3DXShader@@CAHPBX0@Z");
//};

//private: void D3DXShader::Compiler::AddDotProductMulCombinationBenefit(struct D3DXShader::PossibleVectorization *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?AddDotProductMulCombinationBenefit@Compiler@D3DXShader@@AAAXPAUPossibleVectorization@2@PAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::PrintPossibleVectorizations(class D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12> *)
//{
//    mangled_ppc("?PrintPossibleVectorizations@Compiler@D3DXShader@@AAAXPAV?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@2@@Z");
//};

//public: bool D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::PeekHead(void)
//{
//    mangled_ppc("?PeekHead@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::RemoveHead(void)
//{
//    mangled_ppc("?RemoveHead@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAAPAUPossibleVectorization@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::InsertAtHead(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?InsertAtHead@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAAXPAUPossibleVectorization@2@@Z");
//};

//public: static struct D3DXShader::PossibleVectorization * D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::GetPrev(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@SAPAUPossibleVectorization@2@PAU32@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry * D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@QAAPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry, 0>::AddToTail(struct D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::QueueEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@$0A@@D3DXShader@@QAAXPAUQueueEntry@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@@Z");
//};

//public: struct D3DXShader::WeightedInstruction * D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUWeightedInstruction@2@XZ");
//};

//public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::GetBitRangeAligned(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRangeAligned@?$FixedSizeBitSet@_K$00@D3DXShader@@QAA_KII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::SetAlignedBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?SetAlignedBitMask@?$FixedSizeBitSet@_K$00@D3DXShader@@QAAXII_K@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ReplaceAlignedBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?ReplaceAlignedBitMask@?$FixedSizeBitSet@_K$00@D3DXShader@@QAAXII_K@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_MERGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?MakeInstr_MERGE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@I@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MIN(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MIN@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETNE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGT@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT4(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DOT4@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DOT3@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT2ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DOT2ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@22@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX4(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX4@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//private: bool D3DXShader::Compiler::AddMergeDefinition(struct D3DXShader::MergeGroupInfo *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?AddMergeDefinition@Compiler@D3DXShader@@AAA_NPAUMergeGroupInfo@2@PAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::CleanCombinedOperandPair(class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?CleanCombinedOperandPair@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAUCombineDependenciesState@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanReplaceDependency(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?CanReplaceDependency@Compiler@D3DXShader@@AAA_NPAVDependency@2@0PAI1@Z");
//};

//private: void D3DXShader::Compiler::ReduceConstantWaterfalling(void)
//{
//    mangled_ppc("?ReduceConstantWaterfalling@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::BuildInterferenceFromDependencies(bool)
//{
//    mangled_ppc("?BuildInterferenceFromDependencies@Compiler@D3DXShader@@AAAX_N@Z");
//};

//public: unsigned int D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::Init(void)
//{
//    mangled_ppc("?Init@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10>::AddToTail(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddToTail@?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: struct D3DXShader::WeightedInstruction * D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetNextHigher(void)
//{
//    mangled_ppc("?GetNextHigher@?$StackEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUWeightedInstruction@2@XZ");
//};

//public: D3DXShader::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>::DoubleLinkList<struct D3DXShader::PossibleVectorization, 12>(void)
//{
//    mangled_ppc("??0?$DoubleLinkList@UPossibleVectorization@D3DXShader@@$0M@@D3DXShader@@QAA@XZ");
//};

//public: unsigned __int64 D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::GetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRange@?$FixedSizeBitSet@_K$00@D3DXShader@@QAA_KII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::SetBitMask(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?SetBitMask@?$FixedSizeBitSet@_K$00@D3DXShader@@QAAXII_K@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned __int64, 1>::ReplaceBitRange(unsigned int, unsigned int, unsigned __int64)
//{
//    mangled_ppc("?ReplaceBitRange@?$FixedSizeBitSet@_K$00@D3DXShader@@QAAXII_K@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::PossibleVectorizationCandidate * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUPossibleVectorizationCandidate@2@XZ");
//};

//public: struct D3DXShader::PossibleVectorizationCandidate D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUPossibleVectorizationCandidate@2@XZ");
//};

//public: unsigned int D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::WeightedInstruction D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUWeightedInstruction@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::PossibleVectorization * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUPossibleVectorization@2@XZ");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::PendingVectorizeEntry * D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUPendingVectorizeEntry@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: void D3DXShader::Compiler::CheckDebugVectorizeLimit(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CheckDebugVectorizeLimit@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::AddToVectorizeQueue(class D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10> *, unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddToVectorizeQueue@Compiler@D3DXShader@@AAAXPAV?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@IPAVInstruction@2@@Z");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::GetField(unsigned int)
//{
//    mangled_ppc("?GetField@?$BitFieldSet@V?$FixedSizeBitSet@_K$00@D3DXShader@@_KI$03@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::ReplaceField(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceField@?$BitFieldSet@V?$FixedSizeBitSet@_K$00@D3DXShader@@_KI$03@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned __int64, 1>, unsigned __int64, unsigned int, 4>::SetField(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetField@?$BitFieldSet@V?$FixedSizeBitSet@_K$00@D3DXShader@@_KI$03@D3DXShader@@QAAXII@Z");
//};

//public: unsigned int D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::PossibleVectorizationCandidate D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUPossibleVectorizationCandidate@2@XZ");
//};

//public: struct D3DXShader::PossibleVectorizationCandidate * D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUPossibleVectorizationCandidate@2@XZ");
//};

//public: unsigned int D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::GetDepth(void)
//{
//    mangled_ppc("?GetDepth@?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::WeightedInstruction D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUWeightedInstruction@2@XZ");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToBottom(void)
//{
//    mangled_ppc("?GoToBottom@?$StackEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::PossibleVectorization * D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUPossibleVectorization@2@XZ");
//};

//public: bool D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::IsAtBottom(void)
//{
//    mangled_ppc("?IsAtBottom@?$StackEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::PendingVectorizeEntry * D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetNextLower(void)
//{
//    mangled_ppc("?GetNextLower@?$StackEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUPendingVectorizeEntry@2@XZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Instruction ** D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::ArrayListEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::ArrayListEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//private: struct D3DXShader::PendingVectorizeEntry * D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUPendingVectorizeEntry@2@I@Z");
//};

//private: struct D3DXShader::PossibleVectorizationCandidate * D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUPossibleVectorizationCandidate@2@I@Z");
//};

//private: struct D3DXShader::WeightedInstruction * D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUWeightedInstruction@2@I@Z");
//};

//private: struct D3DXShader::PossibleVectorization ** D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAUPossibleVectorization@2@I@Z");
//};

//public: void D3DXShader::Dependency::GetConstantValues(double *const)
//{
//    mangled_ppc("?GetConstantValues@Dependency@D3DXShader@@QAAXQAN@Z");
//};

//private: bool D3DXShader::Compiler::FindRedundantComputations(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::RedundantComputationState *)
//{
//    mangled_ppc("?FindRedundantComputations@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0PAURedundantComputationState@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::CountCombinedOutputs(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::CombineInstructionsState *)
//{
//    mangled_ppc("?CountCombinedOutputs@Compiler@D3DXShader@@AAAIPAVInstruction@2@0PAUCombineInstructionsState@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanComputeValue(class D3DXShader::Instruction *, class D3DXShader::Dependency *, struct D3DXShader::CombineDependenciesState *, bool, unsigned int)
//{
//    mangled_ppc("?CanComputeValue@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVDependency@2@PAUCombineDependenciesState@2@_NI@Z");
//};

//private: bool D3DXShader::Compiler::CanCombineOperands_FirstTwoCommutative(class D3DXShader::Dependency **, class D3DXShader::Dependency **, class D3DXShader::Dependency **)
//{
//    mangled_ppc("?CanCombineOperands_FirstTwoCommutative@Compiler@D3DXShader@@AAA_NPAPAVDependency@2@00@Z");
//};

//public: D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>(class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: class D3DXShader::Instruction ** D3DXShader::StackEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetNextLower(void)
//{
//    mangled_ppc("?GetNextLower@?$StackEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@XZ");
//};

//public: D3DXShader::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::StackEnumerator<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: D3DXShader::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::StackEnumerator<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>(class D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Append(struct D3DXShader::PendingVectorizeEntry)
//{
//    mangled_ppc("?Append@?$ArrayList@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUPendingVectorizeEntry@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Append(struct D3DXShader::PossibleVectorizationCandidate)
//{
//    mangled_ppc("?Append@?$ArrayList@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUPossibleVectorizationCandidate@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Append(struct D3DXShader::WeightedInstruction)
//{
//    mangled_ppc("?Append@?$ArrayList@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUWeightedInstruction@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Append(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPossibleVectorization@2@@Z");
//};

//private: enum D3DXShader::CanCombineResult D3DXShader::Compiler::CanCombineSimpleDependencies(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *, bool)
//{
//    mangled_ppc("?CanCombineSimpleDependencies@Compiler@D3DXShader@@AAA?AW4CanCombineResult@2@PAVInstruction@2@PAVDependency@2@010PAUCombineDependenciesState@2@_N@Z");
//};

//private: bool D3DXShader::Compiler::CanCombineDependencies(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?CanCombineDependencies@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVDependency@2@010PAUCombineDependenciesState@2@@Z");
//};

//private: bool D3DXShader::Compiler::CanCombineOperandPair(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency **, class D3DXShader::Dependency **, struct D3DXShader::CombineDependenciesState *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?CanCombineOperandPair@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVDependency@2@10110PAPAV42@2PAUCombineDependenciesState@2@3@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PendingVectorizeEntry, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PendingVectorizeEntry, struct D3DXShader::PendingVectorizeEntry, unsigned long)>::Push(struct D3DXShader::PendingVectorizeEntry)
//{
//    mangled_ppc("?Push@?$Stack@UPendingVectorizeEntry@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUPendingVectorizeEntry@2@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)>::Push(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?Push@?$Stack@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)>::Push(struct D3DXShader::PossibleVectorizationCandidate)
//{
//    mangled_ppc("?Push@?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUPossibleVectorizationCandidate@2@@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::WeightedInstruction, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::WeightedInstruction, struct D3DXShader::WeightedInstruction, unsigned long)>::Push(struct D3DXShader::WeightedInstruction)
//{
//    mangled_ppc("?Push@?$Stack@UWeightedInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUWeightedInstruction@2@@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)>::Push(struct D3DXShader::PossibleVectorization *)
//{
//    mangled_ppc("?Push@?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAUPossibleVectorization@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkForVectorize(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkForVectorize@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkDependentsForVectorize(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkDependentsForVectorize@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkForLowCostVectorize(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?MarkForLowCostVectorize@Compiler@D3DXShader@@AAAXPAVInstruction@2@I@Z");
//};

//private: unsigned int D3DXShader::Compiler::MergeOperandsAndOutputs(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, bool, bool)
//{
//    mangled_ppc("?MergeOperandsAndOutputs@Compiler@D3DXShader@@AAAIPAVInstruction@2@00I_N1@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveUnnecessaryMergeDependencies(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?RemoveUnnecessaryMergeDependencies@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::FindComputedValue(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?FindComputedValue@Compiler@D3DXShader@@AAAPAVDependency@2@PAVInstruction@2@PAV32@0PAUCombineDependenciesState@2@@Z");
//};

//private: void D3DXShader::Compiler::CombineMERGEDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CombineMERGEDependents@Compiler@D3DXShader@@AAAXPAVInstruction@2@0I00II@Z");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::CombineDependencies(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Block *, class D3DXShader::Instruction *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?CombineDependencies@Compiler@D3DXShader@@AAAPAVDependency@2@PAVInstruction@2@PAV32@01PAVBlock@2@0PAUCombineDependenciesState@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::RevertPendingStack(unsigned long, bool, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?RevertPendingStack@Compiler@D3DXShader@@AAAPAVInstruction@2@K_NPAV32@@Z");
//};

//private: void D3DXShader::Compiler::CollectAddChainOperands(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Stack<struct D3DXShader::PossibleVectorizationCandidate, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorizationCandidate, struct D3DXShader::PossibleVectorizationCandidate, unsigned long)> *)
//{
//    mangled_ppc("?CollectAddChainOperands@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@PAV?$Stack@UPossibleVectorizationCandidate@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::CollectMaxChainOperands(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::ArrayList<class D3DXShader::Dependency *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Dependency *, class D3DXShader::Dependency *, unsigned long)> *)
//{
//    mangled_ppc("?CollectMaxChainOperands@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@PAV?$ArrayList@PAVDependency@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::WorthReplacingInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?WorthReplacingInstruction@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0II@Z");
//};

//private: bool D3DXShader::Compiler::WorthUsingDotProduct(class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *, struct D3DXShader::AddChainInfo *)
//{
//    mangled_ppc("?WorthUsingDotProduct@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAUAddChainInfo@2@1@Z");
//};

//private: void D3DXShader::Compiler::ReplaceInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?ReplaceInstruction@Compiler@D3DXShader@@AAAXPAVInstruction@2@0IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::ReplaceCombinedInstruction(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, bool, bool)
//{
//    mangled_ppc("?ReplaceCombinedInstruction@Compiler@D3DXShader@@AAAXPAVInstruction@2@0I_N1@Z");
//};

//private: void D3DXShader::Compiler::ReplaceCombinedComponent(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReplaceCombinedComponent@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@0@Z");
//};

//private: void D3DXShader::Compiler::ReplaceDOT2ADD(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReplaceDOT2ADD@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@00@Z");
//};

//private: void D3DXShader::Compiler::ReplaceCombinedDependency(class D3DXShader::Instruction *, class D3DXShader::Dependency *, bool)
//{
//    mangled_ppc("?ReplaceCombinedDependency@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAVDependency@2@_N@Z");
//};

//private: void D3DXShader::Compiler::CleanExportMerges(class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanExportMerges@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::FindPossibleVectorizationsWorker(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorizationCandidate *, unsigned int, unsigned int, class D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)> *, struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?FindPossibleVectorizationsWorker@Compiler@D3DXShader@@AAAIPAUPossibleVectorization@2@PAUPossibleVectorizationCandidate@2@IIPAV?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU32@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveRedundantComputations(struct D3DXShader::RedundantComputationState *, class D3DXShader::Instruction *, unsigned int, unsigned int *)
//{
//    mangled_ppc("?RemoveRedundantComputations@Compiler@D3DXShader@@AAAPAVInstruction@2@PAURedundantComputationState@2@PAV32@IPAI@Z");
//};

//private: enum D3DXShader::CanCombineResult D3DXShader::Compiler::CanCombineWorker(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int *, struct D3DXShader::CombineInstructionsState *, bool)
//{
//    mangled_ppc("?CanCombineWorker@Compiler@D3DXShader@@AAA?AW4CanCombineResult@2@PAVInstruction@2@0PAIPAUCombineInstructionsState@2@_N@Z");
//};

//private: bool D3DXShader::Compiler::CombineOperandPair(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency **, class D3DXShader::Dependency **, struct D3DXShader::CombineDependenciesState *, struct D3DXShader::CombineDependenciesState *)
//{
//    mangled_ppc("?CombineOperandPair@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVDependency@2@10110PAPAV42@2PAUCombineDependenciesState@2@3@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::Combine(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::CombineInstructionsState *)
//{
//    mangled_ppc("?Combine@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@0PAUCombineInstructionsState@2@@Z");
//};

//private: bool D3DXShader::Compiler::VectorizeIdenticalDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::EditingDependenciesHolder *)
//{
//    mangled_ppc("?VectorizeIdenticalDependents@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0PAVBlock@2@PAVEditingDependenciesHolder@2@@Z");
//};

//private: bool D3DXShader::Compiler::CombineMERGEs(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CombineMERGEs@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::ReplaceAddChainWithDotProduct(struct D3DXShader::AddChainInfo *, enum D3DXShader::Component)
//{
//    mangled_ppc("?ReplaceAddChainWithDotProduct@Compiler@D3DXShader@@AAAPAVInstruction@2@PAUAddChainInfo@2@W4Component@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::ReplaceMaxChainWithMax4(class D3DXShader::Instruction *, struct D3DXShader::AddChainInfo *)
//{
//    mangled_ppc("?ReplaceMaxChainWithMax4@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@PAUAddChainInfo@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::CanonicalizeDotProductAddWorker(struct D3DXShader::AddChainInfo *, class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?CanonicalizeDotProductAddWorker@Compiler@D3DXShader@@AAAPAVInstruction@2@PAUAddChainInfo@2@PAV32@W4Component@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::CanonicalizeDotProductAdd(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?CanonicalizeDotProductAdd@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@0W4Component@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::Unsimplify(class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?Unsimplify@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@I@Z");
//};

//private: unsigned int D3DXShader::Compiler::FindPossibleVectorizations(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorizationCandidate *, unsigned int, unsigned int, unsigned int, class D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)> *, struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?FindPossibleVectorizations@Compiler@D3DXShader@@AAAIPAUPossibleVectorization@2@PAUPossibleVectorizationCandidate@2@IIIPAV?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU32@@Z");
//};

//private: void D3DXShader::Compiler::DrainPossibleVectorizationStack(class D3DXShader::Stack<struct D3DXShader::PossibleVectorization *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::PossibleVectorization *, struct D3DXShader::PossibleVectorization *, unsigned long)> *, struct D3DXShader::PossibleVectorization **)
//{
//    mangled_ppc("?DrainPossibleVectorizationStack@Compiler@D3DXShader@@AAAXPAV?$Stack@PAUPossibleVectorization@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAUPossibleVectorization@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::PrepareToVectorizeInstr(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?PrepareToVectorizeInstr@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@I@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::PrepareToVectorizeInstr2(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?PrepareToVectorizeInstr2@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@I@Z");
//};

//private: enum D3DXShader::CanCombineResult D3DXShader::Compiler::CanCombine(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int *, struct D3DXShader::CombineInstructionsState *)
//{
//    mangled_ppc("?CanCombine@Compiler@D3DXShader@@AAA?AW4CanCombineResult@2@PAVInstruction@2@0PAIPAUCombineInstructionsState@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::CombineVectorOperations(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CombineVectorOperations@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@0@Z");
//};

//private: bool D3DXShader::Compiler::CombineRelatedDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Block *, struct D3DXShader::VectorizeDependentInstructionState *, unsigned long, bool, bool *)
//{
//    mangled_ppc("?CombineRelatedDependents@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0PAVBlock@2@PAUVectorizeDependentInstructionState@2@K_NPA_N@Z");
//};

//private: bool D3DXShader::Compiler::CombineUnrelated(class D3DXShader::Instruction *, class D3DXShader::Block *)
//{
//    mangled_ppc("?CombineUnrelated@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::QueueForVectorize(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int, class D3DXShader::Queue<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long), 10> **const)
//{
//    mangled_ppc("?QueueForVectorize@Compiler@D3DXShader@@AAAXPAVBlock@2@PAVInstruction@2@IQAPAV?$Queue@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z$09@2@@Z");
//};

//private: void D3DXShader::Compiler::VectorizeDependents(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?VectorizeDependents@Compiler@D3DXShader@@AAAXPAVBlock@2@PAVInstruction@2@@Z");
//};

//private: bool D3DXShader::Compiler::CombineSiblings(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CombineSiblings@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0@Z");
//};

//private: bool D3DXShader::Compiler::CombineMERGEInputs(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CombineMERGEInputs@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//private: bool D3DXShader::Compiler::VectorizeInstr(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?VectorizeInstr@Compiler@D3DXShader@@AAA_NPAVBlock@2@PAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::Vectorize(void)
//{
//    mangled_ppc("?Vectorize@Compiler@D3DXShader@@AAAXXZ");
//};

