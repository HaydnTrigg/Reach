/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void XGRAPHICS::CFG::AssemblerStats(class XGRAPHICS::Assembler &);
// public: void XGRAPHICS::Assembler::EmitExec_base(unsigned int, unsigned int, int, int);
// public: void XGRAPHICS::Assembler::EmitExec(unsigned int, unsigned int, int);
// public: void XGRAPHICS::Assembler::EmitAlloc(int, int);
// public: void XGRAPHICS::Assembler::EmitCfNop(void);
// private: void XGRAPHICS::Assembler::FillNop(void);
// int XGRAPHICS::SwizzlePermute(int, int, int);
// public: int XGRAPHICS::IRExport::ExportBuffer(void) const;
// bool R400Tables::R400_CanCoissue(enum R400Tables::Op);
// bool R400Tables::R400_Scalar(enum R400Tables::Op);
// int XGRAPHICS::VFetchDstModifierToDstSel(int);
// int XGRAPHICS::TFetchDstModifierToDstSel(int, int);
// public: class XGRAPHICS::CFG * XGRAPHICS::Compiler::GetCFG(void) const;
// public: static void * XGRAPHICS::DListNode::operator new(unsigned int, void *);
// public: int const XGRAPHICS::CFG::GetNumPosExp(void) const;
// public: int const XGRAPHICS::CFG::GetVertexArrayBaseDelta(void) const;
// public: int const XGRAPHICS::CFG::GetInterpArrayBaseDelta(void) const;
// public: void XGRAPHICS::CFG::SetFirstInstIsFetch(void);
// public: int XGRAPHICS::CFG::GetLastColorExport(void);
// public: class XGRAPHICS::IRExport * XGRAPHICS::CFG::GetDepthExportInstruction(void);
// public: void XGRAPHICS::Assembler::RecordIr(class XGRAPHICS::IRInst *, char *);
// public: bool XGRAPHICS::SwizzleOrMaskInfo::operator^(union XGRAPHICS::SwizzleOrMaskInfo const &);
// public: virtual void XGRAPHICS::IREndMakeCall::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::Assembler::EmitCall(int);
// public: void XGRAPHICS::SwizzleOrMaskInfo::Invert(void);
// public: void XGRAPHICS::Assembler::EmitRet(void);
// public: void XGRAPHICS::SwizzleOrMaskInfo::Blend(union XGRAPHICS::SwizzleOrMaskInfo const &);
// public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Patch *>::Size(void) const;
// public: static void * XGRAPHICS::stack<enum R400Tables::Predicate>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: unsigned int XGRAPHICS::SwizzleOrMaskInfo::U32All(void);
// public: static void XGRAPHICS::stack<enum R400Tables::Predicate>::operator delete(void *);
// public: XGRAPHICS::stack<enum R400Tables::Predicate>::stack<enum R400Tables::Predicate>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<enum R400Tables::Predicate>::~stack<enum R400Tables::Predicate>(void);
// public: int XGRAPHICS::stack<enum R400Tables::Predicate>::Size(void) const;
// public: enum R400Tables::Predicate & XGRAPHICS::stack<enum R400Tables::Predicate>::Top(void);
// public: void XGRAPHICS::stack<enum R400Tables::Predicate>::Push(enum R400Tables::Predicate);
// public: enum R400Tables::Predicate XGRAPHICS::stack<enum R400Tables::Predicate>::Pop(void);
// public: class XGRAPHICS::Block *& XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator[](unsigned int) const;
// public: static void * XGRAPHICS::stack<class XGRAPHICS::IRInst *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<class XGRAPHICS::IRInst *>::operator delete(void *);
// public: XGRAPHICS::stack<class XGRAPHICS::IRInst *>::stack<class XGRAPHICS::IRInst *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<class XGRAPHICS::IRInst *>::~stack<class XGRAPHICS::IRInst *>(void);
// public: int XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Size(void) const;
// public: void XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Push(class XGRAPHICS::IRInst *);
// public: class XGRAPHICS::IRInst * XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Pop(void);
// public: static void * XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::operator delete(void *);
// public: XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::stack<struct XGRAPHICS::cfCJmpFormat *>(class XGRAPHICS::Arena const *);
// public: enum R400Tables::Predicate XGRAPHICS::IRInst::GetPredicate(void) const;
// public: XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::~stack<struct XGRAPHICS::cfCJmpFormat *>(void);
// public: void XGRAPHICS::IRInst::SetPredicate(enum R400Tables::Predicate);
// public: static void * XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: bool XGRAPHICS::IRInst::GetResultClamp(void) const;
// public: static void XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::operator delete(void *);
// public: bool XGRAPHICS::IRInst::GetArgNegate(int) const;
// public: XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::stack<struct XGRAPHICS::cfLoopStartFormat *>(class XGRAPHICS::Arena const *);
// public: bool XGRAPHICS::IRInst::GetArgAbsVal(int) const;
// public: XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::~stack<struct XGRAPHICS::cfLoopStartFormat *>(void);
// public: static void * XGRAPHICS::stack<int>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<int>::operator delete(void *);
// public: XGRAPHICS::stack<int>::stack<int>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<int>::~stack<int>(void);
// public: union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::IRInst::GetKonstantKorection(void) const;
// public: int XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::Size(void) const;
// public: int XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::Size(void) const;
// public: int XGRAPHICS::stack<int>::Size(void) const;
// public: int const XGRAPHICS::IRStartCallRoutine::Getcallblock(void) const;
// public: int const XGRAPHICS::IRStartCallRoutine::Getsize(void) const;
// private: int const XGRAPHICS::IRStartMakeCall::Getcallblock(void) const;
// private: int const XGRAPHICS::IRStartMakeCall::Getsize(void) const;
// private: unsigned int const XGRAPHICS::IRVertexFetch::Getdword_position(void) const;
// private: unsigned int const XGRAPHICS::IRVertexFetch::Getvertex_element(void) const;
// private: bool const XGRAPHICS::IRVertexFetch::Getuse_vertex_cache(void) const;
// private: class XGRAPHICS::IRProjection * XGRAPHICS::IRVertexFetch::Getproj(void) const;
// private: int const XGRAPHICS::IRVertexFetch::Getnum_dwords(void) const;
// public: int const XGRAPHICS::IRTextureFetch::Gettexture_stage(void) const;
// public: struct XGRAPHICS::texld_fields * XGRAPHICS::IRTextureFetch::Getfields(void) const;
// protected: int const XGRAPHICS::IRTextureFetch::Getfetch_constant(void) const;
// protected: int const XGRAPHICS::IRTextureFetch::Gettx_coord_norm(void) const;
// protected: bool const XGRAPHICS::IRCJmp::GetbTakenCondition(void) const;
// public: enum R400Tables::RelOp const XGRAPHICS::IRCmp1D::Getrel_op(void) const;
// private: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill::Getgpr_proj(void) const;
// private: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill2::Getgpr_proj(void) const;
// private: class XGRAPHICS::IRProjection * XGRAPHICS::IRMovBase::Getaddr_proj(void) const;
// public: int const XGRAPHICS::IRAlloc::Getnum_exports(void) const;
// public: bool const XGRAPHICS::IRInst::IsScalar(void) const;
// public: bool const XGRAPHICS::IRInst::IsVector(void) const;
// public: bool const XGRAPHICS::IRInst::TerminatesExecGroup(void) const;
// public: bool const XGRAPHICS::IRInst::DefIsVirtual(void) const;
// public: void XGRAPHICS::IRInst::SetDefIsVirtual(bool);
// public: bool const XGRAPHICS::IRInst::DefIsRegister(void) const;
// public: bool XGRAPHICS::IRInst::ArgIsConst(int) const;
// public: bool XGRAPHICS::IRInst::DefIsDead(void) const;
// public: bool XGRAPHICS::IRInst::IsUse(int) const;
// public: bool XGRAPHICS::IRInst::HasLiteralWrites(void) const;
// public: void XGRAPHICS::cfExecFormat::MarkLast(void);
// public: void XGRAPHICS::cfLoopStartFormat::SetJumpAddress(int);
// public: void XGRAPHICS::cfCJmpFormat::SetJumpAddress(int);
// public: bool const XGRAPHICS::cfCJmpFormat::GetFWOnly(void);
// public: static void * XGRAPHICS::Patch::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Patch::Patch(void);
// public: void XGRAPHICS::Assembler::MarkLast(void);
// public: class XGRAPHICS::IRInst * XGRAPHICS::Assembler::GetPrdStackRegIniter(void);
// public: int XGRAPHICS::Assembler::GetPWReg(void);
// public: int XGRAPHICS::Assembler::GetCmpReg(void);
// public: int XGRAPHICS::LoopHeader::GetLoopId(void);
// public: bool XGRAPHICS::LoopHeader::HasContinue(void);
// public: bool XGRAPHICS::LoopHeader::HasBreak(void);
// public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetElse(void) const;
// public: bool XGRAPHICS::IfHeader::IsInner(void);
// public: bool XGRAPHICS::Block::HasInstructions(void) const;
// public: static void * XGRAPHICS::Vector<class XGRAPHICS::Patch *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: XGRAPHICS::Vector<class XGRAPHICS::Patch *>::Vector<class XGRAPHICS::Patch *>(class XGRAPHICS::Arena const *);
// public: class XGRAPHICS::Patch *& XGRAPHICS::Vector<class XGRAPHICS::Patch *>::operator[](unsigned int);
// public: void XGRAPHICS::Assembler::FinishUp(void);
// public: void XGRAPHICS::Assembler::OutputPatches(int);
// public: bool XGRAPHICS::IfHeader::IsHeadOfConditionalBreak(bool &);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMov::MakePWCopy(class XGRAPHICS::IRInst *, int, class XGRAPHICS::IRInst *, class XGRAPHICS::Compiler *);
// class XGRAPHICS::IRInst * XGRAPHICS::MakePWCorrection(class XGRAPHICS::IRInst *, int, class XGRAPHICS::IRInst *, class XGRAPHICS::Compiler *);
// public: bool XGRAPHICS::IRInst::IsPWInput(int) const;
// public: void XGRAPHICS::Assembler::ProcessPartialWrites(class XGRAPHICS::DList &, class XGRAPHICS::IRInst *&);
// public: void XGRAPHICS::Assembler::AssignPredicates(class XGRAPHICS::DList const &, enum R400Tables::Predicate);
// public: XGRAPHICS::Assembler::Assembler(class XGRAPHICS::CFG *);
// public: void * XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<int>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<class XGRAPHICS::IRInst *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<enum R400Tables::Predicate>::`scalar deleting destructor'(unsigned int);
// private: bool XGRAPHICS::Assembler::NeedAlloc(enum R400Tables::RegType);
// private: class XGRAPHICS::IRInst * XGRAPHICS::Assembler::ReplaceLit(class XGRAPHICS::IRInst *);
// void XGRAPHICS::KorrectSwizzle(class XGRAPHICS::IRInst *, int);
// protected: void XGRAPHICS::IRAlu::AssembleSrcRegConst(char *, int, int);
// protected: void XGRAPHICS::IRAlu::AssembleDest(char *);
// public: int XGRAPHICS::IRExport::ExportSize(class XGRAPHICS::CFG *) const;
// public: virtual void XGRAPHICS::IRTextureFetch::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// unsigned int XGRAPHICS::IrMaskToHwMask(union XGRAPHICS::SwizzleOrMaskInfo);
// unsigned int XGRAPHICS::IrSwizzleToHwSwizzle(union XGRAPHICS::SwizzleOrMaskInfo);
// public: virtual void XGRAPHICS::IRStartCallRoutine::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IREndCallRoutine::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRStartMakeCall::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::Push(struct XGRAPHICS::cfCJmpFormat *);
// public: struct XGRAPHICS::cfCJmpFormat * XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::Pop(void);
// public: void XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::Push(struct XGRAPHICS::cfLoopStartFormat *);
// public: struct XGRAPHICS::cfLoopStartFormat * XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::Pop(void);
// public: void XGRAPHICS::stack<int>::Push(int);
// public: int XGRAPHICS::stack<int>::Pop(void);
// public: bool XGRAPHICS::IRVertexFetch::UseVertexCache(void);
// public: class XGRAPHICS::IRProjection * XGRAPHICS::IRVertexFetch::GetProjection(void);
// public: enum R400Tables::RelOp XGRAPHICS::IRCmp1D::GetRelOp(void);
// public: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill::GetGprProjection(void) const;
// public: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill2::GetGprProjection(void) const;
// public: class XGRAPHICS::IRProjection * XGRAPHICS::IRMovBase::GetAddrProjection(void) const;
// public: bool XGRAPHICS::IRInst::IsSimple(void) const;
// public: bool XGRAPHICS::IRInst::IsSimpleMov(void) const;
// public: bool XGRAPHICS::IRInst::IsRedundantCopy(void) const;
// public: XGRAPHICS::VertexPatch::VertexPatch(int, int, int);
// public: virtual void XGRAPHICS::VertexPatch::OutputPatch(int, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::Vector<class XGRAPHICS::Patch *>::push_back(class XGRAPHICS::Patch *const &);
// public: void XGRAPHICS::Assembler::AssembleIRList(class XGRAPHICS::DList &, bool);
// public: void XGRAPHICS::Assembler::FulfillCurrentCfJmp(int);
// public: XGRAPHICS::Assembler::~Assembler(void);
// public: void XGRAPHICS::Assembler::EmitCJmp(bool, int, bool);
// public: void XGRAPHICS::Assembler::EmitLoopStart(int);
// public: void XGRAPHICS::Assembler::EmitLoopEnd(int);
// public: virtual void XGRAPHICS::IRAlu::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRExport::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRExportColorAndFog::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRMov::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRMovBase::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRKill::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRKill2::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::IRCJmp::Assemble(class XGRAPHICS::Assembler &);
// public: void XGRAPHICS::IRJmp::Assemble(class XGRAPHICS::Assembler &);
// public: void XGRAPHICS::Assembler::AddVertexPatch(int, char *, int);
// public: virtual void XGRAPHICS::Block::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::IfHeader::Assemble(class XGRAPHICS::Assembler &);
// public: void XGRAPHICS::IfHeader::AssembleAsConditionalBreak(class XGRAPHICS::Assembler &, bool &);
// public: virtual void XGRAPHICS::IfFooter::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::IfHeaderStatic::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::IfFooterStatic::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::LoopHeader::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::LoopFooter::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::PostLoopFooter::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::BreakBlock::Assemble(class XGRAPHICS::Assembler &);
// public: virtual void XGRAPHICS::ContinueBlock::Assemble(class XGRAPHICS::Assembler &);
// public: void XGRAPHICS::Assembler::EmitElse(class XGRAPHICS::IfHeader *);
// public: virtual void XGRAPHICS::IRVertexFetch::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::CFG::Assemble(unsigned int &, int);

//public: void XGRAPHICS::CFG::AssemblerStats(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?AssemblerStats@CFG@XGRAPHICS@@QAAXAAVAssembler@2@@Z");
//};

//public: void XGRAPHICS::Assembler::EmitExec_base(unsigned int, unsigned int, int, int)
//{
//    mangled_ppc("?EmitExec_base@Assembler@XGRAPHICS@@QAAXIIHH@Z");
//};

//public: void XGRAPHICS::Assembler::EmitExec(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?EmitExec@Assembler@XGRAPHICS@@QAAXIIH@Z");
//};

//public: void XGRAPHICS::Assembler::EmitAlloc(int, int)
//{
//    mangled_ppc("?EmitAlloc@Assembler@XGRAPHICS@@QAAXHH@Z");
//};

//public: void XGRAPHICS::Assembler::EmitCfNop(void)
//{
//    mangled_ppc("?EmitCfNop@Assembler@XGRAPHICS@@QAAXXZ");
//};

//private: void XGRAPHICS::Assembler::FillNop(void)
//{
//    mangled_ppc("?FillNop@Assembler@XGRAPHICS@@AAAXXZ");
//};

//int XGRAPHICS::SwizzlePermute(int, int, int)
//{
//    mangled_ppc("?SwizzlePermute@XGRAPHICS@@YAHHHH@Z");
//};

//public: int XGRAPHICS::IRExport::ExportBuffer(void) const
//{
//    mangled_ppc("?ExportBuffer@IRExport@XGRAPHICS@@QBAHXZ");
//};

//bool R400Tables::R400_CanCoissue(enum R400Tables::Op)
//{
//    mangled_ppc("?R400_CanCoissue@R400Tables@@YA_NW4Op@1@@Z");
//};

//bool R400Tables::R400_Scalar(enum R400Tables::Op)
//{
//    mangled_ppc("?R400_Scalar@R400Tables@@YA_NW4Op@1@@Z");
//};

//int XGRAPHICS::VFetchDstModifierToDstSel(int)
//{
//    mangled_ppc("?VFetchDstModifierToDstSel@XGRAPHICS@@YAHH@Z");
//};

//int XGRAPHICS::TFetchDstModifierToDstSel(int, int)
//{
//    mangled_ppc("?TFetchDstModifierToDstSel@XGRAPHICS@@YAHHH@Z");
//};

//public: class XGRAPHICS::CFG * XGRAPHICS::Compiler::GetCFG(void) const
//{
//    mangled_ppc("?GetCFG@Compiler@XGRAPHICS@@QBAPAVCFG@2@XZ");
//};

//public: static void * XGRAPHICS::DListNode::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2DListNode@XGRAPHICS@@SAPAXIPAX@Z");
//};

//public: int const XGRAPHICS::CFG::GetNumPosExp(void) const
//{
//    mangled_ppc("?GetNumPosExp@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::CFG::GetVertexArrayBaseDelta(void) const
//{
//    mangled_ppc("?GetVertexArrayBaseDelta@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::CFG::GetInterpArrayBaseDelta(void) const
//{
//    mangled_ppc("?GetInterpArrayBaseDelta@CFG@XGRAPHICS@@QBA?BHXZ");
//};

//public: void XGRAPHICS::CFG::SetFirstInstIsFetch(void)
//{
//    mangled_ppc("?SetFirstInstIsFetch@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: int XGRAPHICS::CFG::GetLastColorExport(void)
//{
//    mangled_ppc("?GetLastColorExport@CFG@XGRAPHICS@@QAAHXZ");
//};

//public: class XGRAPHICS::IRExport * XGRAPHICS::CFG::GetDepthExportInstruction(void)
//{
//    mangled_ppc("?GetDepthExportInstruction@CFG@XGRAPHICS@@QAAPAVIRExport@2@XZ");
//};

//public: void XGRAPHICS::Assembler::RecordIr(class XGRAPHICS::IRInst *, char *)
//{
//    mangled_ppc("?RecordIr@Assembler@XGRAPHICS@@QAAXPAVIRInst@2@PAD@Z");
//};

//public: bool XGRAPHICS::SwizzleOrMaskInfo::operator^(union XGRAPHICS::SwizzleOrMaskInfo const &)
//{
//    mangled_ppc("??TSwizzleOrMaskInfo@XGRAPHICS@@QAA_NABT01@@Z");
//};

//public: virtual void XGRAPHICS::IREndMakeCall::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?PostAssemble@IREndMakeCall@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::Assembler::EmitCall(int)
//{
//    mangled_ppc("?EmitCall@Assembler@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::SwizzleOrMaskInfo::Invert(void)
//{
//    mangled_ppc("?Invert@SwizzleOrMaskInfo@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Assembler::EmitRet(void)
//{
//    mangled_ppc("?EmitRet@Assembler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::SwizzleOrMaskInfo::Blend(union XGRAPHICS::SwizzleOrMaskInfo const &)
//{
//    mangled_ppc("?Blend@SwizzleOrMaskInfo@XGRAPHICS@@QAAXABT12@@Z");
//};

//public: unsigned int XGRAPHICS::Vector<class XGRAPHICS::Patch *>::Size(void) const
//{
//    mangled_ppc("?Size@?$Vector@PAVPatch@XGRAPHICS@@@XGRAPHICS@@QBAIXZ");
//};

//public: static void * XGRAPHICS::stack<enum R400Tables::Predicate>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: unsigned int XGRAPHICS::SwizzleOrMaskInfo::U32All(void)
//{
//    mangled_ppc("?U32All@SwizzleOrMaskInfo@XGRAPHICS@@QAAIXZ");
//};

//public: static void XGRAPHICS::stack<enum R400Tables::Predicate>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<enum R400Tables::Predicate>::stack<enum R400Tables::Predicate>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<enum R400Tables::Predicate>::~stack<enum R400Tables::Predicate>(void)
//{
//    mangled_ppc("??1?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QAA@XZ");
//};

//public: int XGRAPHICS::stack<enum R400Tables::Predicate>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QBAHXZ");
//};

//public: enum R400Tables::Predicate & XGRAPHICS::stack<enum R400Tables::Predicate>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QAAAAW4Predicate@R400Tables@@XZ");
//};

//public: void XGRAPHICS::stack<enum R400Tables::Predicate>::Push(enum R400Tables::Predicate)
//{
//    mangled_ppc("?Push@?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QAAXW4Predicate@R400Tables@@@Z");
//};

//public: enum R400Tables::Predicate XGRAPHICS::stack<enum R400Tables::Predicate>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QAA?AW4Predicate@R400Tables@@XZ");
//};

//public: class XGRAPHICS::Block *& XGRAPHICS::Vector<class XGRAPHICS::Block *>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$Vector@PAVBlock@XGRAPHICS@@@XGRAPHICS@@QBAAAPAVBlock@1@I@Z");
//};

//public: static void * XGRAPHICS::stack<class XGRAPHICS::IRInst *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<class XGRAPHICS::IRInst *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::IRInst *>::stack<class XGRAPHICS::IRInst *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::IRInst *>::~stack<class XGRAPHICS::IRInst *>(void)
//{
//    mangled_ppc("??1?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: int XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Push(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?Push@?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXPAVIRInst@2@@Z");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAPAVIRInst@2@XZ");
//};

//public: static void * XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::stack<struct XGRAPHICS::cfCJmpFormat *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: enum R400Tables::Predicate XGRAPHICS::IRInst::GetPredicate(void) const
//{
//    mangled_ppc("?GetPredicate@IRInst@XGRAPHICS@@QBA?AW4Predicate@R400Tables@@XZ");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::~stack<struct XGRAPHICS::cfCJmpFormat *>(void)
//{
//    mangled_ppc("??1?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: void XGRAPHICS::IRInst::SetPredicate(enum R400Tables::Predicate)
//{
//    mangled_ppc("?SetPredicate@IRInst@XGRAPHICS@@QAAXW4Predicate@R400Tables@@@Z");
//};

//public: static void * XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: bool XGRAPHICS::IRInst::GetResultClamp(void) const
//{
//    mangled_ppc("?GetResultClamp@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: static void XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: bool XGRAPHICS::IRInst::GetArgNegate(int) const
//{
//    mangled_ppc("?GetArgNegate@IRInst@XGRAPHICS@@QBA_NH@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::stack<struct XGRAPHICS::cfLoopStartFormat *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: bool XGRAPHICS::IRInst::GetArgAbsVal(int) const
//{
//    mangled_ppc("?GetArgAbsVal@IRInst@XGRAPHICS@@QBA_NH@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::~stack<struct XGRAPHICS::cfLoopStartFormat *>(void)
//{
//    mangled_ppc("??1?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::stack<int>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@H@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<int>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@H@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<int>::stack<int>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@H@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<int>::~stack<int>(void)
//{
//    mangled_ppc("??1?$stack@H@XGRAPHICS@@QAA@XZ");
//};

//public: union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::IRInst::GetKonstantKorection(void) const
//{
//    mangled_ppc("?GetKonstantKorection@IRInst@XGRAPHICS@@QBA?ATSwizzleOrMaskInfo@2@XZ");
//};

//public: int XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::stack<int>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@H@XGRAPHICS@@QBAHXZ");
//};

//public: int const XGRAPHICS::IRStartCallRoutine::Getcallblock(void) const
//{
//    mangled_ppc("?Getcallblock@IRStartCallRoutine@XGRAPHICS@@QBA?BHXZ");
//};

//public: int const XGRAPHICS::IRStartCallRoutine::Getsize(void) const
//{
//    mangled_ppc("?Getsize@IRStartCallRoutine@XGRAPHICS@@QBA?BHXZ");
//};

//private: int const XGRAPHICS::IRStartMakeCall::Getcallblock(void) const
//{
//    mangled_ppc("?Getcallblock@IRStartMakeCall@XGRAPHICS@@ABA?BHXZ");
//};

//private: int const XGRAPHICS::IRStartMakeCall::Getsize(void) const
//{
//    mangled_ppc("?Getsize@IRStartMakeCall@XGRAPHICS@@ABA?BHXZ");
//};

//private: unsigned int const XGRAPHICS::IRVertexFetch::Getdword_position(void) const
//{
//    mangled_ppc("?Getdword_position@IRVertexFetch@XGRAPHICS@@ABA?BIXZ");
//};

//private: unsigned int const XGRAPHICS::IRVertexFetch::Getvertex_element(void) const
//{
//    mangled_ppc("?Getvertex_element@IRVertexFetch@XGRAPHICS@@ABA?BIXZ");
//};

//private: bool const XGRAPHICS::IRVertexFetch::Getuse_vertex_cache(void) const
//{
//    mangled_ppc("?Getuse_vertex_cache@IRVertexFetch@XGRAPHICS@@ABA?B_NXZ");
//};

//private: class XGRAPHICS::IRProjection * XGRAPHICS::IRVertexFetch::Getproj(void) const
//{
//    mangled_ppc("?Getproj@IRVertexFetch@XGRAPHICS@@ABAPAVIRProjection@2@XZ");
//};

//private: int const XGRAPHICS::IRVertexFetch::Getnum_dwords(void) const
//{
//    mangled_ppc("?Getnum_dwords@IRVertexFetch@XGRAPHICS@@ABA?BHXZ");
//};

//public: int const XGRAPHICS::IRTextureFetch::Gettexture_stage(void) const
//{
//    mangled_ppc("?Gettexture_stage@IRTextureFetch@XGRAPHICS@@QBA?BHXZ");
//};

//public: struct XGRAPHICS::texld_fields * XGRAPHICS::IRTextureFetch::Getfields(void) const
//{
//    mangled_ppc("?Getfields@IRTextureFetch@XGRAPHICS@@QBAPAUtexld_fields@2@XZ");
//};

//protected: int const XGRAPHICS::IRTextureFetch::Getfetch_constant(void) const
//{
//    mangled_ppc("?Getfetch_constant@IRTextureFetch@XGRAPHICS@@IBA?BHXZ");
//};

//protected: int const XGRAPHICS::IRTextureFetch::Gettx_coord_norm(void) const
//{
//    mangled_ppc("?Gettx_coord_norm@IRTextureFetch@XGRAPHICS@@IBA?BHXZ");
//};

//protected: bool const XGRAPHICS::IRCJmp::GetbTakenCondition(void) const
//{
//    mangled_ppc("?GetbTakenCondition@IRCJmp@XGRAPHICS@@IBA?B_NXZ");
//};

//public: enum R400Tables::RelOp const XGRAPHICS::IRCmp1D::Getrel_op(void) const
//{
//    mangled_ppc("?Getrel_op@IRCmp1D@XGRAPHICS@@QBA?BW4RelOp@R400Tables@@XZ");
//};

//private: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill::Getgpr_proj(void) const
//{
//    mangled_ppc("?Getgpr_proj@IRKill@XGRAPHICS@@ABAPAVIRProjection@2@XZ");
//};

//private: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill2::Getgpr_proj(void) const
//{
//    mangled_ppc("?Getgpr_proj@IRKill2@XGRAPHICS@@ABAPAVIRProjection@2@XZ");
//};

//private: class XGRAPHICS::IRProjection * XGRAPHICS::IRMovBase::Getaddr_proj(void) const
//{
//    mangled_ppc("?Getaddr_proj@IRMovBase@XGRAPHICS@@ABAPAVIRProjection@2@XZ");
//};

//public: int const XGRAPHICS::IRAlloc::Getnum_exports(void) const
//{
//    mangled_ppc("?Getnum_exports@IRAlloc@XGRAPHICS@@QBA?BHXZ");
//};

//public: bool const XGRAPHICS::IRInst::IsScalar(void) const
//{
//    mangled_ppc("?IsScalar@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool const XGRAPHICS::IRInst::IsVector(void) const
//{
//    mangled_ppc("?IsVector@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool const XGRAPHICS::IRInst::TerminatesExecGroup(void) const
//{
//    mangled_ppc("?TerminatesExecGroup@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool const XGRAPHICS::IRInst::DefIsVirtual(void) const
//{
//    mangled_ppc("?DefIsVirtual@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: void XGRAPHICS::IRInst::SetDefIsVirtual(bool)
//{
//    mangled_ppc("?SetDefIsVirtual@IRInst@XGRAPHICS@@QAAX_N@Z");
//};

//public: bool const XGRAPHICS::IRInst::DefIsRegister(void) const
//{
//    mangled_ppc("?DefIsRegister@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: bool XGRAPHICS::IRInst::ArgIsConst(int) const
//{
//    mangled_ppc("?ArgIsConst@IRInst@XGRAPHICS@@QBA_NH@Z");
//};

//public: bool XGRAPHICS::IRInst::DefIsDead(void) const
//{
//    mangled_ppc("?DefIsDead@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::IRInst::IsUse(int) const
//{
//    mangled_ppc("?IsUse@IRInst@XGRAPHICS@@QBA_NH@Z");
//};

//public: bool XGRAPHICS::IRInst::HasLiteralWrites(void) const
//{
//    mangled_ppc("?HasLiteralWrites@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::cfExecFormat::MarkLast(void)
//{
//    mangled_ppc("?MarkLast@cfExecFormat@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::cfLoopStartFormat::SetJumpAddress(int)
//{
//    mangled_ppc("?SetJumpAddress@cfLoopStartFormat@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::cfCJmpFormat::SetJumpAddress(int)
//{
//    mangled_ppc("?SetJumpAddress@cfCJmpFormat@XGRAPHICS@@QAAXH@Z");
//};

//public: bool const XGRAPHICS::cfCJmpFormat::GetFWOnly(void)
//{
//    mangled_ppc("?GetFWOnly@cfCJmpFormat@XGRAPHICS@@QAA?B_NXZ");
//};

//public: static void * XGRAPHICS::Patch::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2Patch@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::Patch::Patch(void)
//{
//    mangled_ppc("??0Patch@XGRAPHICS@@QAA@XZ");
//};

//public: void XGRAPHICS::Assembler::MarkLast(void)
//{
//    mangled_ppc("?MarkLast@Assembler@XGRAPHICS@@QAAXXZ");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::Assembler::GetPrdStackRegIniter(void)
//{
//    mangled_ppc("?GetPrdStackRegIniter@Assembler@XGRAPHICS@@QAAPAVIRInst@2@XZ");
//};

//public: int XGRAPHICS::Assembler::GetPWReg(void)
//{
//    mangled_ppc("?GetPWReg@Assembler@XGRAPHICS@@QAAHXZ");
//};

//public: int XGRAPHICS::Assembler::GetCmpReg(void)
//{
//    mangled_ppc("?GetCmpReg@Assembler@XGRAPHICS@@QAAHXZ");
//};

//public: int XGRAPHICS::LoopHeader::GetLoopId(void)
//{
//    mangled_ppc("?GetLoopId@LoopHeader@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::LoopHeader::HasContinue(void)
//{
//    mangled_ppc("?HasContinue@LoopHeader@XGRAPHICS@@QAA_NXZ");
//};

//public: bool XGRAPHICS::LoopHeader::HasBreak(void)
//{
//    mangled_ppc("?HasBreak@LoopHeader@XGRAPHICS@@QAA_NXZ");
//};

//public: class XGRAPHICS::Block * XGRAPHICS::IfHeader::GetElse(void) const
//{
//    mangled_ppc("?GetElse@IfHeader@XGRAPHICS@@QBAPAVBlock@2@XZ");
//};

//public: bool XGRAPHICS::IfHeader::IsInner(void)
//{
//    mangled_ppc("?IsInner@IfHeader@XGRAPHICS@@QAA_NXZ");
//};

//public: bool XGRAPHICS::Block::HasInstructions(void) const
//{
//    mangled_ppc("?HasInstructions@Block@XGRAPHICS@@QBA_NXZ");
//};

//public: static void * XGRAPHICS::Vector<class XGRAPHICS::Patch *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$Vector@PAVPatch@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: XGRAPHICS::Vector<class XGRAPHICS::Patch *>::Vector<class XGRAPHICS::Patch *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$Vector@PAVPatch@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: class XGRAPHICS::Patch *& XGRAPHICS::Vector<class XGRAPHICS::Patch *>::operator[](unsigned int)
//{
//    mangled_ppc("??A?$Vector@PAVPatch@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVPatch@1@I@Z");
//};

//public: void XGRAPHICS::Assembler::FinishUp(void)
//{
//    mangled_ppc("?FinishUp@Assembler@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::Assembler::OutputPatches(int)
//{
//    mangled_ppc("?OutputPatches@Assembler@XGRAPHICS@@QAAXH@Z");
//};

//public: bool XGRAPHICS::IfHeader::IsHeadOfConditionalBreak(bool &)
//{
//    mangled_ppc("?IsHeadOfConditionalBreak@IfHeader@XGRAPHICS@@QAA_NAA_N@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMov::MakePWCopy(class XGRAPHICS::IRInst *, int, class XGRAPHICS::IRInst *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakePWCopy@IRMov@XGRAPHICS@@SAPAVIRInst@2@PAV32@H0PAVCompiler@2@@Z");
//};

//class XGRAPHICS::IRInst * XGRAPHICS::MakePWCorrection(class XGRAPHICS::IRInst *, int, class XGRAPHICS::IRInst *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakePWCorrection@XGRAPHICS@@YAPAVIRInst@1@PAV21@H0PAVCompiler@1@@Z");
//};

//public: bool XGRAPHICS::IRInst::IsPWInput(int) const
//{
//    mangled_ppc("?IsPWInput@IRInst@XGRAPHICS@@QBA_NH@Z");
//};

//public: void XGRAPHICS::Assembler::ProcessPartialWrites(class XGRAPHICS::DList &, class XGRAPHICS::IRInst *&)
//{
//    mangled_ppc("?ProcessPartialWrites@Assembler@XGRAPHICS@@QAAXAAVDList@2@AAPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::Assembler::AssignPredicates(class XGRAPHICS::DList const &, enum R400Tables::Predicate)
//{
//    mangled_ppc("?AssignPredicates@Assembler@XGRAPHICS@@QAAXABVDList@2@W4Predicate@R400Tables@@@Z");
//};

//public: XGRAPHICS::Assembler::Assembler(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("??0Assembler@XGRAPHICS@@QAA@PAVCFG@1@@Z");
//};

//public: void * XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<int>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@H@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<class XGRAPHICS::IRInst *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<enum R400Tables::Predicate>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@W4Predicate@R400Tables@@@XGRAPHICS@@QAAPAXI@Z");
//};

//private: bool XGRAPHICS::Assembler::NeedAlloc(enum R400Tables::RegType)
//{
//    mangled_ppc("?NeedAlloc@Assembler@XGRAPHICS@@AAA_NW4RegType@R400Tables@@@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::Assembler::ReplaceLit(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?ReplaceLit@Assembler@XGRAPHICS@@AAAPAVIRInst@2@PAV32@@Z");
//};

//void XGRAPHICS::KorrectSwizzle(class XGRAPHICS::IRInst *, int)
//{
//    mangled_ppc("?KorrectSwizzle@XGRAPHICS@@YAXPAVIRInst@1@H@Z");
//};

//protected: void XGRAPHICS::IRAlu::AssembleSrcRegConst(char *, int, int)
//{
//    mangled_ppc("?AssembleSrcRegConst@IRAlu@XGRAPHICS@@IAAXPADHH@Z");
//};

//protected: void XGRAPHICS::IRAlu::AssembleDest(char *)
//{
//    mangled_ppc("?AssembleDest@IRAlu@XGRAPHICS@@IAAXPAD@Z");
//};

//public: int XGRAPHICS::IRExport::ExportSize(class XGRAPHICS::CFG *) const
//{
//    mangled_ppc("?ExportSize@IRExport@XGRAPHICS@@QBAHPAVCFG@2@@Z");
//};

//public: virtual void XGRAPHICS::IRTextureFetch::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRTextureFetch@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//unsigned int XGRAPHICS::IrMaskToHwMask(union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?IrMaskToHwMask@XGRAPHICS@@YAITSwizzleOrMaskInfo@1@@Z");
//};

//unsigned int XGRAPHICS::IrSwizzleToHwSwizzle(union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?IrSwizzleToHwSwizzle@XGRAPHICS@@YAITSwizzleOrMaskInfo@1@@Z");
//};

//public: virtual void XGRAPHICS::IRStartCallRoutine::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?PostAssemble@IRStartCallRoutine@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IREndCallRoutine::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?PostAssemble@IREndCallRoutine@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRStartMakeCall::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?PostAssemble@IRStartMakeCall@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::Push(struct XGRAPHICS::cfCJmpFormat *)
//{
//    mangled_ppc("?Push@?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@QAAXPAUcfCJmpFormat@2@@Z");
//};

//public: struct XGRAPHICS::cfCJmpFormat * XGRAPHICS::stack<struct XGRAPHICS::cfCJmpFormat *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAUcfCJmpFormat@XGRAPHICS@@@XGRAPHICS@@QAAPAUcfCJmpFormat@2@XZ");
//};

//public: void XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::Push(struct XGRAPHICS::cfLoopStartFormat *)
//{
//    mangled_ppc("?Push@?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@QAAXPAUcfLoopStartFormat@2@@Z");
//};

//public: struct XGRAPHICS::cfLoopStartFormat * XGRAPHICS::stack<struct XGRAPHICS::cfLoopStartFormat *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAUcfLoopStartFormat@XGRAPHICS@@@XGRAPHICS@@QAAPAUcfLoopStartFormat@2@XZ");
//};

//public: void XGRAPHICS::stack<int>::Push(int)
//{
//    mangled_ppc("?Push@?$stack@H@XGRAPHICS@@QAAXH@Z");
//};

//public: int XGRAPHICS::stack<int>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@H@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::IRVertexFetch::UseVertexCache(void)
//{
//    mangled_ppc("?UseVertexCache@IRVertexFetch@XGRAPHICS@@QAA_NXZ");
//};

//public: class XGRAPHICS::IRProjection * XGRAPHICS::IRVertexFetch::GetProjection(void)
//{
//    mangled_ppc("?GetProjection@IRVertexFetch@XGRAPHICS@@QAAPAVIRProjection@2@XZ");
//};

//public: enum R400Tables::RelOp XGRAPHICS::IRCmp1D::GetRelOp(void)
//{
//    mangled_ppc("?GetRelOp@IRCmp1D@XGRAPHICS@@QAA?AW4RelOp@R400Tables@@XZ");
//};

//public: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill::GetGprProjection(void) const
//{
//    mangled_ppc("?GetGprProjection@IRKill@XGRAPHICS@@QBAPAVIRProjection@2@XZ");
//};

//public: class XGRAPHICS::IRProjection * XGRAPHICS::IRKill2::GetGprProjection(void) const
//{
//    mangled_ppc("?GetGprProjection@IRKill2@XGRAPHICS@@QBAPAVIRProjection@2@XZ");
//};

//public: class XGRAPHICS::IRProjection * XGRAPHICS::IRMovBase::GetAddrProjection(void) const
//{
//    mangled_ppc("?GetAddrProjection@IRMovBase@XGRAPHICS@@QBAPAVIRProjection@2@XZ");
//};

//public: bool XGRAPHICS::IRInst::IsSimple(void) const
//{
//    mangled_ppc("?IsSimple@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::IRInst::IsSimpleMov(void) const
//{
//    mangled_ppc("?IsSimpleMov@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: bool XGRAPHICS::IRInst::IsRedundantCopy(void) const
//{
//    mangled_ppc("?IsRedundantCopy@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: XGRAPHICS::VertexPatch::VertexPatch(int, int, int)
//{
//    mangled_ppc("??0VertexPatch@XGRAPHICS@@QAA@HHH@Z");
//};

//public: virtual void XGRAPHICS::VertexPatch::OutputPatch(int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?OutputPatch@VertexPatch@XGRAPHICS@@UAAXHPAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::Vector<class XGRAPHICS::Patch *>::push_back(class XGRAPHICS::Patch *const &)
//{
//    mangled_ppc("?push_back@?$Vector@PAVPatch@XGRAPHICS@@@XGRAPHICS@@QAAXABQAVPatch@2@@Z");
//};

//public: void XGRAPHICS::Assembler::AssembleIRList(class XGRAPHICS::DList &, bool)
//{
//    mangled_ppc("?AssembleIRList@Assembler@XGRAPHICS@@QAAXAAVDList@2@_N@Z");
//};

//public: void XGRAPHICS::Assembler::FulfillCurrentCfJmp(int)
//{
//    mangled_ppc("?FulfillCurrentCfJmp@Assembler@XGRAPHICS@@QAAXH@Z");
//};

//public: XGRAPHICS::Assembler::~Assembler(void)
//{
//    mangled_ppc("??1Assembler@XGRAPHICS@@QAA@XZ");
//};

//public: void XGRAPHICS::Assembler::EmitCJmp(bool, int, bool)
//{
//    mangled_ppc("?EmitCJmp@Assembler@XGRAPHICS@@QAAX_NH0@Z");
//};

//public: void XGRAPHICS::Assembler::EmitLoopStart(int)
//{
//    mangled_ppc("?EmitLoopStart@Assembler@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::Assembler::EmitLoopEnd(int)
//{
//    mangled_ppc("?EmitLoopEnd@Assembler@XGRAPHICS@@QAAXH@Z");
//};

//public: virtual void XGRAPHICS::IRAlu::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRAlu@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRExport::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRExport@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRExportColorAndFog::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRExportColorAndFog@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRMov::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRMov@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRMovBase::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRMovBase@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRKill::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRKill@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRKill2::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRKill2@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::IRCJmp::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@IRCJmp@XGRAPHICS@@QAAXAAVAssembler@2@@Z");
//};

//public: void XGRAPHICS::IRJmp::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@IRJmp@XGRAPHICS@@QAAXAAVAssembler@2@@Z");
//};

//public: void XGRAPHICS::Assembler::AddVertexPatch(int, char *, int)
//{
//    mangled_ppc("?AddVertexPatch@Assembler@XGRAPHICS@@QAAXHPADH@Z");
//};

//public: virtual void XGRAPHICS::Block::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@Block@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::IfHeader::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@IfHeader@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: void XGRAPHICS::IfHeader::AssembleAsConditionalBreak(class XGRAPHICS::Assembler &, bool &)
//{
//    mangled_ppc("?AssembleAsConditionalBreak@IfHeader@XGRAPHICS@@QAAXAAVAssembler@2@AA_N@Z");
//};

//public: virtual void XGRAPHICS::IfFooter::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@IfFooter@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::IfHeaderStatic::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@IfHeaderStatic@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::IfFooterStatic::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@IfFooterStatic@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::LoopHeader::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@LoopHeader@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::LoopFooter::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@LoopFooter@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::PostLoopFooter::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@PostLoopFooter@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::BreakBlock::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@BreakBlock@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: virtual void XGRAPHICS::ContinueBlock::Assemble(class XGRAPHICS::Assembler &)
//{
//    mangled_ppc("?Assemble@ContinueBlock@XGRAPHICS@@UAAXAAVAssembler@2@@Z");
//};

//public: void XGRAPHICS::Assembler::EmitElse(class XGRAPHICS::IfHeader *)
//{
//    mangled_ppc("?EmitElse@Assembler@XGRAPHICS@@QAAXPAVIfHeader@2@@Z");
//};

//public: virtual void XGRAPHICS::IRVertexFetch::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRVertexFetch@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::CFG::Assemble(unsigned int &, int)
//{
//    mangled_ppc("?Assemble@CFG@XGRAPHICS@@QAAXAAIH@Z");
//};

