/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int D3DXShader::CompMask(enum D3DXShader::Component, enum D3DXShader::Component);
// bool D3DXShader::IsAlwaysZero(unsigned int);
// public: bool D3DXShader::Instruction::DependsOn(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::DependsOnScoped(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::MultipliesFirstTwoOperands(void);
// public: bool D3DXShader::Instruction::IsVectorSum(void);
// public: bool D3DXShader::Instruction::FirstTwoOperandsAreAssociative(void);
// public: bool D3DXShader::Instruction::IsLog(void);
// public: void D3DXShader::Instruction::SetJumpIfTrue(void);
// public: void D3DXShader::Block::MarkSubReturnBlock(void);
// public: void D3DXShader::Block::MarkSubReturnSite(void);
// public: void D3DXShader::Block::CleanUpEntryPointAfterInlining(void);
// public: void D3DXShader::Block::CleanUpReturnSiteAfterInlining(void);
// public: void D3DXShader::Block::CleanUpReturnBlockAfterInlining(void);
// public: void D3DXShader::Block::RemovePredecessor(class D3DXShader::Block *, class D3DXShader::Compiler *);
// public: D3DXShader::DomGraphBreadthFirstEnumerator::DomGraphBreadthFirstEnumerator(class D3DXShader::Block *);
// float D3DXShader::XenosPInf(void);
// float D3DXShader::XenosNInf(void);
// float D3DXShader::XenosNZero(void);
// double D3DXShader::XenosNormalize(double);
// double D3DXShader::XenosNeg(double);
// double D3DXShader::XenosAdd(double, double);
// double D3DXShader::XenosMul(double, double);
// double D3DXShader::XenosSub(double, double);
// double D3DXShader::XenosTrunc(double);
// double D3DXShader::XenosFloor(double);
// double D3DXShader::XenosFract(double);
// public: bool D3DXShader::ProductTerm::operator==(struct D3DXShader::ProductTerm &);
// private: void D3DXShader::Compiler::StartNewIsolationGroup_AfterImport(void);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Instruction *);
// public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertAtTail(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateUniformVariableInstr_FromRegIndex(unsigned int, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_LOOPSTART(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_LOOPEND(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_EXPORT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: void D3DXShader::Compiler::MarkThroughDependencies_SkipSubroutines(class D3DXShader::Dependency *);
// private: void D3DXShader::Compiler::MergeProductTermPrecision(enum D3DXShader::ConstantValueType *, enum D3DXShader::ConstantValueType);
// public: void D3DXShader::Instruction_ControlTransfer::SetUnrollIterationCountDependency(class D3DXShader::Dependency *);
// public: bool D3DXShader::Instruction::HasMultipleDependents(void);
// public: struct D3DXShader::Constraint * D3DXShader::Instruction::FindConstraint(enum D3DXShader::ConstraintType);
// public: void D3DXShader::Instruction::InvalidateResultBounds(unsigned int);
// public: bool D3DXShader::Instruction::ReplaceConstraintFlags(unsigned int, unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::ReplaceConstraintFlags(unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::SetConstraintFlags(unsigned int, unsigned int);
// public: bool D3DXShader::Instruction::MaskAllConstraintFlags(unsigned int);
// public: bool D3DXShader::Instruction::IsAlwaysGEZero(unsigned int);
// public: bool D3DXShader::Instruction::SetAlwaysGEZero(unsigned int);
// public: void D3DXShader::Dependency::SetRegMask(unsigned int);
// public: class D3DXShader::Block * D3DXShader::Block::GetControlParent(void);
// private: void D3DXShader::Compiler::PatchUnresolvedUAsmOptions(struct D3DXShader::UnresolvedUAsmOptions *, struct D3DXShader::UnresolvedUAsmOptions *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// private: void D3DXShader::Compiler::PrintProductTerm(struct D3DXShader::ProductTerm *);
// bool D3DXShader::ShouldOrderTermBefore(struct D3DXShader::ProductTerm *, struct D3DXShader::ProductTerm *);
// bool D3DXShader::ShouldSwapOperands(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeResultPrecision(class D3DXShader::Instruction *, enum D3DXShader::Component);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(enum D3DXShader::ConstantValueType, enum D3DXShader::ConstantValueType);
// int D3DXShader::SortLoopsByBenefit(void const *, void const *);
// bool D3DXShader::ComputeInductionVariableStartValue(struct D3DXShader::InductionVariable *, bool, double, double *);
// private: bool D3DXShader::Compiler::IsArrayLoadAndCanUseIndexRegister(struct D3DXShader::InductionVariable *, class D3DXShader::Instruction *);
// public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::Equals(class D3DXShader::FixedSizeBitSet<unsigned int, 1> *);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::AtEnd(void);
// public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::AtEnd(void);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::AtEnd(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry>::Init(void);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry>::Init(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: bool D3DXShader::Instruction::HasSamplerOperand(void);
// public: unsigned int D3DXShader::Instruction::GetSamplerOperandIndex(void);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::GetSamplerOperand(void);
// public: bool D3DXShader::Instruction::IsBooleanVariable(class D3DXShader::Compiler *);
// public: struct D3DXShader::UnresolvedUAsmOptions * D3DXShader::Instruction::GetUnresolvedUAsmOptions(class D3DXShader::Compiler *);
// public: struct D3DXShader::Instruction_ARRAY * D3DXShader::Instruction::GetArrayInfo(class D3DXShader::Compiler *);
// public: bool D3DXShader::Instruction::IsIntegerCast(class D3DXShader::Compiler *);
// public: void D3DXShader::Block::SetTwin(class D3DXShader::Block *);
// private: class D3DXShader::Block * D3DXShader::DomGraphBreadthFirstEnumerator::FindNextBlock(class D3DXShader::Block *);
// public: class D3DXShader::Block * D3DXShader::DomGraphBreadthFirstEnumerator::GetNext(void);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_EXPORT(class D3DXShader::Block *);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(unsigned int, unsigned int);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component);
// private: void D3DXShader::Compiler::MergeBinaryProductTermPrecision(enum D3DXShader::ConstantValueType *, enum D3DXShader::ConstantValueType, enum D3DXShader::ConstantValueType);
// public: bool D3DXShader::Compiler::SimplifyDependents(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *);
// public: class D3DXShader::Dependency * D3DXShader::Instruction::FindNextSideEffectDependent(enum D3DXShader::SideEffect);
// public: void D3DXShader::Instruction::SetOperand(unsigned long, class D3DXShader::Dependency *);
// public: void D3DXShader::Instruction::AddArrayLengthConstraint(unsigned int, unsigned int, class D3DXShader::Compiler *);
// public: double D3DXShader::Dependency::GetConstantValue(unsigned int);
// public: bool D3DXShader::Dependency::IsAlwaysGEZero(unsigned int);
// public: bool D3DXShader::Dependency::IsAlwaysLEZero(unsigned int);
// public: bool D3DXShader::Dependency::IsAlwaysInteger(unsigned int);
// public: void D3DXShader::Block::SetDead(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::CompareUnresolvedUAsmOptions(struct D3DXShader::UnresolvedUAsmOptions *, struct D3DXShader::UnresolvedUAsmOptions *);
// private: bool D3DXShader::Compiler::IsEquivalentLinkedDependency(class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// private: bool D3DXShader::Compiler::IsValidSamplerOperandDef(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Compiler::ResolveArrayReferencesStage);
// private: bool D3DXShader::Compiler::FindAddChainConstant(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *);
// private: bool D3DXShader::Compiler::ComputesBooleanValue(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::CheckArrayLimitInLoop(class D3DXShader::Instruction *, struct D3DXShader::Constraint_ArrayLength *, struct D3DXShader::InductionVariable *);
// private: enum D3DXShader::Compiler::ExamineLoopInvariantTestDisposition D3DXShader::Compiler::ExamineLoopInvariantTest(struct D3DXShader::InductionVariable *, bool, class D3DXShader::Dependency *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, enum D3DXShader::_D3DEXPR_OP, class D3DXShader::Dependency *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, struct D3DXShader::InvariantCondition **);
// private: enum D3DXShader::Compiler::ExamineLoopInvariantTestDisposition D3DXShader::Compiler::ExamineAndExpressionTerm(struct D3DXShader::InductionVariable *, bool, class D3DXShader::Dependency *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, struct D3DXShader::InvariantCondition **);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::InsertPrev(class D3DXShader::Block *, class D3DXShader::Block *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// public: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::GetComponentDependency(class D3DXShader::Dependency *, enum D3DXShader::Component);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::GetOperandComponentDependency(class D3DXShader::Instruction *, unsigned int, enum D3DXShader::Component);
// public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Dependency *);
// public: void D3DXShader::Instruction::RemoveAllDependents(class D3DXShader::Compiler *);
// private: void D3DXShader::Compiler::CleanClonedDependencies(class D3DXShader::Block *, bool *);
// private: void D3DXShader::Compiler::DisconnectPHIDependenciesThroughPath(class D3DXShader::Block *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::DisconnectSuccessor(class D3DXShader::Block *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::RemoveVisitedBlocks(unsigned int);
// private: bool D3DXShader::Compiler::IsControlledByDynamicBranch(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::VisitBlocksWithMarkedInstructions(unsigned int);
// private: void D3DXShader::Compiler::MarkReachableBlocks(bool);
// private: void D3DXShader::Compiler::VisitReachableBlocks(unsigned int, bool);
// private: void D3DXShader::Compiler::CloneDependenciesInList(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, unsigned int, bool);
// private: void D3DXShader::Compiler::CleanClonedBlocksWithMarkedInstructions(unsigned int, class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::LinkIdenticalInstructions(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: bool D3DXShader::Compiler::CanShiftOperands(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::SimplifyCastDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *);
// private: void D3DXShader::Compiler::CheckArrayLimitInLoop(class D3DXShader::Instruction *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *);
// private: struct D3DXShader::ArrayElementLoad * D3DXShader::Compiler::DecodeArrayLoad(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::ArrayLoad *);
// private: enum D3DXShader::ErrorCode D3DXShader::Compiler::ResolveUAsmOptions(class D3DXShader::Instruction *, struct D3DXShader::UnresolvedUAsmOptions *, class D3DXShader::CNodeList **);
// private: enum D3DXShader::ErrorCode D3DXShader::Compiler::ResolveInternalTextureUAsmOptions(class D3DXShader::Instruction *, struct D3DXShader::Instruction_TFETCH *);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetBit(unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ClearBit(unsigned int);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::AddToTail(class D3DXShader::Block *);
// public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::RemoveAll(void);
// public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::InsertNext(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *);
// public: struct D3DXShader::ProductTerm * D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GetNext(void);
// public: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> ** D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GetNext(void);
// public: struct D3DXShader::UniqueProductTerm * D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GetNext(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::AddToTail(class D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0> *);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::Block::MoveSideEffects(enum D3DXShader::SideEffect, class D3DXShader::Block *, class D3DXShader::Compiler *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_TRUNC(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FLOOR(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_KILLE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIPSQRT_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_COND_JUMP(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MULADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT2ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// public: bool D3DXShader::Instruction::SupportsInputDef_BeforeCleanPhase(class D3DXShader::Instruction *, class D3DXShader::Compiler *);
// private: void D3DXShader::Compiler::PrepareASMBlocks(void);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateDiagnosticExportIndex(class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::GenerateDebugPrintEpilogue(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::SplitInput(unsigned int, class D3DXShader::Instruction *, unsigned int);
// private: void D3DXShader::Compiler::CombineInputs(unsigned int, class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveMERGEOperand(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int *);
// private: void D3DXShader::Compiler::MarkMustInlineCall(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::CheckSubroutinePHIs(void);
// private: void D3DXShader::Compiler::CloneVisitedBlocks(class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int);
// private: unsigned long D3DXShader::Compiler::CloneInstructionsInList(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, bool);
// private: void D3DXShader::Compiler::CleanBlocksWorker(unsigned int, bool *, class D3DXShader::Block *);
// private: void D3DXShader::Compiler::ResolveArrayReferences(enum D3DXShader::Compiler::ResolveArrayReferencesStage);
// private: void D3DXShader::Compiler::MarkLoopBlock(class D3DXShader::Block *, unsigned int);
// private: bool D3DXShader::Compiler::IsLoopBlockMarked(class D3DXShader::Block *, unsigned int);
// private: void D3DXShader::Compiler::RebuildLoopExitList(struct D3DXShader::Loop *);
// private: void D3DXShader::Compiler::AddLoopEndInstructionForUnnaturalLoopExit(class D3DXShader::Block *, class D3DXShader::Instruction *, struct D3DXShader::Loop *);
// private: void D3DXShader::Compiler::CheckMAXAArrayLimitInLoop(class D3DXShader::Instruction *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *);
// private: void D3DXShader::Compiler::FindArrayLoadInstructions(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::InductionVariable *);
// private: void D3DXShader::Compiler::CreatePreHeader(struct D3DXShader::Loop *);
// private: void D3DXShader::Compiler::EnsureLoopHasFooter(struct D3DXShader::Loop *);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::ReplaceField(unsigned int, unsigned int);
// public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::IsEmpty(void);
// public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::PeekFirst(void);
// public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::PeekSecond(void);
// public: struct D3DXShader::ProductTerm D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::RemoveLast(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::RemoveAll(void);
// public: unsigned int D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::CountItems(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::HasOneItem(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::HasTwoItems(void);
// public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Contains(struct D3DXShader::ProductTerm);
// public: unsigned int D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Find(struct D3DXShader::ProductTerm);
// public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Get(unsigned int);
// public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Remove(struct D3DXShader::ProductTerm);
// public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::MoveElementsFrom(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// public: void D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> ** D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::PeekFirst(void);
// public: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> * D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::RemoveLast(void);
// public: unsigned int D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::CountItems(void);
// public: void D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::Remove(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::Init(void);
// public: void D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::RemoveAll(void);
// public: struct D3DXShader::UniqueProductTerm * D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::Get(unsigned int);
// public: class D3DXShader::Block ** D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::PeekLast(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::RemoveAll(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GoToEnd(void);
// public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::AtBeginning(void);
// public: class D3DXShader::Block ** D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetPrev(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GoToBeginning(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GoToBeginning(void);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GoToBeginning(void);
// public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GoToBeginning(void);
// private: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GetSpaceWorker(unsigned int);
// private: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GetSpaceWorker(unsigned int);
// private: void D3DXShader::Compiler::CleanClonedBlocks(unsigned int, bool *);
// private: void D3DXShader::Compiler::CleanGraftedBlocks(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::PrepareDiagnosticBlocks(void);
// private: void D3DXShader::Compiler::RecombineInputSemantics(unsigned int, unsigned int, unsigned int, unsigned int);
// private: void D3DXShader::Compiler::MarkMustInlineCallSite(class D3DXShader::Block *);
// private: unsigned long D3DXShader::Compiler::CloneCodeInBlocks(class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int, bool);
// private: void D3DXShader::Compiler::FreeUniqueTermList(class D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)> *);
// private: bool D3DXShader::Compiler::IsConstantProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeDotProductPrecision(class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> *const, unsigned int);
// private: void D3DXShader::Compiler::ExaminePossibleLoopArrayAccess(class D3DXShader::Instruction *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *);
// private: void D3DXShader::Compiler::ResolveIntegerOperations(void);
// public: class D3DXShader::Block ** D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Peek(void);
// public: void D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::PopAll(void);
// public: bool D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::IsAtBottom(void);
// public: void D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GoToTop(void);
// public: class D3DXShader::Block ** D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetNextLower(void);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// public: D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)> *);
// public: D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)> *);
// private: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GetSpace(unsigned int);
// private: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> ** D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GetSpace(unsigned int);
// private: struct D3DXShader::UniqueProductTerm * D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GetSpace(unsigned int);
// private: void D3DXShader::Compiler::CloneMarkedCodeInBlocks(class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int);
// private: void D3DXShader::Compiler::PrepareTessellatorInputs(void);
// private: bool D3DXShader::Compiler::PropagateConstants(void);
// private: void D3DXShader::Compiler::CloneBlocksWithMarkedInstructions(class D3DXShader::Block *, bool, bool, class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int *, class D3DXShader::Block **);
// private: void D3DXShader::Compiler::PrintProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, struct D3DXShader::ProductTerm *);
// private: void D3DXShader::Compiler::PrintSumOfProducts(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, struct D3DXShader::ProductTerm *);
// private: bool D3DXShader::Compiler::IsInverseProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// private: bool D3DXShader::Compiler::AreProductTermListsIdentical_ExceptionInList2(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, struct D3DXShader::ProductTerm *);
// private: unsigned int D3DXShader::Compiler::ComputeExpressionCost(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *);
// private: bool D3DXShader::Compiler::IsSumOfSquares(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *);
// public: D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>(class D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Append(struct D3DXShader::ProductTerm);
// public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Append(void);
// public: void D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::Append(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// public: void D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::Append(struct D3DXShader::UniqueProductTerm);
// private: bool D3DXShader::Compiler::AreProductTermListsIdentical(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// private: void D3DXShader::Compiler::AppendProductTerm(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::ConstantValueType *);
// private: void D3DXShader::Compiler::AppendProductTermsFromBinaryOperator(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::ConstantValueType *);
// private: void D3DXShader::Compiler::HandleSumOperand(class D3DXShader::Instruction *, unsigned int, enum D3DXShader::Component, class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, enum D3DXShader::ConstantValueType *);
// private: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> * D3DXShader::Compiler::BuildProductTermList(class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Instruction *);
// private: class D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)> * D3DXShader::Compiler::FindUniqueSumOfProductsTerms(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *);
// private: void D3DXShader::Compiler::SortProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// private: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> * D3DXShader::Compiler::CloneProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *);
// private: void D3DXShader::Compiler::MarkForSimplify(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::MarkDependentsForSimplify(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::RemoveUnusedComponentsWorker(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveUnusedMERGEComponents(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: bool D3DXShader::Compiler::RemoveIdenticalDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *);
// private: bool D3DXShader::Compiler::MergeBlocks(class D3DXShader::Block *, class D3DXShader::Block *, bool);
// private: bool D3DXShader::Compiler::MarkMustInlineCallIfDynamic(class D3DXShader::Instruction *, class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::MarkMustInlineCallsForInstruction(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::InlineReplaceCallSite(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Block *, unsigned int);
// private: void D3DXShader::Compiler::FreeSumList(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: bool D3DXShader::Compiler::GenerateProduct(class D3DXShader::Instruction *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, struct D3DXShader::ProductTerm *, class D3DXShader::Dependency **, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: bool D3DXShader::Compiler::SimplifyTerms(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, class D3DXShader::Instruction *);
// private: unsigned int D3DXShader::Compiler::ComputeSavingsIfFactored(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, struct D3DXShader::ProductTerm *, class D3DXShader::Instruction *, class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> **);
// private: void D3DXShader::Compiler::TransferDependentModifiersToInputs(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::SetConstraintFlagsAndUpdateResultBounds(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::SimplifyComponentDependents(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *);
// private: void D3DXShader::Compiler::ReplaceOperandComponent(class D3DXShader::Instruction *, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int);
// private: void D3DXShader::Compiler::MarkLoopBlocks(class D3DXShader::Block *, unsigned int);
// private: void D3DXShader::Compiler::FindPossibleLoopArrayAccesses(class D3DXShader::Instruction *, class D3DXShader::Dependency *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *);
// private: void D3DXShader::Compiler::RemoveUnusedComponents(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: bool D3DXShader::Compiler::RemoveBlockIfUseless(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::CheckInliningRequirements(void);
// private: void D3DXShader::Compiler::InlineCopy(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> * D3DXShader::Compiler::FindSumOfProducts(class D3DXShader::Instruction *, enum D3DXShader::Component);
// private: void D3DXShader::Compiler::CanonicalizeDependencyGraph(class D3DXShader::Instruction *);
// private: bool D3DXShader::Compiler::Simplify_MUL(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, struct D3DXShader::SimplifyMULState *, bool *);
// private: void D3DXShader::Compiler::ExtractAddChainConstant(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, bool *);
// private: bool D3DXShader::Compiler::Simplify(class D3DXShader::Instruction *, bool *);
// private: bool D3DXShader::Compiler::RemoveDeadCode(bool);
// private: void D3DXShader::Compiler::BuildDepthFirstOrdering(void);
// private: void D3DXShader::Compiler::Inlining(void);
// private: bool D3DXShader::Compiler::SimplifyDependencyGraph(void);
// private: bool D3DXShader::Compiler::SimplifyBlock(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::ForceExpressionOptimizations(class D3DXShader::Block *);
// private: bool D3DXShader::Compiler::UnrollLoop(struct D3DXShader::Loop *);
// private: void D3DXShader::Compiler::ResolveInvalidInstructions(void);
// private: void D3DXShader::Compiler::EvaluateCompileTimeAssertions(void);
// private: void D3DXShader::Compiler::CheckForCompileTimeAssertions(bool);
// private: void D3DXShader::Compiler::RelocateAssertBlocks(void);
// private: void D3DXShader::Compiler::IsolateOutputs(void);
// private: void D3DXShader::Compiler::OptimizeLoops(void);
// private: void D3DXShader::Compiler::Optimize(void);

//unsigned int D3DXShader::CompMask(enum D3DXShader::Component, enum D3DXShader::Component)
//{
//    mangled_ppc("?CompMask@D3DXShader@@YAIW4Component@1@0@Z");
//};

//bool D3DXShader::IsAlwaysZero(unsigned int)
//{
//    mangled_ppc("?IsAlwaysZero@D3DXShader@@YA_NI@Z");
//};

//public: bool D3DXShader::Instruction::DependsOn(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?DependsOn@Instruction@D3DXShader@@QAA_NPAV12@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Instruction::DependsOnScoped(class D3DXShader::Instruction *, class D3DXShader::Block *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?DependsOnScoped@Instruction@D3DXShader@@QAA_NPAV12@PAVBlock@2@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Instruction::MultipliesFirstTwoOperands(void)
//{
//    mangled_ppc("?MultipliesFirstTwoOperands@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsVectorSum(void)
//{
//    mangled_ppc("?IsVectorSum@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::FirstTwoOperandsAreAssociative(void)
//{
//    mangled_ppc("?FirstTwoOperandsAreAssociative@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsLog(void)
//{
//    mangled_ppc("?IsLog@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::SetJumpIfTrue(void)
//{
//    mangled_ppc("?SetJumpIfTrue@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::MarkSubReturnBlock(void)
//{
//    mangled_ppc("?MarkSubReturnBlock@Block@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::MarkSubReturnSite(void)
//{
//    mangled_ppc("?MarkSubReturnSite@Block@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::CleanUpEntryPointAfterInlining(void)
//{
//    mangled_ppc("?CleanUpEntryPointAfterInlining@Block@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::CleanUpReturnSiteAfterInlining(void)
//{
//    mangled_ppc("?CleanUpReturnSiteAfterInlining@Block@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::CleanUpReturnBlockAfterInlining(void)
//{
//    mangled_ppc("?CleanUpReturnBlockAfterInlining@Block@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Block::RemovePredecessor(class D3DXShader::Block *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?RemovePredecessor@Block@D3DXShader@@QAAXPAV12@PAVCompiler@2@@Z");
//};

//public: D3DXShader::DomGraphBreadthFirstEnumerator::DomGraphBreadthFirstEnumerator(class D3DXShader::Block *)
//{
//    mangled_ppc("??0DomGraphBreadthFirstEnumerator@D3DXShader@@QAA@PAVBlock@1@@Z");
//};

//float D3DXShader::XenosPInf(void)
//{
//    mangled_ppc("?XenosPInf@D3DXShader@@YAMXZ");
//};

//float D3DXShader::XenosNInf(void)
//{
//    mangled_ppc("?XenosNInf@D3DXShader@@YAMXZ");
//};

//float D3DXShader::XenosNZero(void)
//{
//    mangled_ppc("?XenosNZero@D3DXShader@@YAMXZ");
//};

//double D3DXShader::XenosNormalize(double)
//{
//    mangled_ppc("?XenosNormalize@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosNeg(double)
//{
//    mangled_ppc("?XenosNeg@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosAdd(double, double)
//{
//    mangled_ppc("?XenosAdd@D3DXShader@@YANNN@Z");
//};

//double D3DXShader::XenosMul(double, double)
//{
//    mangled_ppc("?XenosMul@D3DXShader@@YANNN@Z");
//};

//double D3DXShader::XenosSub(double, double)
//{
//    mangled_ppc("?XenosSub@D3DXShader@@YANNN@Z");
//};

//double D3DXShader::XenosTrunc(double)
//{
//    mangled_ppc("?XenosTrunc@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosFloor(double)
//{
//    mangled_ppc("?XenosFloor@D3DXShader@@YANN@Z");
//};

//double D3DXShader::XenosFract(double)
//{
//    mangled_ppc("?XenosFract@D3DXShader@@YANN@Z");
//};

//public: bool D3DXShader::ProductTerm::operator==(struct D3DXShader::ProductTerm &)
//{
//    mangled_ppc("??8ProductTerm@D3DXShader@@QAA_NAAU01@@Z");
//};

//private: void D3DXShader::Compiler::StartNewIsolationGroup_AfterImport(void)
//{
//    mangled_ppc("?StartNewIsolationGroup_AfterImport@Compiler@D3DXShader@@AAAXXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?Negate@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@@Z");
//};

//public: struct D3DXShader::Compiler::InstructionPlacementPoint D3DXShader::Compiler::InsertAtTail(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?InsertAtTail@Compiler@D3DXShader@@QAA?AUInstructionPlacementPoint@12@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::GetOrCreateUniformVariableInstr_FromRegIndex(unsigned int, unsigned int)
//{
//    mangled_ppc("?GetOrCreateUniformVariableInstr_FromRegIndex@Compiler@D3DXShader@@QAAPAVInstruction@2@II@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_LOOPSTART(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_LOOPSTART@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_LOOPEND(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_LOOPEND@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_EXPORT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_ALLOC_EXPORT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: void D3DXShader::Compiler::MarkThroughDependencies_SkipSubroutines(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MarkThroughDependencies_SkipSubroutines@Compiler@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//private: void D3DXShader::Compiler::MergeProductTermPrecision(enum D3DXShader::ConstantValueType *, enum D3DXShader::ConstantValueType)
//{
//    mangled_ppc("?MergeProductTermPrecision@Compiler@D3DXShader@@AAAXPAW4ConstantValueType@2@W432@@Z");
//};

//public: void D3DXShader::Instruction_ControlTransfer::SetUnrollIterationCountDependency(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?SetUnrollIterationCountDependency@Instruction_ControlTransfer@D3DXShader@@QAAXPAVDependency@2@@Z");
//};

//public: bool D3DXShader::Instruction::HasMultipleDependents(void)
//{
//    mangled_ppc("?HasMultipleDependents@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::Constraint * D3DXShader::Instruction::FindConstraint(enum D3DXShader::ConstraintType)
//{
//    mangled_ppc("?FindConstraint@Instruction@D3DXShader@@QAAPAUConstraint@2@W4ConstraintType@2@@Z");
//};

//public: void D3DXShader::Instruction::InvalidateResultBounds(unsigned int)
//{
//    mangled_ppc("?InvalidateResultBounds@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Instruction::ReplaceConstraintFlags(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceConstraintFlags@Instruction@D3DXShader@@QAA_NIII@Z");
//};

//public: bool D3DXShader::Instruction::ReplaceConstraintFlags(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceConstraintFlags@Instruction@D3DXShader@@QAA_NII@Z");
//};

//public: bool D3DXShader::Instruction::SetConstraintFlags(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetConstraintFlags@Instruction@D3DXShader@@QAA_NII@Z");
//};

//public: bool D3DXShader::Instruction::MaskAllConstraintFlags(unsigned int)
//{
//    mangled_ppc("?MaskAllConstraintFlags@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::IsAlwaysGEZero(unsigned int)
//{
//    mangled_ppc("?IsAlwaysGEZero@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Instruction::SetAlwaysGEZero(unsigned int)
//{
//    mangled_ppc("?SetAlwaysGEZero@Instruction@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::Dependency::SetRegMask(unsigned int)
//{
//    mangled_ppc("?SetRegMask@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: class D3DXShader::Block * D3DXShader::Block::GetControlParent(void)
//{
//    mangled_ppc("?GetControlParent@Block@D3DXShader@@QAAPAV12@XZ");
//};

//private: void D3DXShader::Compiler::PatchUnresolvedUAsmOptions(struct D3DXShader::UnresolvedUAsmOptions *, struct D3DXShader::UnresolvedUAsmOptions *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?PatchUnresolvedUAsmOptions@Compiler@D3DXShader@@AAAXPAUUnresolvedUAsmOptions@2@0PAVDependency@2@1@Z");
//};

//private: void D3DXShader::Compiler::PrintProductTerm(struct D3DXShader::ProductTerm *)
//{
//    mangled_ppc("?PrintProductTerm@Compiler@D3DXShader@@AAAXPAUProductTerm@2@@Z");
//};

//bool D3DXShader::ShouldOrderTermBefore(struct D3DXShader::ProductTerm *, struct D3DXShader::ProductTerm *)
//{
//    mangled_ppc("?ShouldOrderTermBefore@D3DXShader@@YA_NPAUProductTerm@1@0@Z");
//};

//bool D3DXShader::ShouldSwapOperands(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ShouldSwapOperands@D3DXShader@@YA_NPAVInstruction@1@0@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeResultPrecision(class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?ComputeResultPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@PAVInstruction@2@W4Component@2@@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(enum D3DXShader::ConstantValueType, enum D3DXShader::ConstantValueType)
//{
//    mangled_ppc("?ComputeBinaryOperatorPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@W432@0@Z");
//};

//int D3DXShader::SortLoopsByBenefit(void const *, void const *)
//{
//    mangled_ppc("?SortLoopsByBenefit@D3DXShader@@YAHPBX0@Z");
//};

//bool D3DXShader::ComputeInductionVariableStartValue(struct D3DXShader::InductionVariable *, bool, double, double *)
//{
//    mangled_ppc("?ComputeInductionVariableStartValue@D3DXShader@@YA_NPAUInductionVariable@1@_NNPAN@Z");
//};

//private: bool D3DXShader::Compiler::IsArrayLoadAndCanUseIndexRegister(struct D3DXShader::InductionVariable *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?IsArrayLoadAndCanUseIndexRegister@Compiler@D3DXShader@@AAA_NPAUInductionVariable@2@PAVInstruction@2@@Z");
//};

//public: bool D3DXShader::FixedSizeBitSet<unsigned int, 1>::Equals(class D3DXShader::FixedSizeBitSet<unsigned int, 1> *)
//{
//    mangled_ppc("?Equals@?$FixedSizeBitSet@I$00@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsRingStart(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::HasSamplerOperand(void)
//{
//    mangled_ppc("?HasSamplerOperand@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Instruction::GetSamplerOperandIndex(void)
//{
//    mangled_ppc("?GetSamplerOperandIndex@Instruction@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::GetSamplerOperand(void)
//{
//    mangled_ppc("?GetSamplerOperand@Instruction@D3DXShader@@QAAPAVDependency@2@XZ");
//};

//public: bool D3DXShader::Instruction::IsBooleanVariable(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?IsBooleanVariable@Instruction@D3DXShader@@QAA_NPAVCompiler@2@@Z");
//};

//public: struct D3DXShader::UnresolvedUAsmOptions * D3DXShader::Instruction::GetUnresolvedUAsmOptions(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetUnresolvedUAsmOptions@Instruction@D3DXShader@@QAAPAUUnresolvedUAsmOptions@2@PAVCompiler@2@@Z");
//};

//public: struct D3DXShader::Instruction_ARRAY * D3DXShader::Instruction::GetArrayInfo(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetArrayInfo@Instruction@D3DXShader@@QAAPAUInstruction_ARRAY@2@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Instruction::IsIntegerCast(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?IsIntegerCast@Instruction@D3DXShader@@QAA_NPAVCompiler@2@@Z");
//};

//public: void D3DXShader::Block::SetTwin(class D3DXShader::Block *)
//{
//    mangled_ppc("?SetTwin@Block@D3DXShader@@QAAXPAV12@@Z");
//};

//private: class D3DXShader::Block * D3DXShader::DomGraphBreadthFirstEnumerator::FindNextBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindNextBlock@DomGraphBreadthFirstEnumerator@D3DXShader@@AAAPAVBlock@2@PAV32@@Z");
//};

//public: class D3DXShader::Block * D3DXShader::DomGraphBreadthFirstEnumerator::GetNext(void)
//{
//    mangled_ppc("?GetNext@DomGraphBreadthFirstEnumerator@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_EXPORT(class D3DXShader::Block *)
//{
//    mangled_ppc("?MakeInstr_Q_ALLOC_EXPORT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(unsigned int, unsigned int)
//{
//    mangled_ppc("?ComputeBinaryOperatorPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@II@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeBinaryOperatorPrecision(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?ComputeBinaryOperatorPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@PAVInstruction@2@W4Component@2@01@Z");
//};

//private: void D3DXShader::Compiler::MergeBinaryProductTermPrecision(enum D3DXShader::ConstantValueType *, enum D3DXShader::ConstantValueType, enum D3DXShader::ConstantValueType)
//{
//    mangled_ppc("?MergeBinaryProductTermPrecision@Compiler@D3DXShader@@AAAXPAW4ConstantValueType@2@W432@1@Z");
//};

//public: bool D3DXShader::Compiler::SimplifyDependents(class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *)
//{
//    mangled_ppc("?SimplifyDependents@Compiler@D3DXShader@@QAA_NPAVInstruction@2@PAVDependency@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PA_N@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Instruction::FindNextSideEffectDependent(enum D3DXShader::SideEffect)
//{
//    mangled_ppc("?FindNextSideEffectDependent@Instruction@D3DXShader@@QAAPAVDependency@2@W4SideEffect@2@@Z");
//};

//public: void D3DXShader::Instruction::SetOperand(unsigned long, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?SetOperand@Instruction@D3DXShader@@QAAXKPAVDependency@2@@Z");
//};

//public: void D3DXShader::Instruction::AddArrayLengthConstraint(unsigned int, unsigned int, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?AddArrayLengthConstraint@Instruction@D3DXShader@@QAAXIIPAVCompiler@2@@Z");
//};

//public: double D3DXShader::Dependency::GetConstantValue(unsigned int)
//{
//    mangled_ppc("?GetConstantValue@Dependency@D3DXShader@@QAANI@Z");
//};

//public: bool D3DXShader::Dependency::IsAlwaysGEZero(unsigned int)
//{
//    mangled_ppc("?IsAlwaysGEZero@Dependency@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Dependency::IsAlwaysLEZero(unsigned int)
//{
//    mangled_ppc("?IsAlwaysLEZero@Dependency@D3DXShader@@QAA_NI@Z");
//};

//public: bool D3DXShader::Dependency::IsAlwaysInteger(unsigned int)
//{
//    mangled_ppc("?IsAlwaysInteger@Dependency@D3DXShader@@QAA_NI@Z");
//};

//public: void D3DXShader::Block::SetDead(class D3DXShader::Block *)
//{
//    mangled_ppc("?SetDead@Block@D3DXShader@@QAAXPAV12@@Z");
//};

//private: bool D3DXShader::Compiler::CompareUnresolvedUAsmOptions(struct D3DXShader::UnresolvedUAsmOptions *, struct D3DXShader::UnresolvedUAsmOptions *)
//{
//    mangled_ppc("?CompareUnresolvedUAsmOptions@Compiler@D3DXShader@@AAA_NPAUUnresolvedUAsmOptions@2@0@Z");
//};

//private: bool D3DXShader::Compiler::IsEquivalentLinkedDependency(class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?IsEquivalentLinkedDependency@Compiler@D3DXShader@@AAA_NPAVDependency@2@0@Z");
//};

//private: bool D3DXShader::Compiler::IsValidSamplerOperandDef(class D3DXShader::Instruction *, class D3DXShader::Instruction *, enum D3DXShader::Compiler::ResolveArrayReferencesStage)
//{
//    mangled_ppc("?IsValidSamplerOperandDef@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0W4ResolveArrayReferencesStage@12@@Z");
//};

//private: bool D3DXShader::Compiler::FindAddChainConstant(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction **, enum D3DXShader::Component *, unsigned int *)
//{
//    mangled_ppc("?FindAddChainConstant@Compiler@D3DXShader@@AAA_NPAVInstruction@2@W4Component@2@PAPAV32@PAW442@PAI@Z");
//};

//private: bool D3DXShader::Compiler::ComputesBooleanValue(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ComputesBooleanValue@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//private: bool D3DXShader::Compiler::CheckArrayLimitInLoop(class D3DXShader::Instruction *, struct D3DXShader::Constraint_ArrayLength *, struct D3DXShader::InductionVariable *)
//{
//    mangled_ppc("?CheckArrayLimitInLoop@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAUConstraint_ArrayLength@2@PAUInductionVariable@2@@Z");
//};

//private: enum D3DXShader::Compiler::ExamineLoopInvariantTestDisposition D3DXShader::Compiler::ExamineLoopInvariantTest(struct D3DXShader::InductionVariable *, bool, class D3DXShader::Dependency *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, enum D3DXShader::_D3DEXPR_OP, class D3DXShader::Dependency *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, struct D3DXShader::InvariantCondition **)
//{
//    mangled_ppc("?ExamineLoopInvariantTest@Compiler@D3DXShader@@AAA?AW4ExamineLoopInvariantTestDisposition@12@PAUInductionVariable@2@_NPAVDependency@2@PAVInstruction@2@W4Component@2@IW4_D3DEXPR_OP@2@234IPAPAUInvariantCondition@2@@Z");
//};

//private: enum D3DXShader::Compiler::ExamineLoopInvariantTestDisposition D3DXShader::Compiler::ExamineAndExpressionTerm(struct D3DXShader::InductionVariable *, bool, class D3DXShader::Dependency *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, struct D3DXShader::InvariantCondition **)
//{
//    mangled_ppc("?ExamineAndExpressionTerm@Compiler@D3DXShader@@AAA?AW4ExamineLoopInvariantTestDisposition@12@PAUInductionVariable@2@_NPAVDependency@2@PAVInstruction@2@W4Component@2@IPAPAUInvariantCondition@2@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::InsertPrev(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?InsertPrev@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@SAXPAVBlock@2@0@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//private: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::GetComponentDependency(class D3DXShader::Dependency *, enum D3DXShader::Component)
//{
//    mangled_ppc("?GetComponentDependency@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@W4Component@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::GetOperandComponentDependency(class D3DXShader::Instruction *, unsigned int, enum D3DXShader::Component)
//{
//    mangled_ppc("?GetOperandComponentDependency@Compiler@D3DXShader@@QAAPAVDependency@2@PAVInstruction@2@IW4Component@2@@Z");
//};

//public: class D3DXShader::Dependency * D3DXShader::Compiler::Negate(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?Negate@Compiler@D3DXShader@@QAAPAVDependency@2@PAV32@@Z");
//};

//public: void D3DXShader::Instruction::RemoveAllDependents(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?RemoveAllDependents@Instruction@D3DXShader@@QAAXPAVCompiler@2@@Z");
//};

//private: void D3DXShader::Compiler::CleanClonedDependencies(class D3DXShader::Block *, bool *)
//{
//    mangled_ppc("?CleanClonedDependencies@Compiler@D3DXShader@@AAAXPAVBlock@2@PA_N@Z");
//};

//private: void D3DXShader::Compiler::DisconnectPHIDependenciesThroughPath(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?DisconnectPHIDependenciesThroughPath@Compiler@D3DXShader@@AAAXPAVBlock@2@0@Z");
//};

//private: void D3DXShader::Compiler::DisconnectSuccessor(class D3DXShader::Block *, class D3DXShader::Block *)
//{
//    mangled_ppc("?DisconnectSuccessor@Compiler@D3DXShader@@AAAXPAVBlock@2@0@Z");
//};

//private: void D3DXShader::Compiler::RemoveVisitedBlocks(unsigned int)
//{
//    mangled_ppc("?RemoveVisitedBlocks@Compiler@D3DXShader@@AAAXI@Z");
//};

//private: bool D3DXShader::Compiler::IsControlledByDynamicBranch(class D3DXShader::Block *)
//{
//    mangled_ppc("?IsControlledByDynamicBranch@Compiler@D3DXShader@@AAA_NPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::VisitBlocksWithMarkedInstructions(unsigned int)
//{
//    mangled_ppc("?VisitBlocksWithMarkedInstructions@Compiler@D3DXShader@@AAAXI@Z");
//};

//private: void D3DXShader::Compiler::MarkReachableBlocks(bool)
//{
//    mangled_ppc("?MarkReachableBlocks@Compiler@D3DXShader@@AAAX_N@Z");
//};

//private: void D3DXShader::Compiler::VisitReachableBlocks(unsigned int, bool)
//{
//    mangled_ppc("?VisitReachableBlocks@Compiler@D3DXShader@@AAAXI_N@Z");
//};

//private: void D3DXShader::Compiler::CloneDependenciesInList(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, unsigned int, bool)
//{
//    mangled_ppc("?CloneDependenciesInList@Compiler@D3DXShader@@AAAXPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@I_N@Z");
//};

//private: void D3DXShader::Compiler::CleanClonedBlocksWithMarkedInstructions(unsigned int, class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanClonedBlocksWithMarkedInstructions@Compiler@D3DXShader@@AAAXIPAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::LinkIdenticalInstructions(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?LinkIdenticalInstructions@Compiler@D3DXShader@@AAA_NPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@0@Z");
//};

//private: bool D3DXShader::Compiler::CanShiftOperands(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanShiftOperands@Compiler@D3DXShader@@AAA_NPAVInstruction@2@W4Component@2@I01I0@Z");
//};

//private: void D3DXShader::Compiler::SimplifyCastDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *)
//{
//    mangled_ppc("?SimplifyCastDependents@Compiler@D3DXShader@@AAAXPAVInstruction@2@0IIPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PA_N@Z");
//};

//private: void D3DXShader::Compiler::CheckArrayLimitInLoop(class D3DXShader::Instruction *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *)
//{
//    mangled_ppc("?CheckArrayLimitInLoop@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAULoop@2@PAUInductionVariable@2@@Z");
//};

//private: struct D3DXShader::ArrayElementLoad * D3DXShader::Compiler::DecodeArrayLoad(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::ArrayLoad *)
//{
//    mangled_ppc("?DecodeArrayLoad@Compiler@D3DXShader@@AAAPAUArrayElementLoad@2@PAVInstruction@2@0PAUArrayLoad@2@@Z");
//};

//private: enum D3DXShader::ErrorCode D3DXShader::Compiler::ResolveUAsmOptions(class D3DXShader::Instruction *, struct D3DXShader::UnresolvedUAsmOptions *, class D3DXShader::CNodeList **)
//{
//    mangled_ppc("?ResolveUAsmOptions@Compiler@D3DXShader@@AAA?AW4ErrorCode@2@PAVInstruction@2@PAUUnresolvedUAsmOptions@2@PAPAVCNodeList@2@@Z");
//};

//private: enum D3DXShader::ErrorCode D3DXShader::Compiler::ResolveInternalTextureUAsmOptions(class D3DXShader::Instruction *, struct D3DXShader::Instruction_TFETCH *)
//{
//    mangled_ppc("?ResolveInternalTextureUAsmOptions@Compiler@D3DXShader@@AAA?AW4ErrorCode@2@PAVInstruction@2@PAUInstruction_TFETCH@2@@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SetBit(unsigned int)
//{
//    mangled_ppc("?SetBit@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::ClearBit(unsigned int)
//{
//    mangled_ppc("?ClearBit@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXI@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::AddToTail(class D3DXShader::Block *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: static void D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::InsertNext(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *)
//{
//    mangled_ppc("?InsertNext@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@SAXPAVBlock@2@PAV12@@Z");
//};

//public: struct D3DXShader::ProductTerm * D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUProductTerm@2@XZ");
//};

//public: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> ** D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::UniqueProductTerm * D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUUniqueProductTerm@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::AddToTail(class D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0> *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: static struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetPrev(struct D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: void D3DXShader::Block::MoveSideEffects(enum D3DXShader::SideEffect, class D3DXShader::Block *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?MoveSideEffects@Block@D3DXShader@@QAAXW4SideEffect@2@PAV12@PAVCompiler@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_SETGT(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FRACT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_FRACT@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_TRUNC(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_TRUNC@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_FLOOR(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_FLOOR@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@11@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGT@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@11@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_KILLE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_KILLE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_LOG_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_LOG_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_RECIP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIPSQRT_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_RECIPSQRT_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_MAXA(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_MAXA@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETNE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETNE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETGT@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_PRED_SETGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_PRED_SETGE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_S_SQRT_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_COND_JUMP(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_Q_COND_JUMP@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1PAVDependency@2@2@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_EXP_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_EXP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_RECIP_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_RECIP_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_S_SQRT_IEEE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_S_SQRT_IEEE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@12@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@11@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MUL(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_MUL@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@11@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MULADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MULADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@11PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT3(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_DOT3@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@11@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_DOT2ADD(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_DOT2ADD@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@11PAVDependency@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@21@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@21@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDGT(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_CNDGT@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@21@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@1PAVDependency@2@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Dependency *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@PAVDependency@2@11@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_CNDE(enum D3DXShader::Compiler::PlacementMethod, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_CNDE@Compiler@D3DXShader@@QAAPAVInstruction@2@W4PlacementMethod@12@PAV32@111@Z");
//};

//public: bool D3DXShader::Instruction::SupportsInputDef_BeforeCleanPhase(class D3DXShader::Instruction *, class D3DXShader::Compiler *)
//{
//    mangled_ppc("?SupportsInputDef_BeforeCleanPhase@Instruction@D3DXShader@@QAA_NPAV12@PAVCompiler@2@@Z");
//};

//private: void D3DXShader::Compiler::PrepareASMBlocks(void)
//{
//    mangled_ppc("?PrepareASMBlocks@Compiler@D3DXShader@@AAAXXZ");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GenerateDiagnosticExportIndex(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GenerateDiagnosticExportIndex@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::GenerateDebugPrintEpilogue(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?GenerateDebugPrintEpilogue@Compiler@D3DXShader@@AAAXPAVBlock@2@0PAVInstruction@2@111@Z");
//};

//private: void D3DXShader::Compiler::SplitInput(unsigned int, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?SplitInput@Compiler@D3DXShader@@AAAXIPAVInstruction@2@I@Z");
//};

//private: void D3DXShader::Compiler::CombineInputs(unsigned int, class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CombineInputs@Compiler@D3DXShader@@AAAXIPAVInstruction@2@II0@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveMERGEOperand(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?RemoveMERGEOperand@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@IIPAI@Z");
//};

//private: void D3DXShader::Compiler::MarkMustInlineCall(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkMustInlineCall@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::CheckSubroutinePHIs(void)
//{
//    mangled_ppc("?CheckSubroutinePHIs@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::CloneVisitedBlocks(class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int)
//{
//    mangled_ppc("?CloneVisitedBlocks@Compiler@D3DXShader@@AAAXPAV?$DoubleLinkList@VBlock@D3DXShader@@$0A@@2@I@Z");
//};

//private: unsigned long D3DXShader::Compiler::CloneInstructionsInList(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, bool)
//{
//    mangled_ppc("?CloneInstructionsInList@Compiler@D3DXShader@@AAAKPAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@1_N@Z");
//};

//private: void D3DXShader::Compiler::CleanBlocksWorker(unsigned int, bool *, class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanBlocksWorker@Compiler@D3DXShader@@AAAXIPA_NPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::ResolveArrayReferences(enum D3DXShader::Compiler::ResolveArrayReferencesStage)
//{
//    mangled_ppc("?ResolveArrayReferences@Compiler@D3DXShader@@AAAXW4ResolveArrayReferencesStage@12@@Z");
//};

//private: void D3DXShader::Compiler::MarkLoopBlock(class D3DXShader::Block *, unsigned int)
//{
//    mangled_ppc("?MarkLoopBlock@Compiler@D3DXShader@@AAAXPAVBlock@2@I@Z");
//};

//private: bool D3DXShader::Compiler::IsLoopBlockMarked(class D3DXShader::Block *, unsigned int)
//{
//    mangled_ppc("?IsLoopBlockMarked@Compiler@D3DXShader@@AAA_NPAVBlock@2@I@Z");
//};

//private: void D3DXShader::Compiler::RebuildLoopExitList(struct D3DXShader::Loop *)
//{
//    mangled_ppc("?RebuildLoopExitList@Compiler@D3DXShader@@AAAXPAULoop@2@@Z");
//};

//private: void D3DXShader::Compiler::AddLoopEndInstructionForUnnaturalLoopExit(class D3DXShader::Block *, class D3DXShader::Instruction *, struct D3DXShader::Loop *)
//{
//    mangled_ppc("?AddLoopEndInstructionForUnnaturalLoopExit@Compiler@D3DXShader@@AAAXPAVBlock@2@PAVInstruction@2@PAULoop@2@@Z");
//};

//private: void D3DXShader::Compiler::CheckMAXAArrayLimitInLoop(class D3DXShader::Instruction *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *)
//{
//    mangled_ppc("?CheckMAXAArrayLimitInLoop@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAULoop@2@PAUInductionVariable@2@@Z");
//};

//private: void D3DXShader::Compiler::FindArrayLoadInstructions(class D3DXShader::Instruction *, class D3DXShader::Instruction *, struct D3DXShader::InductionVariable *)
//{
//    mangled_ppc("?FindArrayLoadInstructions@Compiler@D3DXShader@@AAAXPAVInstruction@2@0PAUInductionVariable@2@@Z");
//};

//private: void D3DXShader::Compiler::CreatePreHeader(struct D3DXShader::Loop *)
//{
//    mangled_ppc("?CreatePreHeader@Compiler@D3DXShader@@AAAXPAULoop@2@@Z");
//};

//private: void D3DXShader::Compiler::EnsureLoopHasFooter(struct D3DXShader::Loop *)
//{
//    mangled_ppc("?EnsureLoopHasFooter@Compiler@D3DXShader@@AAAXPAULoop@2@@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2>::ReplaceField(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReplaceField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::PeekFirst(void)
//{
//    mangled_ppc("?PeekFirst@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUProductTerm@2@XZ");
//};

//public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::PeekSecond(void)
//{
//    mangled_ppc("?PeekSecond@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUProductTerm@2@XZ");
//};

//public: struct D3DXShader::ProductTerm D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA?AUProductTerm@2@XZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::HasOneItem(void)
//{
//    mangled_ppc("?HasOneItem@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::HasTwoItems(void)
//{
//    mangled_ppc("?HasTwoItems@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Contains(struct D3DXShader::ProductTerm)
//{
//    mangled_ppc("?Contains@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NUProductTerm@2@@Z");
//};

//public: unsigned int D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Find(struct D3DXShader::ProductTerm)
//{
//    mangled_ppc("?Find@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIUProductTerm@2@@Z");
//};

//public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Get(unsigned int)
//{
//    mangled_ppc("?Get@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUProductTerm@2@I@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Remove(struct D3DXShader::ProductTerm)
//{
//    mangled_ppc("?Remove@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUProductTerm@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::MoveElementsFrom(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?MoveElementsFrom@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAV12@@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> ** D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::PeekFirst(void)
//{
//    mangled_ppc("?PeekFirst@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> * D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: unsigned int D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::CountItems(void)
//{
//    mangled_ppc("?CountItems@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::Remove(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?Remove@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::UniqueProductTerm * D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::Get(unsigned int)
//{
//    mangled_ppc("?Get@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUUniqueProductTerm@2@I@Z");
//};

//public: class D3DXShader::Block ** D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::PeekLast(void)
//{
//    mangled_ppc("?PeekLast@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVBlock@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::RemoveAll(void)
//{
//    mangled_ppc("?RemoveAll@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GoToEnd(void)
//{
//    mangled_ppc("?GoToEnd@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::AtBeginning(void)
//{
//    mangled_ppc("?AtBeginning@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Block ** D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetPrev(void)
//{
//    mangled_ppc("?GetPrev@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVBlock@2@XZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: struct D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: void D3DXShader::Compiler::CleanClonedBlocks(unsigned int, bool *)
//{
//    mangled_ppc("?CleanClonedBlocks@Compiler@D3DXShader@@AAAXIPA_N@Z");
//};

//private: void D3DXShader::Compiler::CleanGraftedBlocks(class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanGraftedBlocks@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::PrepareDiagnosticBlocks(void)
//{
//    mangled_ppc("?PrepareDiagnosticBlocks@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::RecombineInputSemantics(unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?RecombineInputSemantics@Compiler@D3DXShader@@AAAXIIII@Z");
//};

//private: void D3DXShader::Compiler::MarkMustInlineCallSite(class D3DXShader::Block *)
//{
//    mangled_ppc("?MarkMustInlineCallSite@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::CloneCodeInBlocks(class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int, bool)
//{
//    mangled_ppc("?CloneCodeInBlocks@Compiler@D3DXShader@@AAAKPAV?$DoubleLinkList@VBlock@D3DXShader@@$0A@@2@I_N@Z");
//};

//private: void D3DXShader::Compiler::FreeUniqueTermList(class D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?FreeUniqueTermList@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::IsConstantProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?IsConstantProductTermList@Compiler@D3DXShader@@AAA_NPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: static enum D3DXShader::ConstantValueType D3DXShader::Compiler::ComputeDotProductPrecision(class D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 2> *const, unsigned int)
//{
//    mangled_ppc("?ComputeDotProductPrecision@Compiler@D3DXShader@@SA?AW4ConstantValueType@2@QAV?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$01@2@I@Z");
//};

//private: void D3DXShader::Compiler::ExaminePossibleLoopArrayAccess(class D3DXShader::Instruction *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *)
//{
//    mangled_ppc("?ExaminePossibleLoopArrayAccess@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAULoop@2@PAUInductionVariable@2@@Z");
//};

//private: void D3DXShader::Compiler::ResolveIntegerOperations(void)
//{
//    mangled_ppc("?ResolveIntegerOperations@Compiler@D3DXShader@@AAAXXZ");
//};

//public: class D3DXShader::Block ** D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Peek(void)
//{
//    mangled_ppc("?Peek@?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVBlock@2@XZ");
//};

//public: void D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::PopAll(void)
//{
//    mangled_ppc("?PopAll@?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::IsAtBottom(void)
//{
//    mangled_ppc("?IsAtBottom@?$StackEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GoToTop(void)
//{
//    mangled_ppc("?GoToTop@?$StackEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Block ** D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetNextLower(void)
//{
//    mangled_ppc("?GetNextLower@?$StackEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAPAVBlock@2@XZ");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::ArrayListEnumerator<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: D3DXShader::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::ArrayListEnumerator<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::ArrayListEnumerator<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: D3DXShader::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>(class D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//private: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUProductTerm@2@I@Z");
//};

//private: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> ** D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@I@Z");
//};

//private: struct D3DXShader::UniqueProductTerm * D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUUniqueProductTerm@2@I@Z");
//};

//private: void D3DXShader::Compiler::CloneMarkedCodeInBlocks(class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int)
//{
//    mangled_ppc("?CloneMarkedCodeInBlocks@Compiler@D3DXShader@@AAAXPAV?$DoubleLinkList@VBlock@D3DXShader@@$0A@@2@I@Z");
//};

//private: void D3DXShader::Compiler::PrepareTessellatorInputs(void)
//{
//    mangled_ppc("?PrepareTessellatorInputs@Compiler@D3DXShader@@AAAXXZ");
//};

//private: bool D3DXShader::Compiler::PropagateConstants(void)
//{
//    mangled_ppc("?PropagateConstants@Compiler@D3DXShader@@AAA_NXZ");
//};

//private: void D3DXShader::Compiler::CloneBlocksWithMarkedInstructions(class D3DXShader::Block *, bool, bool, class D3DXShader::DoubleLinkList<class D3DXShader::Block, 0> *, unsigned int *, class D3DXShader::Block **)
//{
//    mangled_ppc("?CloneBlocksWithMarkedInstructions@Compiler@D3DXShader@@AAAXPAVBlock@2@_N1PAV?$DoubleLinkList@VBlock@D3DXShader@@$0A@@2@PAIPAPAV32@@Z");
//};

//private: void D3DXShader::Compiler::PrintProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, struct D3DXShader::ProductTerm *)
//{
//    mangled_ppc("?PrintProductTermList@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAUProductTerm@2@@Z");
//};

//private: void D3DXShader::Compiler::PrintSumOfProducts(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, struct D3DXShader::ProductTerm *)
//{
//    mangled_ppc("?PrintSumOfProducts@Compiler@D3DXShader@@AAAXPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAUProductTerm@2@@Z");
//};

//private: bool D3DXShader::Compiler::IsInverseProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?IsInverseProductTermList@Compiler@D3DXShader@@AAA_NPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@0@Z");
//};

//private: bool D3DXShader::Compiler::AreProductTermListsIdentical_ExceptionInList2(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, struct D3DXShader::ProductTerm *)
//{
//    mangled_ppc("?AreProductTermListsIdentical_ExceptionInList2@Compiler@D3DXShader@@AAA_NPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@0PAUProductTerm@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::ComputeExpressionCost(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *)
//{
//    mangled_ppc("?ComputeExpressionCost@Compiler@D3DXShader@@AAAIPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::IsSumOfSquares(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *)
//{
//    mangled_ppc("?IsSumOfSquares@Compiler@D3DXShader@@AAA_NPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: D3DXShader::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::StackEnumerator<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>(class D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)> *)
//{
//    mangled_ppc("??0?$StackEnumerator@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Append(struct D3DXShader::ProductTerm)
//{
//    mangled_ppc("?Append@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUProductTerm@2@@Z");
//};

//public: struct D3DXShader::ProductTerm * D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)>::Append(void)
//{
//    mangled_ppc("?Append@?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAUProductTerm@2@XZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)>::Append(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)>::Append(struct D3DXShader::UniqueProductTerm)
//{
//    mangled_ppc("?Append@?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXUUniqueProductTerm@2@@Z");
//};

//private: bool D3DXShader::Compiler::AreProductTermListsIdentical(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?AreProductTermListsIdentical@Compiler@D3DXShader@@AAA_NPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@0@Z");
//};

//private: void D3DXShader::Compiler::AppendProductTerm(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::ConstantValueType *)
//{
//    mangled_ppc("?AppendProductTerm@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVDependency@2@W4Component@2@PAVInstruction@2@PAW4ConstantValueType@2@@Z");
//};

//private: void D3DXShader::Compiler::AppendProductTermsFromBinaryOperator(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::ConstantValueType *)
//{
//    mangled_ppc("?AppendProductTermsFromBinaryOperator@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVInstruction@2@W4Component@2@1PAW4ConstantValueType@2@@Z");
//};

//private: void D3DXShader::Compiler::HandleSumOperand(class D3DXShader::Instruction *, unsigned int, enum D3DXShader::Component, class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, enum D3DXShader::ConstantValueType *)
//{
//    mangled_ppc("?HandleSumOperand@Compiler@D3DXShader@@AAAXPAVInstruction@2@IW4Component@2@PAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAW4ConstantValueType@2@@Z");
//};

//private: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> * D3DXShader::Compiler::BuildProductTermList(class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?BuildProductTermList@Compiler@D3DXShader@@AAAPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVDependency@2@W4Component@2@PAVInstruction@2@@Z");
//};

//private: class D3DXShader::ArrayList<struct D3DXShader::UniqueProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::UniqueProductTerm, struct D3DXShader::UniqueProductTerm, unsigned long)> * D3DXShader::Compiler::FindUniqueSumOfProductsTerms(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *)
//{
//    mangled_ppc("?FindUniqueSumOfProductsTerms@Compiler@D3DXShader@@AAAPAV?$ArrayList@UUniqueProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::SortProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?SortProductTermList@Compiler@D3DXShader@@AAAXPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> * D3DXShader::Compiler::CloneProductTermList(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *)
//{
//    mangled_ppc("?CloneProductTermList@Compiler@D3DXShader@@AAAPAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::MarkForSimplify(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkForSimplify@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkDependentsForSimplify(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?MarkDependentsForSimplify@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::RemoveUnusedComponentsWorker(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool)
//{
//    mangled_ppc("?RemoveUnusedComponentsWorker@Compiler@D3DXShader@@AAAXPAVInstruction@2@IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@_N@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::RemoveUnusedMERGEComponents(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?RemoveUnusedMERGEComponents@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::RemoveIdenticalDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *)
//{
//    mangled_ppc("?RemoveIdenticalDependents@Compiler@D3DXShader@@AAA_NPAVInstruction@2@0PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PA_N@Z");
//};

//private: bool D3DXShader::Compiler::MergeBlocks(class D3DXShader::Block *, class D3DXShader::Block *, bool)
//{
//    mangled_ppc("?MergeBlocks@Compiler@D3DXShader@@AAA_NPAVBlock@2@0_N@Z");
//};

//private: bool D3DXShader::Compiler::MarkMustInlineCallIfDynamic(class D3DXShader::Instruction *, class D3DXShader::Block *)
//{
//    mangled_ppc("?MarkMustInlineCallIfDynamic@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::MarkMustInlineCallsForInstruction(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkMustInlineCallsForInstruction@Compiler@D3DXShader@@AAA_NPAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::InlineReplaceCallSite(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *, class D3DXShader::Block *, unsigned int)
//{
//    mangled_ppc("?InlineReplaceCallSite@Compiler@D3DXShader@@AAAXPAVBlock@2@0PAVInstruction@2@0I@Z");
//};

//private: void D3DXShader::Compiler::FreeSumList(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?FreeSumList@Compiler@D3DXShader@@AAAXPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::GenerateProduct(class D3DXShader::Instruction *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, struct D3DXShader::ProductTerm *, class D3DXShader::Dependency **, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?GenerateProduct@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAUProductTerm@2@PAPAVDependency@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::SimplifyTerms(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?SimplifyTerms@Compiler@D3DXShader@@AAA_NPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVInstruction@2@@Z");
//};

//private: unsigned int D3DXShader::Compiler::ComputeSavingsIfFactored(class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> *, struct D3DXShader::ProductTerm *, class D3DXShader::Instruction *, class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> **)
//{
//    mangled_ppc("?ComputeSavingsIfFactored@Compiler@D3DXShader@@AAAIPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAUProductTerm@2@PAVInstruction@2@PAPAV32@@Z");
//};

//private: void D3DXShader::Compiler::TransferDependentModifiersToInputs(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?TransferDependentModifiersToInputs@Compiler@D3DXShader@@AAAXPAVInstruction@2@IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::SetConstraintFlagsAndUpdateResultBounds(class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?SetConstraintFlagsAndUpdateResultBounds@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::SimplifyComponentDependents(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *, bool *)
//{
//    mangled_ppc("?SimplifyComponentDependents@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@01IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PA_N@Z");
//};

//private: void D3DXShader::Compiler::ReplaceOperandComponent(class D3DXShader::Instruction *, class D3DXShader::Dependency *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int)
//{
//    mangled_ppc("?ReplaceOperandComponent@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAVDependency@2@W4Component@2@02I@Z");
//};

//private: void D3DXShader::Compiler::MarkLoopBlocks(class D3DXShader::Block *, unsigned int)
//{
//    mangled_ppc("?MarkLoopBlocks@Compiler@D3DXShader@@AAAXPAVBlock@2@I@Z");
//};

//private: void D3DXShader::Compiler::FindPossibleLoopArrayAccesses(class D3DXShader::Instruction *, class D3DXShader::Dependency *, struct D3DXShader::Loop *, struct D3DXShader::InductionVariable *)
//{
//    mangled_ppc("?FindPossibleLoopArrayAccesses@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAVDependency@2@PAULoop@2@PAUInductionVariable@2@@Z");
//};

//private: void D3DXShader::Compiler::RemoveUnusedComponents(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?RemoveUnusedComponents@Compiler@D3DXShader@@AAAXPAVInstruction@2@IPAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: bool D3DXShader::Compiler::RemoveBlockIfUseless(class D3DXShader::Block *)
//{
//    mangled_ppc("?RemoveBlockIfUseless@Compiler@D3DXShader@@AAA_NPAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::CheckInliningRequirements(void)
//{
//    mangled_ppc("?CheckInliningRequirements@Compiler@D3DXShader@@AAA_NXZ");
//};

//private: void D3DXShader::Compiler::InlineCopy(class D3DXShader::Block *, class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?InlineCopy@Compiler@D3DXShader@@AAAXPAVBlock@2@0PAVInstruction@2@@Z");
//};

//private: class D3DXShader::ArrayList<class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, class D3DXShader::ArrayList<struct D3DXShader::ProductTerm, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::ProductTerm, struct D3DXShader::ProductTerm, unsigned long)> *, unsigned long)> * D3DXShader::Compiler::FindSumOfProducts(class D3DXShader::Instruction *, enum D3DXShader::Component)
//{
//    mangled_ppc("?FindSumOfProducts@Compiler@D3DXShader@@AAAPAV?$ArrayList@PAV?$ArrayList@UProductTerm@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAVInstruction@2@W4Component@2@@Z");
//};

//private: void D3DXShader::Compiler::CanonicalizeDependencyGraph(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CanonicalizeDependencyGraph@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//private: bool D3DXShader::Compiler::Simplify_MUL(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, struct D3DXShader::SimplifyMULState *, bool *)
//{
//    mangled_ppc("?Simplify_MUL@Compiler@D3DXShader@@AAA_NPAVInstruction@2@W4Component@2@01I01IPAUSimplifyMULState@2@PA_N@Z");
//};

//private: void D3DXShader::Compiler::ExtractAddChainConstant(class D3DXShader::Instruction *, enum D3DXShader::Component, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, bool *)
//{
//    mangled_ppc("?ExtractAddChainConstant@Compiler@D3DXShader@@AAAXPAVInstruction@2@W4Component@2@01IPA_N@Z");
//};

//private: bool D3DXShader::Compiler::Simplify(class D3DXShader::Instruction *, bool *)
//{
//    mangled_ppc("?Simplify@Compiler@D3DXShader@@AAA_NPAVInstruction@2@PA_N@Z");
//};

//private: bool D3DXShader::Compiler::RemoveDeadCode(bool)
//{
//    mangled_ppc("?RemoveDeadCode@Compiler@D3DXShader@@AAA_N_N@Z");
//};

//private: void D3DXShader::Compiler::BuildDepthFirstOrdering(void)
//{
//    mangled_ppc("?BuildDepthFirstOrdering@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::Inlining(void)
//{
//    mangled_ppc("?Inlining@Compiler@D3DXShader@@AAAXXZ");
//};

//private: bool D3DXShader::Compiler::SimplifyDependencyGraph(void)
//{
//    mangled_ppc("?SimplifyDependencyGraph@Compiler@D3DXShader@@AAA_NXZ");
//};

//private: bool D3DXShader::Compiler::SimplifyBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?SimplifyBlock@Compiler@D3DXShader@@AAA_NPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::ForceExpressionOptimizations(class D3DXShader::Block *)
//{
//    mangled_ppc("?ForceExpressionOptimizations@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: bool D3DXShader::Compiler::UnrollLoop(struct D3DXShader::Loop *)
//{
//    mangled_ppc("?UnrollLoop@Compiler@D3DXShader@@AAA_NPAULoop@2@@Z");
//};

//private: void D3DXShader::Compiler::ResolveInvalidInstructions(void)
//{
//    mangled_ppc("?ResolveInvalidInstructions@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::EvaluateCompileTimeAssertions(void)
//{
//    mangled_ppc("?EvaluateCompileTimeAssertions@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::CheckForCompileTimeAssertions(bool)
//{
//    mangled_ppc("?CheckForCompileTimeAssertions@Compiler@D3DXShader@@AAAX_N@Z");
//};

//private: void D3DXShader::Compiler::RelocateAssertBlocks(void)
//{
//    mangled_ppc("?RelocateAssertBlocks@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::IsolateOutputs(void)
//{
//    mangled_ppc("?IsolateOutputs@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::OptimizeLoops(void)
//{
//    mangled_ppc("?OptimizeLoops@Compiler@D3DXShader@@AAAXXZ");
//};

//private: void D3DXShader::Compiler::Optimize(void)
//{
//    mangled_ppc("?Optimize@Compiler@D3DXShader@@AAAXXZ");
//};

