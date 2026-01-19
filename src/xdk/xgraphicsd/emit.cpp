/* ---------- headers */

#include "xdk\xgraphicsd\emit.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int D3DXShader::CountBitsInNibble(unsigned int);
// unsigned int D3DXShader::GetHighestBitMask(unsigned int);
// unsigned int D3DXShader::CompMask(unsigned int);
// public: class D3DXShader::Dependency ** D3DXShader::Instruction::GetDependentsPtr(void);
// public: bool D3DXShader::Instruction::CanEditDependents(void);
// public: bool D3DXShader::Instruction::IsPixelKill(void);
// public: bool D3DXShader::Instruction::IsSerializing(void);
// public: bool D3DXShader::Instruction::ShouldBeEncodedInExecBlock(void);
// public: unsigned long D3DXShader::Instruction::GetExecOffset(void);
// public: bool D3DXShader::Dependency::IsRegisterDependency(void);
// public: unsigned int D3DXShader::Dependency::GetRegisterIndex(void);
// public: class D3DXShader::Dependency ** D3DXShader::Dependency::GetNextDependentPtr(void);
// public: D3DXShader::EditingDependenciesHolder::EditingDependenciesHolder(class D3DXShader::Dependency **);
// public: void D3DXShader::EditingDependenciesHolder::Cancel(void);
// public: class D3DXShader::Dependency ** D3DXShader::EditingDependenciesHolder::AdvanceDependent(class D3DXShader::Dependency **);
// public: bool D3DXShader::Block::HasSingleSuccessor(void);
// public: bool D3DXShader::Block::HasCompatiblePredicateState(class D3DXShader::Block *);
// public: D3DXShader::CCompilerHeapCommentBlock::CCompilerHeapCommentBlock(unsigned long);
// public: static unsigned long D3DXShader::Compiler::ComputeContextDataForNode(class D3DXShader::CNode *);
// public: void D3DXShader::Compiler::Xbox360ExtensionUsed(void);
// public: unsigned int D3DXShader::Compiler::GetSamplerRegisterBase(void);
// public: unsigned int D3DXShader::Compiler::GetInstructionCountLimit(void);
// public: bool D3DXShader::Compiler::GeneratingFatZPassShader(void);
// public: bool D3DXShader::Compiler::NeedDebugPrintExports(bool);
// public: unsigned int D3DXShader::Compiler::GetNumVariables(void);
// public: void D3DXShader::Dependency::SetModifiers(unsigned int);
// public: bool D3DXShader::Instruction::NeedsFixup(void);
// public: void D3DXShader::Dependency::ChangeDef(class D3DXShader::Instruction *);
// private: static long D3DXShader::Compiler::DisassemblerOutputCallback(void *, char const *, unsigned long);
// int D3DXShader::CompareGlobalVarNames(void const *, void const *);
// private: bool D3DXShader::Compiler::FindSourceLineForContext(unsigned long, char const **, unsigned int *);
// unsigned long D3DXShader::TranslateLexicalScopeID(unsigned int);
// private: unsigned long D3DXShader::Compiler::GetLexicalScopeID(unsigned int);
// bool D3DXShader::ShouldEmitVariableDeclaration(struct D3DXShader::Variable *);
// public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::AtEnd(void);
// private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::IsRingStart(class D3DXShader::Block **);
// private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Block> * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::EntryFromPrev(class D3DXShader::Block **);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry>::IsLinked(void);
// private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> *);
// private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry>::Init(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::Validate(void);
// public: unsigned long XMicrocodeBuilder::GetNextFlowAddressWithoutSerializing(void);
// public: unsigned long XMicrocodeBuilder::GetCurrentFlowAddressWithoutSerializing(void);
// public: unsigned long XMicrocodeBuilder::GetLastExecALUCount(void);
// public: long XShaderPDBBuilder::SetVariableCount(unsigned long);
// public: void XShaderPDBBuilder::AddVariableInfo(unsigned long, class D3DXShader::CNodeDecl *, class D3DXShader::CNode *, class D3DXShader::CNodeVariable *, unsigned long, unsigned long);
// public: void XShaderPDBBuilder::AddVariableDebugInfo(unsigned long, unsigned long, char, unsigned long, int, int, int, unsigned long);
// public: long XShaderPDBBuilder::SetFunctionCount(unsigned long);
// public: long XShaderPDBBuilder::AddFunctionInfo(unsigned long, class D3DXShader::CNodeDecl *);
// public: long XShaderPDBBuilder::SetFunctionEntryExitCount(unsigned long);
// public: void XShaderPDBBuilder::AddFunctionEntry(unsigned long, unsigned long, int, unsigned long);
// public: void XShaderPDBBuilder::AddFunctionExit(unsigned long, unsigned long, int, unsigned long);
// public: long XShaderPDBBuilder::SetLexicalScopeCount(unsigned long);
// public: void XShaderPDBBuilder::AddLexicalScope(unsigned long, unsigned long);
// public: long XShaderPDBBuilder::SetAssertCount(unsigned long);
// public: void XShaderPDBBuilder::SetAssertInfo(unsigned long, unsigned long, unsigned long, char const *, unsigned long, char const *, unsigned long);
// public: void XShaderPDBBuilder::SetAssertionsDisabled(void);
// public: long XShaderPDBBuilder::SetDebugPrintCount(unsigned long);
// public: void XShaderPDBBuilder::SetDebugPrintInfo(unsigned long, char const *, unsigned long);
// public: long XShaderPDBBuilder::SetDebugPrintArgumentCount(unsigned long, unsigned long);
// public: void XShaderPDBBuilder::SetDebugPrintArgumentType(unsigned long, unsigned long, enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned long, unsigned long);
// public: long XShaderPDBBuilder::SetDebugPrintArgumentRegisterCount(unsigned long, unsigned long, unsigned long);
// public: void XShaderPDBBuilder::SetDebugPrintArgumentRegister(unsigned long, unsigned long, unsigned long, unsigned long);
// public: void XShaderPDBBuilder::SetDebugPrintDisabled(void);
// public: void D3DXShader::Instruction::SetWriteMask(unsigned int);
// public: bool D3DXShader::Instruction::IsFullVFETCH(void);
// public: bool D3DXShader::Instruction::IsMiniVFETCH(void);
// public: enum D3DXShader::ControlFlowPreference D3DXShader::Instruction::GetControlFlowPreference(class D3DXShader::Compiler *);
// public: bool D3DXShader::Dependency::IsTempRegisterDependency(void);
// public: D3DXShader::EditingDependenciesHolder::~EditingDependenciesHolder(void);
// public: static void * D3DXShader::CCompilerHeapCommentBlock::operator new(unsigned int, class D3DXShader::CompilerHeap *);
// public: bool D3DXShader::Instruction::HasOtherDependentsBesides(class D3DXShader::Instruction *);
// private: void D3DXShader::Compiler::SetSQRegistersForFirstInstr(class D3DXShader::Instruction *, union GPU_PROGRAMCONTROL *, union GPU_CONTEXTMISC *);
// private: bool D3DXShader::Compiler::CanPredicateExecBlock(unsigned long, bool, class D3DXShader::Instruction *, bool);
// private: void D3DXShader::Compiler::PredicateExecBlock(unsigned long, bool);
// private: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::TFromPrev(class D3DXShader::Block **);
// public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *);
// public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **);
// private: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *);
// public: void D3DXShader::Compiler::FreeFunctionMem(void *, unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// public: void D3DXShader::Compiler::FreeDeadCode(bool);
// public: class D3DXShader::Instruction * D3DXShader::Instruction::GetCoissuedScalarInstruction(void);
// public: unsigned long D3DXShader::Block::GetPreceedingAddress(void);
// private: unsigned int D3DXShader::Compiler::FindMaxReg(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *);
// private: void D3DXShader::Compiler::EnsureExecBlocksHaveSamePredicateState(unsigned long, unsigned long);
// public: class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetTail(void);
// public: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetPrev(class D3DXShader::Block *);
// public: struct D3DXShader::LexicalScopeNestingInfo * D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GetNext(void);
// public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Init(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetTail(void);
// public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetHead(void);
// public: unsigned long D3DXShader::Compiler::SetContextNode(class D3DXShader::CNode *);
// public: bool D3DXShader::Compiler::NeedDebugPrintExports(void);
// public: void * D3DXShader::Compiler::AllocAlignedPhaseMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes);
// private: void D3DXShader::Compiler::RemoveDeadIsolatedCode(void);
// private: bool D3DXShader::Compiler::ShouldIgnoreValidatorError(char const *);
// private: void D3DXShader::Compiler::AddPDBInfo(int, unsigned long, struct XShaderPDBBuilder *, class D3DXShader::Instruction *);
// private: unsigned long D3DXShader::Compiler::AddFlow(union GPUFLOW_INSTRUCTION *, struct XShaderPDBBuilder *, class D3DXShader::Instruction *);
// private: unsigned long D3DXShader::Compiler::AddALU(union GPUALU_INSTRUCTION *, struct XShaderPDBBuilder *, class D3DXShader::Instruction *);
// private: unsigned long D3DXShader::Compiler::AddVFetch(union GPUVERTEX_FETCH_INSTRUCTION *, int, struct XShaderPDBBuilder *, class D3DXShader::Instruction *);
// private: unsigned long D3DXShader::Compiler::AddVFetchWithSemantic(union GPUVERTEX_FETCH_INSTRUCTION *, unsigned long, int, struct XShaderPDBBuilder *, class D3DXShader::Instruction *);
// private: unsigned long D3DXShader::Compiler::AddTFetch(union GPUTEXTURE_FETCH_INSTRUCTION *, struct XShaderPDBBuilder *, class D3DXShader::Instruction *);
// private: unsigned long D3DXShader::Compiler::ResolveDebugInfoAddress(struct XShaderPDBBuilder *, class D3DXShader::Instruction *, unsigned long, int *);
// public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GoToBeginning(void);
// public: void D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Init(void);
// public: bool D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Block * D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::RemoveLast(void);
// private: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetSpaceWorker(unsigned int);
// private: long D3DXShader::Compiler::ValidatorOutputCallbackWorker(char const *, unsigned long);
// public: D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)> *);
// public: void D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Init(void);
// public: bool D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::IsEmpty(void);
// public: class D3DXShader::Block * D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Pop(void);
// private: class D3DXShader::Block ** D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetSpace(unsigned int);
// private: static long D3DXShader::Compiler::ValidatorOutputCallback(void *, char const *, unsigned long);
// public: void D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Append(class D3DXShader::Block *);
// public: void D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Push(class D3DXShader::Block *);
// private: class D3DXShader::Instruction * D3DXShader::Compiler::GuessFirstALUOrFetchInstruction(class D3DXShader::Block *, bool);
// private: class D3DXShader::Block * D3DXShader::Compiler::EmitShader(class D3DXShader::Block *, int, struct D3DXShader::EmitState *);
// private: void D3DXShader::Compiler::Emit(unsigned long, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **);

//unsigned int D3DXShader::CountBitsInNibble(unsigned int)
//{
//    mangled_ppc("?CountBitsInNibble@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::GetHighestBitMask(unsigned int)
//{
//    mangled_ppc("?GetHighestBitMask@D3DXShader@@YAII@Z");
//};

//unsigned int D3DXShader::CompMask(unsigned int)
//{
//    mangled_ppc("?CompMask@D3DXShader@@YAII@Z");
//};

//public: class D3DXShader::Dependency ** D3DXShader::Instruction::GetDependentsPtr(void)
//{
//    mangled_ppc("?GetDependentsPtr@Instruction@D3DXShader@@QAAPAPAVDependency@2@XZ");
//};

//public: bool D3DXShader::Instruction::CanEditDependents(void)
//{
//    mangled_ppc("?CanEditDependents@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsPixelKill(void)
//{
//    mangled_ppc("?IsPixelKill@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsSerializing(void)
//{
//    mangled_ppc("?IsSerializing@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::ShouldBeEncodedInExecBlock(void)
//{
//    mangled_ppc("?ShouldBeEncodedInExecBlock@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: unsigned long D3DXShader::Instruction::GetExecOffset(void)
//{
//    mangled_ppc("?GetExecOffset@Instruction@D3DXShader@@QAAKXZ");
//};

//public: bool D3DXShader::Dependency::IsRegisterDependency(void)
//{
//    mangled_ppc("?IsRegisterDependency@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: unsigned int D3DXShader::Dependency::GetRegisterIndex(void)
//{
//    mangled_ppc("?GetRegisterIndex@Dependency@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::Dependency ** D3DXShader::Dependency::GetNextDependentPtr(void)
//{
//    mangled_ppc("?GetNextDependentPtr@Dependency@D3DXShader@@QAAPAPAV12@XZ");
//};

//public: D3DXShader::EditingDependenciesHolder::EditingDependenciesHolder(class D3DXShader::Dependency **)
//{
//    mangled_ppc("??0EditingDependenciesHolder@D3DXShader@@QAA@PAPAVDependency@1@@Z");
//};

//public: void D3DXShader::EditingDependenciesHolder::Cancel(void)
//{
//    mangled_ppc("?Cancel@EditingDependenciesHolder@D3DXShader@@QAAXXZ");
//};

//public: class D3DXShader::Dependency ** D3DXShader::EditingDependenciesHolder::AdvanceDependent(class D3DXShader::Dependency **)
//{
//    mangled_ppc("?AdvanceDependent@EditingDependenciesHolder@D3DXShader@@QAAPAPAVDependency@2@PAPAV32@@Z");
//};

//public: bool D3DXShader::Block::HasSingleSuccessor(void)
//{
//    mangled_ppc("?HasSingleSuccessor@Block@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Block::HasCompatiblePredicateState(class D3DXShader::Block *)
//{
//    mangled_ppc("?HasCompatiblePredicateState@Block@D3DXShader@@QAA_NPAV12@@Z");
//};

//public: D3DXShader::CCompilerHeapCommentBlock::CCompilerHeapCommentBlock(unsigned long)
//{
//    mangled_ppc("??0CCompilerHeapCommentBlock@D3DXShader@@QAA@K@Z");
//};

//public: static unsigned long D3DXShader::Compiler::ComputeContextDataForNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?ComputeContextDataForNode@Compiler@D3DXShader@@SAKPAVCNode@2@@Z");
//};

//public: void D3DXShader::Compiler::Xbox360ExtensionUsed(void)
//{
//    mangled_ppc("?Xbox360ExtensionUsed@Compiler@D3DXShader@@QAAXXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetSamplerRegisterBase(void)
//{
//    mangled_ppc("?GetSamplerRegisterBase@Compiler@D3DXShader@@QAAIXZ");
//};

//public: unsigned int D3DXShader::Compiler::GetInstructionCountLimit(void)
//{
//    mangled_ppc("?GetInstructionCountLimit@Compiler@D3DXShader@@QAAIXZ");
//};

//public: bool D3DXShader::Compiler::GeneratingFatZPassShader(void)
//{
//    mangled_ppc("?GeneratingFatZPassShader@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Compiler::NeedDebugPrintExports(bool)
//{
//    mangled_ppc("?NeedDebugPrintExports@Compiler@D3DXShader@@QAA_N_N@Z");
//};

//public: unsigned int D3DXShader::Compiler::GetNumVariables(void)
//{
//    mangled_ppc("?GetNumVariables@Compiler@D3DXShader@@QAAIXZ");
//};

//public: void D3DXShader::Dependency::SetModifiers(unsigned int)
//{
//    mangled_ppc("?SetModifiers@Dependency@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Instruction::NeedsFixup(void)
//{
//    mangled_ppc("?NeedsFixup@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::Dependency::ChangeDef(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?ChangeDef@Dependency@D3DXShader@@QAAXPAVInstruction@2@@Z");
//};

//private: static long D3DXShader::Compiler::DisassemblerOutputCallback(void *, char const *, unsigned long)
//{
//    mangled_ppc("?DisassemblerOutputCallback@Compiler@D3DXShader@@CAJPAXPBDK@Z");
//};

//int D3DXShader::CompareGlobalVarNames(void const *, void const *)
//{
//    mangled_ppc("?CompareGlobalVarNames@D3DXShader@@YAHPBX0@Z");
//};

//private: bool D3DXShader::Compiler::FindSourceLineForContext(unsigned long, char const **, unsigned int *)
//{
//    mangled_ppc("?FindSourceLineForContext@Compiler@D3DXShader@@AAA_NKPAPBDPAI@Z");
//};

//unsigned long D3DXShader::TranslateLexicalScopeID(unsigned int)
//{
//    mangled_ppc("?TranslateLexicalScopeID@D3DXShader@@YAKI@Z");
//};

//private: unsigned long D3DXShader::Compiler::GetLexicalScopeID(unsigned int)
//{
//    mangled_ppc("?GetLexicalScopeID@Compiler@D3DXShader@@AAAKI@Z");
//};

//bool D3DXShader::ShouldEmitVariableDeclaration(struct D3DXShader::Variable *)
//{
//    mangled_ppc("?ShouldEmitVariableDeclaration@D3DXShader@@YA_NPAUVariable@1@@Z");
//};

//public: bool D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::AtEnd(void)
//{
//    mangled_ppc("?AtEnd@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//private: static bool D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::IsRingStart(class D3DXShader::Block **)
//{
//    mangled_ppc("?IsRingStart@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CA_NPAPAVBlock@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<class D3DXShader::Block> * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::EntryFromPrev(class D3DXShader::Block **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@VBlock@D3DXShader@@@2@PAPAVBlock@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromT(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?EntryFromT@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::SetPrev(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **, struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?SetPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAXPAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: bool D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry>::IsLinked(void)
//{
//    mangled_ppc("?IsLinked@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAA_NXZ");
//};

//private: static class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::EntryFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?EntryFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@PAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromEntry(class D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry> *)
//{
//    mangled_ppc("?TFromEntry@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAV?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@2@@Z");
//};

//private: static bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsRingEnd(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?IsRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CA_NPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::MarkListHead(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?MarkListHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::MarkListTail(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?MarkListTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkListEntry<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkListEntry@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::Validate(void)
//{
//    mangled_ppc("?Validate@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: unsigned long XMicrocodeBuilder::GetNextFlowAddressWithoutSerializing(void)
//{
//    mangled_ppc("?GetNextFlowAddressWithoutSerializing@XMicrocodeBuilder@@QAAKXZ");
//};

//public: unsigned long XMicrocodeBuilder::GetCurrentFlowAddressWithoutSerializing(void)
//{
//    mangled_ppc("?GetCurrentFlowAddressWithoutSerializing@XMicrocodeBuilder@@QAAKXZ");
//};

//public: unsigned long XMicrocodeBuilder::GetLastExecALUCount(void)
//{
//    mangled_ppc("?GetLastExecALUCount@XMicrocodeBuilder@@QAAKXZ");
//};

//public: long XShaderPDBBuilder::SetVariableCount(unsigned long)
//{
//    mangled_ppc("?SetVariableCount@XShaderPDBBuilder@@QAAJK@Z");
//};

//public: void XShaderPDBBuilder::AddVariableInfo(unsigned long, class D3DXShader::CNodeDecl *, class D3DXShader::CNode *, class D3DXShader::CNodeVariable *, unsigned long, unsigned long)
//{
//    mangled_ppc("?AddVariableInfo@XShaderPDBBuilder@@QAAXKPAVCNodeDecl@D3DXShader@@PAVCNode@3@PAVCNodeVariable@3@KK@Z");
//};

//public: void XShaderPDBBuilder::AddVariableDebugInfo(unsigned long, unsigned long, char, unsigned long, int, int, int, unsigned long)
//{
//    mangled_ppc("?AddVariableDebugInfo@XShaderPDBBuilder@@QAAXKKDKHHHK@Z");
//};

//public: long XShaderPDBBuilder::SetFunctionCount(unsigned long)
//{
//    mangled_ppc("?SetFunctionCount@XShaderPDBBuilder@@QAAJK@Z");
//};

//public: long XShaderPDBBuilder::AddFunctionInfo(unsigned long, class D3DXShader::CNodeDecl *)
//{
//    mangled_ppc("?AddFunctionInfo@XShaderPDBBuilder@@QAAJKPAVCNodeDecl@D3DXShader@@@Z");
//};

//public: long XShaderPDBBuilder::SetFunctionEntryExitCount(unsigned long)
//{
//    mangled_ppc("?SetFunctionEntryExitCount@XShaderPDBBuilder@@QAAJK@Z");
//};

//public: void XShaderPDBBuilder::AddFunctionEntry(unsigned long, unsigned long, int, unsigned long)
//{
//    mangled_ppc("?AddFunctionEntry@XShaderPDBBuilder@@QAAXKKHK@Z");
//};

//public: void XShaderPDBBuilder::AddFunctionExit(unsigned long, unsigned long, int, unsigned long)
//{
//    mangled_ppc("?AddFunctionExit@XShaderPDBBuilder@@QAAXKKHK@Z");
//};

//public: long XShaderPDBBuilder::SetLexicalScopeCount(unsigned long)
//{
//    mangled_ppc("?SetLexicalScopeCount@XShaderPDBBuilder@@QAAJK@Z");
//};

//public: void XShaderPDBBuilder::AddLexicalScope(unsigned long, unsigned long)
//{
//    mangled_ppc("?AddLexicalScope@XShaderPDBBuilder@@QAAXKK@Z");
//};

//public: long XShaderPDBBuilder::SetAssertCount(unsigned long)
//{
//    mangled_ppc("?SetAssertCount@XShaderPDBBuilder@@QAAJK@Z");
//};

//public: void XShaderPDBBuilder::SetAssertInfo(unsigned long, unsigned long, unsigned long, char const *, unsigned long, char const *, unsigned long)
//{
//    mangled_ppc("?SetAssertInfo@XShaderPDBBuilder@@QAAXKKKPBDK0K@Z");
//};

//public: void XShaderPDBBuilder::SetAssertionsDisabled(void)
//{
//    mangled_ppc("?SetAssertionsDisabled@XShaderPDBBuilder@@QAAXXZ");
//};

//public: long XShaderPDBBuilder::SetDebugPrintCount(unsigned long)
//{
//    mangled_ppc("?SetDebugPrintCount@XShaderPDBBuilder@@QAAJK@Z");
//};

//public: void XShaderPDBBuilder::SetDebugPrintInfo(unsigned long, char const *, unsigned long)
//{
//    mangled_ppc("?SetDebugPrintInfo@XShaderPDBBuilder@@QAAXKPBDK@Z");
//};

//public: long XShaderPDBBuilder::SetDebugPrintArgumentCount(unsigned long, unsigned long)
//{
//    mangled_ppc("?SetDebugPrintArgumentCount@XShaderPDBBuilder@@QAAJKK@Z");
//};

//public: void XShaderPDBBuilder::SetDebugPrintArgumentType(unsigned long, unsigned long, enum D3DXShader::_D3DCOMPONENT_TYPE, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetDebugPrintArgumentType@XShaderPDBBuilder@@QAAXKKW4_D3DCOMPONENT_TYPE@D3DXShader@@KK@Z");
//};

//public: long XShaderPDBBuilder::SetDebugPrintArgumentRegisterCount(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetDebugPrintArgumentRegisterCount@XShaderPDBBuilder@@QAAJKKK@Z");
//};

//public: void XShaderPDBBuilder::SetDebugPrintArgumentRegister(unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetDebugPrintArgumentRegister@XShaderPDBBuilder@@QAAXKKKK@Z");
//};

//public: void XShaderPDBBuilder::SetDebugPrintDisabled(void)
//{
//    mangled_ppc("?SetDebugPrintDisabled@XShaderPDBBuilder@@QAAXXZ");
//};

//public: void D3DXShader::Instruction::SetWriteMask(unsigned int)
//{
//    mangled_ppc("?SetWriteMask@Instruction@D3DXShader@@QAAXI@Z");
//};

//public: bool D3DXShader::Instruction::IsFullVFETCH(void)
//{
//    mangled_ppc("?IsFullVFETCH@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::Instruction::IsMiniVFETCH(void)
//{
//    mangled_ppc("?IsMiniVFETCH@Instruction@D3DXShader@@QAA_NXZ");
//};

//public: enum D3DXShader::ControlFlowPreference D3DXShader::Instruction::GetControlFlowPreference(class D3DXShader::Compiler *)
//{
//    mangled_ppc("?GetControlFlowPreference@Instruction@D3DXShader@@QAA?AW4ControlFlowPreference@2@PAVCompiler@2@@Z");
//};

//public: bool D3DXShader::Dependency::IsTempRegisterDependency(void)
//{
//    mangled_ppc("?IsTempRegisterDependency@Dependency@D3DXShader@@QAA_NXZ");
//};

//public: D3DXShader::EditingDependenciesHolder::~EditingDependenciesHolder(void)
//{
//    mangled_ppc("??1EditingDependenciesHolder@D3DXShader@@QAA@XZ");
//};

//public: static void * D3DXShader::CCompilerHeapCommentBlock::operator new(unsigned int, class D3DXShader::CompilerHeap *)
//{
//    mangled_ppc("??2CCompilerHeapCommentBlock@D3DXShader@@SAPAXIPAVCompilerHeap@1@@Z");
//};

//public: bool D3DXShader::Instruction::HasOtherDependentsBesides(class D3DXShader::Instruction *)
//{
//    mangled_ppc("?HasOtherDependentsBesides@Instruction@D3DXShader@@QAA_NPAV12@@Z");
//};

//private: void D3DXShader::Compiler::SetSQRegistersForFirstInstr(class D3DXShader::Instruction *, union GPU_PROGRAMCONTROL *, union GPU_CONTEXTMISC *)
//{
//    mangled_ppc("?SetSQRegistersForFirstInstr@Compiler@D3DXShader@@AAAXPAVInstruction@2@PATGPU_PROGRAMCONTROL@@PATGPU_CONTEXTMISC@@@Z");
//};

//private: bool D3DXShader::Compiler::CanPredicateExecBlock(unsigned long, bool, class D3DXShader::Instruction *, bool)
//{
//    mangled_ppc("?CanPredicateExecBlock@Compiler@D3DXShader@@AAA_NK_NPAVInstruction@2@0@Z");
//};

//private: void D3DXShader::Compiler::PredicateExecBlock(unsigned long, bool)
//{
//    mangled_ppc("?PredicateExecBlock@Compiler@D3DXShader@@AAAXK_N@Z");
//};

//private: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::TFromPrev(class D3DXShader::Block **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@CAPAVBlock@2@PAPAV32@@Z");
//};

//public: static struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetNext(struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?GetNext@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAU342@@Z");
//};

//public: static void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Remove(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?Remove@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@SAXPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//private: static struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::TFromPrev(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry **)
//{
//    mangled_ppc("?TFromPrev@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@CAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@PAPAU342@@Z");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry ** D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetRingStart(void)
//{
//    mangled_ppc("?GetRingStart@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetRingEnd(void)
//{
//    mangled_ppc("?GetRingEnd@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@AAAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: bool D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAA_NXZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::AddToTail(struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry *)
//{
//    mangled_ppc("?AddToTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@@Z");
//};

//public: void D3DXShader::Compiler::FreeFunctionMem(void *, unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?FreeFunctionMem@Compiler@D3DXShader@@QAAXPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//public: void D3DXShader::Compiler::FreeDeadCode(bool)
//{
//    mangled_ppc("?FreeDeadCode@Compiler@D3DXShader@@QAAX_N@Z");
//};

//public: class D3DXShader::Instruction * D3DXShader::Instruction::GetCoissuedScalarInstruction(void)
//{
//    mangled_ppc("?GetCoissuedScalarInstruction@Instruction@D3DXShader@@QAAPAV12@XZ");
//};

//public: unsigned long D3DXShader::Block::GetPreceedingAddress(void)
//{
//    mangled_ppc("?GetPreceedingAddress@Block@D3DXShader@@QAAKXZ");
//};

//private: unsigned int D3DXShader::Compiler::FindMaxReg(class D3DXShader::DoubleLinkList<class D3DXShader::Instruction, 68> *)
//{
//    mangled_ppc("?FindMaxReg@Compiler@D3DXShader@@AAAIPAV?$DoubleLinkList@VInstruction@D3DXShader@@$0EE@@2@@Z");
//};

//private: void D3DXShader::Compiler::EnsureExecBlocksHaveSamePredicateState(unsigned long, unsigned long)
//{
//    mangled_ppc("?EnsureExecBlocksHaveSamePredicateState@Compiler@D3DXShader@@AAAXKK@Z");
//};

//public: class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//public: static class D3DXShader::Block * D3DXShader::DoubleLinkList<class D3DXShader::Block, 0>::GetPrev(class D3DXShader::Block *)
//{
//    mangled_ppc("?GetPrev@?$DoubleLinkList@VBlock@D3DXShader@@$0A@@D3DXShader@@SAPAVBlock@2@PAV32@@Z");
//};

//public: struct D3DXShader::LexicalScopeNestingInfo * D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GetNext(void)
//{
//    mangled_ppc("?GetNext@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAULexicalScopeNestingInfo@2@XZ");
//};

//public: void D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::Init(void)
//{
//    mangled_ppc("?Init@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAXXZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry, 0>::GetTail(void)
//{
//    mangled_ppc("?GetTail@?$DoubleLinkList@UArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry * D3DXShader::DoubleLinkList<struct D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEntry, 0>::GetHead(void)
//{
//    mangled_ppc("?GetHead@?$DoubleLinkList@UArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@$0A@@D3DXShader@@QAAPAUArrayListEntry@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@2@XZ");
//};

//public: unsigned long D3DXShader::Compiler::SetContextNode(class D3DXShader::CNode *)
//{
//    mangled_ppc("?SetContextNode@Compiler@D3DXShader@@QAAKPAVCNode@2@@Z");
//};

//public: bool D3DXShader::Compiler::NeedDebugPrintExports(void)
//{
//    mangled_ppc("?NeedDebugPrintExports@Compiler@D3DXShader@@QAA_NXZ");
//};

//public: void * D3DXShader::Compiler::AllocAlignedPhaseMem(unsigned long, enum D3DXShader::CompilerHeapStructTypes)
//{
//    mangled_ppc("?AllocAlignedPhaseMem@Compiler@D3DXShader@@QAAPAXKW4CompilerHeapStructTypes@2@@Z");
//};

//private: void D3DXShader::Compiler::RemoveDeadIsolatedCode(void)
//{
//    mangled_ppc("?RemoveDeadIsolatedCode@Compiler@D3DXShader@@AAAXXZ");
//};

//private: bool D3DXShader::Compiler::ShouldIgnoreValidatorError(char const *)
//{
//    mangled_ppc("?ShouldIgnoreValidatorError@Compiler@D3DXShader@@AAA_NPBD@Z");
//};

//private: void D3DXShader::Compiler::AddPDBInfo(int, unsigned long, struct XShaderPDBBuilder *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddPDBInfo@Compiler@D3DXShader@@AAAXHKPAUXShaderPDBBuilder@@PAVInstruction@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::AddFlow(union GPUFLOW_INSTRUCTION *, struct XShaderPDBBuilder *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddFlow@Compiler@D3DXShader@@AAAKPATGPUFLOW_INSTRUCTION@@PAUXShaderPDBBuilder@@PAVInstruction@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::AddALU(union GPUALU_INSTRUCTION *, struct XShaderPDBBuilder *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddALU@Compiler@D3DXShader@@AAAKPATGPUALU_INSTRUCTION@@PAUXShaderPDBBuilder@@PAVInstruction@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::AddVFetch(union GPUVERTEX_FETCH_INSTRUCTION *, int, struct XShaderPDBBuilder *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddVFetch@Compiler@D3DXShader@@AAAKPATGPUVERTEX_FETCH_INSTRUCTION@@HPAUXShaderPDBBuilder@@PAVInstruction@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::AddVFetchWithSemantic(union GPUVERTEX_FETCH_INSTRUCTION *, unsigned long, int, struct XShaderPDBBuilder *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddVFetchWithSemantic@Compiler@D3DXShader@@AAAKPATGPUVERTEX_FETCH_INSTRUCTION@@KHPAUXShaderPDBBuilder@@PAVInstruction@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::AddTFetch(union GPUTEXTURE_FETCH_INSTRUCTION *, struct XShaderPDBBuilder *, class D3DXShader::Instruction *)
//{
//    mangled_ppc("?AddTFetch@Compiler@D3DXShader@@AAAKPATGPUTEXTURE_FETCH_INSTRUCTION@@PAUXShaderPDBBuilder@@PAVInstruction@2@@Z");
//};

//private: unsigned long D3DXShader::Compiler::ResolveDebugInfoAddress(struct XShaderPDBBuilder *, class D3DXShader::Instruction *, unsigned long, int *)
//{
//    mangled_ppc("?ResolveDebugInfoAddress@Compiler@D3DXShader@@AAAKPAUXShaderPDBBuilder@@PAVInstruction@2@KPAH@Z");
//};

//public: void D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::GoToBeginning(void)
//{
//    mangled_ppc("?GoToBeginning@?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Block * D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::RemoveLast(void)
//{
//    mangled_ppc("?RemoveLast@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//private: struct D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::ArrayListEntry * D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetSpaceWorker(unsigned int)
//{
//    mangled_ppc("?GetSpaceWorker@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAUArrayListEntry@12@I@Z");
//};

//private: long D3DXShader::Compiler::ValidatorOutputCallbackWorker(char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutputCallbackWorker@Compiler@D3DXShader@@AAAJPBDK@Z");
//};

//public: D3DXShader::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>::ArrayListEnumerator<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)>(class D3DXShader::ArrayList<struct D3DXShader::LexicalScopeNestingInfo, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(struct D3DXShader::LexicalScopeNestingInfo, struct D3DXShader::LexicalScopeNestingInfo, unsigned long)> *)
//{
//    mangled_ppc("??0?$ArrayListEnumerator@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA@PAV?$ArrayList@ULexicalScopeNestingInfo@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@1@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Init(void)
//{
//    mangled_ppc("?Init@?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXXZ");
//};

//public: bool D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::IsEmpty(void)
//{
//    mangled_ppc("?IsEmpty@?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAA_NXZ");
//};

//public: class D3DXShader::Block * D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Pop(void)
//{
//    mangled_ppc("?Pop@?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAPAVBlock@2@XZ");
//};

//private: class D3DXShader::Block ** D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::GetSpace(unsigned int)
//{
//    mangled_ppc("?GetSpace@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@AAAPAPAVBlock@2@I@Z");
//};

//private: static long D3DXShader::Compiler::ValidatorOutputCallback(void *, char const *, unsigned long)
//{
//    mangled_ppc("?ValidatorOutputCallback@Compiler@D3DXShader@@CAJPAXPBDK@Z");
//};

//public: void D3DXShader::ArrayList<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Append(class D3DXShader::Block *)
//{
//    mangled_ppc("?Append@?$ArrayList@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//public: void D3DXShader::Stack<class D3DXShader::Block *, void * (D3DXShader::CompilerHeap::AllocInContext::*)(void *, unsigned long), void (D3DXShader::CompilerHeap::FreeInContext::*)(class D3DXShader::Block *, class D3DXShader::Block *, unsigned long)>::Push(class D3DXShader::Block *)
//{
//    mangled_ppc("?Push@?$Stack@PAVBlock@D3DXShader@@$1?AllocInContext@CompilerHeap@2@SAPAXPAXK@Z$1?FreeInContext@42@SAX00K@Z@D3DXShader@@QAAXPAVBlock@2@@Z");
//};

//private: class D3DXShader::Instruction * D3DXShader::Compiler::GuessFirstALUOrFetchInstruction(class D3DXShader::Block *, bool)
//{
//    mangled_ppc("?GuessFirstALUOrFetchInstruction@Compiler@D3DXShader@@AAAPAVInstruction@2@PAVBlock@2@_N@Z");
//};

//private: class D3DXShader::Block * D3DXShader::Compiler::EmitShader(class D3DXShader::Block *, int, struct D3DXShader::EmitState *)
//{
//    mangled_ppc("?EmitShader@Compiler@D3DXShader@@AAAPAVBlock@2@PAV32@HPAUEmitState@2@@Z");
//};

//private: void D3DXShader::Compiler::Emit(unsigned long, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **)
//{
//    mangled_ppc("?Emit@Compiler@D3DXShader@@AAAXKKPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@@Z");
//};

