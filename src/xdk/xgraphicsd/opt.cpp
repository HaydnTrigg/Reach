/* ---------- headers */

#include "xdk\xgraphicsd\opt.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned char (*XGRAPHICS::subtract_writemask_from_reg)[16]; // "?subtract_writemask_from_reg@XGRAPHICS@@3PAY0BA@EA"

// union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::MarkReadChannels(union XGRAPHICS::SwizzleOrMaskInfo, int);
// union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::MarkUnmaskedChannels(union XGRAPHICS::SwizzleOrMaskInfo);
// union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::SubtractMarkedMaskFromReq(union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::SwizzleOrMaskInfo);
// union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::SubtractMarkedMaskFromReqTable(union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::SwizzleOrMaskInfo);
// public: XGRAPHICS::DListNode::DListNode(bool);
// public: virtual XGRAPHICS::IRInst::~IRInst(void);
// public: bool XGRAPHICS::IRInst::IsPhi(void) const;
// protected: XGRAPHICS::IRInst::IRInst(void);
// public: virtual int const XGRAPHICS::IRInst::OperationInputs(void) const;
// public: virtual int const XGRAPHICS::IRInst::OperationOutputs(void) const;
// public: virtual void XGRAPHICS::IRInst::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *);
// public: virtual bool const XGRAPHICS::IRInst::IsAlu(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsFetch(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsVertexFetch(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsTextureFetch(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsEntry(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsExit(void) const;
// public: virtual class XGRAPHICS::IRPhiNode * XGRAPHICS::IRInst::AsPhi(void);
// public: virtual class XGRAPHICS::IRLoadInterp * XGRAPHICS::IRInst::AsIRLoadInterp(void);
// public: virtual bool const XGRAPHICS::IRInst::IsPseudo(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsAlloc(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsLoadTemp(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsLoadConst(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsMovBase(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsProjection(void) const;
// public: virtual bool const XGRAPHICS::IRInst::IsMov(void) const;
// public: virtual char const * XGRAPHICS::IRInst::InstType(void) const;
// public: virtual void XGRAPHICS::IRInst::MarkInstructionAsExport(class XGRAPHICS::CFG *, enum R400Tables::RegType, int);
// merged_83E4D2F8;
// public: virtual XGRAPHICS::IRAlu::~IRAlu(void);
// public: XGRAPHICS::IRAlu::IRAlu(void);
// public: virtual bool const XGRAPHICS::IRAlu::IsAlu(void) const;
// public: virtual char const * XGRAPHICS::IRAlu::InstType(void) const;
// merged_83E4D430;
// public: XGRAPHICS::IRTrinary::IRTrinary(enum R400Tables::Op, bool, class XGRAPHICS::Compiler *);
// public: virtual int const XGRAPHICS::IRTrinary::OperationInputs(void) const;
// public: virtual XGRAPHICS::IRTrinary::~IRTrinary(void);
// public: virtual void XGRAPHICS::IRInst::SetMask(int, int, int);
// public: virtual void XGRAPHICS::IRInst::SetSwizzle(int, int, int);
// public: virtual void XGRAPHICS::IRAlu::SetMask(int, int, int);
// public: virtual void XGRAPHICS::IRAlu::SetSwizzle(int, int, int);
// public: virtual int XGRAPHICS::IRInst::GetModifier(int, int) const;
// public: bool const XGRAPHICS::IRInst::HasScalarEquiv(bool &) const;
// public: int XGRAPHICS::IRInst::GetNumReferences(int) const;
// public: void XGRAPHICS::IRInst::IncrementReferences(int);
// public: void XGRAPHICS::CFG::BalanceVectorScalar(void);
// union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::MarkUsedChannels(class XGRAPHICS::IRInst *, int, class XGRAPHICS::CFG *);
// public: void XGRAPHICS::IRInst::Special01Case(void);
// public: void XGRAPHICS::IRInst::CollapseAlgebraicCombinations(class XGRAPHICS::CFG *);
// public: void XGRAPHICS::IRInst::CollapseSimilarInstructions(class XGRAPHICS::CFG *);
// public: void XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Clear(void);
// public: void XGRAPHICS::stack<int>::Clear(void);
// merged_83E4E878;
// public: void XGRAPHICS::CFG::RemoveUnnecessaryDependencies(void);
// public: void XGRAPHICS::IRInst::Rewrite(class XGRAPHICS::CFG *);
// public: bool XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Empty(void) const;
// public: class XGRAPHICS::IRInst *& XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Top(void);
// public: int & XGRAPHICS::stack<int>::Top(void);
// public: void XGRAPHICS::CFG::EliminateDeadCode(void);
// public: void XGRAPHICS::CFG::Rewrite(void);

//union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::MarkReadChannels(union XGRAPHICS::SwizzleOrMaskInfo, int)
//{
//    mangled_ppc("?MarkReadChannels@XGRAPHICS@@YA?ATSwizzleOrMaskInfo@1@T21@H@Z");
//};

//union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::MarkUnmaskedChannels(union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?MarkUnmaskedChannels@XGRAPHICS@@YA?ATSwizzleOrMaskInfo@1@T21@@Z");
//};

//union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::SubtractMarkedMaskFromReq(union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?SubtractMarkedMaskFromReq@XGRAPHICS@@YA?ATSwizzleOrMaskInfo@1@T21@0@Z");
//};

//union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::SubtractMarkedMaskFromReqTable(union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::SwizzleOrMaskInfo)
//{
//    mangled_ppc("?SubtractMarkedMaskFromReqTable@XGRAPHICS@@YA?ATSwizzleOrMaskInfo@1@T21@0@Z");
//};

//public: XGRAPHICS::DListNode::DListNode(bool)
//{
//    mangled_ppc("??0DListNode@XGRAPHICS@@QAA@_N@Z");
//};

//public: virtual XGRAPHICS::IRInst::~IRInst(void)
//{
//    mangled_ppc("??1IRInst@XGRAPHICS@@UAA@XZ");
//};

//public: bool XGRAPHICS::IRInst::IsPhi(void) const
//{
//    mangled_ppc("?IsPhi@IRInst@XGRAPHICS@@QBA_NXZ");
//};

//protected: XGRAPHICS::IRInst::IRInst(void)
//{
//    mangled_ppc("??0IRInst@XGRAPHICS@@IAA@XZ");
//};

//public: virtual int const XGRAPHICS::IRInst::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRInst@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual int const XGRAPHICS::IRInst::OperationOutputs(void) const
//{
//    mangled_ppc("?OperationOutputs@IRInst@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual void XGRAPHICS::IRInst::PostAssemble(class XGRAPHICS::Assembler *, char *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?PostAssemble@IRInst@XGRAPHICS@@UAAXPAVAssembler@2@PADPAVCompiler@2@@Z");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsAlu(void) const
//{
//    mangled_ppc("?IsAlu@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsFetch(void) const
//{
//    mangled_ppc("?IsFetch@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsVertexFetch(void) const
//{
//    mangled_ppc("?IsVertexFetch@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsTextureFetch(void) const
//{
//    mangled_ppc("?IsTextureFetch@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsEntry(void) const
//{
//    mangled_ppc("?IsEntry@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsExit(void) const
//{
//    mangled_ppc("?IsExit@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual class XGRAPHICS::IRPhiNode * XGRAPHICS::IRInst::AsPhi(void)
//{
//    mangled_ppc("?AsPhi@IRInst@XGRAPHICS@@UAAPAVIRPhiNode@2@XZ");
//};

//public: virtual class XGRAPHICS::IRLoadInterp * XGRAPHICS::IRInst::AsIRLoadInterp(void)
//{
//    mangled_ppc("?AsIRLoadInterp@IRInst@XGRAPHICS@@UAAPAVIRLoadInterp@2@XZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsPseudo(void) const
//{
//    mangled_ppc("?IsPseudo@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsAlloc(void) const
//{
//    mangled_ppc("?IsAlloc@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsLoadTemp(void) const
//{
//    mangled_ppc("?IsLoadTemp@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsLoadConst(void) const
//{
//    mangled_ppc("?IsLoadConst@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsMovBase(void) const
//{
//    mangled_ppc("?IsMovBase@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsProjection(void) const
//{
//    mangled_ppc("?IsProjection@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual bool const XGRAPHICS::IRInst::IsMov(void) const
//{
//    mangled_ppc("?IsMov@IRInst@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual char const * XGRAPHICS::IRInst::InstType(void) const
//{
//    mangled_ppc("?InstType@IRInst@XGRAPHICS@@UBAPBDXZ");
//};

//public: virtual void XGRAPHICS::IRInst::MarkInstructionAsExport(class XGRAPHICS::CFG *, enum R400Tables::RegType, int)
//{
//    mangled_ppc("?MarkInstructionAsExport@IRInst@XGRAPHICS@@UAAXPAVCFG@2@W4RegType@R400Tables@@H@Z");
//};

//merged_83E4D2F8
//{
//    mangled_ppc("merged_83E4D2F8");
//};

//public: virtual XGRAPHICS::IRAlu::~IRAlu(void)
//{
//    mangled_ppc("??1IRAlu@XGRAPHICS@@UAA@XZ");
//};

//public: XGRAPHICS::IRAlu::IRAlu(void)
//{
//    mangled_ppc("??0IRAlu@XGRAPHICS@@QAA@XZ");
//};

//public: virtual bool const XGRAPHICS::IRAlu::IsAlu(void) const
//{
//    mangled_ppc("?IsAlu@IRAlu@XGRAPHICS@@UBA?B_NXZ");
//};

//public: virtual char const * XGRAPHICS::IRAlu::InstType(void) const
//{
//    mangled_ppc("?InstType@IRAlu@XGRAPHICS@@UBAPBDXZ");
//};

//merged_83E4D430
//{
//    mangled_ppc("merged_83E4D430");
//};

//public: XGRAPHICS::IRTrinary::IRTrinary(enum R400Tables::Op, bool, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0IRTrinary@XGRAPHICS@@QAA@W4Op@R400Tables@@_NPAVCompiler@1@@Z");
//};

//public: virtual int const XGRAPHICS::IRTrinary::OperationInputs(void) const
//{
//    mangled_ppc("?OperationInputs@IRTrinary@XGRAPHICS@@UBA?BHXZ");
//};

//public: virtual XGRAPHICS::IRTrinary::~IRTrinary(void)
//{
//    mangled_ppc("??1IRTrinary@XGRAPHICS@@UAA@XZ");
//};

//public: virtual void XGRAPHICS::IRInst::SetMask(int, int, int)
//{
//    mangled_ppc("?SetMask@IRInst@XGRAPHICS@@UAAXHHH@Z");
//};

//public: virtual void XGRAPHICS::IRInst::SetSwizzle(int, int, int)
//{
//    mangled_ppc("?SetSwizzle@IRInst@XGRAPHICS@@UAAXHHH@Z");
//};

//public: virtual void XGRAPHICS::IRAlu::SetMask(int, int, int)
//{
//    mangled_ppc("?SetMask@IRAlu@XGRAPHICS@@UAAXHHH@Z");
//};

//public: virtual void XGRAPHICS::IRAlu::SetSwizzle(int, int, int)
//{
//    mangled_ppc("?SetSwizzle@IRAlu@XGRAPHICS@@UAAXHHH@Z");
//};

//public: virtual int XGRAPHICS::IRInst::GetModifier(int, int) const
//{
//    mangled_ppc("?GetModifier@IRInst@XGRAPHICS@@UBAHHH@Z");
//};

//public: bool const XGRAPHICS::IRInst::HasScalarEquiv(bool &) const
//{
//    mangled_ppc("?HasScalarEquiv@IRInst@XGRAPHICS@@QBA?B_NAA_N@Z");
//};

//public: int XGRAPHICS::IRInst::GetNumReferences(int) const
//{
//    mangled_ppc("?GetNumReferences@IRInst@XGRAPHICS@@QBAHH@Z");
//};

//public: void XGRAPHICS::IRInst::IncrementReferences(int)
//{
//    mangled_ppc("?IncrementReferences@IRInst@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::CFG::BalanceVectorScalar(void)
//{
//    mangled_ppc("?BalanceVectorScalar@CFG@XGRAPHICS@@QAAXXZ");
//};

//union XGRAPHICS::SwizzleOrMaskInfo XGRAPHICS::MarkUsedChannels(class XGRAPHICS::IRInst *, int, class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?MarkUsedChannels@XGRAPHICS@@YA?ATSwizzleOrMaskInfo@1@PAVIRInst@1@HPAVCFG@1@@Z");
//};

//public: void XGRAPHICS::IRInst::Special01Case(void)
//{
//    mangled_ppc("?Special01Case@IRInst@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::IRInst::CollapseAlgebraicCombinations(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?CollapseAlgebraicCombinations@IRInst@XGRAPHICS@@QAAXPAVCFG@2@@Z");
//};

//public: void XGRAPHICS::IRInst::CollapseSimilarInstructions(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?CollapseSimilarInstructions@IRInst@XGRAPHICS@@QAAXPAVCFG@2@@Z");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Clear(void)
//{
//    mangled_ppc("?Clear@?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::stack<int>::Clear(void)
//{
//    mangled_ppc("?Clear@?$stack@H@XGRAPHICS@@QAAXXZ");
//};

//merged_83E4E878
//{
//    mangled_ppc("merged_83E4E878");
//};

//public: void XGRAPHICS::CFG::RemoveUnnecessaryDependencies(void)
//{
//    mangled_ppc("?RemoveUnnecessaryDependencies@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::IRInst::Rewrite(class XGRAPHICS::CFG *)
//{
//    mangled_ppc("?Rewrite@IRInst@XGRAPHICS@@QAAXPAVCFG@2@@Z");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: class XGRAPHICS::IRInst *& XGRAPHICS::stack<class XGRAPHICS::IRInst *>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@PAVIRInst@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVIRInst@2@XZ");
//};

//public: int & XGRAPHICS::stack<int>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@H@XGRAPHICS@@QAAAAHXZ");
//};

//public: void XGRAPHICS::CFG::EliminateDeadCode(void)
//{
//    mangled_ppc("?EliminateDeadCode@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::CFG::Rewrite(void)
//{
//    mangled_ppc("?Rewrite@CFG@XGRAPHICS@@QAAXXZ");
//};

