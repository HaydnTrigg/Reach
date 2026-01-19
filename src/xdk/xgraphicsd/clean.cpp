/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void D3DXShader::Instruction::RecomputeNumDefComponents(void);
// public: bool D3DXShader::Instruction::IsMISSING_DEF(void);
// public: void D3DXShader::Instruction::ClearHasGlobalUses(void);
// public: void D3DXShader::Dependency::FindDef(class D3DXShader::Instruction **, unsigned int *, unsigned int *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_POSITION(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_INTERPOLATORS(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_COLORS(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_MARK_VS_FETCH_DONE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: class D3DXShader::Block * D3DXShader::Compiler::FindAllocBlock(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::ComputeMERGEWriteMask(class D3DXShader::Instruction *);
// public: bool D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::IsEmpty(void);
// public: void D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::Push(struct D3DXShader::SolutionState);
// public: struct D3DXShader::SolutionState D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::Pop(void);
// public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::ShiftBitsDown(unsigned int);
// public: void D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::Init(void);
// private: class D3DXShader::Dependency * D3DXShader::Compiler::CollectComponentsNeeded(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::FindPHIInBlock(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, bool);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 5>::ClearAll(void);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::ShiftFieldsDown(unsigned int);
// public: D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::FixedStack<struct D3DXShader::SolutionState, 24>(void);
// private: unsigned int D3DXShader::Compiler::CopyMERGEOperands(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::RewriteMERGEDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsurePHIInBlock(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, bool);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsurePHIInBlock_BeforeCleanPhase(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int);
// private: void D3DXShader::Compiler::MarkGlobalDef(class D3DXShader::Instruction *);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::IncAlignedBitMask(unsigned int, unsigned int, unsigned int);
// public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SubtractBitMask(unsigned int, unsigned int, unsigned int);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *);
// public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Instruction *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::AddAutomaticPositionExport(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int);
// private: class D3DXShader::Block * D3DXShader::Compiler::FindOrCreateAllocs(class D3DXShader::Block *, class D3DXShader::Instruction **, class D3DXShader::Instruction **);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::ExpandMerge(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::ReplaceOperands(class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Instruction *, unsigned int);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::BreakCrossBlockDependency(class D3DXShader::Dependency *, bool);
// private: void D3DXShader::Compiler::BreakCrossBlockDependency_BeforeCleanPhase(class D3DXShader::Dependency *);
// private: void D3DXShader::Compiler::MarkGlobalDef_PropagateThroughMERGE(class D3DXShader::Instruction *);
// public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 5>::GetField(unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 5>::SetField(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::SubtractBitFromField(unsigned int, unsigned int);
// public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::IncField(unsigned int);
// private: bool D3DXShader::Compiler::EjectConstantOperand(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Dependency *);
// private: bool D3DXShader::Compiler::CheckMerge(class D3DXShader::Block *, class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::CleanInBlock(class D3DXShader::Block *);
// private: void D3DXShader::Compiler::Clean(void);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::UpdateOutputComponentCount(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);
// private: void D3DXShader::Compiler::Reclean(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *);

//public: void D3DXShader::Instruction::RecomputeNumDefComponents(void)
//{
//    mangled_ppc("?RecomputeNumDefComponents@Instruction@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Instruction::IsMISSING_DEF(void)
//{
//    mangled_ppc("?IsMISSING_DEF@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Instruction::ClearHasGlobalUses(void)
//{
//    mangled_ppc("?ClearHasGlobalUses@Instruction@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::Dependency::FindDef(class D3DXShader::Instruction **, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindDef@Dependency@D3DXShader@@QAAXPAPAVInstruction@2@PAI1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_POSITION(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_ALLOC_POSITION@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_INTERPOLATORS(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_ALLOC_INTERPOLATORS@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_ALLOC_COLORS(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_ALLOC_COLORS@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_Q_MARK_VS_FETCH_DONE(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?MakeInstr_Q_MARK_VS_FETCH_DONE@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::FindAllocBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?FindAllocBlock@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::ComputeMERGEWriteMask(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ComputeMERGEWriteMask@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//public: bool D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$FixedStack@USolutionState@D3DXShader@@$0BI@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::Push(struct D3DXShader::SolutionState)
//{
//    mangled_ppc("?Push@?$FixedStack@USolutionState@D3DXShader@@$0BI@@D3DXShader@@QAAXUSolutionState@2@@Z");
//};

//public: struct D3DXShader::SolutionState D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::Pop(void)
//{
//    mangled_ppc("?Pop@?$FixedStack@USolutionState@D3DXShader@@$0BI@@D3DXShader@@QAA?AUSolutionState@2@XZ");
//};

//public: unsigned int D3DXShader::FixedSizeBitSet<unsigned int, 1>::ShiftBitsDown(unsigned int)
//{
//    mangled_ppc("?ShiftBitsDown@?$FixedSizeBitSet@I$00@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::Init(void)
//{
//    mangled_ppc("?Init@?$FixedStack@USolutionState@D3DXShader@@$0BI@@D3DXShader@@QAAXXZ");
//};

//private: class D3DXShader::Dependency * D3DXShader::Compiler::CollectComponentsNeeded(class D3DXShader::Instruction *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CollectComponentsNeeded@Compiler@D3DXShader@@AAAPAVDependency@2@PAVInstruction@2@III@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::FindPHIInBlock(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, bool)
//{
//    mangled_ppc("?FindPHIInBlock@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@W4Component@2@I_N@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 5>::ClearAll(void)
//{
//    mangled_ppc("?ClearAll@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$04@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::ShiftFieldsDown(unsigned int)
//{
//    mangled_ppc("?ShiftFieldsDown@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAII@Z");
//};

//public: D3DXShader::FixedStack<struct D3DXShader::SolutionState, 24>::FixedStack<struct D3DXShader::SolutionState, 24>(void)
//{
//    mangled_ppc("??0?$FixedStack@USolutionState@D3DXShader@@$0BI@@D3DXShader@@QAA@XZ");
//};

//private: unsigned int D3DXShader::Compiler::CopyMERGEOperands(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CopyMERGEOperands@Compiler@D3DXShader@@AAAIPAVInstruction@2@I0@Z");
//};

//private: void D3DXShader::Compiler::RewriteMERGEDependents(class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?RewriteMERGEDependents@Compiler@D3DXShader@@AAAXPAVInstruction@2@0@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsurePHIInBlock(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int, bool)
//{
//    mangled_ppc("?EnsurePHIInBlock@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@W4Component@2@I_N@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::EnsurePHIInBlock_BeforeCleanPhase(class D3DXShader::Block *, class D3DXShader::Instruction *, enum D3DXShader::Component, unsigned int)
//{
//    mangled_ppc("?EnsurePHIInBlock_BeforeCleanPhase@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@PAV32@W4Component@2@I@Z");
//};

//private: void D3DXShader::Compiler::MarkGlobalDef(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkGlobalDef@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::IncAlignedBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?IncAlignedBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: void D3DXShader::FixedSizeBitSet<unsigned int, 1>::SubtractBitMask(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SubtractBitMask@?$FixedSizeBitSet@I$00@D3DXShader@@QAAXIII@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Block *, class D3DXShader::Dependency *, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAVDependency@2@1@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Compiler::MakeInstr_V_MAX(class D3DXShader::Block *, class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *, class D3DXShader::Instruction *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MakeInstr_V_MAX@Compiler@D3DXShader@@QAAPAVInstruction@2@PAVBlock@2@PAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@PAV32@2@Z");
//};

//private: void D3DXShader::Compiler::AddAutomaticPositionExport(class D3DXShader::Block *, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?AddAutomaticPositionExport@Compiler@D3DXShader@@AAAXPAVBlock@2@PAVInstruction@2@I@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::FindOrCreateAllocs(class D3DXShader::Block *, class D3DXShader::Instruction **, class D3DXShader::Instruction **)
//{
//    mangled_ppc("?FindOrCreateAllocs@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@PAPAVInstruction@2@1@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::ExpandMerge(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ExpandMerge@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@@Z");
//};

//private: void D3DXShader::Compiler::ReplaceOperands(class D3DXShader::Instruction *, unsigned int, unsigned int, class D3DXShader::Instruction *, unsigned int)
//{
//    mangled_ppc("?ReplaceOperands@Compiler@D3DXShader@@AAAXPAVInstruction@2@II0I@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::BreakCrossBlockDependency(class D3DXShader::Dependency *, bool)
//{
//    mangled_ppc("?BreakCrossBlockDependency@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVDependency@2@_N@Z");
//};

//private: void D3DXShader::Compiler::BreakCrossBlockDependency_BeforeCleanPhase(class D3DXShader::Dependency *)
//{
//    mangled_ppc("?BreakCrossBlockDependency_BeforeCleanPhase@Compiler@D3DXShader@@AAAXPAVDependency@2@@Z");
//};

//private: void D3DXShader::Compiler::MarkGlobalDef_PropagateThroughMERGE(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?MarkGlobalDef_PropagateThroughMERGE@Compiler@D3DXShader@@AAAXPAVInstruction@2@@Z");
//};

//public: unsigned int D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 5>::GetField(unsigned int)
//{
//    mangled_ppc("?GetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$04@D3DXShader@@QAAII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 5>::SetField(unsigned int, unsigned int)
//{
//    mangled_ppc("?SetField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$04@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::SubtractBitFromField(unsigned int, unsigned int)
//{
//    mangled_ppc("?SubtractBitFromField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXII@Z");
//};

//public: void D3DXShader::BitFieldSet<class D3DXShader::FixedSizeBitSet<unsigned int, 1>, unsigned int, unsigned int, 4>::IncField(unsigned int)
//{
//    mangled_ppc("?IncField@?$BitFieldSet@V?$FixedSizeBitSet@I$00@D3DXShader@@II$03@D3DXShader@@QAAXI@Z");
//};

//private: bool D3DXShader::Compiler::EjectConstantOperand(class D3DXShader::Instruction *, unsigned int, class D3DXShader::Dependency *)
//{
//    mangled_ppc("?EjectConstantOperand@Compiler@D3DXShader@@AAA_NPAVInstruction@2@IPAVDependency@2@@Z");
//};

//private: bool D3DXShader::Compiler::CheckMerge(class D3DXShader::Block *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?CheckMerge@Compiler@D3DXShader@@AAA_NPAVBlock@2@PAVInstruction@2@@Z");
//};

//private: void D3DXShader::Compiler::CleanInBlock(class D3DXShader::Block *)
//{
//    mangled_ppc("?CleanInBlock@Compiler@D3DXShader@@AAAXPAVBlock@2@@Z");
//};

//private: void D3DXShader::Compiler::Clean(void)
//{
//    mangled_ppc("?Clean@Compiler@D3DXShader@@AAAXXZ");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::UpdateOutputComponentCount(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?UpdateOutputComponentCount@Compiler@D3DXShader@@AAAPAVInstruction@2@PAV32@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: void D3DXShader::Compiler::Reclean(class D3DXShader::Instruction *, class D3DXShader::Stack<class D3DXShader::Instruction *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Instruction *, class D3DXShader::Instruction *, unsigned long)> *)
//{
//    mangled_ppc("?Reclean@Compiler@D3DXShader@@AAAXPAVInstruction@2@PAV?$Stack@PAVInstruction@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

