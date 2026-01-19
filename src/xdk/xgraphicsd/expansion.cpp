/* ---------- headers */

#include "xdk\xgraphicsd\expansion.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int XGRAPHICS::GradientStageH(int);
// int XGRAPHICS::GradientStageV(int);
// private: class XGRAPHICS::IRInst * XGRAPHICS::CFG::MakeInst(enum XGRAPHICS::ILOpCode);
// public: XGRAPHICS::ScopedLabel::ScopedLabel(int, int, int);
// public: bool XGRAPHICS::ScopedLabel::operator==(class XGRAPHICS::ScopedLabel const &) const;
// enum R400Tables::ModDestChannel XGRAPHICS::GetChMask(char);
// public: void XGRAPHICS::Block::SetBranchInst(class XGRAPHICS::IRCJmp *);
// public: void XGRAPHICS::Block::SetLoopDepth(int);
// public: class XGRAPHICS::LoopFooter * XGRAPHICS::LoopHeader::GetFooter(void);
// public: void XGRAPHICS::LoopHeader::SetHasContinue(void);
// public: void XGRAPHICS::LoopHeader::SetHasBreak(void);
// public: class XGRAPHICS::IRInst * XGRAPHICS::LoopHeader::GetStartInst(void) const;
// public: void XGRAPHICS::IfHeader::ResetIsInner(void);
// public: int const XGRAPHICS::LinkageInfo::GetMaxInterpolators(void) const;
// public: static void * XGRAPHICS::EXP_DIR::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::EXP_DIR::operator delete(void *);
// private: enum R400Tables::RegType XGRAPHICS::CFG::IL2IR_RegType(enum XGRAPHICS::ILRegType);
// protected: void XGRAPHICS::IRTextureFetch::Puttx_coord_norm(int);
// public: void XGRAPHICS::IRTextureFetch::SetCentroidPresent(unsigned int);
// public: void XGRAPHICS::IRTextureFetch::SetXOffset(float);
// public: void XGRAPHICS::IRTextureFetch::SetYOffset(float);
// public: void XGRAPHICS::IRCmp1S::Putrel_op(enum R400Tables::RelOp);
// public: void XGRAPHICS::IRInst::AddResource(class XGRAPHICS::VRegInfo *);
// public: static void * XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::operator delete(void *);
// public: XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::stack<class XGRAPHICS::LoopHeader *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::~stack<class XGRAPHICS::LoopHeader *>(void);
// public: static void * XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::operator delete(void *);
// public: XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::stack<struct XGRAPHICS::EXP_DIR *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::~stack<struct XGRAPHICS::EXP_DIR *>(void);
// public: static void * XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::operator delete(void *);
// public: XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::stack<class XGRAPHICS::IfHeader *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::~stack<class XGRAPHICS::IfHeader *>(void);
// public: static void * XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::operator delete(void *);
// public: XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::stack<struct XGRAPHICS::COND_DIR *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::~stack<struct XGRAPHICS::COND_DIR *>(void);
// public: int XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Size(void) const;
// public: int XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Size(void) const;
// public: int XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Size(void) const;
// public: int XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Size(void) const;
// public: bool XGRAPHICS::VRegInfo::HasInit(void) const;
// public: void XGRAPHICS::TempValue::AssignFixedPhysical(int);
// public: static union XGRAPHICS::IL_Src * XGRAPHICS::ILFormatDecode::Dest2Src(union XGRAPHICS::IL_Dst const *, union XGRAPHICS::IL_Src *, class XGRAPHICS::Compiler *);
// public: static bool XGRAPHICS::ILFormatDecode::IsModifierPresent(union XGRAPHICS::IL_Dst const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsModifierPresent(union XGRAPHICS::IL_Src const *);
// public: static void XGRAPHICS::ILFormatDecode::RemoveModifierPresent(union XGRAPHICS::IL_Src *);
// public: static bool XGRAPHICS::ILFormatDecode::IsPrimaryOpCodeModifierPresent(union XGRAPHICS::IL_OpCode const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsSecondaryOpCodeModifierPresent(union XGRAPHICS::IL_OpCode const *);
// public: static int XGRAPHICS::ILFormatDecode::GetLodBiasFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetMagFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetMinFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetMipFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetVolMagFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetVolMinFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetAnisoFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetOffsetXFromSecondaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetOffsetYFromSecondaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetOffsetZFromSecondaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetAbsolute(union XGRAPHICS::IL_OpCode const *);
// public: static int XGRAPHICS::ILFormatDecode::GetSampleFromSecondaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetQualityBiasFromPrimaryModifier(unsigned int const *);
// public: static int XGRAPHICS::ILFormatDecode::GetParamFromDclpp(union XGRAPHICS::IL_OpCode const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsRelativeAddressed(union XGRAPHICS::IL_Src const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsRelativeAddressed(union XGRAPHICS::IL_Dst const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveRelativeAddress(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveRelativeAddress(union XGRAPHICS::IL_Dst const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsLoopRelative(union XGRAPHICS::IL_Rel_Addr const *);
// public: static int XGRAPHICS::ILFormatDecode::AddressRegister(union XGRAPHICS::IL_Rel_Addr const *);
// public: static enum XGRAPHICS::ILComponentSelect XGRAPHICS::ILFormatDecode::Component(union XGRAPHICS::IL_Rel_Addr const *);
// public: static void XGRAPHICS::ILFormatDecode::PutOp(enum XGRAPHICS::ILOpCode, unsigned int *);
// public: static int XGRAPHICS::ILFormatDecode::GetMOVAControl(union XGRAPHICS::IL_OpCode const *);
// public: static enum XGRAPHICS::ILMatrix XGRAPHICS::ILFormatDecode::GetMMULControl(union XGRAPHICS::IL_OpCode const *);
// public: static enum XGRAPHICS::ILPixTexUsage XGRAPHICS::ILFormatDecode::GetTexType(union XGRAPHICS::IL_OpCode const *);
// public: static enum XGRAPHICS::ILTexCoordMode XGRAPHICS::ILFormatDecode::GetTexCoordMode(union XGRAPHICS::IL_OpCode const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetTexStage(union XGRAPHICS::IL_OpCode const *);
// public: static int XGRAPHICS::ILFormatDecode::GetElement(union XGRAPHICS::IL_OpCode const *);
// public: static enum XGRAPHICS::ILRelOp XGRAPHICS::ILFormatDecode::GetRelOpControl(union XGRAPHICS::IL_OpCode const *);
// public: static enum XGRAPHICS::ILZeroOp XGRAPHICS::ILFormatDecode::GetDivZero(union XGRAPHICS::IL_OpCode const *);
// public: static enum XGRAPHICS::ILCmpVal XGRAPHICS::ILFormatDecode::GetCmpValControl(union XGRAPHICS::IL_OpCode const *);
// public: static int XGRAPHICS::ILFormatDecode::IsCentroidPresent(union XGRAPHICS::IL_OpCode const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetTextureIndex(union XGRAPHICS::IL_OpCode const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsReflectNormalized(union XGRAPHICS::IL_OpCode const *);
// public: static short XGRAPHICS::ILFormatDecode::RegisterNumber(union XGRAPHICS::IL_Dst const *);
// public: static void XGRAPHICS::ILFormatDecode::SetRegisterNumber(union XGRAPHICS::IL_Dst *, short);
// public: static void XGRAPHICS::ILFormatDecode::SetRegisterNumber(union XGRAPHICS::IL_Src *, short);
// public: static enum XGRAPHICS::ILRegType const XGRAPHICS::ILFormatDecode::RegisterType(union XGRAPHICS::IL_Src const *);
// public: static void XGRAPHICS::ILFormatDecode::SetRegisterType(union XGRAPHICS::IL_Src *, enum XGRAPHICS::ILRegType);
// public: static int XGRAPHICS::ILFormatDecode::ResultClamp(union XGRAPHICS::IL_Dst const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveClamp(union XGRAPHICS::IL_Dst const *);
// public: static int XGRAPHICS::ILFormatDecode::ResultShiftScale(union XGRAPHICS::IL_Dst const *);
// public: static int XGRAPHICS::ILFormatDecode::ArgInvert(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::ArgBias(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::ArgX2(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::ArgSign(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::ArgDivComp(union XGRAPHICS::IL_Src const *);
// public: static bool XGRAPHICS::ILFormatDecode::HasNegate(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::AllSrcChanNegate(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveMask(union XGRAPHICS::IL_Dst const *);
// public: static bool XGRAPHICS::ILFormatDecode::AnyModsOtherThanSwizzle(union XGRAPHICS::IL_Src const *);
// public: static bool XGRAPHICS::ILFormatDecode::AnyOnesOrZeroes(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveSwizzle(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveNegate(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::ArgAbs(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::RemoveAbs(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::GetKillSample(union XGRAPHICS::IL_OpCode const *);
// public: static int XGRAPHICS::ILFormatDecode::GetKillStage(union XGRAPHICS::IL_OpCode const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetExportStream(union XGRAPHICS::IL_OpCode const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetElementOffset(union XGRAPHICS::IL_OpCode const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetStateStride(union XGRAPHICS::IL_OpCode const *);
// public: static int XGRAPHICS::ILFormatDecode::GetLoopId(union XGRAPHICS::IL_Src const *);
// public: static enum XGRAPHICS::ILTexShadowMode XGRAPHICS::ILFormatDecode::GetShadowMode(union XGRAPHICS::IL_OpCode const *);
// public: unsigned int * XGRAPHICS::ILInstIterator::operator*(void) const;
// public: void XGRAPHICS::ILInstIterator::operator++(void);
// int const XGRAPHICS::numDestinationRegisters(enum XGRAPHICS::ILOpCode);
// int const XGRAPHICS::numSourceRegisters(enum XGRAPHICS::ILOpCode);
// int const XGRAPHICS::numNeighbors(enum XGRAPHICS::ILOpCode, int);
// int const XGRAPHICS::numAdditionalTokens(enum XGRAPHICS::ILOpCode);
// int const XGRAPHICS::getILOp(enum XGRAPHICS::ILOpCode);
// union XGRAPHICS::expansion_token const * XGRAPHICS::getExpansion(enum XGRAPHICS::ILOpCode);
// int XGRAPHICS::getProcessing(enum XGRAPHICS::ILOpCode);
// enum R400Tables::TexCoordMode XGRAPHICS::IL2IR_TexCoordModes(unsigned int);
// int XGRAPHICS::IL2IR_ImportComponent(unsigned int);
// int XGRAPHICS::IL2IR_ImportUsage(unsigned int);
// int XGRAPHICS::IL2IR_TexFilterMode(int);
// enum R400Tables::ModSrcChannel XGRAPHICS::IL2IR_Swizzle(int);
// public: static void * XGRAPHICS::COND_DIR::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::COND_DIR::operator delete(void *);
// public: static void * XGRAPHICS::LabelInfo::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: void XGRAPHICS::LabelInfo::FixUp(void);
// private: XGRAPHICS::LabelInfo::LabelInfo(class XGRAPHICS::ScopedLabel const &);
// void XGRAPHICS::MaybeSetRa(bool &, int, union XGRAPHICS::IL_Src *, class XGRAPHICS::IRInst *);
// float XGRAPHICS::SetSwizConstMask(enum XGRAPHICS::ILComponentSelect, int, union XGRAPHICS::SwizzleOrMaskInfo *, union XGRAPHICS::SwizzleOrMaskInfo *);
// void XGRAPHICS::SetSwizzleFromToken(union XGRAPHICS::IL_Src *, class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::IRTextureFetch::SetTextureStageIndex(unsigned int);
// public: void XGRAPHICS::IRTextureFetch::SetTexCoordNorm(int);
// public: void XGRAPHICS::IRCmp1S::SetRelOp(enum R400Tables::RelOp);
// public: void XGRAPHICS::IRMovBase::SetAddrProjection(class XGRAPHICS::IRProjection *);
// public: void XGRAPHICS::IRMovBase::SetIndexProjection(class XGRAPHICS::IRProjection *);
// public: void * XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::`scalar deleting destructor'(unsigned int);
// private: void XGRAPHICS::CFG::SetSrcModifiers(union XGRAPHICS::SwizzleOrMaskInfo &, union XGRAPHICS::IL_Src *, int, class XGRAPHICS::IRInst *);
// public: void XGRAPHICS::CFG::PreAssignPhysicalRegisters(void);
// public: void XGRAPHICS::CFG::VerifyIL2IRTable(class XGRAPHICS::Compiler *);
// public: bool XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Empty(void) const;
// public: class XGRAPHICS::LoopHeader *& XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Top(void);
// public: void XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Push(class XGRAPHICS::LoopHeader *);
// public: class XGRAPHICS::LoopHeader * XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Pop(void);
// public: bool XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Empty(void) const;
// public: void XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Push(struct XGRAPHICS::EXP_DIR *);
// public: struct XGRAPHICS::EXP_DIR * XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Pop(void);
// public: bool XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Empty(void) const;
// public: class XGRAPHICS::IfHeader *& XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Top(void);
// public: void XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Push(class XGRAPHICS::IfHeader *);
// public: class XGRAPHICS::IfHeader * XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Pop(void);
// public: struct XGRAPHICS::COND_DIR *& XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Top(void);
// public: void XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Push(struct XGRAPHICS::COND_DIR *);
// public: struct XGRAPHICS::COND_DIR * XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Pop(void);
// public: static class XGRAPHICS::LabelInfo & XGRAPHICS::LabelInfo::FindOrCreate(class XGRAPHICS::ScopedLabel const &, class XGRAPHICS::Compiler *);
// private: void XGRAPHICS::CFG::ExpandSrcModifiers(class XGRAPHICS::DList *, union XGRAPHICS::IL_OpCode *, union XGRAPHICS::IL_Src *, class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *, bool, bool);
// private: void XGRAPHICS::CFG::ExpandDstModifiers(class XGRAPHICS::DList *, union XGRAPHICS::IL_Dst *, class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *);
// private: void XGRAPHICS::CFG::ExpandDCLV(int, union XGRAPHICS::IL_Dst *, union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::Block *, bool, union XGRAPHICS::IL_Src *);
// private: union XGRAPHICS::expansion_token const * XGRAPHICS::CFG::PushAndGo(union XGRAPHICS::expansion_token const *, int &, class XGRAPHICS::Block *, union XGRAPHICS::expansion_token const *, class XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *> *);
// private: void XGRAPHICS::CFG::SetDstModifiers(class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *, union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::IL_Dst *, int, class XGRAPHICS::IRInst *, bool);
// private: void XGRAPHICS::CFG::ExpandOperandForExpansion(int, int, union XGRAPHICS::IL_Dst **, union XGRAPHICS::IL_Src **, class XGRAPHICS::IRInst *, int, union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::SwizzleOrMaskInfo &, class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *, bool, int *, class XGRAPHICS::Block *);
// private: void XGRAPHICS::CFG::IL2IR(class XGRAPHICS::ILInstIterator &);

//int XGRAPHICS::GradientStageH(int)
//{
//    mangled_ppc("?GradientStageH@XGRAPHICS@@YAHH@Z");
//};

//int XGRAPHICS::GradientStageV(int)
//{
//    mangled_ppc("?GradientStageV@XGRAPHICS@@YAHH@Z");
//};

//private: class XGRAPHICS::IRInst * XGRAPHICS::CFG::MakeInst(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?MakeInst@CFG@XGRAPHICS@@AAAPAVIRInst@2@W4ILOpCode@2@@Z");
//};

//public: XGRAPHICS::ScopedLabel::ScopedLabel(int, int, int)
//{
//    mangled_ppc("??0ScopedLabel@XGRAPHICS@@QAA@HHH@Z");
//};

//public: bool XGRAPHICS::ScopedLabel::operator==(class XGRAPHICS::ScopedLabel const &) const
//{
//    mangled_ppc("??8ScopedLabel@XGRAPHICS@@QBA_NABV01@@Z");
//};

//enum R400Tables::ModDestChannel XGRAPHICS::GetChMask(char)
//{
//    mangled_ppc("?GetChMask@XGRAPHICS@@YA?AW4ModDestChannel@R400Tables@@D@Z");
//};

//public: void XGRAPHICS::Block::SetBranchInst(class XGRAPHICS::IRCJmp *)
//{
//    mangled_ppc("?SetBranchInst@Block@XGRAPHICS@@QAAXPAVIRCJmp@2@@Z");
//};

//public: void XGRAPHICS::Block::SetLoopDepth(int)
//{
//    mangled_ppc("?SetLoopDepth@Block@XGRAPHICS@@QAAXH@Z");
//};

//public: class XGRAPHICS::LoopFooter * XGRAPHICS::LoopHeader::GetFooter(void)
//{
//    mangled_ppc("?GetFooter@LoopHeader@XGRAPHICS@@QAAPAVLoopFooter@2@XZ");
//};

//public: void XGRAPHICS::LoopHeader::SetHasContinue(void)
//{
//    mangled_ppc("?SetHasContinue@LoopHeader@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::LoopHeader::SetHasBreak(void)
//{
//    mangled_ppc("?SetHasBreak@LoopHeader@XGRAPHICS@@QAAXXZ");
//};

//public: class XGRAPHICS::IRInst * XGRAPHICS::LoopHeader::GetStartInst(void) const
//{
//    mangled_ppc("?GetStartInst@LoopHeader@XGRAPHICS@@QBAPAVIRInst@2@XZ");
//};

//public: void XGRAPHICS::IfHeader::ResetIsInner(void)
//{
//    mangled_ppc("?ResetIsInner@IfHeader@XGRAPHICS@@QAAXXZ");
//};

//public: int const XGRAPHICS::LinkageInfo::GetMaxInterpolators(void) const
//{
//    mangled_ppc("?GetMaxInterpolators@LinkageInfo@XGRAPHICS@@QBA?BHXZ");
//};

//public: static void * XGRAPHICS::EXP_DIR::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2EXP_DIR@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::EXP_DIR::operator delete(void *)
//{
//    mangled_ppc("??3EXP_DIR@XGRAPHICS@@SAXPAX@Z");
//};

//private: enum R400Tables::RegType XGRAPHICS::CFG::IL2IR_RegType(enum XGRAPHICS::ILRegType)
//{
//    mangled_ppc("?IL2IR_RegType@CFG@XGRAPHICS@@AAA?AW4RegType@R400Tables@@W4ILRegType@2@@Z");
//};

//protected: void XGRAPHICS::IRTextureFetch::Puttx_coord_norm(int)
//{
//    mangled_ppc("?Puttx_coord_norm@IRTextureFetch@XGRAPHICS@@IAAXH@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::SetCentroidPresent(unsigned int)
//{
//    mangled_ppc("?SetCentroidPresent@IRTextureFetch@XGRAPHICS@@QAAXI@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::SetXOffset(float)
//{
//    mangled_ppc("?SetXOffset@IRTextureFetch@XGRAPHICS@@QAAXM@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::SetYOffset(float)
//{
//    mangled_ppc("?SetYOffset@IRTextureFetch@XGRAPHICS@@QAAXM@Z");
//};

//public: void XGRAPHICS::IRCmp1S::Putrel_op(enum R400Tables::RelOp)
//{
//    mangled_ppc("?Putrel_op@IRCmp1S@XGRAPHICS@@QAAXW4RelOp@R400Tables@@@Z");
//};

//public: void XGRAPHICS::IRInst::AddResource(class XGRAPHICS::VRegInfo *)
//{
//    mangled_ppc("?AddResource@IRInst@XGRAPHICS@@QAAXPAVVRegInfo@2@@Z");
//};

//public: static void * XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::stack<class XGRAPHICS::LoopHeader *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::~stack<class XGRAPHICS::LoopHeader *>(void)
//{
//    mangled_ppc("??1?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::stack<struct XGRAPHICS::EXP_DIR *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::~stack<struct XGRAPHICS::EXP_DIR *>(void)
//{
//    mangled_ppc("??1?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::stack<class XGRAPHICS::IfHeader *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::~stack<class XGRAPHICS::IfHeader *>(void)
//{
//    mangled_ppc("??1?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: static void * XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::stack<struct XGRAPHICS::COND_DIR *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::~stack<struct XGRAPHICS::COND_DIR *>(void)
//{
//    mangled_ppc("??1?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: int XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: bool XGRAPHICS::VRegInfo::HasInit(void) const
//{
//    mangled_ppc("?HasInit@VRegInfo@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::TempValue::AssignFixedPhysical(int)
//{
//    mangled_ppc("?AssignFixedPhysical@TempValue@XGRAPHICS@@QAAXH@Z");
//};

//public: static union XGRAPHICS::IL_Src * XGRAPHICS::ILFormatDecode::Dest2Src(union XGRAPHICS::IL_Dst const *, union XGRAPHICS::IL_Src *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?Dest2Src@ILFormatDecode@XGRAPHICS@@SAPATIL_Src@2@PBTIL_Dst@2@PAT32@PAVCompiler@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsModifierPresent(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?IsModifierPresent@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Dst@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsModifierPresent(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?IsModifierPresent@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Src@2@@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::RemoveModifierPresent(union XGRAPHICS::IL_Src *)
//{
//    mangled_ppc("?RemoveModifierPresent@ILFormatDecode@XGRAPHICS@@SAXPATIL_Src@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsPrimaryOpCodeModifierPresent(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?IsPrimaryOpCodeModifierPresent@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_OpCode@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsSecondaryOpCodeModifierPresent(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?IsSecondaryOpCodeModifierPresent@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_OpCode@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetLodBiasFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetLodBiasFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetMagFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetMagFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetMinFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetMinFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetMipFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetMipFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetVolMagFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetVolMagFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetVolMinFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetVolMinFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetAnisoFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetAnisoFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetOffsetXFromSecondaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetOffsetXFromSecondaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetOffsetYFromSecondaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetOffsetYFromSecondaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetOffsetZFromSecondaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetOffsetZFromSecondaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetAbsolute(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetAbsolute@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetSampleFromSecondaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetSampleFromSecondaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetQualityBiasFromPrimaryModifier(unsigned int const *)
//{
//    mangled_ppc("?GetQualityBiasFromPrimaryModifier@ILFormatDecode@XGRAPHICS@@SAHPBI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetParamFromDclpp(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetParamFromDclpp@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsRelativeAddressed(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?IsRelativeAddressed@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Src@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsRelativeAddressed(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?IsRelativeAddressed@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Dst@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveRelativeAddress(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?RemoveRelativeAddress@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveRelativeAddress(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?RemoveRelativeAddress@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Dst@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsLoopRelative(union XGRAPHICS::IL_Rel_Addr const *)
//{
//    mangled_ppc("?IsLoopRelative@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Rel_Addr@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::AddressRegister(union XGRAPHICS::IL_Rel_Addr const *)
//{
//    mangled_ppc("?AddressRegister@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Rel_Addr@2@@Z");
//};

//public: static enum XGRAPHICS::ILComponentSelect XGRAPHICS::ILFormatDecode::Component(union XGRAPHICS::IL_Rel_Addr const *)
//{
//    mangled_ppc("?Component@ILFormatDecode@XGRAPHICS@@SA?AW4ILComponentSelect@2@PBTIL_Rel_Addr@2@@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::PutOp(enum XGRAPHICS::ILOpCode, unsigned int *)
//{
//    mangled_ppc("?PutOp@ILFormatDecode@XGRAPHICS@@SAXW4ILOpCode@2@PAI@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetMOVAControl(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetMOVAControl@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static enum XGRAPHICS::ILMatrix XGRAPHICS::ILFormatDecode::GetMMULControl(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetMMULControl@ILFormatDecode@XGRAPHICS@@SA?AW4ILMatrix@2@PBTIL_OpCode@2@@Z");
//};

//public: static enum XGRAPHICS::ILPixTexUsage XGRAPHICS::ILFormatDecode::GetTexType(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetTexType@ILFormatDecode@XGRAPHICS@@SA?AW4ILPixTexUsage@2@PBTIL_OpCode@2@@Z");
//};

//public: static enum XGRAPHICS::ILTexCoordMode XGRAPHICS::ILFormatDecode::GetTexCoordMode(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetTexCoordMode@ILFormatDecode@XGRAPHICS@@SA?AW4ILTexCoordMode@2@PBTIL_OpCode@2@@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetTexStage(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetTexStage@ILFormatDecode@XGRAPHICS@@SAIPBTIL_OpCode@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetElement(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetElement@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static enum XGRAPHICS::ILRelOp XGRAPHICS::ILFormatDecode::GetRelOpControl(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetRelOpControl@ILFormatDecode@XGRAPHICS@@SA?AW4ILRelOp@2@PBTIL_OpCode@2@@Z");
//};

//public: static enum XGRAPHICS::ILZeroOp XGRAPHICS::ILFormatDecode::GetDivZero(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetDivZero@ILFormatDecode@XGRAPHICS@@SA?AW4ILZeroOp@2@PBTIL_OpCode@2@@Z");
//};

//public: static enum XGRAPHICS::ILCmpVal XGRAPHICS::ILFormatDecode::GetCmpValControl(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetCmpValControl@ILFormatDecode@XGRAPHICS@@SA?AW4ILCmpVal@2@PBTIL_OpCode@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::IsCentroidPresent(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?IsCentroidPresent@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetTextureIndex(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetTextureIndex@ILFormatDecode@XGRAPHICS@@SAIPBTIL_OpCode@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsReflectNormalized(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?IsReflectNormalized@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_OpCode@2@@Z");
//};

//public: static short XGRAPHICS::ILFormatDecode::RegisterNumber(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?RegisterNumber@ILFormatDecode@XGRAPHICS@@SAFPBTIL_Dst@2@@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::SetRegisterNumber(union XGRAPHICS::IL_Dst *, short)
//{
//    mangled_ppc("?SetRegisterNumber@ILFormatDecode@XGRAPHICS@@SAXPATIL_Dst@2@F@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::SetRegisterNumber(union XGRAPHICS::IL_Src *, short)
//{
//    mangled_ppc("?SetRegisterNumber@ILFormatDecode@XGRAPHICS@@SAXPATIL_Src@2@F@Z");
//};

//public: static enum XGRAPHICS::ILRegType const XGRAPHICS::ILFormatDecode::RegisterType(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?RegisterType@ILFormatDecode@XGRAPHICS@@SA?BW4ILRegType@2@PBTIL_Src@2@@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::SetRegisterType(union XGRAPHICS::IL_Src *, enum XGRAPHICS::ILRegType)
//{
//    mangled_ppc("?SetRegisterType@ILFormatDecode@XGRAPHICS@@SAXPATIL_Src@2@W4ILRegType@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ResultClamp(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?ResultClamp@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Dst@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveClamp(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?RemoveClamp@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Dst@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ResultShiftScale(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?ResultShiftScale@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Dst@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ArgInvert(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?ArgInvert@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ArgBias(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?ArgBias@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ArgX2(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?ArgX2@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ArgSign(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?ArgSign@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ArgDivComp(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?ArgDivComp@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::HasNegate(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?HasNegate@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::AllSrcChanNegate(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?AllSrcChanNegate@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveMask(union XGRAPHICS::IL_Dst const *)
//{
//    mangled_ppc("?RemoveMask@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Dst@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::AnyModsOtherThanSwizzle(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?AnyModsOtherThanSwizzle@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Src@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::AnyOnesOrZeroes(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?AnyOnesOrZeroes@ILFormatDecode@XGRAPHICS@@SA_NPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveSwizzle(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?RemoveSwizzle@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveNegate(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?RemoveNegate@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::ArgAbs(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?ArgAbs@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::RemoveAbs(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?RemoveAbs@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetKillSample(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetKillSample@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetKillStage(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetKillStage@ILFormatDecode@XGRAPHICS@@SAHPBTIL_OpCode@2@@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetExportStream(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetExportStream@ILFormatDecode@XGRAPHICS@@SAIPBTIL_OpCode@2@@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetElementOffset(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetElementOffset@ILFormatDecode@XGRAPHICS@@SAIPBTIL_OpCode@2@@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetStateStride(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetStateStride@ILFormatDecode@XGRAPHICS@@SAIPBTIL_OpCode@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::GetLoopId(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?GetLoopId@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Src@2@@Z");
//};

//public: static enum XGRAPHICS::ILTexShadowMode XGRAPHICS::ILFormatDecode::GetShadowMode(union XGRAPHICS::IL_OpCode const *)
//{
//    mangled_ppc("?GetShadowMode@ILFormatDecode@XGRAPHICS@@SA?AW4ILTexShadowMode@2@PBTIL_OpCode@2@@Z");
//};

//public: unsigned int * XGRAPHICS::ILInstIterator::operator*(void) const
//{
//    mangled_ppc("??DILInstIterator@XGRAPHICS@@QBAPAIXZ");
//};

//public: void XGRAPHICS::ILInstIterator::operator++(void)
//{
//    mangled_ppc("??EILInstIterator@XGRAPHICS@@QAAXXZ");
//};

//int const XGRAPHICS::numDestinationRegisters(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?numDestinationRegisters@XGRAPHICS@@YA?BHW4ILOpCode@1@@Z");
//};

//int const XGRAPHICS::numSourceRegisters(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?numSourceRegisters@XGRAPHICS@@YA?BHW4ILOpCode@1@@Z");
//};

//int const XGRAPHICS::numNeighbors(enum XGRAPHICS::ILOpCode, int)
//{
//    mangled_ppc("?numNeighbors@XGRAPHICS@@YA?BHW4ILOpCode@1@H@Z");
//};

//int const XGRAPHICS::numAdditionalTokens(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?numAdditionalTokens@XGRAPHICS@@YA?BHW4ILOpCode@1@@Z");
//};

//int const XGRAPHICS::getILOp(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?getILOp@XGRAPHICS@@YA?BHW4ILOpCode@1@@Z");
//};

//union XGRAPHICS::expansion_token const * XGRAPHICS::getExpansion(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?getExpansion@XGRAPHICS@@YAPBTexpansion_token@1@W4ILOpCode@1@@Z");
//};

//int XGRAPHICS::getProcessing(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?getProcessing@XGRAPHICS@@YAHW4ILOpCode@1@@Z");
//};

//enum R400Tables::TexCoordMode XGRAPHICS::IL2IR_TexCoordModes(unsigned int)
//{
//    mangled_ppc("?IL2IR_TexCoordModes@XGRAPHICS@@YA?AW4TexCoordMode@R400Tables@@I@Z");
//};

//int XGRAPHICS::IL2IR_ImportComponent(unsigned int)
//{
//    mangled_ppc("?IL2IR_ImportComponent@XGRAPHICS@@YAHI@Z");
//};

//int XGRAPHICS::IL2IR_ImportUsage(unsigned int)
//{
//    mangled_ppc("?IL2IR_ImportUsage@XGRAPHICS@@YAHI@Z");
//};

//int XGRAPHICS::IL2IR_TexFilterMode(int)
//{
//    mangled_ppc("?IL2IR_TexFilterMode@XGRAPHICS@@YAHH@Z");
//};

//enum R400Tables::ModSrcChannel XGRAPHICS::IL2IR_Swizzle(int)
//{
//    mangled_ppc("?IL2IR_Swizzle@XGRAPHICS@@YA?AW4ModSrcChannel@R400Tables@@H@Z");
//};

//public: static void * XGRAPHICS::COND_DIR::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2COND_DIR@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::COND_DIR::operator delete(void *)
//{
//    mangled_ppc("??3COND_DIR@XGRAPHICS@@SAXPAX@Z");
//};

//public: static void * XGRAPHICS::LabelInfo::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2LabelInfo@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: void XGRAPHICS::LabelInfo::FixUp(void)
//{
//    mangled_ppc("?FixUp@LabelInfo@XGRAPHICS@@QAAXXZ");
//};

//private: XGRAPHICS::LabelInfo::LabelInfo(class XGRAPHICS::ScopedLabel const &)
//{
//    mangled_ppc("??0LabelInfo@XGRAPHICS@@AAA@ABVScopedLabel@1@@Z");
//};

//void XGRAPHICS::MaybeSetRa(bool &, int, union XGRAPHICS::IL_Src *, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?MaybeSetRa@XGRAPHICS@@YAXAA_NHPATIL_Src@1@PAVIRInst@1@@Z");
//};

//float XGRAPHICS::SetSwizConstMask(enum XGRAPHICS::ILComponentSelect, int, union XGRAPHICS::SwizzleOrMaskInfo *, union XGRAPHICS::SwizzleOrMaskInfo *)
//{
//    mangled_ppc("?SetSwizConstMask@XGRAPHICS@@YAMW4ILComponentSelect@1@HPATSwizzleOrMaskInfo@1@1@Z");
//};

//void XGRAPHICS::SetSwizzleFromToken(union XGRAPHICS::IL_Src *, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?SetSwizzleFromToken@XGRAPHICS@@YAXPATIL_Src@1@PAVIRInst@1@@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::SetTextureStageIndex(unsigned int)
//{
//    mangled_ppc("?SetTextureStageIndex@IRTextureFetch@XGRAPHICS@@QAAXI@Z");
//};

//public: void XGRAPHICS::IRTextureFetch::SetTexCoordNorm(int)
//{
//    mangled_ppc("?SetTexCoordNorm@IRTextureFetch@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::IRCmp1S::SetRelOp(enum R400Tables::RelOp)
//{
//    mangled_ppc("?SetRelOp@IRCmp1S@XGRAPHICS@@QAAXW4RelOp@R400Tables@@@Z");
//};

//public: void XGRAPHICS::IRMovBase::SetAddrProjection(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?SetAddrProjection@IRMovBase@XGRAPHICS@@QAAXPAVIRProjection@2@@Z");
//};

//public: void XGRAPHICS::IRMovBase::SetIndexProjection(class XGRAPHICS::IRProjection *)
//{
//    mangled_ppc("?SetIndexProjection@IRMovBase@XGRAPHICS@@QAAXPAVIRProjection@2@@Z");
//};

//public: void * XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//private: void XGRAPHICS::CFG::SetSrcModifiers(union XGRAPHICS::SwizzleOrMaskInfo &, union XGRAPHICS::IL_Src *, int, class XGRAPHICS::IRInst *)
//{
//    mangled_ppc("?SetSrcModifiers@CFG@XGRAPHICS@@AAAXAATSwizzleOrMaskInfo@2@PATIL_Src@2@HPAVIRInst@2@@Z");
//};

//public: void XGRAPHICS::CFG::PreAssignPhysicalRegisters(void)
//{
//    mangled_ppc("?PreAssignPhysicalRegisters@CFG@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::CFG::VerifyIL2IRTable(class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?VerifyIL2IRTable@CFG@XGRAPHICS@@QAAXPAVCompiler@2@@Z");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: class XGRAPHICS::LoopHeader *& XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVLoopHeader@2@XZ");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Push(class XGRAPHICS::LoopHeader *)
//{
//    mangled_ppc("?Push@?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QAAXPAVLoopHeader@2@@Z");
//};

//public: class XGRAPHICS::LoopHeader * XGRAPHICS::stack<class XGRAPHICS::LoopHeader *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAVLoopHeader@XGRAPHICS@@@XGRAPHICS@@QAAPAVLoopHeader@2@XZ");
//};

//public: bool XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Push(struct XGRAPHICS::EXP_DIR *)
//{
//    mangled_ppc("?Push@?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QAAXPAUEXP_DIR@2@@Z");
//};

//public: struct XGRAPHICS::EXP_DIR * XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAUEXP_DIR@XGRAPHICS@@@XGRAPHICS@@QAAPAUEXP_DIR@2@XZ");
//};

//public: bool XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QBA_NXZ");
//};

//public: class XGRAPHICS::IfHeader *& XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QAAAAPAVIfHeader@2@XZ");
//};

//public: void XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Push(class XGRAPHICS::IfHeader *)
//{
//    mangled_ppc("?Push@?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QAAXPAVIfHeader@2@@Z");
//};

//public: class XGRAPHICS::IfHeader * XGRAPHICS::stack<class XGRAPHICS::IfHeader *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAVIfHeader@XGRAPHICS@@@XGRAPHICS@@QAAPAVIfHeader@2@XZ");
//};

//public: struct XGRAPHICS::COND_DIR *& XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QAAAAPAUCOND_DIR@2@XZ");
//};

//public: void XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Push(struct XGRAPHICS::COND_DIR *)
//{
//    mangled_ppc("?Push@?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QAAXPAUCOND_DIR@2@@Z");
//};

//public: struct XGRAPHICS::COND_DIR * XGRAPHICS::stack<struct XGRAPHICS::COND_DIR *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAUCOND_DIR@XGRAPHICS@@@XGRAPHICS@@QAAPAUCOND_DIR@2@XZ");
//};

//public: static class XGRAPHICS::LabelInfo & XGRAPHICS::LabelInfo::FindOrCreate(class XGRAPHICS::ScopedLabel const &, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?FindOrCreate@LabelInfo@XGRAPHICS@@SAAAV12@ABVScopedLabel@2@PAVCompiler@2@@Z");
//};

//private: void XGRAPHICS::CFG::ExpandSrcModifiers(class XGRAPHICS::DList *, union XGRAPHICS::IL_OpCode *, union XGRAPHICS::IL_Src *, class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *, bool, bool)
//{
//    mangled_ppc("?ExpandSrcModifiers@CFG@XGRAPHICS@@AAAXPAVDList@2@PATIL_OpCode@2@PATIL_Src@2@PAV?$stack@PAVLoopHeader@XGRAPHICS@@@2@_N4@Z");
//};

//private: void XGRAPHICS::CFG::ExpandDstModifiers(class XGRAPHICS::DList *, union XGRAPHICS::IL_Dst *, class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *)
//{
//    mangled_ppc("?ExpandDstModifiers@CFG@XGRAPHICS@@AAAXPAVDList@2@PATIL_Dst@2@PAV?$stack@PAVLoopHeader@XGRAPHICS@@@2@@Z");
//};

//private: void XGRAPHICS::CFG::ExpandDCLV(int, union XGRAPHICS::IL_Dst *, union XGRAPHICS::SwizzleOrMaskInfo, class XGRAPHICS::Block *, bool, union XGRAPHICS::IL_Src *)
//{
//    mangled_ppc("?ExpandDCLV@CFG@XGRAPHICS@@AAAXHPATIL_Dst@2@TSwizzleOrMaskInfo@2@PAVBlock@2@_NPATIL_Src@2@@Z");
//};

//private: union XGRAPHICS::expansion_token const * XGRAPHICS::CFG::PushAndGo(union XGRAPHICS::expansion_token const *, int &, class XGRAPHICS::Block *, union XGRAPHICS::expansion_token const *, class XGRAPHICS::stack<struct XGRAPHICS::EXP_DIR *> *)
//{
//    mangled_ppc("?PushAndGo@CFG@XGRAPHICS@@AAAPBTexpansion_token@2@PBT32@AAHPAVBlock@2@0PAV?$stack@PAUEXP_DIR@XGRAPHICS@@@2@@Z");
//};

//private: void XGRAPHICS::CFG::SetDstModifiers(class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *, union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::IL_Dst *, int, class XGRAPHICS::IRInst *, bool)
//{
//    mangled_ppc("?SetDstModifiers@CFG@XGRAPHICS@@AAAXPAV?$stack@PAVLoopHeader@XGRAPHICS@@@2@TSwizzleOrMaskInfo@2@PATIL_Dst@2@HPAVIRInst@2@_N@Z");
//};

//private: void XGRAPHICS::CFG::ExpandOperandForExpansion(int, int, union XGRAPHICS::IL_Dst **, union XGRAPHICS::IL_Src **, class XGRAPHICS::IRInst *, int, union XGRAPHICS::SwizzleOrMaskInfo, union XGRAPHICS::SwizzleOrMaskInfo &, class XGRAPHICS::stack<class XGRAPHICS::LoopHeader *> *, bool, int *, class XGRAPHICS::Block *)
//{
//    mangled_ppc("?ExpandOperandForExpansion@CFG@XGRAPHICS@@AAAXHHPAPATIL_Dst@2@PAPATIL_Src@2@PAVIRInst@2@HTSwizzleOrMaskInfo@2@AAT62@PAV?$stack@PAVLoopHeader@XGRAPHICS@@@2@_NPAHPAVBlock@2@@Z");
//};

//private: void XGRAPHICS::CFG::IL2IR(class XGRAPHICS::ILInstIterator &)
//{
//    mangled_ppc("?IL2IR@CFG@XGRAPHICS@@AAAXAAVILInstIterator@2@@Z");
//};

