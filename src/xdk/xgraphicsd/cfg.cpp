/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void XGRAPHICS::CFG::Append(class XGRAPHICS::Block &);
// public: void XGRAPHICS::CFG::Insert(class XGRAPHICS::Block &);
// public: void XGRAPHICS::CFG::InsertAfter(class XGRAPHICS::Block &, class XGRAPHICS::Block &);
// public: void XGRAPHICS::CFG::InsertBefore(class XGRAPHICS::Block &, class XGRAPHICS::Block &);
// public: bool XGRAPHICS::CFG::IsVertexShader(void);
// private: void XGRAPHICS::CFG::ProcessPixelExports(void);
// public: static void XGRAPHICS::bitset::operator delete(void *);
// public: void XGRAPHICS::CFG::ClearSymbolTable(void);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::reset(void);
// public: class XGRAPHICS::bitset & XGRAPHICS::bitset::set(void);
// public: void XGRAPHICS::CFG::BuildOutputLinkage(class XGRAPHICS::LinkageInfo &);
// public: bool XGRAPHICS::CFG::GetEnableParameterGeneration(void);
// public: int XGRAPHICS::CFG::GetParameterGenerationPosition(void);
// public: bool XGRAPHICS::CFG::GetScreenXYFaceness(void);
// protected: XGRAPHICS::InternalVector::InternalVector(class XGRAPHICS::Arena *);
// protected: XGRAPHICS::InternalVector::~InternalVector(void);
// protected: unsigned int XGRAPHICS::InternalVector::Size(void) const;
// protected: void * XGRAPHICS::InternalVector::operator[](unsigned int);
// protected: void * XGRAPHICS::InternalVector::Lookup(unsigned int) const;
// protected: bool XGRAPHICS::InternalVector::Next(unsigned int, void **) const;
// protected: XGRAPHICS::InternalHashTableIterator::InternalHashTableIterator(class XGRAPHICS::InternalHashTable const *);
// public: static void * XGRAPHICS::DListNode::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: virtual XGRAPHICS::DListNode::~DListNode(void);
// public: static void XGRAPHICS::DListNode::operator delete(void *);
// merged_83E2B120;
// public: XGRAPHICS::DList::~DList(void);
// public: class XGRAPHICS::DListNode * XGRAPHICS::DList::First(void) const;
// public: class XGRAPHICS::DListNode * XGRAPHICS::DList::Last(void) const;
// public: class XGRAPHICS::Block * XGRAPHICS::Block::NextBlock(void);
// public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::Successors(void) const;
// public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::Predecessors(void) const;
// public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::DomChildren(void) const;
// public: class XGRAPHICS::Block * XGRAPHICS::Block::DomParent(void) const;
// public: int XGRAPHICS::Block::GetLoopDepth(void) const;
// public: bool const XGRAPHICS::Block::GetFlag(unsigned int) const;
// public: void XGRAPHICS::Block::SetFlag(unsigned int);
// public: class XGRAPHICS::IfFooter * XGRAPHICS::IfHeader::GetFooter(void) const;
// public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetThen(void) const;
// public: void XGRAPHICS::IfHeader::SetElse(class XGRAPHICS::Block *);
// public: int XGRAPHICS::Block::NumInstructions(void) const;
// bool R400Tables::R400_Vector(enum R400Tables::Op);
// bool R400Tables::R400_Projection(enum R400Tables::Op);
// public: void XGRAPHICS::CFG::CollapseMemAllocInstructions(void);
// public: int const XGRAPHICS::CFG::NumBlocks(void) const;
// public: static void * XGRAPHICS::VFetchGroup::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::VFetchGroupMap::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: int XGRAPHICS::Compiler::GetNextTempNumber(void);
// public: bool XGRAPHICS::Compiler::GetEnableMultipassExport(void);
// public: void XGRAPHICS::Compiler::SetCFG(class XGRAPHICS::CFG *);
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::operator delete(void *);
// public: XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Vector<class XGRAPHICS::IRInst *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::~Vector<class XGRAPHICS::IRInst *>(void);
// public: bool XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Next(unsigned int, class XGRAPHICS::IRInst **) const;
// public: class XGRAPHICS::IRInst *& XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::operator[](unsigned int);
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Size(void) const;
// public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::push_back(class XGRAPHICS::IRInst *const &);
// public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::remove(unsigned int);
// public: static void * XGRAPHICS::Dominator::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void * XGRAPHICS::stack<class XGRAPHICS::Block *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<class XGRAPHICS::Block *>::stack<class XGRAPHICS::Block *>(class XGRAPHICS::Arena const *);
// public: int XGRAPHICS::stack<class XGRAPHICS::Block *>::Size(void) const;
// public: static void XGRAPHICS::Dominator::operator delete(void *);
// public: void XGRAPHICS::stack<class XGRAPHICS::Block *>::Push(class XGRAPHICS::Block *);
// public: class XGRAPHICS::Block * XGRAPHICS::stack<class XGRAPHICS::Block *>::Pop(void);
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::Block *>::Vector<class XGRAPHICS::Block *>(class XGRAPHICS::Arena const *);
// public: bool XGRAPHICS::Vector<class XGRAPHICS::Block *>::Next(unsigned int, class XGRAPHICS::Block **) const;
// public: class XGRAPHICS::Block *& XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator[](unsigned int);
// public: bool XGRAPHICS::SwizzleOrMaskInfo::operator==(union XGRAPHICS::SwizzleOrMaskInfo const &) const;
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Block *>::Size(void) const;
// public: bool XGRAPHICS::SwizzleOrMaskInfo::operator!=(union XGRAPHICS::SwizzleOrMaskInfo const &) const;
// public: void XGRAPHICS::Vector<class XGRAPHICS::Block *>::push_back(class XGRAPHICS::Block *const &);
// public: void XGRAPHICS::Vector<class XGRAPHICS::Block *>::remove(unsigned int);
// public: XGRAPHICS::HashTableIterator<class XGRAPHICS::VRegInfo *>::HashTableIterator<class XGRAPHICS::VRegInfo *>(class XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *> const *);
// public: void XGRAPHICS::HashTableIterator<class XGRAPHICS::VRegInfo *>::Advance(void);
// public: int XGRAPHICS::IRInst::NumOutputs(void) const;
// public: int const XGRAPHICS::IRInst::NumInputs(void) const;
// public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::PrevInBlock(void) const;
// public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::NextInBlock(void) const;
// public: enum R400Tables::Op XGRAPHICS::IRInst::GetOpcode(void) const;
// public: int XGRAPHICS::IRInst::GetOperand(int) const;
// public: union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::IRInst::GetAllModifier(int) const;
// public: class XGRAPHICS::VRegInfo * XGRAPHICS::IRInst::GetVReg(int) const;
// public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::GetParm(int) const;
// public: class XGRAPHICS::Block * XGRAPHICS::IRInst::GetOwningBlock(void) const;
// public: bool XGRAPHICS::IRInst::Visited(int) const;
// public: void XGRAPHICS::IRInst::SetVisited(int);
// public: bool const XGRAPHICS::IRInst::GetFlag(unsigned int) const;
// public: void XGRAPHICS::IRInst::SetFlag(unsigned int);
// public: void XGRAPHICS::IRInst::ResetFlag(unsigned int);
// private: void XGRAPHICS::IRVertexFetch::Putuse_vertex_cache(bool);
// private: void XGRAPHICS::IRVertexFetch::Putproj(class XGRAPHICS::IRProjection *);
// private: void XGRAPHICS::IRVertexFetch::Putnum_dwords(int);
// protected: void XGRAPHICS::IRTextureFetch::Putfetch_constant(int);
// public: void XGRAPHICS::IRCmp1D::Putrel_op(enum R400Tables::RelOp);
// public: void XGRAPHICS::IRAlloc::Putnum_exports(int);
// public: bool const XGRAPHICS::IRInst::Live(void) const;
// public: bool const XGRAPHICS::IRInst::HasPartialWriteInput(void) const;
// public: bool const XGRAPHICS::IRInst::DefIsExport(void) const;
// public: void XGRAPHICS::IRInst::SetOutput(int, enum R400Tables::RegType);
// public: enum R400Tables::RegType XGRAPHICS::IRInst::GetOperandType(int) const;
// public: void XGRAPHICS::IRInst::SetResultClamp(bool);
// public: void XGRAPHICS::IRInst::SetArgNegate(int, bool);
// public: void XGRAPHICS::IRInst::SetArgAbsVal(int, bool);
// public: void XGRAPHICS::IRInst::SetOperandAndType(int, int, enum R400Tables::RegType);
// public: void XGRAPHICS::IRInst::SetAllSwizzle(int, union XGRAPHICS::SwizzleOrMaskInfo);
// public: void XGRAPHICS::IRInst::SetAllMask(int, union XGRAPHICS::SwizzleOrMaskInfo);
// public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::GetPWInput(void);
// public: void XGRAPHICS::IRInst::RemovePWInput(void);
// public: void XGRAPHICS::IRInst::AddResource(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::IRInst::SetParm(int, class XGRAPHICS::IRInst *);
// public: int const XGRAPHICS::VRegInfo::GetUsage(void) const;
// public: int const XGRAPHICS::VRegInfo::GetIndex(void) const;
// public: enum R400Tables::RegType const XGRAPHICS::VRegInfo::GetType(void) const;
// public: class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> * XGRAPHICS::VRegInfo::GetUses(void);
// public: static void * XGRAPHICS::VRegTable::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::VRegTable::operator delete(void *);
// public: void * XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::VRegTable::`scalar deleting destructor'(unsigned int);
// public: void XGRAPHICS::CFG::AddToRootSet(class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::CFG::RemoveFromRootSet(class XGRAPHICS::IRInst *);
// private: void XGRAPHICS::CFG::AddImplicitInputs(void);
// public: void XGRAPHICS::CFG::SetDfOrder(class XGRAPHICS::Block **, unsigned int);
// public: void * XGRAPHICS::Dominator::`scalar deleting destructor'(unsigned int);
// public: class XGRAPHICS::Block ** XGRAPHICS::CFG::GetExecutionOrder(void);
// private: class XGRAPHICS::VRegInfo * XGRAPHICS::CFG::SetUpParamGen(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForTwoSidedLighting(void);
// private: void XGRAPHICS::CFG::BuildUsesAndDefs(class XGRAPHICS::IRInst &);
// public: static class XGRAPHICS::bitset * XGRAPHICS::bitset::MakeBitSet(unsigned int, class XGRAPHICS::Arena const *);
// public: bool XGRAPHICS::CFG::Validate(void) const;
// private: void XGRAPHICS::CFG::InsertInstructionsForVertexFog(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForVertexFogWithBlend(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForWritePixelFogInterps(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForExportVertexFogFactor(void);
// private: void XGRAPHICS::CFG::FixupMultipleConstants(void);
// private: void XGRAPHICS::CFG::MaybeWriteWincoord(void);
// private: void XGRAPHICS::CFG::MaybeExportZAndW(void);
// private: void XGRAPHICS::CFG::MaybeExportEdgeFlags(void);
// private: void XGRAPHICS::CFG::MaybeClampPointSize(class XGRAPHICS::ILInstIterator &);
// private: void XGRAPHICS::CFG::InsertInstructionsForPointSprites(void);
// private: int XGRAPHICS::CFG::NumInstructions(void) const;
// private: void XGRAPHICS::CFG::EnsurePositionExport(void);
// public: void XGRAPHICS::CFG::InsertPosAllocInstruction(void);
// bool XGRAPHICS::DomTest(class XGRAPHICS::IRInst *, class XGRAPHICS::IRAlloc *);
// public: void XGRAPHICS::CFG::InsertICExportInstructions(void);
// public: void XGRAPHICS::CFG::InsertICAllocInstruction(void);
// public: static class XGRAPHICS::LiveSet * XGRAPHICS::LiveSet::MakeLiveSet(unsigned int, class XGRAPHICS::Arena const *);
// public: bool XGRAPHICS::stack<class XGRAPHICS::Block *>::Empty(void) const;
// public: void XGRAPHICS::IRVertexFetch::SetToUseVertexCache(void);
// public: void XGRAPHICS::IRVertexFetch::SetProjection(class XGRAPHICS::IRProjection *);
// public: void XGRAPHICS::IRVertexFetch::SetNumDwordsFetched(int);
// public: void XGRAPHICS::IRTextureFetch::SetTextureFetchConstant(unsigned int);
// public: void XGRAPHICS::IRCmp1D::SetRelOp(enum R400Tables::RelOp);
// public: XGRAPHICS::CFG::CFG(class XGRAPHICS::LinkageInfo &, struct XGRAPHICS::CompAState *, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::CFG::~CFG(void);
// public: class XGRAPHICS::Block ** XGRAPHICS::CFG::GetDfOrder(void);
// public: class XGRAPHICS::Block ** XGRAPHICS::CFG::GetPostOrder(void);
// private: void XGRAPHICS::CFG::PlaceBlocksInReversedPostOrder(void);
// private: void XGRAPHICS::CFG::MaybeExpandTwoSidedLighting(void);
// private: void XGRAPHICS::CFG::MaybeExpandVertexFog(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForPointAA(void);
// private: void XGRAPHICS::CFG::MaybeExportVertexFogFactor(void);
// private: void XGRAPHICS::CFG::MaybeWritePixelFogInterps(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForPixelFog(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForLineAA(void);
// private: void XGRAPHICS::CFG::InsertInstructionsForPolyStipple(void);
// private: void XGRAPHICS::CFG::MaybeExpandPointSprites(void);
// public: void XGRAPHICS::CFG::MarkBlocksForFetchesAndMemexports(void);
// private: void XGRAPHICS::CFG::GroupDeclaredVFetches(void);
// private: void XGRAPHICS::CFG::MaybeExpandPointAA(void);
// private: void XGRAPHICS::CFG::MaybeExpandPixelFog(void);
// private: void XGRAPHICS::CFG::MaybeExpandLineAA(void);
// private: void XGRAPHICS::CFG::MaybeExpandPolyStipple(void);
// public: void XGRAPHICS::CFG::SetUpAllocs(void);
// private: void XGRAPHICS::CFG::MaybeExpandColor(void);
// public: void XGRAPHICS::CFG::InitialInput(class XGRAPHICS::ILInstIterator &);

//public: void XGRAPHICS::CFG::Append(class XGRAPHICS::Block &)
//{
//    mangled_ppc("?Append@CFG@XGRAPHICS@@QAAXAAVBlock@2@@Z");
//};

//public: void XGRAPHICS::CFG::Insert(class XGRAPHICS::Block &)
//{
//    mangled_ppc("?Insert@CFG@XGRAPHICS@@QAAXAAVBlock@2@@Z");
//};

//public: void XGRAPHICS::CFG::InsertAfter(class XGRAPHICS::Block &, class XGRAPHICS::Block &)
//{
//    mangled_ppc("?InsertAfter@CFG@XGRAPHICS@@QAAXAAVBlock@2@0@Z");
//};

//public: void XGRAPHICS::CFG::InsertBefore(class XGRAPHICS::Block &, class XGRAPHICS::Block &)
//{
//    mangled_ppc("?InsertBefore@CFG@XGRAPHICS@@QAAXAAVBlock@2@0@Z");
//};

//public: bool XGRAPHICS::CFG::IsVertexShader(void)
//{
//    mangled_ppc("?IsVertexShader@CFG@XGRAPHICS@@QAA_NXZ");
//};

//private: void XGRAPHICS::CFG::ProcessPixelExports(void)
//{
//    mangled_ppc("?ProcessPixelExports@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: static void XGRAPHICS::bitset::operator delete(void *)
//{
//    mangled_ppc("??3bitset@XGRAPHICS@@SAXPAX@Z");
//};

//public: void XGRAPHICS::CFG::ClearSymbolTable(void)
//{
//    mangled_ppc("?ClearSymbolTable@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::reset(void)
//{
//    mangled_ppc("?reset@bitset@XGRAPHICS@@QAAAAV12@XZ");
//};

//public: class XGRAPHICS::bitset & XGRAPHICS::bitset::set(void)
//{
//    mangled_ppc("?set@bitset@XGRAPHICS@@QAAAAV12@XZ");
//};

//public: void XGRAPHICS::CFG::BuildOutputLinkage(class XGRAPHICS::LinkageInfo &)
//{
//    mangled_ppc("?BuildOutputLinkage@CFG@XGRAPHICS@@QAAXAAVLinkageInfo@2@@Z");
//};

//public: bool XGRAPHICS::CFG::GetEnableParameterGeneration(void)
//{
//    mangled_ppc("?GetEnableParameterGeneration@CFG@XGRAPHICS@@QAA_NXZ");
//};

//public: int XGRAPHICS::CFG::GetParameterGenerationPosition(void)
//{
//    mangled_ppc("?GetParameterGenerationPosition@CFG@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::CFG::GetScreenXYFaceness(void)
//{
//    mangled_ppc("?GetScreenXYFaceness@CFG@XGRAPHICS@@QAA_NXZ");
//};

//protected: XGRAPHICS::InternalVector::InternalVector(class XGRAPHICS::Arena *)
//{
//    mangled_ppc("??0InternalVector@XGRAPHICS@@IAA@PAVArena@1@@Z");
//};

//protected: XGRAPHICS::InternalVector::~InternalVector(void)
//{
//    mangled_ppc("??1InternalVector@XGRAPHICS@@IAA@XZ");
//};

//protected: unsigned int XGRAPHICS::InternalVector::Size(void) const
//{
//    mangled_ppc("?Size@InternalVector@XGRAPHICS@@IBAIXZ");
//};

//protected: void * XGRAPHICS::InternalVector::operator[](unsigned int)
//{
//    mangled_ppc("??AInternalVector@XGRAPHICS@@IAAPAXI@Z");
//};

//protected: void * XGRAPHICS::InternalVector::Lookup(unsigned int) const
//{
//    mangled_ppc("?Lookup@InternalVector@XGRAPHICS@@IBAPAXI@Z");
//};

//protected: bool XGRAPHICS::InternalVector::Next(unsigned int, void **) const
//{
//    mangled_ppc("?Next@InternalVector@XGRAPHICS@@IBA_NIPAPAX@Z");
//};

//protected: XGRAPHICS::InternalHashTableIterator::InternalHashTableIterator(class XGRAPHICS::InternalHashTable const *)
//{
//    mangled_ppc("??0InternalHashTableIterator@XGRAPHICS@@IAA@PBVInternalHashTable@1@@Z");
//};

//public: static void * XGRAPHICS::DListNode::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2DListNode@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: virtual XGRAPHICS::DListNode::~DListNode(void)
//{
//    mangled_ppc("??1DListNode@XGRAPHICS@@UAA@XZ");
//};

//public: static void XGRAPHICS::DListNode::operator delete(void *)
//{
//    mangled_ppc("??3DListNode@XGRAPHICS@@SAXPAX@Z");
//};

//merged_83E2B120
//{
//    mangled_ppc("merged_83E2B120");
//};

//public: XGRAPHICS::DList::~DList(void)
//{
//    mangled_ppc("??1DList@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::DListNode * XGRAPHICS::DList::First(void) const
//{
//    mangled_ppc("?First@DList@XGRAPHICS@@QBAPAVDListNode@2@XZ");
//};

//public: class XGRAPHICS::DListNode * XGRAPHICS::DList::Last(void) const
//{
//    mangled_ppc("?Last@DList@XGRAPHICS@@QBAPAVDListNode@2@XZ");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::Block::NextBlock(void)
//{
//    mangled_ppc("?NextBlock@Block@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::Successors(void) const
//{
//    mangled_ppc("?Successors@Block@XGRAPHICS@@QBAPBV?$Vector@PAVBlock@XGRAPHICS@@@2@XZ");
//};

//public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::Predecessors(void) const
//{
//    mangled_ppc("?Predecessors@Block@XGRAPHICS@@QBAPBV?$Vector@PAVBlock@XGRAPHICS@@@2@XZ");
//};

//public: class XGRAPHICS::Vector<class XGRAPHICS::Block *> const * XGRAPHICS::Block::DomChildren(void) const
//{
//    mangled_ppc("?DomChildren@Block@XGRAPHICS@@QBAPBV?$Vector@PAVBlock@XGRAPHICS@@@2@XZ");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::Block::DomParent(void) const
//{
//    mangled_ppc("?DomParent@Block@XGRAPHICS@@QBAPAV12@XZ");
//};

//public: int XGRAPHICS::Block::GetLoopDepth(void) const
//{
//    mangled_ppc("?GetLoopDepth@Block@XGRAPHICS@@QBAHXZ");
//};

//public: bool const XGRAPHICS::Block::GetFlag(unsigned int) const
//{
//    mangled_ppc("?GetFlag@Block@XGRAPHICS@@QBA?B_NI@Z");
//};

//public: void XGRAPHICS::Block::SetFlag(unsigned int)
//{
//    mangled_ppc("?SetFlag@Block@XGRAPHICS@@QAAXI@Z");
//};

//public: class XGRAPHICS::IfFooter * XGRAPHICS::IfHeader::GetFooter(void) const
//{
//    mangled_ppc("?GetFooter@IfHeader@XGRAPHICS@@QBAPAVIfFooter@2@XZ");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetThen(void) const
//{
//    mangled_ppc("?GetThen@IfHeader@XGRAPHICS@@QBAPAVBlock@2@XZ");
//};

//public: void XGRAPHICS::IfHeader::SetElse(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?SetElse@IfHeader@XGRAPHICS@@QAAXPAVBlock@2@@Z");
//};

//public: int XGRAPHICS::Block::NumInstructions(void) const
//{
//    mangled_ppc("?NumInstructions@Block@XGRAPHICS@@QBAHXZ");
//};

//bool R400Tables::R400_Vector(enum R400Tables::Op)
//{
//    mangled_ppc("?R400_Vector@R400Tables@@YA_NW4Op@1@@Z");
//};

//bool R400Tables::R400_Projection(enum R400Tables::Op)
//{
//    mangled_ppc("?R400_Projection@R400Tables@@YA_NW4Op@1@@Z");
//};

//public: void XGRAPHICS::CFG::CollapseMemAllocInstructions(void)
//{
//    mangled_ppc("?CollapseMemAllocInstructions@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: int const XGRAPHICS::CFG::NumBlocks(void) const
//{
//    mangled_ppc("?NumBlocks@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: static void * XGRAPHICS::VFetchGroup::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2VFetchGroup@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::VFetchGroupMap::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2VFetchGroupMap@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: int XGRAPHICS::Compiler::GetNextTempNumber(void)
//{
//    mangled_ppc("?GetNextTempNumber@Compiler@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::Compiler::GetEnableMultipassExport(void)
//{
//    mangled_ppc("?GetEnableMultipassExport@Compiler@XGRAPHICS@@QAA_NXZ");
//};

//public: void XGRAPHICS::Compiler::SetCFG(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?SetCFG@Compiler@XGRAPHICS@@QAAXPAVCFG@2@@Z");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::operator delete(void *)
//{
//    mangled_ppc("??3?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Vector<class XGRAPHICS::IRInst *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::~Vector<class XGRAPHICS::IRInst *>(void)
//{
//    mangled_ppc("??1?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: bool XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Next(unsigned int, class XGRAPHICS::IRInst **) const
//{
//    mangled_ppc("?Next@?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QBA_NIPAPAVIRInst@2@@Z");
//};

//public: class XGRAPHICS::IRInst *& XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVIRInst@1@I@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::push_back(class XGRAPHICS::IRInst *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::remove(unsigned int)
//{
//    mangled_ppc("?remove@?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXI@Z");
//};

//public: static void * XGRAPHICS::Dominator::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2Dominator@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void * XGRAPHICS::stack<class XGRAPHICS::Block *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::Block *>::stack<class XGRAPHICS::Block *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: int XGRAPHICS::stack<class XGRAPHICS::Block *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: static void XGRAPHICS::Dominator::operator delete(void *)
//{
//    mangled_ppc("??3Dominator@XGRAPHICS@@SAXPAX@Z");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::Block *>::Push(class XGRAPHICS::Block *)
//{
//    mangled_ppc("?Push@?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAAXPAVBlock@2@@Z");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::stack<class XGRAPHICS::Block *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAAPAVBlock@2@XZ");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::Block *>::Vector<class XGRAPHICS::Block *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: bool XGRAPHICS::Vector<class XGRAPHICS::Block *>::Next(unsigned int, class XGRAPHICS::Block **) const
//{
//    mangled_ppc("?Next@?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QBA_NIPAPAVBlock@2@@Z");
//};

//public: class XGRAPHICS::Block *& XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVBlock@1@I@Z");
//};

//public: bool XGRAPHICS::SwizzleOrMaskInfo::operator==(union XGRAPHICS::SwizzleOrMaskInfo const &) const
//{
//    mangled_ppc("??8SwizzleOrMaskInfo@XGRAPHICS@@QBA_NABT01@@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Block *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: bool XGRAPHICS::SwizzleOrMaskInfo::operator!=(union XGRAPHICS::SwizzleOrMaskInfo const &) const
//{
//    mangled_ppc("??9SwizzleOrMaskInfo@XGRAPHICS@@QBA_NABT01@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::Block *>::push_back(class XGRAPHICS::Block *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVBlock@2@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::Block *>::remove(unsigned int)
//{
//    mangled_ppc("?remove@?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QAAXI@Z");
//};

//public: XGRAPHICS::HashTableIterator<class XGRAPHICS::VRegInfo *>::HashTableIterator<class XGRAPHICS::VRegInfo *>(class XGRAPHICS::HashTable<class XGRAPHICS::VRegInfo *> const *)
//{
//    mangled_ppc("??0?$HashTableIterator@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAA@PBV?$HashTable@PAVVRegInfo@XGRAPHICS@@@1@@Z");
//};

//public: void XGRAPHICS::HashTableIterator<class XGRAPHICS::VRegInfo *>::Advance(void)
//{
//    mangled_ppc("?Advance@?$HashTableIterator@PAVVRegInfo@XGRAPHICS@@@XGRAPHICS@@QAAXXZ");
//};

//public: int XGRAPHICS::IRInst::NumOutputs(void) const
//{
//    mangled_ppc("?NumOutputs@IRInst@XGRAPHICS@@QBAHXZ");
//};

//public: int const XGRAPHICS::IRInst::NumInputs(void) const
//{
//    mangled_ppc("?NumInputs@IRInst@XGRAPHICS@@QBA?BHXZ");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::PrevInBlock(void) const
//{
//    mangled_ppc("?PrevInBlock@IRInst@XGRAPHICS@@QBAPAV12@XZ");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::NextInBlock(void) const
//{
//    mangled_ppc("?NextInBlock@IRInst@XGRAPHICS@@QBAPAV12@XZ");
//};

//public: enum R400Tables::Op XGRAPHICS::IRInst::GetOpcode(void) const
//{
//    mangled_ppc("?GetOpcode@IRInst@XGRAPHICS@@QBA?AW4Op@R400Tables@@XZ");
//};

//public: int XGRAPHICS::IRInst::GetOperand(int) const
//{
//    mangled_ppc("?GetOperand@IRInst@XGRAPHICS@@QBAHH@Z");
//};

//public: union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::IRInst::GetAllModifier(int) const
//{
//    mangled_ppc("?GetAllModifier@IRInst@XGRAPHICS@@QBA?ATSwizzleOrMaskInfo@2@H@Z");
//};

//public: class XGRAPHICS::VRegInfo * XGRAPHICS::IRInst::GetVReg(int) const
//{
//    mangled_ppc("?GetVReg@IRInst@XGRAPHICS@@QBAPAVVRegInfo@2@H@Z");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::GetParm(int) const
//{
//    mangled_ppc("?GetParm@IRInst@XGRAPHICS@@QBAPAV12@H@Z");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::IRInst::GetOwningBlock(void) const
//{
//    mangled_ppc("?GetOwningBlock@IRInst@XGRAPHICS@@QBAPAVBlock@2@XZ");
//};

//public: bool XGRAPHICS::IRInst::Visited(int) const
//{
//    mangled_ppc("?Visited@IRInst@XGRAPHICS@@QBA_NH@Z");
//};

//public: void XGRAPHICS::IRInst::SetVisited(int)
//{
//    mangled_ppc("?SetVisited@IRInst@XGRAPHICS@@QAAXH@Z");
//};

//public: bool const XGRAPHICS::IRInst::GetFlag(unsigned int) const
//{
//    mangled_ppc("?GetFlag@IRInst@XGRAPHICS@@QBA?B_NI@Z");
//};

//public: void XGRAPHICS::IRInst::SetFlag(unsigned int)
//{
//    mangled_ppc("?SetFlag@IRInst@XGRAPHICS@@QAAXI@Z");
//};

//public: void XGRAPHICS::IRInst::ResetFlag(unsigned int)
//{
//    mangled_ppc("?ResetFlag@IRInst@XGRAPHICS@@QAAXI@Z");
//};

//private: void XGRAPHICS::IRVertexFetch::Putuse_vertex_cache(bool)
//{
//    mangled_ppc("?Putuse_vertex_cache@IRVertexFetch@XGRAPHICS@@AAAX_N@Z");
//};

//private: void XGRAPHICS::IRVertexFetch::Putproj(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?Putproj@IRVertexFetch@XGRAPHICS@@AAAXPAVIRProjection@2@@Z");
//};

//private: void XGRAPHICS::IRVertexFetch::Putnum_dwords(int)
//{
//    mangled_ppc("?Putnum_dwords@IRVertexFetch@XGRAPHICS@@AAAXH@Z");
//};

//protected: void XGRAPHICS::IRTextureFetch::Putfetch_constant(int)
//{
//    mangled_ppc("?Putfetch_constant@IRTextureFetch@XGRAPHICS@@IAAXH@Z");
//};

//public: void XGRAPHICS::IRCmp1D::Putrel_op(enum R400Tables::RelOp)
//{
//    mangled_ppc("?Putrel_op@IRCmp1D@XGRAPHICS@@QAAXW4RelOp@R400Tables@@@Z");
//};

//public: void XGRAPHICS::IRAlloc::Putnum_exports(int)
//{
//    mangled_ppc("?Putnum_exports@IRAlloc@XGRAPHICS@@QAAXH@Z");
//};

//public: bool const XGRAPHICS::IRInst::Live(void) const
//{
//    mangled_ppc("?Live@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool const XGRAPHICS::IRInst::HasPartialWriteInput(void) const
//{
//    mangled_ppc("?HasPartialWriteInput@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool const XGRAPHICS::IRInst::DefIsExport(void) const
//{
//    mangled_ppc("?DefIsExport@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: void XGRAPHICS::IRInst::SetOutput(int, enum R400Tables::RegType)
//{
//    mangled_ppc("?SetOutput@IRInst@XGRAPHICS@@QAAXHW4RegType@R400Tables@@@Z");
//};

//public: enum R400Tables::RegType XGRAPHICS::IRInst::GetOperandType(int) const
//{
//    mangled_ppc("?GetOperandType@IRInst@XGRAPHICS@@QBA?AW4RegType@R400Tables@@H@Z");
//};

//public: void XGRAPHICS::IRInst::SetResultClamp(bool)
//{
//    mangled_ppc("?SetResultClamp@IRInst@XGRAPHICS@@QAAX_N@Z");
//};

//public: void XGRAPHICS::IRInst::SetArgNegate(int, bool)
//{
//    mangled_ppc("?SetArgNegate@IRInst@XGRAPHICS@@QAAXH_N@Z");
//};

//public: void XGRAPHICS::IRInst::SetArgAbsVal(int, bool)
//{
//    mangled_ppc("?SetArgAbsVal@IRInst@XGRAPHICS@@QAAXH_N@Z");
//};

//public: void XGRAPHICS::IRInst::SetOperandAndType(int, int, enum R400Tables::RegType)
//{
//    mangled_ppc("?SetOperandAndType@IRInst@XGRAPHICS@@QAAXHHW4RegType@R400Tables@@@Z");
//};

//public: void XGRAPHICS::IRInst::SetAllSwizzle(int, union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?SetAllSwizzle@IRInst@XGRAPHICS@@QAAXHTSwizzleOrMaskInfo@2@@Z");
//};

//public: void XGRAPHICS::IRInst::SetAllMask(int, union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?SetAllMask@IRInst@XGRAPHICS@@QAAXHTSwizzleOrMaskInfo@2@@Z");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::GetPWInput(void)
//{
//    mangled_ppc("?GetPWInput@IRInst@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: void XGRAPHICS::IRInst::RemovePWInput(void)
//{
//    mangled_ppc("?RemovePWInput@IRInst@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::IRInst::AddResource(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?AddResource@IRInst@XGRAPHICS@@QAAXPAV12@@Z");
//};

//public: void XGRAPHICS::IRInst::SetParm(int, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?SetParm@IRInst@XGRAPHICS@@QAAXHPAV12@@Z");
//};

//public: int const XGRAPHICS::VRegInfo::GetUsage(void) const
//{
//    mangled_ppc("?GetUsage@VRegInfo@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::VRegInfo::GetIndex(void) const
//{
//    mangled_ppc("?GetIndex@VRegInfo@XGRAPHICS@@QBA?BHXZ");
//};

//public: enum R400Tables::RegType const XGRAPHICS::VRegInfo::GetType(void) const
//{
//    mangled_ppc("?GetType@VRegInfo@XGRAPHICS@@QBA?BW4RegType@R400Tables@@XZ");
//};

//public: class XGRAPHICS::Vector<class XGRAPHICS::IRInst *> * XGRAPHICS::VRegInfo::GetUses(void)
//{
//    mangled_ppc("?GetUses@VRegInfo@XGRAPHICS@@QAAPAV?$Vector@PAVIRInst@XGRAPHICS@@@2@XZ");
//};

//public: static void * XGRAPHICS::VRegTable::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2VRegTable@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::VRegTable::operator delete(void *)
//{
//    mangled_ppc("??3VRegTable@XGRAPHICS@@SAXPAX@Z");
//};

//public: void * XGRAPHICS::Vector<class XGRAPHICS::IRInst *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$Vector@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::VRegTable::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GVRegTable@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void XGRAPHICS::CFG::AddToRootSet(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?AddToRootSet@CFG@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::CFG::RemoveFromRootSet(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?RemoveFromRootSet@CFG@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//private: void XGRAPHICS::CFG::AddImplicitInputs(void)
//{
//    mangled_ppc("?AddImplicitInputs@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::SetDfOrder(class XGRAPHICS::Block **, unsigned int)
//{
//    mangled_ppc("?SetDfOrder@CFG@XGRAPHICS@@QAAXPAPAVBlock@2@I@Z");
//};

//public: void * XGRAPHICS::Dominator::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GDominator@XGRAPHICS@@QAAPAXI@Z");
//};

//public: class XGRAPHICS::Block ** XGRAPHICS::CFG::GetExecutionOrder(void)
//{
//    mangled_ppc("?GetExecutionOrder@CFG@XGRAPHICS@@QAAPAPAVBlock@2@XZ");
//};

//private: class XGRAPHICS::VRegInfo * XGRAPHICS::CFG::SetUpParamGen(void)
//{
//    mangled_ppc("?SetUpParamGen@CFG@XGRAPHICS@@AAAPAVVRegInfo@2@XZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForTwoSidedLighting(void)
//{
//    mangled_ppc("?InsertInstructionsForTwoSidedLighting@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::BuildUsesAndDefs(class XGRAPHICS::IRInst &)
//{
//    mangled_ppc("?BuildUsesAndDefs@CFG@XGRAPHICS@@AAAXAAVIRInst@2@@Z");
//};

//public: static class XGRAPHICS::bitset * XGRAPHICS::bitset::MakeBitSet(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("?MakeBitSet@bitset@XGRAPHICS@@SAPAV12@IPBVArena@2@@Z");
//};

//public: bool XGRAPHICS::CFG::Validate(void) const
//{
//    mangled_ppc("?Validate@CFG@XGRAPHICS@@QBA_NXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForVertexFog(void)
//{
//    mangled_ppc("?InsertInstructionsForVertexFog@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForVertexFogWithBlend(void)
//{
//    mangled_ppc("?InsertInstructionsForVertexFogWithBlend@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForWritePixelFogInterps(void)
//{
//    mangled_ppc("?InsertInstructionsForWritePixelFogInterps@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForExportVertexFogFactor(void)
//{
//    mangled_ppc("?InsertInstructionsForExportVertexFogFactor@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::FixupMultipleConstants(void)
//{
//    mangled_ppc("?FixupMultipleConstants@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeWriteWincoord(void)
//{
//    mangled_ppc("?MaybeWriteWincoord@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExportZAndW(void)
//{
//    mangled_ppc("?MaybeExportZAndW@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExportEdgeFlags(void)
//{
//    mangled_ppc("?MaybeExportEdgeFlags@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeClampPointSize(class XGRAPHICS::ILInstIterator &)
//{
//    mangled_ppc("?MaybeClampPointSize@CFG@XGRAPHICS@@AAAXAAVILInstIterator@2@@Z");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForPointSprites(void)
//{
//    mangled_ppc("?InsertInstructionsForPointSprites@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: int XGRAPHICS::CFG::NumInstructions(void) const
//{
//    mangled_ppc("?NumInstructions@CFG@XGRAPHICS@@ABAHXZ");
//};

//private: void XGRAPHICS::CFG::EnsurePositionExport(void)
//{
//    mangled_ppc("?EnsurePositionExport@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::InsertPosAllocInstruction(void)
//{
//    mangled_ppc("?InsertPosAllocInstruction@CFG@XGRAPHICS@@QAAXXZ");
//};

//bool XGRAPHICS::DomTest(class XGRAPHICS::IRInst *, class XGRAPHICS::IRAlloc *)
//{
//    mangled_ppc("?DomTest@XGRAPHICS@@YA_NPAVIRInst@1@PAVIRAlloc@1@@Z");
//};

//public: void XGRAPHICS::CFG::InsertICExportInstructions(void)
//{
//    mangled_ppc("?InsertICExportInstructions@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::CFG::InsertICAllocInstruction(void)
//{
//    mangled_ppc("?InsertICAllocInstruction@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: static class XGRAPHICS::LiveSet * XGRAPHICS::LiveSet::MakeLiveSet(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("?MakeLiveSet@LiveSet@XGRAPHICS@@SAPAV12@IPBVArena@2@@Z");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::Block *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::IRVertexFetch::SetToUseVertexCache(void)
//{
//    mangled_ppc("?SetToUseVertexCache@IRVertexFetch@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::IRVertexFetch::SetProjection(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?SetProjection@IRVertexFetch@XGRAPHICS@@QAAXPAVIRProjection@2@@Z");
//};

//public: void XGRAPHICS::IRVertexFetch::SetNumDwordsFetched(int)
//{
//    mangled_ppc("?SetNumDwordsFetched@IRVertexFetch@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::SetTextureFetchConstant(unsigned int)
//{
//    mangled_ppc("?SetTextureFetchConstant@IRTextureFetch@XGRAPHICS@@QAAXI@Z");
//};

//public: void XGRAPHICS::IRCmp1D::SetRelOp(enum R400Tables::RelOp)
//{
//    mangled_ppc("?SetRelOp@IRCmp1D@XGRAPHICS@@QAAXW4RelOp@R400Tables@@@Z");
//};

//public: XGRAPHICS::CFG::CFG(class XGRAPHICS::LinkageInfo &, struct XGRAPHICS::CompAState *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0CFG@XGRAPHICS@@QAA@AAVLinkageInfo@1@PAUCompAState@1@PAVCompiler@1@@Z");
//};

//public: XGRAPHICS::CFG::~CFG(void)
//{
//    mangled_ppc("??1CFG@XGRAPHICS@@QAA@XZ");
//};

//public: class XGRAPHICS::Block ** XGRAPHICS::CFG::GetDfOrder(void)
//{
//    mangled_ppc("?GetDfOrder@CFG@XGRAPHICS@@QAAPAPAVBlock@2@XZ");
//};

//public: class XGRAPHICS::Block ** XGRAPHICS::CFG::GetPostOrder(void)
//{
//    mangled_ppc("?GetPostOrder@CFG@XGRAPHICS@@QAAPAPAVBlock@2@XZ");
//};

//private: void XGRAPHICS::CFG::PlaceBlocksInReversedPostOrder(void)
//{
//    mangled_ppc("?PlaceBlocksInReversedPostOrder@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandTwoSidedLighting(void)
//{
//    mangled_ppc("?MaybeExpandTwoSidedLighting@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandVertexFog(void)
//{
//    mangled_ppc("?MaybeExpandVertexFog@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForPointAA(void)
//{
//    mangled_ppc("?InsertInstructionsForPointAA@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExportVertexFogFactor(void)
//{
//    mangled_ppc("?MaybeExportVertexFogFactor@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeWritePixelFogInterps(void)
//{
//    mangled_ppc("?MaybeWritePixelFogInterps@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForPixelFog(void)
//{
//    mangled_ppc("?InsertInstructionsForPixelFog@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForLineAA(void)
//{
//    mangled_ppc("?InsertInstructionsForLineAA@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::InsertInstructionsForPolyStipple(void)
//{
//    mangled_ppc("?InsertInstructionsForPolyStipple@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandPointSprites(void)
//{
//    mangled_ppc("?MaybeExpandPointSprites@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::MarkBlocksForFetchesAndMemexports(void)
//{
//    mangled_ppc("?MarkBlocksForFetchesAndMemexports@CFG@XGRAPHICS@@QAAXXZ");
//};

//private: void XGRAPHICS::CFG::GroupDeclaredVFetches(void)
//{
//    mangled_ppc("?GroupDeclaredVFetches@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandPointAA(void)
//{
//    mangled_ppc("?MaybeExpandPointAA@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandPixelFog(void)
//{
//    mangled_ppc("?MaybeExpandPixelFog@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandLineAA(void)
//{
//    mangled_ppc("?MaybeExpandLineAA@CFG@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandPolyStipple(void)
//{
//    mangled_ppc("?MaybeExpandPolyStipple@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::SetUpAllocs(void)
//{
//    mangled_ppc("?SetUpAllocs@CFG@XGRAPHICS@@QAAXXZ");
//};

//private: void XGRAPHICS::CFG::MaybeExpandColor(void)
//{
//    mangled_ppc("?MaybeExpandColor@CFG@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::CFG::InitialInput(class XGRAPHICS::ILInstIterator &)
//{
//    mangled_ppc("?InitialInput@CFG@XGRAPHICS@@QAAXAAVILInstIterator@2@@Z");
//};

