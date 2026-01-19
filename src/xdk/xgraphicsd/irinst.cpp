/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int const *const const XGRAPHICS::null_konst; // "?null_konst@XGRAPHICS@@3QBIB"
// struct XGRAPHICS::index_mapping_item const *const const XGRAPHICS::index_mapping; // "?index_mapping@XGRAPHICS@@3QBUindex_mapping_item@1@B"
// struct XGRAPHICS::hos_mode_split_item const *const const XGRAPHICS::hos_mode_split_format; // "?hos_mode_split_format@XGRAPHICS@@3QBUhos_mode_split_item@1@B"
// struct XGRAPHICS::hos_split_item const *const const XGRAPHICS::hos_split_mode_index; // "?hos_split_mode_index@XGRAPHICS@@3QBUhos_split_item@1@B"
// struct XGRAPHICS::hos_mode_index_item const *const const XGRAPHICS::hos_mode_index_format; // "?hos_mode_index_format@XGRAPHICS@@3QBUhos_mode_index_item@1@B"
// struct XGRAPHICS::inst_ctor_st const *const const XGRAPHICS::inst_ctors; // "?inst_ctors@XGRAPHICS@@3QBUinst_ctor_st@1@B"

// unsigned int XGRAPHICS::FloatToFixed(float, int, int);
// float XGRAPHICS::FixedToFloat(unsigned int, int, int);
// public: bool XGRAPHICS::IRInst::DefEqualsSrcOperand(class XGRAPHICS::IRInst *, int) const;
// public: bool XGRAPHICS::IRInst::ModifiersAreCompatible(class XGRAPHICS::IRInst const *) const;
// public: bool XGRAPHICS::IRInst::WriteMasksAreDisjunct(class XGRAPHICS::IRInst const *) const;
// public: int XGRAPHICS::IRInst::NumWrittenChannel(void) const;
// public: void XGRAPHICS::IRInst::SetCompensationWriteMask(class XGRAPHICS::IRInst const *);
// public: bool const XGRAPHICS::IRInst::DestHasMasks(void) const;
// public: static int XGRAPHICS::IRInst::ExportOrder(enum R400Tables::RegType);
// private: void XGRAPHICS::IRVertexFetch::Init(int, class XGRAPHICS::Compiler *);
// bool XGRAPHICS::VerifyInst_ctors(void);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRInst::Make(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::IRStartCallRoutine::Putcallblock(int);
// public: void XGRAPHICS::IRStartCallRoutine::Putsize(int);
// private: void XGRAPHICS::IRStartMakeCall::Putcallblock(int);
// private: void XGRAPHICS::IRStartMakeCall::Putsize(int);
// private: void XGRAPHICS::IRHeader::PutILVersionNum(int);
// private: void XGRAPHICS::IRVertexFetch::Putdword_position(unsigned int);
// private: void XGRAPHICS::IRVertexFetch::Putvertex_element(unsigned int);
// public: void XGRAPHICS::IRTextureFetch::Puttexture_stage(int);
// public: void XGRAPHICS::IRTextureFetch::Putfields(struct XGRAPHICS::texld_fields *);
// protected: void XGRAPHICS::IRCJmp::PutbTakenCondition(bool);
// private: void XGRAPHICS::IRKill::Putgpr_proj(class XGRAPHICS::IRProjection *);
// private: void XGRAPHICS::IRKill2::Putgpr_proj(class XGRAPHICS::IRProjection *);
// private: void XGRAPHICS::IRMovBase::Putcomponent(int);
// private: void XGRAPHICS::IRMovBase::Putaddr_proj(class XGRAPHICS::IRProjection *);
// private: void XGRAPHICS::IRMovBase::Putindex_proj(class XGRAPHICS::IRProjection *);
// private: class XGRAPHICS::IRInst * XGRAPHICS::IRMovBase::Getinitial_mova(void) const;
// private: void XGRAPHICS::IRMovBase::Putinitial_mova(class XGRAPHICS::IRInst *);
// public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::Clone(class XGRAPHICS::Compiler *);
// public: bool XGRAPHICS::IRInst::Validate(void) const;
// public: enum XGRAPHICS::IDX_MODE XGRAPHICS::IRInst::GetIndexingMode(int) const;
// private: void XGRAPHICS::IRInst::Init(void);
// public: void XGRAPHICS::IRInst::SetOperandWithVReg(int, class XGRAPHICS::VRegInfo *);
// private: void XGRAPHICS::IRInst::SetConstArg(class XGRAPHICS::CFG *, int, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst);
// public: virtual void XGRAPHICS::IRInst::Kill(void);
// public: virtual void XGRAPHICS::IRLoadConst::Kill(void);
// public: void XGRAPHICS::IRInst::RemoveFromBlock(void);
// public: bool XGRAPHICS::IRInst::IsUselessPhi(void) const;
// public: bool const XGRAPHICS::IRInst::HasSingleUse(class XGRAPHICS::CFG *) const;
// public: bool const XGRAPHICS::IRInst::HasModifiers(int) const;
// public: static enum R400Tables::RegType XGRAPHICS::IRInst::ExportType(enum R400Tables::RegType, class XGRAPHICS::Compiler *);
// public: bool XGRAPHICS::IRInst::InputEdgeIsZeroLength(int, class XGRAPHICS::IRInst *) const;
// public: virtual void XGRAPHICS::IRAlu::MarkInstructionAsExport(class XGRAPHICS::CFG *, enum R400Tables::RegType, int);
// public: virtual XGRAPHICS::IRZeroary::~IRZeroary(void);
// public: void XGRAPHICS::IRInst::AddReachingLink(class XGRAPHICS::IRInst *);
// public: virtual XGRAPHICS::IRUnary::~IRUnary(void);
// public: virtual XGRAPHICS::IRBinary::~IRBinary(void);
// public: virtual XGRAPHICS::IRMov::~IRMov(void);
// public: virtual XGRAPHICS::IRMovBase::~IRMovBase(void);
// public: void XGRAPHICS::IRMovBase::SetComponent(int);
// public: class XGRAPHICS::IRInst * XGRAPHICS::IRMovBase::FindInitialMova(void);
// public: virtual XGRAPHICS::IRExport::~IRExport(void);
// public: virtual XGRAPHICS::IRPseudo::~IRPseudo(void);
// public: virtual XGRAPHICS::IRAlloc::~IRAlloc(void);
// public: virtual XGRAPHICS::IRFetch::~IRFetch(void);
// public: void XGRAPHICS::IRVertexFetch::GetStreamNumAndEtc(unsigned int *, int *, int *);
// public: void XGRAPHICS::IRTextureFetch::ReplaceFields(struct XGRAPHICS::texld_fields *, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::IRInst::ChangeToScalar(int, int, bool);
// public: bool XGRAPHICS::IRInst::ChangeToVector(void);
// public: virtual XGRAPHICS::IRCJmp::~IRCJmp(void);
// protected: XGRAPHICS::IRInst::IRInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: void XGRAPHICS::IRInst::AddAnInput(class XGRAPHICS::VRegInfo *);
// public: void XGRAPHICS::IRInst::SetConstArg(class XGRAPHICS::CFG *, int, float, float, float, float);
// public: void XGRAPHICS::IRInst::SetConstArg(class XGRAPHICS::CFG *, int, struct XGRAPHICS::named_value, struct XGRAPHICS::named_value, struct XGRAPHICS::named_value, struct XGRAPHICS::named_value);
// protected: XGRAPHICS::IRAlu::IRAlu(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// protected: XGRAPHICS::IRZeroary::IRZeroary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRZeroary::OperationInputs(void) const;
// merged_83E5F068;
// protected: XGRAPHICS::IRUnary::IRUnary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRUnary::OperationInputs(void) const;
// merged_83E5F140;
// protected: XGRAPHICS::IRBinary::IRBinary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRBinary::OperationInputs(void) const;
// merged_83E5F218;
// private: XGRAPHICS::IRTrinary::IRTrinary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// protected: XGRAPHICS::IRMov::IRMov(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRMov::IsMov(void) const;
// merged_83E5F360;
// public: XGRAPHICS::IRCopy::IRCopy(class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IRCopy::~IRCopy(void);
// merged_83E5F468;
// public: XGRAPHICS::IRMovBase::IRMovBase(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRMovBase::OperationOutputs(void) const;
// public: virtual int const XGRAPHICS::IRMovBase::OperationInputs(void) const;
// public: virtual char const * XGRAPHICS::IRMovBase::InstType(void) const;
// public: virtual bool const XGRAPHICS::IRMovBase::IsMovBase(void) const;
// merged_83E5F5D0;
// public: XGRAPHICS::IRExport::IRExport(class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRExport::OperationOutputs(void) const;
// public: virtual char const * XGRAPHICS::IRExport::InstType(void) const;
// merged_83E5F718;
// public: XGRAPHICS::IRExportZeroOne::IRExportZeroOne(class XGRAPHICS::VRegInfo *, union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRExportZeroOne::InstType(void) const;
// public: virtual XGRAPHICS::IRExportZeroOne::~IRExportZeroOne(void);
// merged_83E5F850;
// protected: XGRAPHICS::IRPseudo::IRPseudo(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRPseudo::IsPseudo(void) const;
// public: virtual int const XGRAPHICS::IRPseudo::OperationInputs(void) const;
// protected: virtual void XGRAPHICS::IRPseudo::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// protected: virtual char const * XGRAPHICS::IRPseudo::InstType(void) const;
// merged_83E5F9A8;
// public: XGRAPHICS::IRHeader::IRHeader(class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IRHeader::~IRHeader(void);
// merged_83E5FAB0;
// public: XGRAPHICS::IREntry::IREntry(class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IREntry::IsEntry(void) const;
// public: virtual char const * XGRAPHICS::IREntry::InstType(void) const;
// public: virtual XGRAPHICS::IREntry::~IREntry(void);
// merged_83E5FC08;
// public: XGRAPHICS::IRExit::IRExit(class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRExit::IsExit(void) const;
// public: virtual char const * XGRAPHICS::IRExit::InstType(void) const;
// public: virtual XGRAPHICS::IRExit::~IRExit(void);
// merged_83E5FD60;
// public: XGRAPHICS::IRLoadConst::IRLoadConst(class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRLoadConst::IsLoadConst(void) const;
// public: virtual char const * XGRAPHICS::IRLoadConst::InstType(void) const;
// public: virtual XGRAPHICS::IRLoadConst::~IRLoadConst(void);
// merged_83E5FEC8;
// public: XGRAPHICS::IRLoadConst::IRLoadConst(class XGRAPHICS::VRegInfo *, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::IRLoadTemp::IRLoadTemp(class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRLoadTemp::IsLoadTemp(void) const;
// public: virtual char const * XGRAPHICS::IRLoadTemp::InstType(void) const;
// public: virtual XGRAPHICS::IRLoadTemp::~IRLoadTemp(void);
// merged_83E600A0;
// public: XGRAPHICS::IRLoadTemp::IRLoadTemp(class XGRAPHICS::VRegInfo *, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::IRLoadInterp::IRLoadInterp(class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRLoadInterp::InstType(void) const;
// public: virtual class XGRAPHICS::IRLoadInterp * XGRAPHICS::IRLoadInterp::AsIRLoadInterp(void);
// public: virtual XGRAPHICS::IRLoadInterp::~IRLoadInterp(void);
// merged_83E60290;
// public: XGRAPHICS::IRVLFetch::IRVLFetch(class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRVLFetch::InstType(void) const;
// public: virtual XGRAPHICS::IRVLFetch::~IRVLFetch(void);
// merged_83E603C0;
// public: XGRAPHICS::IRPLFetch::IRPLFetch(class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRPLFetch::InstType(void) const;
// public: virtual XGRAPHICS::IRPLFetch::~IRPLFetch(void);
// merged_83E604F0;
// public: XGRAPHICS::IRMerge::IRMerge(class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRMerge::InstType(void) const;
// public: virtual XGRAPHICS::IRMerge::~IRMerge(void);
// merged_83E60620;
// public: XGRAPHICS::IRProjection::IRProjection(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRProjection::OperationOutputs(void) const;
// public: virtual int const XGRAPHICS::IRProjection::OperationInputs(void) const;
// public: virtual char const * XGRAPHICS::IRProjection::InstType(void) const;
// public: virtual bool const XGRAPHICS::IRProjection::IsProjection(void) const;
// public: virtual XGRAPHICS::IRProjection::~IRProjection(void);
// merged_83E607D0;
// public: XGRAPHICS::IRPhiNode::IRPhiNode(class XGRAPHICS::Compiler *);
// public: virtual class XGRAPHICS::IRPhiNode * XGRAPHICS::IRPhiNode::AsPhi(void);
// public: virtual char const * XGRAPHICS::IRPhiNode::InstType(void) const;
// public: virtual XGRAPHICS::IRPhiNode::~IRPhiNode(void);
// merged_83E60940;
// private: XGRAPHICS::IRLoopStart::IRLoopStart(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRLoopStart::OperationInputs(void) const;
// public: virtual char const * XGRAPHICS::IRLoopStart::InstType(void) const;
// public: virtual XGRAPHICS::IRLoopStart::~IRLoopStart(void);
// merged_83E60AB8;
// public: XGRAPHICS::IRLoopIndex::IRLoopIndex(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRLoopIndex::InstType(void) const;
// public: virtual int const XGRAPHICS::IRLoopIndex::OperationOutputs(void) const;
// public: virtual int const XGRAPHICS::IRLoopIndex::OperationInputs(void) const;
// public: virtual XGRAPHICS::IRLoopIndex::~IRLoopIndex(void);
// merged_83E60C40;
// public: XGRAPHICS::IRLoopIndex::IRLoopIndex(class XGRAPHICS::VRegInfo *, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::IRAlloc::IRAlloc(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRAlloc::IsAlloc(void) const;
// public: virtual int const XGRAPHICS::IRAlloc::OperationOutputs(void) const;
// public: virtual int const XGRAPHICS::IRAlloc::OperationInputs(void) const;
// merged_83E60DF8;
// private: XGRAPHICS::IRAllocInterp::IRAllocInterp(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRAllocInterp::InstType(void) const;
// public: virtual XGRAPHICS::IRAllocInterp::~IRAllocInterp(void);
// merged_83E60F28;
// private: XGRAPHICS::IRAllocPos::IRAllocPos(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRAllocPos::InstType(void) const;
// public: virtual XGRAPHICS::IRAllocPos::~IRAllocPos(void);
// merged_83E61058;
// private: XGRAPHICS::IRAllocMem::IRAllocMem(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRAllocMem::InstType(void) const;
// public: virtual XGRAPHICS::IRAllocMem::~IRAllocMem(void);
// merged_83E61188;
// private: XGRAPHICS::IRAllocColor::IRAllocColor(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRAllocColor::InstType(void) const;
// public: virtual XGRAPHICS::IRAllocColor::~IRAllocColor(void);
// merged_83E612B8;
// protected: XGRAPHICS::IRFetch::IRFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRFetch::IsFetch(void) const;
// public: virtual int const XGRAPHICS::IRFetch::OperationInputs(void) const;
// public: virtual char const * XGRAPHICS::IRFetch::InstType(void) const;
// public: virtual void XGRAPHICS::IRFetch::SetSwizzle(int, int, int);
// merged_83E61468;
// private: XGRAPHICS::IRVertexFetch::IRVertexFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *, unsigned int, unsigned int);
// public: virtual bool const XGRAPHICS::IRVertexFetch::IsVertexFetch(void) const;
// public: virtual XGRAPHICS::IRVertexFetch::~IRVertexFetch(void);
// merged_83E615B8;
// protected: XGRAPHICS::IRTextureFetch::IRTextureFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRTextureFetch::IsTextureFetch(void) const;
// public: virtual XGRAPHICS::IRTextureFetch::~IRTextureFetch(void);
// merged_83E61750;
// public: XGRAPHICS::IRExportColorAndFog::IRExportColorAndFog(class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRExportColorAndFog::OperationOutputs(void) const;
// public: virtual char const * XGRAPHICS::IRExportColorAndFog::InstType(void) const;
// public: virtual XGRAPHICS::IRExportColorAndFog::~IRExportColorAndFog(void);
// merged_83E618B0;
// protected: XGRAPHICS::IRCJmp::IRCJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRCJmp::OperationInputs(void) const;
// public: virtual void XGRAPHICS::IRCJmp::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRCJmp::SetCondition(bool);
// merged_83E619F8;
// private: XGRAPHICS::IRJmp::IRJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual void XGRAPHICS::IRJmp::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IRJmp::~IRJmp(void);
// merged_83E61B18;
// private: XGRAPHICS::IRCmp2::IRCmp2(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRCmp2::OperationInputs(void) const;
// public: virtual char const * XGRAPHICS::IRCmp2::InstType(void) const;
// public: virtual XGRAPHICS::IRCmp2::~IRCmp2(void);
// merged_83E61C98;
// private: XGRAPHICS::IRKill::IRKill(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRKill::InstType(void) const;
// public: virtual XGRAPHICS::IRKill::~IRKill(void);
// merged_83E61DD8;
// private: XGRAPHICS::IRKill2::IRKill2(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRKill2::OperationInputs(void) const;
// public: virtual char const * XGRAPHICS::IRKill2::InstType(void) const;
// public: virtual XGRAPHICS::IRKill2::~IRKill2(void);
// merged_83E61F40;
// private: XGRAPHICS::IRCmp1S::IRCmp1S(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRCmp1S::InstType(void) const;
// public: virtual XGRAPHICS::IRCmp1S::~IRCmp1S(void);
// merged_83E62098;
// private: XGRAPHICS::IRCmp1D::IRCmp1D(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual char const * XGRAPHICS::IRCmp1D::InstType(void) const;
// public: virtual XGRAPHICS::IRCmp1D::~IRCmp1D(void);
// merged_83E621F0;
// public: XGRAPHICS::IRStartMakeCall::IRStartMakeCall(int, int, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IRStartMakeCall::~IRStartMakeCall(void);
// merged_83E622F0;
// public: XGRAPHICS::IRStartCallRoutine::IRStartCallRoutine(int, int, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IRStartCallRoutine::~IRStartCallRoutine(void);
// merged_83E623F0;
// public: XGRAPHICS::IREndMakeCall::IREndMakeCall(class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IREndMakeCall::~IREndMakeCall(void);
// merged_83E624F8;
// public: XGRAPHICS::IREndCallRoutine::IREndCallRoutine(class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IREndCallRoutine::~IREndCallRoutine(void);
// merged_83E62600;
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRUnary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMov::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMovBase::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRBinary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTrinary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRZeroary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRKill::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRKill2::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCmp2::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCmp1S::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCmp1D::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTextureFetch::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRProjection::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRLoopStart::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRLoopIndex::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocPos::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocMem::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocColor::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocInterp::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAlloc::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRZeroary::MakeIRZeroary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRUnary::MakeIRUnary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMov::MakeIRMov(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRBinary::MakeIRBinary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTrinary::MakeIRTrinary(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRVertexFetch::MakeIRVertexFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *, unsigned int, unsigned int);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTextureFetch::MakeIRTextureFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCJmp::MakeIRCJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRJmp::MakeIRJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: XGRAPHICS::IRNop::IRNop(enum R400Tables::Op, class XGRAPHICS::Compiler *);
// public: virtual XGRAPHICS::IRNop::~IRNop(void);
// merged_83E633B0;
// public: static class XGRAPHICS::IRInst * XGRAPHICS::IRNop::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *);

//unsigned int XGRAPHICS::FloatToFixed(float, int, int)
//{
//    mangled_ppc("?FloatToFixed@XGRAPHICS@@YAIMHH@Z");
//};

//float XGRAPHICS::FixedToFloat(unsigned int, int, int)
//{
//    mangled_ppc("?FixedToFloat@XGRAPHICS@@YAMIHH@Z");
//};

//public: bool XGRAPHICS::IRInst::DefEqualsSrcOperand(class XGRAPHICS::IRInst *, int) const
//{
//    mangled_ppc("?DefEqualsSrcOperand@IRInst@XGRAPHICS@@QBA_NPAV12@H@Z");
//};

//public: bool XGRAPHICS::IRInst::ModifiersAreCompatible(class XGRAPHICS::IRInst const *) const
//{
//    mangled_ppc("?ModifiersAreCompatible@IRInst@XGRAPHICS@@QBA_NPBV12@@Z");
//};

//public: bool XGRAPHICS::IRInst::WriteMasksAreDisjunct(class XGRAPHICS::IRInst const *) const
//{
//    mangled_ppc("?WriteMasksAreDisjunct@IRInst@XGRAPHICS@@QBA_NPBV12@@Z");
//};

//public: int XGRAPHICS::IRInst::NumWrittenChannel(void) const
//{
//    mangled_ppc("?NumWrittenChannel@IRInst@XGRAPHICS@@QBAHXZ");
//};

//public: void XGRAPHICS::IRInst::SetCompensationWriteMask(class XGRAPHICS::IRInst const *)
//{
//    mangled_ppc("?SetCompensationWriteMask@IRInst@XGRAPHICS@@QAAXPBV12@@Z");
//};

//public: bool const XGRAPHICS::IRInst::DestHasMasks(void) const
//{
//    mangled_ppc("?DestHasMasks@IRInst@XGRAPHICS@@QBA?B_NXZ");
//};

//public: static int XGRAPHICS::IRInst::ExportOrder(enum R400Tables::RegType)
//{
//    mangled_ppc("?ExportOrder@IRInst@XGRAPHICS@@SAHW4RegType@R400Tables@@@Z");
//};

//private: void XGRAPHICS::IRVertexFetch::Init(int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Init@IRVertexFetch@XGRAPHICS@@AAAXHPAVCompiler@2@@Z");
//};

//bool XGRAPHICS::VerifyInst_ctors(void)
//{
//    mangled_ppc("?VerifyInst_ctors@XGRAPHICS@@YA_NXZ");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRInst::Make(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Make@IRInst@XGRAPHICS@@SAPAV12@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::IRStartCallRoutine::Putcallblock(int)
//{
//    mangled_ppc("?Putcallblock@IRStartCallRoutine@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::IRStartCallRoutine::Putsize(int)
//{
//    mangled_ppc("?Putsize@IRStartCallRoutine@XGRAPHICS@@QAAXH@Z");
//};

//private: void XGRAPHICS::IRStartMakeCall::Putcallblock(int)
//{
//    mangled_ppc("?Putcallblock@IRStartMakeCall@XGRAPHICS@@AAAXH@Z");
//};

//private: void XGRAPHICS::IRStartMakeCall::Putsize(int)
//{
//    mangled_ppc("?Putsize@IRStartMakeCall@XGRAPHICS@@AAAXH@Z");
//};

//private: void XGRAPHICS::IRHeader::PutILVersionNum(int)
//{
//    mangled_ppc("?PutILVersionNum@IRHeader@XGRAPHICS@@AAAXH@Z");
//};

//private: void XGRAPHICS::IRVertexFetch::Putdword_position(unsigned int)
//{
//    mangled_ppc("?Putdword_position@IRVertexFetch@XGRAPHICS@@AAAXI@Z");
//};

//private: void XGRAPHICS::IRVertexFetch::Putvertex_element(unsigned int)
//{
//    mangled_ppc("?Putvertex_element@IRVertexFetch@XGRAPHICS@@AAAXI@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::Puttexture_stage(int)
//{
//    mangled_ppc("?Puttexture_stage@IRTextureFetch@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::Putfields(struct XGRAPHICS::texld_fields *)
//{
//    mangled_ppc("?Putfields@IRTextureFetch@XGRAPHICS@@QAAXPAUtexld_fields@2@@Z");
//};

//protected: void XGRAPHICS::IRCJmp::PutbTakenCondition(bool)
//{
//    mangled_ppc("?PutbTakenCondition@IRCJmp@XGRAPHICS@@IAAX_N@Z");
//};

//private: void XGRAPHICS::IRKill::Putgpr_proj(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?Putgpr_proj@IRKill@XGRAPHICS@@AAAXPAVIRProjection@2@@Z");
//};

//private: void XGRAPHICS::IRKill2::Putgpr_proj(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?Putgpr_proj@IRKill2@XGRAPHICS@@AAAXPAVIRProjection@2@@Z");
//};

//private: void XGRAPHICS::IRMovBase::Putcomponent(int)
//{
//    mangled_ppc("?Putcomponent@IRMovBase@XGRAPHICS@@AAAXH@Z");
//};

//private: void XGRAPHICS::IRMovBase::Putaddr_proj(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?Putaddr_proj@IRMovBase@XGRAPHICS@@AAAXPAVIRProjection@2@@Z");
//};

//private: void XGRAPHICS::IRMovBase::Putindex_proj(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?Putindex_proj@IRMovBase@XGRAPHICS@@AAAXPAVIRProjection@2@@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::IRMovBase::Getinitial_mova(void) const
//{
//    mangled_ppc("?Getinitial_mova@IRMovBase@XGRAPHICS@@ABAPAVIRInst@2@XZ");
//};

//private: void XGRAPHICS::IRMovBase::Putinitial_mova(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?Putinitial_mova@IRMovBase@XGRAPHICS@@AAAXPAVIRInst@2@@Z");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::IRInst::Clone(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Clone@IRInst@XGRAPHICS@@QAAPAV12@PAVCompiler@2@@Z");
//};

//public: bool XGRAPHICS::IRInst::Validate(void) const
//{
//    mangled_ppc("?Validate@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: enum XGRAPHICS::IDX_MODE XGRAPHICS::IRInst::GetIndexingMode(int) const
//{
//    mangled_ppc("?GetIndexingMode@IRInst@XGRAPHICS@@QBA?AW4IDX_MODE@2@H@Z");
//};

//private: void XGRAPHICS::IRInst::Init(void)
//{
//    mangled_ppc("?Init@IRInst@XGRAPHICS@@AAAXXZ");
//};

//public: void XGRAPHICS::IRInst::SetOperandWithVReg(int, class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?SetOperandWithVReg@IRInst@XGRAPHICS@@QAAXHPAVVRegInfo@2@@Z");
//};

//private: void XGRAPHICS::IRInst::SetConstArg(class XGRAPHICS::CFG *, int, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst, struct XGRAPHICS::konst)
//{
//    mangled_ppc("?SetConstArg@IRInst@XGRAPHICS@@AAAXPAVCFG@2@HUkonst@2@111@Z");
//};

//public: virtual void XGRAPHICS::IRInst::Kill(void)
//{
//    mangled_ppc("?Kill@IRInst@XGRAPHICS@@UAAXXZ");
//};

//public: virtual void XGRAPHICS::IRLoadConst::Kill(void)
//{
//    mangled_ppc("?Kill@IRLoadConst@XGRAPHICS@@UAAXXZ");
//};

//public: void XGRAPHICS::IRInst::RemoveFromBlock(void)
//{
//    mangled_ppc("?RemoveFromBlock@IRInst@XGRAPHICS@@QAAXXZ");
//};

//public: bool XGRAPHICS::IRInst::IsUselessPhi(void) const
//{
//    mangled_ppc("?IsUselessPhi@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//public: bool const XGRAPHICS::IRInst::HasSingleUse(class XGRAPHICS::CFG *) const
//{
//    mangled_ppc("?HasSingleUse@IRInst@XGRAPHICS@@QBA?B_NPAVCFG@2@@Z");
//};

//public: bool const XGRAPHICS::IRInst::HasModifiers(int) const
//{
//    mangled_ppc("?HasModifiers@IRInst@XGRAPHICS@@QBA?B_NH@Z");
//};

//public: static enum R400Tables::RegType XGRAPHICS::IRInst::ExportType(enum R400Tables::RegType, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?ExportType@IRInst@XGRAPHICS@@SA?AW4RegType@R400Tables@@W434@PAVCompiler@2@@Z");
//};

//public: bool XGRAPHICS::IRInst::InputEdgeIsZeroLength(int, class XGRAPHICS::IRInst *) const
//{
//    mangled_ppc("?InputEdgeIsZeroLength@IRInst@XGRAPHICS@@QBA_NHPAV12@@Z");
//};

//public: virtual void XGRAPHICS::IRAlu::MarkInstructionAsExport(class XGRAPHICS::CFG *, enum R400Tables::RegType, int)
//{
//    mangled_ppc("?MarkInstructionAsExport@IRAlu@XGRAPHICS@@UAAXPAVCFG@2@W4RegType@R400Tables@@H@Z");
//};

//public: virtual XGRAPHICS::IRZeroary::~IRZeroary(void)
//{
//    mangled_ppc("??1IRZeroary@XGRAPHICS@@UAA@XZ");
//};

//public: void XGRAPHICS::IRInst::AddReachingLink(class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?AddReachingLink@IRInst@XGRAPHICS@@QAAXPAV12@@Z");
//};

//public: virtual XGRAPHICS::IRUnary::~IRUnary(void)
//{
//    mangled_ppc("??1IRUnary@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IRBinary::~IRBinary(void)
//{
//    mangled_ppc("??1IRBinary@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IRMov::~IRMov(void)
//{
//    mangled_ppc("??1IRMov@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IRMovBase::~IRMovBase(void)
//{
//    mangled_ppc("??1IRMovBase@XGRAPHICS@@UAA@XZ");
//};

//public: void XGRAPHICS::IRMovBase::SetComponent(int)
//{
//    mangled_ppc("?SetComponent@IRMovBase@XGRAPHICS@@QAAXH@Z");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::IRMovBase::FindInitialMova(void)
//{
//    mangled_ppc("?FindInitialMova@IRMovBase@XGRAPHICS@@QAAPAVIRInst@2@XZ");
//};

//public: virtual XGRAPHICS::IRExport::~IRExport(void)
//{
//    mangled_ppc("??1IRExport@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IRPseudo::~IRPseudo(void)
//{
//    mangled_ppc("??1IRPseudo@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IRAlloc::~IRAlloc(void)
//{
//    mangled_ppc("??1IRAlloc@XGRAPHICS@@UAA@XZ");
//};

//public: virtual XGRAPHICS::IRFetch::~IRFetch(void)
//{
//    mangled_ppc("??1IRFetch@XGRAPHICS@@UAA@XZ");
//};

//public: void XGRAPHICS::IRVertexFetch::GetStreamNumAndEtc(unsigned int *, int *, int *)
//{
//    mangled_ppc("?GetStreamNumAndEtc@IRVertexFetch@XGRAPHICS@@QAAXPAIPAH1@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::ReplaceFields(struct XGRAPHICS::texld_fields *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?ReplaceFields@IRTextureFetch@XGRAPHICS@@QAAXPAUtexld_fields@2@PAVCompiler@2@@Z");
//};

//public: void XGRAPHICS::IRInst::ChangeToScalar(int, int, bool)
//{
//    mangled_ppc("?ChangeToScalar@IRInst@XGRAPHICS@@QAAXHH_N@Z");
//};

//public: bool XGRAPHICS::IRInst::ChangeToVector(void)
//{
//    mangled_ppc("?ChangeToVector@IRInst@XGRAPHICS@@QAA_NXZ");
//};

//public: virtual XGRAPHICS::IRCJmp::~IRCJmp(void)
//{
//    mangled_ppc("??1IRCJmp@XGRAPHICS@@UAA@XZ");
//};

//protected: XGRAPHICS::IRInst::IRInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRInst@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: void XGRAPHICS::IRInst::AddAnInput(class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?AddAnInput@IRInst@XGRAPHICS@@QAAXPAVVRegInfo@2@@Z");
//};

//public: void XGRAPHICS::IRInst::SetConstArg(class XGRAPHICS::CFG *, int, float, float, float, float)
//{
//    mangled_ppc("?SetConstArg@IRInst@XGRAPHICS@@QAAXPAVCFG@2@HMMMM@Z");
//};

//public: void XGRAPHICS::IRInst::SetConstArg(class XGRAPHICS::CFG *, int, struct XGRAPHICS::named_value, struct XGRAPHICS::named_value, struct XGRAPHICS::named_value, struct XGRAPHICS::named_value)
//{
//    mangled_ppc("?SetConstArg@IRInst@XGRAPHICS@@QAAXPAVCFG@2@HUnamed_value@2@111@Z");
//};

//protected: XGRAPHICS::IRAlu::IRAlu(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRAlu@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//protected: XGRAPHICS::IRZeroary::IRZeroary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRZeroary@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRZeroary::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRZeroary@XGRAPHICS@@UBA?BHXZ");
//};

//merged_83E5F068
//{
//    mangled_ppc("merged_83E5F068");
//};

//protected: XGRAPHICS::IRUnary::IRUnary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRUnary@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRUnary::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRUnary@XGRAPHICS@@UBA?BHXZ");
//};

//merged_83E5F140
//{
//    mangled_ppc("merged_83E5F140");
//};

//protected: XGRAPHICS::IRBinary::IRBinary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRBinary@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRBinary::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRBinary@XGRAPHICS@@UBA?BHXZ");
//};

//merged_83E5F218
//{
//    mangled_ppc("merged_83E5F218");
//};

//private: XGRAPHICS::IRTrinary::IRTrinary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRTrinary@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//protected: XGRAPHICS::IRMov::IRMov(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRMov@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRMov::IsMov(void) const
//{
//    mangled_ppc("?IsMov@IRMov@XGRAPHICS@@UBA?B_NXZ");
//};

//merged_83E5F360
//{
//    mangled_ppc("merged_83E5F360");
//};

//public: XGRAPHICS::IRCopy::IRCopy(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRCopy@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IRCopy::~IRCopy(void)
//{
//    mangled_ppc("??1IRCopy@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5F468
//{
//    mangled_ppc("merged_83E5F468");
//};

//public: XGRAPHICS::IRMovBase::IRMovBase(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRMovBase@XGRAPHICS@@QAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRMovBase::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRMovBase@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual int const XGRAPHICS::IRMovBase::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRMovBase@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRMovBase::InstType(void) const
//{
//    mangled_ppc("?InstType@IRMovBase@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool const XGRAPHICS::IRMovBase::IsMovBase(void) const
//{
//    mangled_ppc("?IsMovBase@IRMovBase@XGRAPHICS@@UBA?B_NXZ");
//};

//merged_83E5F5D0
//{
//    mangled_ppc("merged_83E5F5D0");
//};

//public: XGRAPHICS::IRExport::IRExport(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRExport@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRExport::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRExport@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRExport::InstType(void) const
//{
//    mangled_ppc("?InstType@IRExport@XGRAPHICS@@UBAPBDXZ");
//};

//merged_83E5F718
//{
//    mangled_ppc("merged_83E5F718");
//};

//public: XGRAPHICS::IRExportZeroOne::IRExportZeroOne(class XGRAPHICS::VRegInfo *, union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRExportZeroOne@XGRAPHICS@@QAA@PAVVRegInfo@1@TSwizzleOrMaskInfo@1@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRExportZeroOne::InstType(void) const
//{
//    mangled_ppc("?InstType@IRExportZeroOne@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRExportZeroOne::~IRExportZeroOne(void)
//{
//    mangled_ppc("??1IRExportZeroOne@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5F850
//{
//    mangled_ppc("merged_83E5F850");
//};

//protected: XGRAPHICS::IRPseudo::IRPseudo(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRPseudo@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRPseudo::IsPseudo(void) const
//{
//    mangled_ppc("?IsPseudo@IRPseudo@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual int const XGRAPHICS::IRPseudo::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRPseudo@XGRAPHICS@@UBA?BHXZ");
//};

//protected: virtual void XGRAPHICS::IRPseudo::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRPseudo@XGRAPHICS@@MAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//protected: virtual char const * XGRAPHICS::IRPseudo::InstType(void) const
//{
//    mangled_ppc("?InstType@IRPseudo@XGRAPHICS@@MBAPBDXZ");
//};

//merged_83E5F9A8
//{
//    mangled_ppc("merged_83E5F9A8");
//};

//public: XGRAPHICS::IRHeader::IRHeader(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRHeader@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IRHeader::~IRHeader(void)
//{
//    mangled_ppc("??1IRHeader@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5FAB0
//{
//    mangled_ppc("merged_83E5FAB0");
//};

//public: XGRAPHICS::IREntry::IREntry(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IREntry@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IREntry::IsEntry(void) const
//{
//    mangled_ppc("?IsEntry@IREntry@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual char const * XGRAPHICS::IREntry::InstType(void) const
//{
//    mangled_ppc("?InstType@IREntry@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IREntry::~IREntry(void)
//{
//    mangled_ppc("??1IREntry@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5FC08
//{
//    mangled_ppc("merged_83E5FC08");
//};

//public: XGRAPHICS::IRExit::IRExit(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRExit@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRExit::IsExit(void) const
//{
//    mangled_ppc("?IsExit@IRExit@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual char const * XGRAPHICS::IRExit::InstType(void) const
//{
//    mangled_ppc("?InstType@IRExit@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRExit::~IRExit(void)
//{
//    mangled_ppc("??1IRExit@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5FD60
//{
//    mangled_ppc("merged_83E5FD60");
//};

//public: XGRAPHICS::IRLoadConst::IRLoadConst(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoadConst@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRLoadConst::IsLoadConst(void) const
//{
//    mangled_ppc("?IsLoadConst@IRLoadConst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual char const * XGRAPHICS::IRLoadConst::InstType(void) const
//{
//    mangled_ppc("?InstType@IRLoadConst@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRLoadConst::~IRLoadConst(void)
//{
//    mangled_ppc("??1IRLoadConst@XGRAPHICS@@UAA@XZ");
//};

//merged_83E5FEC8
//{
//    mangled_ppc("merged_83E5FEC8");
//};

//public: XGRAPHICS::IRLoadConst::IRLoadConst(class XGRAPHICS::VRegInfo *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoadConst@XGRAPHICS@@QAA@PAVVRegInfo@1@PAVCompiler@1@@Z");
//};

//public: XGRAPHICS::IRLoadTemp::IRLoadTemp(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoadTemp@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRLoadTemp::IsLoadTemp(void) const
//{
//    mangled_ppc("?IsLoadTemp@IRLoadTemp@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual char const * XGRAPHICS::IRLoadTemp::InstType(void) const
//{
//    mangled_ppc("?InstType@IRLoadTemp@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRLoadTemp::~IRLoadTemp(void)
//{
//    mangled_ppc("??1IRLoadTemp@XGRAPHICS@@UAA@XZ");
//};

//merged_83E600A0
//{
//    mangled_ppc("merged_83E600A0");
//};

//public: XGRAPHICS::IRLoadTemp::IRLoadTemp(class XGRAPHICS::VRegInfo *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoadTemp@XGRAPHICS@@QAA@PAVVRegInfo@1@PAVCompiler@1@@Z");
//};

//public: XGRAPHICS::IRLoadInterp::IRLoadInterp(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoadInterp@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRLoadInterp::InstType(void) const
//{
//    mangled_ppc("?InstType@IRLoadInterp@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual class XGRAPHICS::IRLoadInterp * XGRAPHICS::IRLoadInterp::AsIRLoadInterp(void)
//{
//    mangled_ppc("?AsIRLoadInterp@IRLoadInterp@XGRAPHICS@@UAAPAV12@XZ");
//};

//public: virtual XGRAPHICS::IRLoadInterp::~IRLoadInterp(void)
//{
//    mangled_ppc("??1IRLoadInterp@XGRAPHICS@@UAA@XZ");
//};

//merged_83E60290
//{
//    mangled_ppc("merged_83E60290");
//};

//public: XGRAPHICS::IRVLFetch::IRVLFetch(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRVLFetch@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRVLFetch::InstType(void) const
//{
//    mangled_ppc("?InstType@IRVLFetch@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRVLFetch::~IRVLFetch(void)
//{
//    mangled_ppc("??1IRVLFetch@XGRAPHICS@@UAA@XZ");
//};

//merged_83E603C0
//{
//    mangled_ppc("merged_83E603C0");
//};

//public: XGRAPHICS::IRPLFetch::IRPLFetch(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRPLFetch@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRPLFetch::InstType(void) const
//{
//    mangled_ppc("?InstType@IRPLFetch@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRPLFetch::~IRPLFetch(void)
//{
//    mangled_ppc("??1IRPLFetch@XGRAPHICS@@UAA@XZ");
//};

//merged_83E604F0
//{
//    mangled_ppc("merged_83E604F0");
//};

//public: XGRAPHICS::IRMerge::IRMerge(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRMerge@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRMerge::InstType(void) const
//{
//    mangled_ppc("?InstType@IRMerge@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRMerge::~IRMerge(void)
//{
//    mangled_ppc("??1IRMerge@XGRAPHICS@@UAA@XZ");
//};

//merged_83E60620
//{
//    mangled_ppc("merged_83E60620");
//};

//public: XGRAPHICS::IRProjection::IRProjection(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRProjection@XGRAPHICS@@QAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRProjection::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRProjection@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual int const XGRAPHICS::IRProjection::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRProjection@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRProjection::InstType(void) const
//{
//    mangled_ppc("?InstType@IRProjection@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual bool const XGRAPHICS::IRProjection::IsProjection(void) const
//{
//    mangled_ppc("?IsProjection@IRProjection@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual XGRAPHICS::IRProjection::~IRProjection(void)
//{
//    mangled_ppc("??1IRProjection@XGRAPHICS@@UAA@XZ");
//};

//merged_83E607D0
//{
//    mangled_ppc("merged_83E607D0");
//};

//public: XGRAPHICS::IRPhiNode::IRPhiNode(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRPhiNode@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual class XGRAPHICS::IRPhiNode * XGRAPHICS::IRPhiNode::AsPhi(void)
//{
//    mangled_ppc("?AsPhi@IRPhiNode@XGRAPHICS@@UAAPAV12@XZ");
//};

//public: virtual char const * XGRAPHICS::IRPhiNode::InstType(void) const
//{
//    mangled_ppc("?InstType@IRPhiNode@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRPhiNode::~IRPhiNode(void)
//{
//    mangled_ppc("??1IRPhiNode@XGRAPHICS@@UAA@XZ");
//};

//merged_83E60940
//{
//    mangled_ppc("merged_83E60940");
//};

//private: XGRAPHICS::IRLoopStart::IRLoopStart(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoopStart@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRLoopStart::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRLoopStart@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRLoopStart::InstType(void) const
//{
//    mangled_ppc("?InstType@IRLoopStart@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRLoopStart::~IRLoopStart(void)
//{
//    mangled_ppc("??1IRLoopStart@XGRAPHICS@@UAA@XZ");
//};

//merged_83E60AB8
//{
//    mangled_ppc("merged_83E60AB8");
//};

//public: XGRAPHICS::IRLoopIndex::IRLoopIndex(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoopIndex@XGRAPHICS@@QAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRLoopIndex::InstType(void) const
//{
//    mangled_ppc("?InstType@IRLoopIndex@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual int const XGRAPHICS::IRLoopIndex::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRLoopIndex@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual int const XGRAPHICS::IRLoopIndex::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRLoopIndex@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual XGRAPHICS::IRLoopIndex::~IRLoopIndex(void)
//{
//    mangled_ppc("??1IRLoopIndex@XGRAPHICS@@UAA@XZ");
//};

//merged_83E60C40
//{
//    mangled_ppc("merged_83E60C40");
//};

//public: XGRAPHICS::IRLoopIndex::IRLoopIndex(class XGRAPHICS::VRegInfo *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRLoopIndex@XGRAPHICS@@QAA@PAVVRegInfo@1@PAVCompiler@1@@Z");
//};

//public: XGRAPHICS::IRAlloc::IRAlloc(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRAlloc@XGRAPHICS@@QAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRAlloc::IsAlloc(void) const
//{
//    mangled_ppc("?IsAlloc@IRAlloc@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual int const XGRAPHICS::IRAlloc::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRAlloc@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual int const XGRAPHICS::IRAlloc::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRAlloc@XGRAPHICS@@UBA?BHXZ");
//};

//merged_83E60DF8
//{
//    mangled_ppc("merged_83E60DF8");
//};

//private: XGRAPHICS::IRAllocInterp::IRAllocInterp(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRAllocInterp@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRAllocInterp::InstType(void) const
//{
//    mangled_ppc("?InstType@IRAllocInterp@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRAllocInterp::~IRAllocInterp(void)
//{
//    mangled_ppc("??1IRAllocInterp@XGRAPHICS@@UAA@XZ");
//};

//merged_83E60F28
//{
//    mangled_ppc("merged_83E60F28");
//};

//private: XGRAPHICS::IRAllocPos::IRAllocPos(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRAllocPos@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRAllocPos::InstType(void) const
//{
//    mangled_ppc("?InstType@IRAllocPos@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRAllocPos::~IRAllocPos(void)
//{
//    mangled_ppc("??1IRAllocPos@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61058
//{
//    mangled_ppc("merged_83E61058");
//};

//private: XGRAPHICS::IRAllocMem::IRAllocMem(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRAllocMem@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRAllocMem::InstType(void) const
//{
//    mangled_ppc("?InstType@IRAllocMem@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRAllocMem::~IRAllocMem(void)
//{
//    mangled_ppc("??1IRAllocMem@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61188
//{
//    mangled_ppc("merged_83E61188");
//};

//private: XGRAPHICS::IRAllocColor::IRAllocColor(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRAllocColor@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRAllocColor::InstType(void) const
//{
//    mangled_ppc("?InstType@IRAllocColor@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRAllocColor::~IRAllocColor(void)
//{
//    mangled_ppc("??1IRAllocColor@XGRAPHICS@@UAA@XZ");
//};

//merged_83E612B8
//{
//    mangled_ppc("merged_83E612B8");
//};

//protected: XGRAPHICS::IRFetch::IRFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRFetch@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRFetch::IsFetch(void) const
//{
//    mangled_ppc("?IsFetch@IRFetch@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual int const XGRAPHICS::IRFetch::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRFetch@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRFetch::InstType(void) const
//{
//    mangled_ppc("?InstType@IRFetch@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual void XGRAPHICS::IRFetch::SetSwizzle(int, int, int)
//{
//    mangled_ppc("?SetSwizzle@IRFetch@XGRAPHICS@@UAAXHHH@Z");
//};

//merged_83E61468
//{
//    mangled_ppc("merged_83E61468");
//};

//private: XGRAPHICS::IRVertexFetch::IRVertexFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0IRVertexFetch@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@II@Z");
//};

//public: virtual bool const XGRAPHICS::IRVertexFetch::IsVertexFetch(void) const
//{
//    mangled_ppc("?IsVertexFetch@IRVertexFetch@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual XGRAPHICS::IRVertexFetch::~IRVertexFetch(void)
//{
//    mangled_ppc("??1IRVertexFetch@XGRAPHICS@@UAA@XZ");
//};

//merged_83E615B8
//{
//    mangled_ppc("merged_83E615B8");
//};

//protected: XGRAPHICS::IRTextureFetch::IRTextureFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRTextureFetch@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual bool const XGRAPHICS::IRTextureFetch::IsTextureFetch(void) const
//{
//    mangled_ppc("?IsTextureFetch@IRTextureFetch@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual XGRAPHICS::IRTextureFetch::~IRTextureFetch(void)
//{
//    mangled_ppc("??1IRTextureFetch@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61750
//{
//    mangled_ppc("merged_83E61750");
//};

//public: XGRAPHICS::IRExportColorAndFog::IRExportColorAndFog(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRExportColorAndFog@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRExportColorAndFog::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRExportColorAndFog@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRExportColorAndFog::InstType(void) const
//{
//    mangled_ppc("?InstType@IRExportColorAndFog@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRExportColorAndFog::~IRExportColorAndFog(void)
//{
//    mangled_ppc("??1IRExportColorAndFog@XGRAPHICS@@UAA@XZ");
//};

//merged_83E618B0
//{
//    mangled_ppc("merged_83E618B0");
//};

//protected: XGRAPHICS::IRCJmp::IRCJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRCJmp@XGRAPHICS@@IAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRCJmp::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRCJmp@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual void XGRAPHICS::IRCJmp::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRCJmp@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual void XGRAPHICS::IRCJmp::SetCondition(bool)
//{
//    mangled_ppc("?SetCondition@IRCJmp@XGRAPHICS@@UAAX_N@Z");
//};

//merged_83E619F8
//{
//    mangled_ppc("merged_83E619F8");
//};

//private: XGRAPHICS::IRJmp::IRJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRJmp@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual void XGRAPHICS::IRJmp::Assemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Assemble@IRJmp@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual XGRAPHICS::IRJmp::~IRJmp(void)
//{
//    mangled_ppc("??1IRJmp@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61B18
//{
//    mangled_ppc("merged_83E61B18");
//};

//private: XGRAPHICS::IRCmp2::IRCmp2(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRCmp2@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRCmp2::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRCmp2@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRCmp2::InstType(void) const
//{
//    mangled_ppc("?InstType@IRCmp2@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRCmp2::~IRCmp2(void)
//{
//    mangled_ppc("??1IRCmp2@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61C98
//{
//    mangled_ppc("merged_83E61C98");
//};

//private: XGRAPHICS::IRKill::IRKill(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRKill@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRKill::InstType(void) const
//{
//    mangled_ppc("?InstType@IRKill@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRKill::~IRKill(void)
//{
//    mangled_ppc("??1IRKill@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61DD8
//{
//    mangled_ppc("merged_83E61DD8");
//};

//private: XGRAPHICS::IRKill2::IRKill2(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRKill2@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRKill2::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRKill2@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual char const * XGRAPHICS::IRKill2::InstType(void) const
//{
//    mangled_ppc("?InstType@IRKill2@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRKill2::~IRKill2(void)
//{
//    mangled_ppc("??1IRKill2@XGRAPHICS@@UAA@XZ");
//};

//merged_83E61F40
//{
//    mangled_ppc("merged_83E61F40");
//};

//private: XGRAPHICS::IRCmp1S::IRCmp1S(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRCmp1S@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRCmp1S::InstType(void) const
//{
//    mangled_ppc("?InstType@IRCmp1S@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRCmp1S::~IRCmp1S(void)
//{
//    mangled_ppc("??1IRCmp1S@XGRAPHICS@@UAA@XZ");
//};

//merged_83E62098
//{
//    mangled_ppc("merged_83E62098");
//};

//private: XGRAPHICS::IRCmp1D::IRCmp1D(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRCmp1D@XGRAPHICS@@AAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual char const * XGRAPHICS::IRCmp1D::InstType(void) const
//{
//    mangled_ppc("?InstType@IRCmp1D@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual XGRAPHICS::IRCmp1D::~IRCmp1D(void)
//{
//    mangled_ppc("??1IRCmp1D@XGRAPHICS@@UAA@XZ");
//};

//merged_83E621F0
//{
//    mangled_ppc("merged_83E621F0");
//};

//public: XGRAPHICS::IRStartMakeCall::IRStartMakeCall(int, int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRStartMakeCall@XGRAPHICS@@QAA@HHPAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IRStartMakeCall::~IRStartMakeCall(void)
//{
//    mangled_ppc("??1IRStartMakeCall@XGRAPHICS@@UAA@XZ");
//};

//merged_83E622F0
//{
//    mangled_ppc("merged_83E622F0");
//};

//public: XGRAPHICS::IRStartCallRoutine::IRStartCallRoutine(int, int, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRStartCallRoutine@XGRAPHICS@@QAA@HHPAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IRStartCallRoutine::~IRStartCallRoutine(void)
//{
//    mangled_ppc("??1IRStartCallRoutine@XGRAPHICS@@UAA@XZ");
//};

//merged_83E623F0
//{
//    mangled_ppc("merged_83E623F0");
//};

//public: XGRAPHICS::IREndMakeCall::IREndMakeCall(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IREndMakeCall@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IREndMakeCall::~IREndMakeCall(void)
//{
//    mangled_ppc("??1IREndMakeCall@XGRAPHICS@@UAA@XZ");
//};

//merged_83E624F8
//{
//    mangled_ppc("merged_83E624F8");
//};

//public: XGRAPHICS::IREndCallRoutine::IREndCallRoutine(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IREndCallRoutine@XGRAPHICS@@QAA@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IREndCallRoutine::~IREndCallRoutine(void)
//{
//    mangled_ppc("??1IREndCallRoutine@XGRAPHICS@@UAA@XZ");
//};

//merged_83E62600
//{
//    mangled_ppc("merged_83E62600");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRUnary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRUnary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMov::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRMov@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMovBase::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRMovBase@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRBinary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRBinary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTrinary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRTrinary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRZeroary::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRZeroary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRKill::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRKill@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRKill2::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRKill2@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCmp2::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRCmp2@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCmp1S::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRCmp1S@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCmp1D::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRCmp1D@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTextureFetch::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRTextureFetch@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRProjection::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRProjection@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRLoopStart::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRLoopStart@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRLoopIndex::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRLoopIndex@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocPos::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRAllocPos@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocMem::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRAllocMem@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocColor::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRAllocColor@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAllocInterp::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRAllocInterp@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRAlloc::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRAlloc@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRZeroary::MakeIRZeroary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRZeroary@IRZeroary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRUnary::MakeIRUnary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRUnary@IRUnary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRMov::MakeIRMov(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRMov@IRMov@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRBinary::MakeIRBinary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRBinary@IRBinary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTrinary::MakeIRTrinary(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRTrinary@IRTrinary@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRVertexFetch::MakeIRVertexFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *, unsigned int, unsigned int)
//{
//    mangled_ppc("?MakeIRVertexFetch@IRVertexFetch@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@II@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRTextureFetch::MakeIRTextureFetch(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRTextureFetch@IRTextureFetch@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRCJmp::MakeIRCJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRCJmp@IRCJmp@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRJmp::MakeIRJmp(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?MakeIRJmp@IRJmp@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

//public: XGRAPHICS::IRNop::IRNop(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRNop@XGRAPHICS@@QAA@W4Op@R400Tables@@PAVCompiler@1@@Z");
//};

//public: virtual XGRAPHICS::IRNop::~IRNop(void)
//{
//    mangled_ppc("??1IRNop@XGRAPHICS@@UAA@XZ");
//};

//merged_83E633B0
//{
//    mangled_ppc("merged_83E633B0");
//};

//public: static class XGRAPHICS::IRInst * XGRAPHICS::IRNop::NewInst(enum R400Tables::Op, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?NewInst@IRNop@XGRAPHICS@@SAPAVIRInst@2@W4Op@R400Tables@@PAVCompiler@2@@Z");
//};

