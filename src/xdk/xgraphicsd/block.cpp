/* ---------- headers */

#include "xdk\xgraphicsd\block.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void XGRAPHICS::Block::Remove(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::Block::Append(class XGRAPHICS::IRInst &);
// public: void XGRAPHICS::Block::Insert(class XGRAPHICS::IRInst &);
// public: void XGRAPHICS::Block::InsertAfter(class XGRAPHICS::IRInst &, class XGRAPHICS::IRInst &);
// public: void XGRAPHICS::Block::InsertBefore(class XGRAPHICS::IRInst &, class XGRAPHICS::IRInst &);
// public: virtual void XGRAPHICS::EntryBlock::InsertLoad(class XGRAPHICS::IRInst &);
// public: static void * XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::operator delete(void *);
// public: static void XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator delete(void *);
// public: bool XGRAPHICS::Vector<class XGRAPHICS::Block *>::RemoveOneByValue(class XGRAPHICS::Block *const &);
// public: bool XGRAPHICS::Block::Visited(int) const;
// public: class XGRAPHICS::PostLoopFooter * XGRAPHICS::LoopHeader::GetPostFooter(void);
// public: bool XGRAPHICS::Block::Validate(void) const;
// public: XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::stack<class XGRAPHICS::VRegInfo *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::~stack<class XGRAPHICS::VRegInfo *>(void);
// public: XGRAPHICS::Vector<class XGRAPHICS::Block *>::~Vector<class XGRAPHICS::Block *>(void);
// public: int XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Size(void) const;
// public: XGRAPHICS::Block::Block(class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::Block::IsEntry(void) const;
// public: virtual bool XGRAPHICS::Block::IsExit(void) const;
// public: virtual bool XGRAPHICS::Block::IsIfHeader(void) const;
// public: virtual bool XGRAPHICS::Block::IsIfFooter(void) const;
// public: virtual bool XGRAPHICS::Block::IsLoopHeader(void) const;
// public: virtual bool XGRAPHICS::Block::IsLoopFooter(void) const;
// public: virtual bool XGRAPHICS::Block::IsBreak(void) const;
// public: virtual bool XGRAPHICS::Block::IsContinue(void) const;
// public: virtual void XGRAPHICS::Block::InsertLoad(class XGRAPHICS::IRInst &);
// public: virtual char const * XGRAPHICS::Block::TypeName(void) const;
// public: void * XGRAPHICS::Vector<class XGRAPHICS::Block *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::`scalar deleting destructor'(unsigned int);
// public: int XGRAPHICS::Block::WhichPredecessor(class XGRAPHICS::Block *);
// public: class XGRAPHICS::Block * XGRAPHICS::Block::NextUnvisitedSuccessor(int) const;
// public: bool XGRAPHICS::Block::HasMultiCFGSucc(void) const;
// public: bool XGRAPHICS::Block::HasMultiCFGPred(void) const;
// public: int XGRAPHICS::Block::NumSuccessors(void) const;
// public: int XGRAPHICS::Block::NumPredecessors(void) const;
// public: bool XGRAPHICS::Block::HasSuccessors(void) const;
// public: bool XGRAPHICS::Block::HasDomChildren(void) const;
// public: bool XGRAPHICS::Block::HasDomFrontier(void) const;
// protected: void XGRAPHICS::Block::AddSuccessor(class XGRAPHICS::Block *);
// protected: void XGRAPHICS::Block::AddPredecessor(class XGRAPHICS::Block *);
// protected: void XGRAPHICS::Block::AddDomChild(class XGRAPHICS::Block *);
// protected: void XGRAPHICS::Block::AddDomFrontier(class XGRAPHICS::Block *);
// public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetEndThen(void) const;
// public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetEndElse(void) const;
// public: void XGRAPHICS::CFG::RemoveUnreachableBlocks(void);
// public: bool XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Empty(void) const;
// public: void XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Push(class XGRAPHICS::VRegInfo *);
// public: bool XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Find(class XGRAPHICS::VRegInfo *&) const;
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Pop(void);
// public: static void XGRAPHICS::Block::MakePredAndSuccEdge(class XGRAPHICS::Block *, class XGRAPHICS::Block *);
// public: virtual XGRAPHICS::Block::~Block(void);
// protected: void XGRAPHICS::Block::ReplacePredecessor(class XGRAPHICS::Block *, class XGRAPHICS::Block *);
// protected: void XGRAPHICS::Block::ReplaceSuccessor(class XGRAPHICS::Block *, class XGRAPHICS::Block *);
// protected: void XGRAPHICS::Block::PopAllDefNodes(void);
// protected: void XGRAPHICS::Block::PushDefNode(class XGRAPHICS::VRegInfo *, struct XGRAPHICS::CurrentValue *);
// public: XGRAPHICS::EntryBlock::EntryBlock(class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::EntryBlock::IsEntry(void) const;
// public: virtual char const * XGRAPHICS::EntryBlock::TypeName(void) const;
// public: virtual XGRAPHICS::EntryBlock::~EntryBlock(void);
// public: XGRAPHICS::ExitBlock::ExitBlock(class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::ExitBlock::IsExit(void) const;
// public: virtual char const * XGRAPHICS::ExitBlock::TypeName(void) const;
// public: virtual XGRAPHICS::ExitBlock::~ExitBlock(void);
// public: virtual XGRAPHICS::IfHeader::~IfHeader(void);
// protected: XGRAPHICS::IfHeader::IfHeader(class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::IfHeader::IsIfHeader(void) const;
// public: virtual char const * XGRAPHICS::IfHeader::TypeName(void) const;
// public: virtual bool XGRAPHICS::IfHeader::IsStatic(void) const;
// public: XGRAPHICS::BreakBlock::BreakBlock(class XGRAPHICS::PostLoopFooter *, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::BreakBlock::TypeName(void) const;
// public: virtual bool XGRAPHICS::BreakBlock::IsBreak(void) const;
// public: virtual XGRAPHICS::BreakBlock::~BreakBlock(void);
// public: XGRAPHICS::ContinueBlock::ContinueBlock(class XGRAPHICS::LoopFooter *, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::ContinueBlock::TypeName(void) const;
// public: virtual bool XGRAPHICS::ContinueBlock::IsContinue(void) const;
// public: virtual XGRAPHICS::ContinueBlock::~ContinueBlock(void);
// public: XGRAPHICS::LoopFooter::LoopFooter(class XGRAPHICS::LoopHeader *, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::LoopFooter::IsLoopFooter(void) const;
// public: virtual char const * XGRAPHICS::LoopFooter::TypeName(void) const;
// public: virtual XGRAPHICS::LoopFooter::~LoopFooter(void);
// public: XGRAPHICS::PostLoopFooter::PostLoopFooter(class XGRAPHICS::LoopHeader *, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::PostLoopFooter::TypeName(void) const;
// public: virtual XGRAPHICS::PostLoopFooter::~PostLoopFooter(void);
// public: XGRAPHICS::IfFooter::IfFooter(class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IfFooter::TypeName(void) const;
// public: virtual bool XGRAPHICS::IfFooter::IsIfFooter(void) const;
// public: virtual XGRAPHICS::IfFooter::~IfFooter(void);
// public: XGRAPHICS::IfFooterStatic::IfFooterStatic(class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IfFooterStatic::TypeName(void) const;
// public: virtual XGRAPHICS::IfFooterStatic::~IfFooterStatic(void);
// merged_83E66010;
// public: void XGRAPHICS::Block::ReplaceEdgeWithGraph(class XGRAPHICS::Block *, class XGRAPHICS::Block *, class XGRAPHICS::Block *);
// merged_83E660C0;
// merged_83E66128;
// public: XGRAPHICS::LoopHeader::LoopHeader(int, class XGRAPHICS::LoopHeader *, class XGRAPHICS::Compiler *);
// public: virtual bool XGRAPHICS::LoopHeader::IsLoopHeader(void) const;
// public: virtual char const * XGRAPHICS::LoopHeader::TypeName(void) const;
// public: virtual XGRAPHICS::LoopHeader::~LoopHeader(void);
// merged_83E66338;
// public: XGRAPHICS::IfHeader::IfHeader(class XGRAPHICS::IRInst *, class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *, class XGRAPHICS::CFG *);
// merged_83E66488;
// public: XGRAPHICS::IfHeaderStatic::IfHeaderStatic(class XGRAPHICS::IRCmp1S *, class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *, class XGRAPHICS::CFG *);
// public: virtual char const * XGRAPHICS::IfHeaderStatic::TypeName(void) const;
// public: virtual bool XGRAPHICS::IfHeaderStatic::IsStatic(void) const;
// public: virtual XGRAPHICS::IfHeaderStatic::~IfHeaderStatic(void);
// merged_83E66620;
// merged_83E66688;
// merged_83E666F0;
// merged_83E66758;
// merged_83E667C0;
// merged_83E66828;
// merged_83E66890;

//public: void XGRAPHICS::Block::Remove(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?Remove@Block@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::Block::Append(class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?Append@Block@XGRAPHICS@@QAAXAAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::Block::Insert(class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?Insert@Block@XGRAPHICS@@QAAXAAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::Block::InsertAfter(class XGRAPHICS::IRInst &, class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?InsertAfter@Block@XGRAPHICS@@QAAXAAVIRInst@2@0@Z");
//};

//public: void XGRAPHICS::Block::InsertBefore(class XGRAPHICS::IRInst &, class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?InsertBefore@Block@XGRAPHICS@@QAAXAAVIRInst@2@0@Z");
//};

//public: virtual void XGRAPHICS::EntryBlock::InsertLoad(class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?InsertLoad@EntryBlock@XGRAPHICS@@UAAXAAVIRInst@2@@Z");
//};

//public: static void * XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: static void XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: bool XGRAPHICS::Vector<class XGRAPHICS::Block *>::RemoveOneByValue(class XGRAPHICS::Block *const &)
//{
//    mangled_ppc("?RemoveOneByValue@?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAA_NABQAVBlock@2@@Z");
//};

//public: bool XGRAPHICS::Block::Visited(int) const
//{
//    mangled_ppc("?Visited@Block@XGRAPHICS@@QBA_NH@Z");
//};

//public: class XGRAPHICS::PostLoopFooter * XGRAPHICS::LoopHeader::GetPostFooter(void)
//{
//    mangled_ppc("?GetPostFooter@LoopHeader@XGRAPHICS@@QAAPAVPostLoopFooter@2@XZ");
//};

//public: bool XGRAPHICS::Block::Validate(void) const
//{
//    mangled_ppc("?Validate@Block@XGRAPHICS@@QBA_NXZ");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::stack<class XGRAPHICS::VRegInfo *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::~stack<class XGRAPHICS::VRegInfo *>(void)
//{
//    mangled_ppc("??1?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::Block *>::~Vector<class XGRAPHICS::Block *>(void)
//{
//    mangled_ppc("??1?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: int XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: XGRAPHICS::Block::Block(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0Block@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::Block::IsEntry(void) const
//{
//    mangled_ppc("?IsEntry@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsExit(void) const
//{
//    mangled_ppc("?IsExit@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsIfHeader(void) const
//{
//    mangled_ppc("?IsIfHeader@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsIfFooter(void) const
//{
//    mangled_ppc("?IsIfFooter@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsLoopHeader(void) const
//{
//    mangled_ppc("?IsLoopHeader@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsLoopFooter(void) const
//{
//    mangled_ppc("?IsLoopFooter@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsBreak(void) const
//{
//    mangled_ppc("?IsBreak@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual bool XGRAPHICS::Block::IsContinue(void) const
//{
//    mangled_ppc("?IsContinue@Block@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual void XGRAPHICS::Block::InsertLoad(class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?InsertLoad@Block@XGRAPHICS@@UAAXAAVIRInst@2@@Z");
//};

//public: virtual char const * XGRAPHICS::Block::TypeName(void) const
//{
//    mangled_ppc("?TypeName@Block@XGRAPHICS@@UBAPBDXZ");
//};

//public: void * XGRAPHICS::Vector<class XGRAPHICS::Block *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: int XGRAPHICS::Block::WhichPredecessor(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?WhichPredecessor@Block@XGRAPHICS@@QAAHPAV12@@Z");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::Block::NextUnvisitedSuccessor(int) const
//{
//    mangled_ppc("?NextUnvisitedSuccessor@Block@XGRAPHICS@@QBAPAV12@H@Z");
//};

//public: bool XGRAPHICS::Block::HasMultiCFGSucc(void) const
//{
//    mangled_ppc("?HasMultiCFGSucc@Block@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::Block::HasMultiCFGPred(void) const
//{
//    mangled_ppc("?HasMultiCFGPred@Block@XGRAPHICS@@QBA_NXZ");
//};

//public: int XGRAPHICS::Block::NumSuccessors(void) const
//{
//    mangled_ppc("?NumSuccessors@Block@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::Block::NumPredecessors(void) const
//{
//    mangled_ppc("?NumPredecessors@Block@XGRAPHICS@@QBAHXZ");
//};

//public: bool XGRAPHICS::Block::HasSuccessors(void) const
//{
//    mangled_ppc("?HasSuccessors@Block@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::Block::HasDomChildren(void) const
//{
//    mangled_ppc("?HasDomChildren@Block@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::Block::HasDomFrontier(void) const
//{
//    mangled_ppc("?HasDomFrontier@Block@XGRAPHICS@@QBA_NXZ");
//};

//protected: void XGRAPHICS::Block::AddSuccessor(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?AddSuccessor@Block@XGRAPHICS@@IAAXPAV12@@Z");
//};

//protected: void XGRAPHICS::Block::AddPredecessor(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?AddPredecessor@Block@XGRAPHICS@@IAAXPAV12@@Z");
//};

//protected: void XGRAPHICS::Block::AddDomChild(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?AddDomChild@Block@XGRAPHICS@@IAAXPAV12@@Z");
//};

//protected: void XGRAPHICS::Block::AddDomFrontier(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?AddDomFrontier@Block@XGRAPHICS@@IAAXPAV12@@Z");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetEndThen(void) const
//{
//    mangled_ppc("?GetEndThen@IfHeader@XGRAPHICS@@QBAPAVBlock@2@XZ");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetEndElse(void) const
//{
//    mangled_ppc("?GetEndElse@IfHeader@XGRAPHICS@@QBAPAVBlock@2@XZ");
//};

//public: void XGRAPHICS::CFG::RemoveUnreachableBlocks(void)
//{
//    mangled_ppc("?RemoveUnreachableBlocks@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Push(class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?Push@?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAXPAVVRegInfo@2@@Z");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Find(class XGRAPHICS::VRegInfo *&) const
//{
//    mangled_ppc("?Find@?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QBA_NAAPAVVRegInfo@2@@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::stack<class XGRAPHICS::VRegInfo *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAPAVVRegInfo@2@XZ");
//};

//public: static void XGRAPHICS::Block::MakePredAndSuccEdge(class XGRAPHICS::Block *, class XGRAPHICS::Block *)
//{
//    mangled_ppc("?MakePredAndSuccEdge@Block@XGRAPHICS@@SAXPAV12@0@Z");
//};

//public: virtual XGRAPHICS::Block::~Block(void)
//{
//    mangled_ppc("??1Block@XGRAPHICS@@UAA@XZ");
//};

//protected: void XGRAPHICS::Block::ReplacePredecessor(class XGRAPHICS::Block *, class XGRAPHICS::Block *)
//{
//    mangled_ppc("?ReplacePredecessor@Block@XGRAPHICS@@IAAXPAV12@0@Z");
//};

//protected: void XGRAPHICS::Block::ReplaceSuccessor(class XGRAPHICS::Block *, class XGRAPHICS::Block *)
//{
//    mangled_ppc("?ReplaceSuccessor@Block@XGRAPHICS@@IAAXPAV12@0@Z");
//};

//protected: void XGRAPHICS::Block::PopAllDefNodes(void)
//{
//    mangled_ppc("?PopAllDefNodes@Block@XGRAPHICS@@IAAXXZ");
//};

//protected: void XGRAPHICS::Block::PushDefNode(class XGRAPHICS::VRegInfo *, struct XGRAPHICS::CurrentValue *)
//{
//    mangled_ppc("?PushDefNode@Block@XGRAPHICS@@IAAXPAVVRegInfo@2@PAUCurrentValue@2@@Z");
//};

//public: XGRAPHICS::EntryBlock::EntryBlock(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0EntryBlock@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::EntryBlock::IsEntry(void) const
//{
//    mangled_ppc("?IsEntry@EntryBlock@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual char const * XGRAPHICS::EntryBlock::TypeName(void) const
//{
//    mangled_ppc("?TypeName@EntryBlock@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::EntryBlock::~EntryBlock(void)
//{
//    mangled_ppc("??1EntryBlock@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::ExitBlock::ExitBlock(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ExitBlock@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::ExitBlock::IsExit(void) const
//{
//    mangled_ppc("?IsExit@ExitBlock@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual char const * XGRAPHICS::ExitBlock::TypeName(void) const
//{
//    mangled_ppc("?TypeName@ExitBlock@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::ExitBlock::~ExitBlock(void)
//{
//    mangled_ppc("??1ExitBlock@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IfHeader::~IfHeader(void)
//{
//    mangled_ppc("??1IfHeader@XGRAPHICS@@UAA@XZ");
//};

//protected: XGRAPHICS::IfHeader::IfHeader(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IfHeader@XGRAPHICS@@IAA@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::IfHeader::IsIfHeader(void) const
//{
//    mangled_ppc("?IsIfHeader@IfHeader@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual char const * XGRAPHICS::IfHeader::TypeName(void) const
//{
//    mangled_ppc("?TypeName@IfHeader@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool XGRAPHICS::IfHeader::IsStatic(void) const
//{
//    mangled_ppc("?IsStatic@IfHeader@XGRAPHICS@@UBA_NXZ");
//};

//public: XGRAPHICS::BreakBlock::BreakBlock(class XGRAPHICS::PostLoopFooter *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0BreakBlock@XGRAPHICS@@QAA@PAVPostLoopFooter@1@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::BreakBlock::TypeName(void) const
//{
//    mangled_ppc("?TypeName@BreakBlock@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool XGRAPHICS::BreakBlock::IsBreak(void) const
//{
//    mangled_ppc("?IsBreak@BreakBlock@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::BreakBlock::~BreakBlock(void)
//{
//    mangled_ppc("??1BreakBlock@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::ContinueBlock::ContinueBlock(class XGRAPHICS::LoopFooter *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ContinueBlock@XGRAPHICS@@QAA@PAVLoopFooter@1@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::ContinueBlock::TypeName(void) const
//{
//    mangled_ppc("?TypeName@ContinueBlock@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool XGRAPHICS::ContinueBlock::IsContinue(void) const
//{
//    mangled_ppc("?IsContinue@ContinueBlock@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::ContinueBlock::~ContinueBlock(void)
//{
//    mangled_ppc("??1ContinueBlock@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::LoopFooter::LoopFooter(class XGRAPHICS::LoopHeader *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopFooter@XGRAPHICS@@QAA@PAVLoopHeader@1@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::LoopFooter::IsLoopFooter(void) const
//{
//    mangled_ppc("?IsLoopFooter@LoopFooter@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual char const * XGRAPHICS::LoopFooter::TypeName(void) const
//{
//    mangled_ppc("?TypeName@LoopFooter@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::LoopFooter::~LoopFooter(void)
//{
//    mangled_ppc("??1LoopFooter@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::PostLoopFooter::PostLoopFooter(class XGRAPHICS::LoopHeader *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0PostLoopFooter@XGRAPHICS@@QAA@PAVLoopHeader@1@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::PostLoopFooter::TypeName(void) const
//{
//    mangled_ppc("?TypeName@PostLoopFooter@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::PostLoopFooter::~PostLoopFooter(void)
//{
//    mangled_ppc("??1PostLoopFooter@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::IfFooter::IfFooter(class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IfFooter@XGRAPHICS@@QAA@PAVIfHeader@1@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IfFooter::TypeName(void) const
//{
//    mangled_ppc("?TypeName@IfFooter@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool XGRAPHICS::IfFooter::IsIfFooter(void) const
//{
//    mangled_ppc("?IsIfFooter@IfFooter@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::IfFooter::~IfFooter(void)
//{
//    mangled_ppc("??1IfFooter@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::IfFooterStatic::IfFooterStatic(class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IfFooterStatic@XGRAPHICS@@QAA@PAVIfHeader@1@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IfFooterStatic::TypeName(void) const
//{
//    mangled_ppc("?TypeName@IfFooterStatic@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IfFooterStatic::~IfFooterStatic(void)
//{
//    mangled_ppc("??1IfFooterStatic@XGRAPHICS@@UAA@XZ");
//};

//merged_83E66010
//{
//    mangled_ppc("merged_83E66010");
//};

//public: void XGRAPHICS::Block::ReplaceEdgeWithGraph(class XGRAPHICS::Block *, class XGRAPHICS::Block *, class XGRAPHICS::Block *)
//{
//    mangled_ppc("?ReplaceEdgeWithGraph@Block@XGRAPHICS@@QAAXPAV12@00@Z");
//};

//merged_83E660C0
//{
//    mangled_ppc("merged_83E660C0");
//};

//merged_83E66128
//{
//    mangled_ppc("merged_83E66128");
//};

//public: XGRAPHICS::LoopHeader::LoopHeader(int, class XGRAPHICS::LoopHeader *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0LoopHeader@XGRAPHICS@@QAA@HPAV01@PAVCompiler@1@@Z");
//};

//public: virtual bool XGRAPHICS::LoopHeader::IsLoopHeader(void) const
//{
//    mangled_ppc("?IsLoopHeader@LoopHeader@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual char const * XGRAPHICS::LoopHeader::TypeName(void) const
//{
//    mangled_ppc("?TypeName@LoopHeader@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::LoopHeader::~LoopHeader(void)
//{
//    mangled_ppc("??1LoopHeader@XGRAPHICS@@UAA@XZ");
//};

//merged_83E66338
//{
//    mangled_ppc("merged_83E66338");
//};

//public: XGRAPHICS::IfHeader::IfHeader(class XGRAPHICS::IRInst *, class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *, class XGRAPHICS::CFG *)
//{
//    mangled_ppc("??0IfHeader@XGRAPHICS@@QAA@PAVIRInst@1@PAV01@PAVCompiler@1@PAVCFG@1@@Z");
//};

//merged_83E66488
//{
//    mangled_ppc("merged_83E66488");
//};

//public: XGRAPHICS::IfHeaderStatic::IfHeaderStatic(class XGRAPHICS::IRCmp1S *, class XGRAPHICS::IfHeader *, class XGRAPHICS::Compiler *, class XGRAPHICS::CFG *)
//{
//    mangled_ppc("??0IfHeaderStatic@XGRAPHICS@@QAA@PAVIRCmp1S@1@PAVIfHeader@1@PAVCompiler@1@PAVCFG@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IfHeaderStatic::TypeName(void) const
//{
//    mangled_ppc("?TypeName@IfHeaderStatic@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool XGRAPHICS::IfHeaderStatic::IsStatic(void) const
//{
//    mangled_ppc("?IsStatic@IfHeaderStatic@XGRAPHICS@@UBA_NXZ");
//};

//public: virtual XGRAPHICS::IfHeaderStatic::~IfHeaderStatic(void)
//{
//    mangled_ppc("??1IfHeaderStatic@XGRAPHICS@@UAA@XZ");
//};

//merged_83E66620
//{
//    mangled_ppc("merged_83E66620");
//};

//merged_83E66688
//{
//    mangled_ppc("merged_83E66688");
//};

//merged_83E666F0
//{
//    mangled_ppc("merged_83E666F0");
//};

//merged_83E66758
//{
//    mangled_ppc("merged_83E66758");
//};

//merged_83E667C0
//{
//    mangled_ppc("merged_83E667C0");
//};

//merged_83E66828
//{
//    mangled_ppc("merged_83E66828");
//};

//merged_83E66890
//{
//    mangled_ppc("merged_83E66890");
//};

