/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned char const *const const `unsigned int __cdecl D3DXShader::MapRegisterMaskToComponents(unsigned int)'::`10'::s_rgMapOutputsToComponents; // "?s_rgMapOutputsToComponents@?9??MapRegisterMaskToComponents@D3DXShader@@YAII@Z@4QBEB"

// void D3DXShader::DebugBreakIfDebuggerPresent(void);
// bool D3DXShader::__IncOptimizationCount(unsigned int *, unsigned int);
// unsigned int D3DXShader::CountClearBitsInNibble(unsigned int);
// unsigned int D3DXShader::RestrictNumSetBitsInNibble(unsigned int, unsigned int);
// public: void D3DXShader::EmptyRegisterSet::SetDebugTag(char const *);
// public: char const * D3DXShader::EmptyRegisterSet::GetDebugTag(void);
// public: class D3DXShader::Compiler * D3DXShader::InfiniteLocalRegisterSet::GetCompiler(void);
// public: unsigned int D3DXShader::InfiniteLocalRegisterSet::GetMaxRegIndex(void);
// public: void D3DXShader::InfiniteLocalRegisterSet::SetMaxRegIndex(unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::InfiniteLocalRegisterSet::GetRegOwner(unsigned int);
// unsigned int D3DXShader::SetSwizzleComponent(unsigned int, unsigned int, enum D3DXShader::Component);
// unsigned int D3DXShader::ApplySwizzle(unsigned int, unsigned int);
// unsigned int D3DXShader::AddPathLengths(unsigned int, unsigned int);
// public: void D3DXShader::Instruction::SetReverseRegisterEffect(int);
// public: void D3DXShader::Instruction::ResetWorkList(void);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::GetWorkList_PossiblyNotSet(void);
// public: bool D3DXShader::Instruction::IsOutputRegisterAssignedBeforeRegOpts(void);
// public: bool D3DXShader::Instruction::IsRescheduled(void);
// public: void D3DXShader::Instruction::SetRescheduled(void);
// public: void D3DXShader::Instruction::ClearRescheduled(void);
// public: void D3DXShader::Instruction::SetRegOptIndex(unsigned int);
// public: void D3DXShader::Dependency::RenameSwizzle(unsigned int);
// public: bool D3DXShader::Dependency::NeedsNewLocalRegister(void);
// public: bool D3DXShader::Compiler::WasTempRegisterLimitSpecified(void);
// public: unsigned int D3DXShader::Compiler::GetTempRegisterTargetUsage(void);
// unsigned int D3DXShader::MapRegisterMaskToComponents(unsigned int);
// unsigned int D3DXShader::MapRegisterToComponents(unsigned int);
// void D3DXShader::PrintVirtualRegister(class D3DXShader::Compiler *, unsigned int);
// void D3DXShader::ReportOutOfTempRegistersError(class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::RequiresReordering(void);
// public: void D3DXShader::Instruction::SetScheduled(unsigned int);
// public: void D3DXShader::MachineState::UpdateRAWSpecialRegisterHazards(class D3DXShader::Instruction *, bool);
// public: D3DXShader::RegOptSimulator::~RegOptSimulator(void);
// public: class D3DXShader::Compiler * D3DXShader::RegOptSimulator::GetCompiler(void);
// public: static bool D3DXShader::RegOptSimulator::IsUnblocked(class D3DXShader::Instruction *);
// public: bool D3DXShader::RegOptSimulator::CanPlaceInstructions(void);
// public: void D3DXShader::RegOptSimulator::StopPlacingInstructions(void);
// public: void D3DXShader::RegOptSimulator::PrepareToRestoreAllInstructions(void);
// public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::AtEnd(void);
// public: class D3DXShader::Instruction ** D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::PeekNext(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::Instruction::SetVirtualRegister(unsigned int);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Clone(class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Clone(class D3DXShader::Dependency *);
// public: void D3DXShader::Compiler::ClearLocalRegisterAssignment(class D3DXShader::Instruction *);
// public: unsigned int D3DXShader::Compiler::ComputeBlockOutputRegMask(class D3DXShader::Block *, class D3DXShader::Instruction *);
// public: int D3DXShader::Compiler::ComputeRegisterEffectOnGroup(class D3DXShader::Instruction *, unsigned int, int *, unsigned int, bool *);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ClearAll(void);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SetAll(void);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::CopyFrom(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)> *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::InsertNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *, struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetBitRange(unsigned int, unsigned int);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::AddBitMask(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SubtractBitMask(unsigned int, unsigned int, unsigned int);
// public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::FindNibbleWithClearBit(unsigned int, unsigned int *);
// public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::FindLastNibbleWithClearBit(unsigned int, unsigned int *);
// public: void D3DXShader::Instruction::SetWorkList(class D3DXShader::Instruction *);
// public: void D3DXShader::RegOptSimulator::GetRollbackState(struct D3DXShader::RegOptSolutionStep *);
// private: void D3DXShader::Compiler::CheckRegisterConflicts(class D3DXShader::Block *);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::GetBitCapacity(void);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::ClearAll(void);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::SetAll(void);
// public: class D3DXShader::Instruction ** D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetNext(void);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Destruct(void);
// public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetBitRangeAligned(unsigned int, unsigned int);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Dump(void);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::AddAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Find(unsigned int, unsigned int, int);
// public: void D3DXShader::EmptyRegisterSet::Init(class D3DXShader::EmptyRegisterSet *);
// public: void D3DXShader::InfiniteLocalRegisterSet::Dump(void);
// public: void D3DXShader::InfiniteLocalRegisterSet::ClearAll(void);
// public: bool D3DXShader::Instruction::ShouldBeInBody_PossiblyAfterScheduling(void);
// public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertBefore(class D3DXShader::Instruction *);
// private: void D3DXShader::InfiniteLocalRegisterSet::MarkRegOwner(unsigned int, class D3DXShader::Instruction *);
// public: void D3DXShader::Compiler::ClearLocalRegisterAssignments(class D3DXShader::Block *, bool);
// public: void D3DXShader::Compiler::RenumberBundles(class D3DXShader::Block *, bool);
// public: void D3DXShader::Compiler::AddGlobalOrderingDependencies(class D3DXShader::Instruction *);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Destruct(void);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::GetComponentMaskInUse(unsigned int);
// public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::IsEmpty(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::RemoveAll(void);
// public: unsigned int D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::CountItems(void);
// public: bool D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Contains(class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction ** D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Get(unsigned int);
// public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Remove(class D3DXShader::Instruction *);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Insert(class D3DXShader::Instruction *);
// public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::EnsureCapacity(unsigned int);
// public: void D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsEmpty(void);
// public: unsigned int D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::RegOptSolutionStep ** D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::PeekLast(void);
// public: struct D3DXShader::RegOptSolutionStep * D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GoToBeginning(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::GetSpaceWorker(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Reserve(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Alloc(unsigned int, bool);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Free(unsigned int);
// public: unsigned int D3DXShader::InfiniteLocalRegisterSet::GetComponentMaskInUse(unsigned int);
// public: void D3DXShader::InfiniteLocalRegisterSet::Reserve(unsigned int, class D3DXShader::Instruction *);
// public: void D3DXShader::InfiniteLocalRegisterSet::Free(unsigned int);
// public: unsigned int D3DXShader::Compiler::CheckGlobalConflicts(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *);
// private: struct D3DXShader::RegOptSolutionStep * D3DXShader::Compiler::CreateRegOptSolutionStep(void);
// private: void D3DXShader::Compiler::FreeSolutionStep(struct D3DXShader::RegOptSolutionStep *);
// private: void D3DXShader::Compiler::ComputeRegOptSolutionHash(struct D3DXShader::RegOptSolutionStep *);
// private: bool D3DXShader::Compiler::FindFailedSolution(struct D3DXShader::RegOptSolutionStep *);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Init(class D3DXShader::Compiler *, char const *);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Init(class D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)> *);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::EnsureCapacity(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::EnsureInUse(unsigned int);
// public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::EnsureFree(unsigned int);
// public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Alloc_NoExceptionOnFailure(unsigned int);
// public: void D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsEmpty(void);
// public: unsigned int D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Pop(void);
// public: void D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::RegOptSolutionStep * D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Pop(void);
// public: struct D3DXShader::RegOptSolutionStep ** D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Peek(void);
// public: D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: class D3DXShader::Instruction ** D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetSpace(unsigned int);
// private: unsigned int * D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::RegOptSolutionStep ** D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::GetSpace(unsigned int);
// public: void D3DXShader::InfiniteLocalRegisterSet::GetTempRegisterSet(class D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)> *);
// public: void D3DXShader::InfiniteLocalRegisterSet::EnsureInUse(unsigned int, class D3DXShader::Instruction *);
// public: void D3DXShader::InfiniteLocalRegisterSet::EnsureFree(unsigned int);
// public: void D3DXShader::InfiniteLocalRegisterSet::EnsureCapacityForReg(unsigned int);
// public: void D3DXShader::InfiniteLocalRegisterSet::Init(class D3DXShader::Compiler *);
// private: void D3DXShader::RegOptSimulator::SimulateForwards(class D3DXShader::Instruction *, bool);
// public: void D3DXShader::Compiler::ReserveBlockOutputRegisters(class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *);
// public: void D3DXShader::Compiler::UpdateLocalRegisters(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *, class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::RecordFailedSolution(struct D3DXShader::RegOptSolutionStep *, class D3DXShader::Block *);
// public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Append(class D3DXShader::Instruction *);
// public: void D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Append(unsigned int);
// public: void D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Append(struct D3DXShader::RegOptSolutionStep *);
// private: class D3DXShader::Instruction * D3DXShader::RegOptSimulator::ReassignLocalRegisters(class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: enum D3DXShader::RegOptSimulator::SkipInstructionDisposition D3DXShader::RegOptSimulator::SkipInstruction(void);
// private: bool D3DXShader::RegOptSimulator::SkipToOriginalLocation(class D3DXShader::Instruction *);
// public: D3DXShader::RegOptSimulator::RegOptSimulator(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::InfiniteLocalRegisterSet *, unsigned int, class D3DXShader::Compiler *);
// public: bool D3DXShader::RegOptSimulator::PlaceInstruction(class D3DXShader::Instruction *, enum D3DXShader::RegOptSolutionStepState);
// public: void D3DXShader::RegOptSimulator::RollBack(struct D3DXShader::RegOptSolutionStep *);
// public: bool D3DXShader::RegOptSimulator::CheckRestOfBlock(void);
// private: void D3DXShader::Compiler::AddPendingInstructionToRegOptSolutionStep(class D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, class D3DXShader::Instruction *);
// public: void D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Push(unsigned int);
// public: void D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Push(struct D3DXShader::RegOptSolutionStep *);
// private: bool D3DXShader::Compiler::ReducePeakRegisterUsageInBlock(class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *);
// private: void D3DXShader::Compiler::OptimizeRegisterUsage(void);

//void D3DXShader::DebugBreakIfDebuggerPresent(void)
//{
//    mangled_ppc("?DebugBreakIfDebuggerPresent@D3DXShader@@YAXXZ");
//};

//bool D3DXShader::__IncOptimizationCount(unsigned int *, unsigned int)
//{
//    mangled_ppc("?__IncOptimizationCount@D3DXShader@@YA_NPAII@Z");
//};

//unsigned int D3DXShader::CountClearBitsInNibble(unsigned int)
//{
//    mangled_ppc("?CountClearBitsInNibble@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::RestrictNumSetBitsInNibble(unsigned int, unsigned int)
//{
//    mangled_ppc("?RestrictNumSetBitsInNibble@D3DXShader@@YAIII@Z");
//};

//public: void D3DXShader::EmptyRegisterSet::SetDebugTag(char const *)
//{
//    mangled_ppc("?SetDebugTag@EmptyRegisterSet@D3DXShader@@QAAXPBD@Z");
//};

//public: char const * D3DXShader::EmptyRegisterSet::GetDebugTag(void)
//{
//    mangled_ppc("?GetDebugTag@EmptyRegisterSet@D3DXShader@@QAAPBDXZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::InfiniteLocalRegisterSet::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@InfiniteLocalRegisterSet@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: unsigned int D3DXShader::InfiniteLocalRegisterSet::GetMaxRegIndex(void)
//{
//    mangled_ppc("?GetMaxRegIndex@InfiniteLocalRegisterSet@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::SetMaxRegIndex(unsigned int)
//{
//    mangled_ppc("?SetMaxRegIndex@InfiniteLocalRegisterSet@D3DXShader@@QAAXI@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::InfiniteLocalRegisterSet::GetRegOwner(unsigned int)
//{
//    mangled_ppc("?GetRegOwner@InfiniteLocalRegisterSet@D3DXShader@@QAAPAVInstruction@2@I@Z");
//};

//unsigned int D3DXShader::SetSwizzleComponent(unsigned int, unsigned int, enum D3DXShader::Component)
//{
//    mangled_ppc("?SetSwizzleComponent@D3DXShader@@YAIIIW4Component@1@@Z");
//};

//unsigned int D3DXShader::ApplySwizzle(unsigned int, unsigned int)
//{
//    mangled_ppc("?ApplySwizzle@D3DXShader@@YAIII@Z");
//};

//unsigned int D3DXShader::AddPathLengths(unsigned int, unsigned int)
//{
//    mangled_ppc("?AddPathLengths@D3DXShader@@YAIII@Z");
//};

//public: void D3DXShader::Instruction::SetReverseRegisterEffect(int)
//{
//    mangled_ppc("?SetReverseRegisterEffect@Instruction@D3DXShader@@QAAXH@Z");
//};

//public: void D3DXShader::Instruction::ResetWorkList(void)
//{
//    mangled_ppc("?ResetWorkList@Instruction@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::GetWorkList_PossiblyNotSet(void)
//{
//    mangled_ppc("?GetWorkList_PossiblyNotSet@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: bool D3DXShader::Instruction::IsOutputRegisterAssignedBeforeRegOpts(void)
//{
//    mangled_ppc("?IsOutputRegisterAssignedBeforeRegOpts@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsRescheduled(void)
//{
//    mangled_ppc("?IsRescheduled@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::SetRescheduled(void)
//{
//    mangled_ppc("?SetRescheduled@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::ClearRescheduled(void)
//{
//    mangled_ppc("?ClearRescheduled@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::SetRegOptIndex(unsigned int)
//{
//    mangled_ppc("?SetRegOptIndex@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Dependency::RenameSwizzle(unsigned int)
//{
//    mangled_ppc("?RenameSwizzle@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Dependency::NeedsNewLocalRegister(void)
//{
//    mangled_ppc("?NeedsNewLocalRegister@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::WasTempRegisterLimitSpecified(void)
//{
//    mangled_ppc("?WasTempRegisterLimitSpecified@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetTempRegisterTargetUsage(void)
//{
//    mangled_ppc("?GetTempRegisterTargetUsage@Compiler@D3DXShader@@QAAIXZ");
//};

//unsigned int D3DXShader::MapRegisterMaskToComponents(unsigned int)
//{
//    mangled_ppc("?MapRegisterMaskToComponents@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::MapRegisterToComponents(unsigned int)
//{
//    mangled_ppc("?MapRegisterToComponents@D3DXShader@@YAII@Z");
//};

//void D3DXShader::PrintVirtualRegister(class D3DXShader::Compiler *, unsigned int)
//{
//    mangled_ppc("?PrintVirtualRegister@D3DXShader@@YAXPAVCompiler@1@I@Z");
//};

//void D3DXShader::ReportOutOfTempRegistersError(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?ReportOutOfTempRegistersError@D3DXShader@@YAXPAVCompiler@1@@Z");
//};

//public: bool D3DXShader::Instruction::RequiresReordering(void)
//{
//    mangled_ppc("?RequiresReordering@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::SetScheduled(unsigned int)
//{
//    mangled_ppc("?SetScheduled@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::MachineState::UpdateRAWSpecialRegisterHazards(class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?UpdateRAWSpecialRegisterHazards@MachineState@D3DXShader@@QAAXPAVInstruction@2@_N@Z");
//};

//public: D3DXShader::RegOptSimulator::~RegOptSimulator(void)
//{
//    mangled_ppc("??1RegOptSimulator@D3DXShader@@QAA@XZ");
//};

//public: class D3DXShader::Compiler * D3DXShader::RegOptSimulator::GetCompiler(void)
//{
//    mangled_ppc("?GetCompiler@RegOptSimulator@D3DXShader@@QAAPAVCompiler@2@XZ");
//};

//public: static bool D3DXShader::RegOptSimulator::IsUnblocked(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsUnblocked@RegOptSimulator@D3DXShader@@SA_NPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::RegOptSimulator::CanPlaceInstructions(void)
//{
//    mangled_ppc("?CanPlaceInstructions@RegOptSimulator@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::RegOptSimulator::StopPlacingInstructions(void)
//{
//    mangled_ppc("?StopPlacingInstructions@RegOptSimulator@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::RegOptSimulator::PrepareToRestoreAllInstructions(void)
//{
//    mangled_ppc("?PrepareToRestoreAllInstructions@RegOptSimulator@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Instruction ** D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::PeekNext(void)
//{
//    mangled_ppc("?PeekNext@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::SetVirtualRegister(unsigned int)
//{
//    mangled_ppc("?SetVirtualRegister@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Clone(class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Clone@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@PAVInstruction@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Clone(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?Clone@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@@Z");
//};

//public: void D3DXShader::Compiler::ClearLocalRegisterAssignment(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ClearLocalRegisterAssignment@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: unsigned int D3DXShader::Compiler::ComputeBlockOutputRegMask(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ComputeBlockOutputRegMask@Compiler@D3DXShader@@QAAIPAVBlock@2@PAVInstruction@2@@Z");
//};

//public: int D3DXShader::Compiler::ComputeRegisterEffectOnGroup(class D3DXShader::Instruction *, unsigned int, int *, unsigned int, bool *)
//{
//    mangled_ppc("?ComputeRegisterEffectOnGroup@Compiler@D3DXShader@@QAAHPAVInstruction@2@IPAHIPA_N@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SetAll(void)
//{
//    mangled_ppc("?SetAll@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::CopyFrom(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)> *)
//{
//    mangled_ppc("?CopyFrom@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXPAV12@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::InsertNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *, struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?InsertNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@0@Z");
//};

//public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetBitRange(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRange@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIII@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::AddBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?AddBitMask@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SubtractBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SubtractBitMask@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXIII@Z");
//};

//public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::FindNibbleWithClearBit(unsigned int, unsigned int *)
//{
//    mangled_ppc("?FindNibbleWithClearBit@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIIPAI@Z");
//};

//public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::FindLastNibbleWithClearBit(unsigned int, unsigned int *)
//{
//    mangled_ppc("?FindLastNibbleWithClearBit@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIIPAI@Z");
//};

//public: void D3DXShader::Instruction::SetWorkList(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SetWorkList@Instruction@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::RegOptSimulator::GetRollbackState(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?GetRollbackState@RegOptSimulator@D3DXShader@@QAAXPAURegOptSolutionStep@2@@Z");
//};

//private: void D3DXShader::Compiler::CheckRegisterConflicts(class D3DXShader::Block *)
//{
//    mangled_ppc("?CheckRegisterConflicts@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::GetBitCapacity(void)
//{
//    mangled_ppc("?GetBitCapacity@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::SetAll(void)
//{
//    mangled_ppc("?SetAll@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Instruction ** D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@XZ");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Destruct(void)
//{
//    mangled_ppc("?Destruct@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetBitRangeAligned(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetBitRangeAligned@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIII@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Dump(void)
//{
//    mangled_ppc("?Dump@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::AddAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?AddAlignedBitMask@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::SubtractAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SubtractAlignedBitMask@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXIII@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Find(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Find@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAIIIH@Z");
//};

//public: void D3DXShader::EmptyRegisterSet::Init(class D3DXShader::EmptyRegisterSet *)
//{
//    mangled_ppc("?Init@EmptyRegisterSet@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::Dump(void)
//{
//    mangled_ppc("?Dump@InfiniteLocalRegisterSet@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@InfiniteLocalRegisterSet@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::ShouldBeInBody_PossiblyAfterScheduling(void)
//{
//    mangled_ppc("?ShouldBeInBody_PossiblyAfterScheduling@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertBefore(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InsertBefore@Compiler@D3DXShader@@QAA?AUInstructionPlacementPoint@12@PAVInstruction@2@@Z");
//};

//private: void D3DXShader::InfiniteLocalRegisterSet::MarkRegOwner(unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkRegOwner@InfiniteLocalRegisterSet@D3DXShader@@AAAXIPAVInstruction@2@@Z");
//};

//public: void D3DXShader::Compiler::ClearLocalRegisterAssignments(class D3DXShader::Block *, bool)
//{
//    mangled_ppc("?ClearLocalRegisterAssignments@Compiler@D3DXShader@@QAAXPAVBlock@2@_N@Z");
//};

//public: void D3DXShader::Compiler::RenumberBundles(class D3DXShader::Block *, bool)
//{
//    mangled_ppc("?RenumberBundles@Compiler@D3DXShader@@QAAXPAVBlock@2@_N@Z");
//};

//public: void D3DXShader::Compiler::AddGlobalOrderingDependencies(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddGlobalOrderingDependencies@Compiler@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Destruct(void)
//{
//    mangled_ppc("?Destruct@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Contains(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Contains@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NPAVInstruction@2@@Z");
//};

//public: class D3DXShader::Instruction ** D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Get(unsigned int)
//{
//    mangled_ppc("?Get@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVInstruction@2@I@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Remove(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Remove@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Insert(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Insert@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::EnsureCapacity(unsigned int)
//{
//    mangled_ppc("?EnsureCapacity@?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::RegOptSolutionStep ** D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAURegOptSolutionStep@2@XZ");
//};

//public: struct D3DXShader::RegOptSolutionStep * D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAURegOptSolutionStep@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Reserve(unsigned int)
//{
//    mangled_ppc("?Reserve@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Alloc(unsigned int, bool)
//{
//    mangled_ppc("?Alloc@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAII_N@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Free(unsigned int)
//{
//    mangled_ppc("?Free@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: unsigned int D3DXShader::InfiniteLocalRegisterSet::GetComponentMaskInUse(unsigned int)
//{
//    mangled_ppc("?GetComponentMaskInUse@InfiniteLocalRegisterSet@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::Reserve(unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Reserve@InfiniteLocalRegisterSet@D3DXShader@@QAAXIPAVInstruction@2@@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::Free(unsigned int)
//{
//    mangled_ppc("?Free@InfiniteLocalRegisterSet@D3DXShader@@QAAXI@Z");
//};

//public: unsigned int D3DXShader::Compiler::CheckGlobalConflicts(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *)
//{
//    mangled_ppc("?CheckGlobalConflicts@Compiler@D3DXShader@@QAAIPAVInstruction@2@PAVBlock@2@PAVInfiniteLocalRegisterSet@2@@Z");
//};

//private: struct D3DXShader::RegOptSolutionStep * D3DXShader::Compiler::CreateRegOptSolutionStep(void)
//{
//    mangled_ppc("?CreateRegOptSolutionStep@Compiler@D3DXShader@@AAAPAURegOptSolutionStep@2@XZ");
//};

//private: void D3DXShader::Compiler::FreeSolutionStep(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?FreeSolutionStep@Compiler@D3DXShader@@AAAXPAURegOptSolutionStep@2@@Z");
//};

//private: void D3DXShader::Compiler::ComputeRegOptSolutionHash(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?ComputeRegOptSolutionHash@Compiler@D3DXShader@@AAAXPAURegOptSolutionStep@2@@Z");
//};

//private: bool D3DXShader::Compiler::FindFailedSolution(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?FindFailedSolution@Compiler@D3DXShader@@AAA_NPAURegOptSolutionStep@2@@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Init(class D3DXShader::Compiler *, char const *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAVCompiler@2@PBD@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Init(class D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)> *)
//{
//    mangled_ppc("?Init@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::EnsureCapacity(unsigned int)
//{
//    mangled_ppc("?EnsureCapacity@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::EnsureInUse(unsigned int)
//{
//    mangled_ppc("?EnsureInUse@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::EnsureFree(unsigned int)
//{
//    mangled_ppc("?EnsureFree@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAXI@Z");
//};

//public: unsigned int D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)>::Alloc_NoExceptionOnFailure(unsigned int)
//{
//    mangled_ppc("?Alloc_NoExceptionOnFailure@?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::RegOptSolutionStep * D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAURegOptSolutionStep@2@XZ");
//};

//public: struct D3DXShader::RegOptSolutionStep ** D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAURegOptSolutionStep@2@XZ");
//};

//public: D3DXShader::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::ArrayListEnumerator<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//private: class D3DXShader::Instruction ** D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAVInstruction@2@I@Z");
//};

//private: unsigned int * D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@AAAPAII@Z");
//};

//private: struct D3DXShader::RegOptSolutionStep ** D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAURegOptSolutionStep@2@I@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::GetTempRegisterSet(class D3DXShader::RegisterSet<class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>, void (D3DXShader::PrintVirtualRegister::*)(class D3DXShader::Compiler *, unsigned int), 64, 4, void (D3DXShader::ReportOutOfTempRegistersError::*)(class D3DXShader::DynamicBitSet<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>)> *)
//{
//    mangled_ppc("?GetTempRegisterSet@InfiniteLocalRegisterSet@D3DXShader@@QAAXPAV?$RegisterSet@V?$DynamicBitSet@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@$1?PrintVirtualRegister@2@YAXPAVCompiler@2@I@Z$0EA@$03$1?ReportOutOfTempRegistersError@2@YAX0@Z@2@@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::EnsureInUse(unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?EnsureInUse@InfiniteLocalRegisterSet@D3DXShader@@QAAXIPAVInstruction@2@@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::EnsureFree(unsigned int)
//{
//    mangled_ppc("?EnsureFree@InfiniteLocalRegisterSet@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::EnsureCapacityForReg(unsigned int)
//{
//    mangled_ppc("?EnsureCapacityForReg@InfiniteLocalRegisterSet@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::InfiniteLocalRegisterSet::Init(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?Init@InfiniteLocalRegisterSet@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//private: void D3DXShader::RegOptSimulator::SimulateForwards(class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?SimulateForwards@RegOptSimulator@D3DXShader@@AAAXPAVInstruction@2@_N@Z");
//};

//public: void D3DXShader::Compiler::ReserveBlockOutputRegisters(class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *)
//{
//    mangled_ppc("?ReserveBlockOutputRegisters@Compiler@D3DXShader@@QAAXPAVBlock@2@PAVInfiniteLocalRegisterSet@2@@Z");
//};

//public: void D3DXShader::Compiler::UpdateLocalRegisters(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?UpdateLocalRegisters@Compiler@D3DXShader@@QAAXPAVInstruction@2@PAVBlock@2@PAVInfiniteLocalRegisterSet@2@0@Z");
//};

//private: bool D3DXShader::Compiler::RecordFailedSolution(struct D3DXShader::RegOptSolutionStep *, class D3DXShader::Block *)
//{
//    mangled_ppc("?RecordFailedSolution@Compiler@D3DXShader@@AAA_NPAURegOptSolutionStep@2@PAVBlock@2@@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)>::Append(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::ArrayList<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Append(unsigned int)
//{
//    mangled_ppc("?Append@?$ArrayList@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Append(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAURegOptSolutionStep@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::RegOptSimulator::ReassignLocalRegisters(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ReassignLocalRegisters@RegOptSimulator@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@@Z");
//};

//private: enum D3DXShader::RegOptSimulator::SkipInstructionDisposition D3DXShader::RegOptSimulator::SkipInstruction(void)
//{
//    mangled_ppc("?SkipInstruction@RegOptSimulator@D3DXShader@@AAA?AW4SkipInstructionDisposition@12@XZ");
//};

//private: bool D3DXShader::RegOptSimulator::SkipToOriginalLocation(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SkipToOriginalLocation@RegOptSimulator@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//public: D3DXShader::RegOptSimulator::RegOptSimulator(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::InfiniteLocalRegisterSet *, unsigned int, class D3DXShader::Compiler *)
//{
//    mangled_ppc("??0RegOptSimulator@D3DXShader@@QAA@PAVBlock@1@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@1@PAVInfiniteLocalRegisterSet@1@IPAVCompiler@1@@Z");
//};

//public: bool D3DXShader::RegOptSimulator::PlaceInstruction(class D3DXShader::Instruction *, enum D3DXShader::RegOptSolutionStepState)
//{
//    mangled_ppc("?PlaceInstruction@RegOptSimulator@D3DXShader@@QAA_NPAVInstruction@2@W4RegOptSolutionStepState@2@@Z");
//};

//public: void D3DXShader::RegOptSimulator::RollBack(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?RollBack@RegOptSimulator@D3DXShader@@QAAXPAURegOptSolutionStep@2@@Z");
//};

//public: bool D3DXShader::RegOptSimulator::CheckRestOfBlock(void)
//{
//    mangled_ppc("?CheckRestOfBlock@RegOptSimulator@D3DXShader@@QAA_NXZ");
//};

//private: void D3DXShader::Compiler::AddPendingInstructionToRegOptSolutionStep(class D3DXShader::ArrayList<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddPendingInstructionToRegOptSolutionStep@Compiler@D3DXShader@@AAAXPAV?$ArrayList@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVInstruction@2@@Z");
//};

//public: void D3DXShader::Stack<unsigned int, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(void *, void *, unsigned long)>::Push(unsigned int)
//{
//    mangled_ppc("?Push@?$Stack@I$1?AllocInContext@CompilerHeap@D3DXShader@@SAPAXPAXK@Z$1?FreeInContext@23@SAX00K@Z@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::Stack<struct D3DXShader::RegOptSolutionStep *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::RegOptSolutionStep *, struct D3DXShader::RegOptSolutionStep *, unsigned long)>::Push(struct D3DXShader::RegOptSolutionStep *)
//{
//    mangled_ppc("?Push@?$Stack@PAURegOptSolutionStep@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAURegOptSolutionStep@2@@Z");
//};

//private: bool D3DXShader::Compiler::ReducePeakRegisterUsageInBlock(class D3DXShader::Block *, class D3DXShader::InfiniteLocalRegisterSet *)
//{
//    mangled_ppc("?ReducePeakRegisterUsageInBlock@Compiler@D3DXShader@@AAA_NPAVBlock@2@PAVInfiniteLocalRegisterSet@2@@Z");
//};

//private: void D3DXShader::Compiler::OptimizeRegisterUsage(void)
//{
//    mangled_ppc("?OptimizeRegisterUsage@Compiler@D3DXShader@@AAAXXZ");
//};

