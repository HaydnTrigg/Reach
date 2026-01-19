/* ---------- headers */

#include "xdk\xgraphicsd\vercore.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const const XGRAPHICS::xyzw; // "?xyzw@XGRAPHICS@@3QBDB"
// char const **XGRAPHICS::kUsage; // "?kUsage@XGRAPHICS@@3PAPBDA"
// unsigned long XGRAPHICS::g_VerMaxTime; // "?g_VerMaxTime@XGRAPHICS@@3KA"
// int XGRAPHICS::g_VerMaxOptLevel; // "?g_VerMaxOptLevel@XGRAPHICS@@3HA"
// void *XGRAPHICS::g_StdOutputHandle; // "?g_StdOutputHandle@XGRAPHICS@@3PAXA"
// unsigned long XGRAPHICS::g_VerStartTime; // "?g_VerStartTime@XGRAPHICS@@3KA"
// bool XGRAPHICS::g_VerBreakOnTrc; // "?g_VerBreakOnTrc@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_VerBreakOnDif; // "?g_VerBreakOnDif@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_VerBreakOnErr; // "?g_VerBreakOnErr@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_VerBreakOnMem; // "?g_VerBreakOnMem@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_VerBreakOnNyi; // "?g_VerBreakOnNyi@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_VerBreakOnVal; // "?g_VerBreakOnVal@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_bHasHitNyi; // "?g_bHasHitNyi@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_bHasHitVal; // "?g_bHasHitVal@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_bHasSeenLoop; // "?g_bHasSeenLoop@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_bHasHitVerErr; // "?g_bHasHitVerErr@XGRAPHICS@@3_NA"
// bool XGRAPHICS::g_bHasDoneAnError; // "?g_bHasDoneAnError@XGRAPHICS@@3_NA"
// unsigned long XGRAPHICS::g_VerNodeCount; // "?g_VerNodeCount@XGRAPHICS@@3KA"
// unsigned long XGRAPHICS::g_VerOpCount; // "?g_VerOpCount@XGRAPHICS@@3KA"
// unsigned long XGRAPHICS::g_VerOpID; // "?g_VerOpID@XGRAPHICS@@3KA"
// unsigned long XGRAPHICS::g_VerOplistCount; // "?g_VerOplistCount@XGRAPHICS@@3KA"

// private: static class XGRAPHICS::ms * XGRAPHICS::ms::MakeNew(void);
// private: static class XGRAPHICS::ms * XGRAPHICS::ms::MakeBig(unsigned long);
// private: void XGRAPHICS::ms::DestroyThis(void);
// private: static class XGRAPHICS::ms * XGRAPHICS::ms::FindFreeMS(unsigned __int64);
// public: static void * XGRAPHICS::ms::Allocate(unsigned long);
// public: static void XGRAPHICS::ms::Free(void *, unsigned long);
// public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::Constructor(void);
// public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::ArrayConstructor(int);
// public: void XGRAPHICS::VerOpList::SetData(class XGRAPHICS::VerOp *);
// public: bool XGRAPHICS::VerOpList::FindData(class XGRAPHICS::VerOp *);
// public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::Destructor(void);
// public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::ArrayDestructor(int);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::Constructor(void);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::ArrayConstructor(int);
// public: int XGRAPHICS::VerOp::AddRef(void);
// public: bool XGRAPHICS::VerOp::FindOpReference(class XGRAPHICS::VerOp *);
// public: void XGRAPHICS::VerOp::SwapParams(int, int);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::Copy(void);
// public: bool XGRAPHICS::VerOp::CleanSame(bool);
// public: void XGRAPHICS::VerOp::SetSame(class XGRAPHICS::VerOp *);
// public: bool XGRAPHICS::VerOp::FindSame(class XGRAPHICS::VerOp *);
// private: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::Constructor(void);
// private: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::ArrayConstructor(int);
// void XGRAPHICS::CleanupAfterPropagate2(class XGRAPHICS::VerNode *);
// public: long XGRAPHICS::VerTable::AddRef(void);
// void XGRAPHICS::_CleanAfterPrint(class XGRAPHICS::VerNode *);
// void XGRAPHICS::_PrintInOut(struct _iobuf *, class XGRAPHICS::VerTable *);
// void XGRAPHICS::_PrintHeader(struct _iobuf *, class XGRAPHICS::VerTable *);
// void XGRAPHICS::_PrintFooter(struct _iobuf *, class XGRAPHICS::VerTable *);
// void XGRAPHICS::_PrintOpID(struct _iobuf *, class XGRAPHICS::VerOp *);
// public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::Constructor(void);
// public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::ArrayConstructor(int);
// public: void * XGRAPHICS::VerConstTableList::`scalar deleting destructor'(unsigned int);
// __int64 XGRAPHICS::abs(__int64);
// int XGRAPHICS::NearEqual(double, double);
// bool XGRAPHICS::CleanUpAfterCompare2(class XGRAPHICS::VerNode *);
// NativeToUCodeDWORD;
// public: void XGRAPHICS::VerNode::ClearRange(void);
// public: int XGRAPHICS::VerTable::GetNodeCount(void);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerTable::GetNodes(void);
// void XGRAPHICS::SetBit(unsigned __int64*, int);
// bool XGRAPHICS::CheckBit(unsigned __int64*, int);
// unsigned char XGRAPHICS::GetRcpType(unsigned char);
// private: void XGRAPHICS::VerOp::Cleanup(void);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Constructor(void);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Constructor(int);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::ArrayConstructor(int);
// public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::Destructor(void);
// public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::ArrayDestructor(int);
// public: long XGRAPHICS::OutStream::VPrintf(char const *, char *);
// void XGRAPHICS::VER_TRC(char const *, ...);
// void XGRAPHICS::VER_ERR(char const *, ...);
// void XGRAPHICS::VER_MEM(char const *, ...);
// void XGRAPHICS::VER_NYI(char const *, ...);
// void XGRAPHICS::VER_DIF(char const *, ...);
// void XGRAPHICS::VER_VAL(char const *, ...);
// void XGRAPHICS::VER_VALNON(char const *, ...);
// void XGRAPHICS::VER_MSG(char const *, ...);
// char const * XGRAPHICS::GetVerRegInfo(int, int &, char &, bool &);
// bool XGRAPHICS::GetVerReg(int, char *, int);
// char const * XGRAPHICS::GetVerOpcode(unsigned char);
// int XGRAPHICS::VerOpParamCount(unsigned char);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::Destructor(void);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::ArrayDestructor(int);
// public: int XGRAPHICS::VerOp::Release(void);
// public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeEmptyOp(unsigned char, int, int);
// public: void XGRAPHICS::VerNode::SetValKeepReg(double);
// public: void XGRAPHICS::VerNode::SetNameKeepReg(char const *, unsigned char);
// public: static class XGRAPHICS::VerNode * XGRAPHICS::VerNode::EncaseOpWithNode(class XGRAPHICS::VerOp *);
// public: void XGRAPHICS::VerNode::Cleanup(void);
// void XGRAPHICS::_D3DPrintReg(struct _iobuf *, int);
// void XGRAPHICS::_PrintNode(struct _iobuf *, class XGRAPHICS::VerNode *);
// void XGRAPHICS::_PrintOp(struct _iobuf *, class XGRAPHICS::VerOp *);
// void XGRAPHICS::_PrepNode(struct _iobuf *, class XGRAPHICS::VerNode *, int);
// void XGRAPHICS::_PrintOutVar(struct _iobuf *, class XGRAPHICS::VerTable *, int);
// void XGRAPHICS::_3PC(class XGRAPHICS::VerNode *);
// void XGRAPHICS::_D3DPrintTree(struct _iobuf *, class XGRAPHICS::VerNode *, int, bool, int);
// protected: bool XGRAPHICS::VerTableBuilder::InvStackCond(void);
// protected: bool XGRAPHICS::VerTableBuilder::PushStackLoop(int, int);
// public: static bool XGRAPHICS::ms::Initialize(void);
// public: static int XGRAPHICS::ms::Release(void);
// public: void XGRAPHICS::VerNode::SetVal(double);
// public: void XGRAPHICS::VerNode::SetReg(int);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Destructor(void);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::ArrayDestructor(int);
// public: bool XGRAPHICS::VerNode::CopyFrom(class XGRAPHICS::VerNode *);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Copy(void);
// public: void XGRAPHICS::VerNode::CleanupAndUseOp(class XGRAPHICS::VerOp *);
// public: void XGRAPHICS::VerNode::MergeWithReg(int);
// public: void XGRAPHICS::VerNode::MergeWithOp(class XGRAPHICS::VerOp *);
// void XGRAPHICS::FixChangeOp(class XGRAPHICS::VerNode *, int);
// bool XGRAPHICS::Propagate2(bool (*)(class XGRAPHICS::VerNode *, void *), class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::BackPropagate2(bool (*)(class XGRAPHICS::VerNode *, void *), class XGRAPHICS::VerNode *, void *);
// public: bool XGRAPHICS::VerTable::Propagate(bool (*)(class XGRAPHICS::VerNode *, void *), void *, bool);
// public: bool XGRAPHICS::VerTable::PropagateNonTemp(bool (*)(class XGRAPHICS::VerNode *, void *), void *, bool);
// public: long XGRAPHICS::VerTable::Release(void);
// public: void XGRAPHICS::VerTable::Cleanup(void);
// public: void XGRAPHICS::VerTable::PrintTree(bool);
// bool XGRAPHICS::CompareScaled(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, double *, double *, class XGRAPHICS::VerNode **, bool);
// bool XGRAPHICS::Compare2(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool, bool);
// bool XGRAPHICS::Compare(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool, bool);
// bool XGRAPHICS::Verify(class XGRAPHICS::VerTable *, class XGRAPHICS::VerTable *, unsigned short *, unsigned short *, struct _iobuf *, struct _iobuf *, int, int);
// protected: class XGRAPHICS::VerNode * XGRAPHICS::VerTableBuilder::StackMatches(int, class XGRAPHICS::VerNode *);
// protected: int XGRAPHICS::VerTableBuilder::CompareToStack(class XGRAPHICS::VerNode *, int, int);
// protected: bool XGRAPHICS::VerTableBuilder::PushStackCond(class XGRAPHICS::VerNode *, int, int);
// protected: bool XGRAPHICS::VerTableBuilder::PopStackCond(class XGRAPHICS::VerNode *, int);
// protected: bool XGRAPHICS::VerTableBuilder::PopStackLoop(int, int);
// XGCompareVertexShadersRaw;
// XGComparePixelShadersRaw;
// public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeOpV(unsigned char, int, int, class XGRAPHICS::VerNode **);
// public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeOp(unsigned char, int, int, ...);
// public: bool XGRAPHICS::VerOp::ChangeOpV(unsigned char, int, int, class XGRAPHICS::VerNode **);
// public: bool XGRAPHICS::VerOp::ChangeOpV2(unsigned char, int, int, class XGRAPHICS::VerNode *);
// public: bool XGRAPHICS::VerOp::ChangeOp(unsigned char, int, int, ...);
// public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeAndExpand(unsigned char, int, class XGRAPHICS::VerOp *, class XGRAPHICS::VerNode *);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::CopyTree(void);
// public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::CopyTreeRemoveParam(int);
// public: bool XGRAPHICS::VerNode::MergeNode(class XGRAPHICS::VerNode *);
// public: void XGRAPHICS::VerNode::MergeWithVal(double);
// public: static class XGRAPHICS::VerNode * XGRAPHICS::VerNode::EncaseCopyOpRemoveParam(class XGRAPHICS::VerOp *, int);
// public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::CopyNodeAndTree(void);
// public: static class XGRAPHICS::VerNode * XGRAPHICS::VerNode::MakeNodeWithOp(unsigned char, int, int, ...);
// public: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::Destructor(void);
// public: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::ArrayDestructor(int);
// public: static class XGRAPHICS::VerTable * XGRAPHICS::VerTable::MakeTable(int);
// public: bool XGRAPHICS::VerTable::InitTable(class XGRAPHICS::VerNode *);
// public: bool XGRAPHICS::VerConstTableList::SetData(class XGRAPHICS::VerTable *);
// bool XGRAPHICS::CompareNegated(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool);
// protected: class XGRAPHICS::VerNode * XGRAPHICS::VerTableBuilder::ReadReg(int, int);
// protected: bool XGRAPHICS::VerTableBuilder::WriteReg(int, class XGRAPHICS::VerNode *);
// protected: bool XGRAPHICS::VerTableBuilder::OrEqual(int, int, int, int);
// protected: bool XGRAPHICS::VerTableBuilder::OrEqual(int, class XGRAPHICS::VerNode *, int, int);
// protected: bool XGRAPHICS::VerTableBuilder::PopStackCond(void);
// int XGRAPHICS::XGDisplayTreeFromShader(struct ID3DXBuffer *const, unsigned long);
// XGCompareVertexShaders_imp;
// XGComparePixelShaders_imp;
// public: XGRAPHICS::VerConstTableList::~VerConstTableList(void);
// public: bool XGRAPHICS::VerOp::RemoveParam(int);
// public: bool XGRAPHICS::VerOp::RemoveParams(int, int);
// protected: static bool XGRAPHICS::VerTableBuilder::PatchLOOPU2(class XGRAPHICS::VerNode *, void *);
// protected: bool XGRAPHICS::VerTableBuilder::PatchLOOPU(int, int, class XGRAPHICS::VerNode *, int);

//private: static class XGRAPHICS::ms * XGRAPHICS::ms::MakeNew(void)
//{
//    mangled_ppc("?MakeNew@ms@XGRAPHICS@@CAPAV12@XZ");
//};

//private: static class XGRAPHICS::ms * XGRAPHICS::ms::MakeBig(unsigned long)
//{
//    mangled_ppc("?MakeBig@ms@XGRAPHICS@@CAPAV12@K@Z");
//};

//private: void XGRAPHICS::ms::DestroyThis(void)
//{
//    mangled_ppc("?DestroyThis@ms@XGRAPHICS@@AAAXXZ");
//};

//private: static class XGRAPHICS::ms * XGRAPHICS::ms::FindFreeMS(unsigned __int64)
//{
//    mangled_ppc("?FindFreeMS@ms@XGRAPHICS@@CAPAV12@_K@Z");
//};

//public: static void * XGRAPHICS::ms::Allocate(unsigned long)
//{
//    mangled_ppc("?Allocate@ms@XGRAPHICS@@SAPAXK@Z");
//};

//public: static void XGRAPHICS::ms::Free(void *, unsigned long)
//{
//    mangled_ppc("?Free@ms@XGRAPHICS@@SAXPAXK@Z");
//};

//public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::Constructor(void)
//{
//    mangled_ppc("?Constructor@VerOpList@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::ArrayConstructor(int)
//{
//    mangled_ppc("?ArrayConstructor@VerOpList@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: void XGRAPHICS::VerOpList::SetData(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?SetData@VerOpList@XGRAPHICS@@QAAXPAVVerOp@2@@Z");
//};

//public: bool XGRAPHICS::VerOpList::FindData(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?FindData@VerOpList@XGRAPHICS@@QAA_NPAVVerOp@2@@Z");
//};

//public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::Destructor(void)
//{
//    mangled_ppc("?Destructor@VerOpList@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerOpList * XGRAPHICS::VerOpList::ArrayDestructor(int)
//{
//    mangled_ppc("?ArrayDestructor@VerOpList@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::Constructor(void)
//{
//    mangled_ppc("?Constructor@VerOp@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::ArrayConstructor(int)
//{
//    mangled_ppc("?ArrayConstructor@VerOp@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: int XGRAPHICS::VerOp::AddRef(void)
//{
//    mangled_ppc("?AddRef@VerOp@XGRAPHICS@@QAAHXZ");
//};

//public: bool XGRAPHICS::VerOp::FindOpReference(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?FindOpReference@VerOp@XGRAPHICS@@QAA_NPAV12@@Z");
//};

//public: void XGRAPHICS::VerOp::SwapParams(int, int)
//{
//    mangled_ppc("?SwapParams@VerOp@XGRAPHICS@@QAAXHH@Z");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::Copy(void)
//{
//    mangled_ppc("?Copy@VerOp@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: bool XGRAPHICS::VerOp::CleanSame(bool)
//{
//    mangled_ppc("?CleanSame@VerOp@XGRAPHICS@@QAA_N_N@Z");
//};

//public: void XGRAPHICS::VerOp::SetSame(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?SetSame@VerOp@XGRAPHICS@@QAAXPAV12@@Z");
//};

//public: bool XGRAPHICS::VerOp::FindSame(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?FindSame@VerOp@XGRAPHICS@@QAA_NPAV12@@Z");
//};

//private: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::Constructor(void)
//{
//    mangled_ppc("?Constructor@VerTable@XGRAPHICS@@AAAPAV12@XZ");
//};

//private: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::ArrayConstructor(int)
//{
//    mangled_ppc("?ArrayConstructor@VerTable@XGRAPHICS@@AAAPAV12@H@Z");
//};

//void XGRAPHICS::CleanupAfterPropagate2(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?CleanupAfterPropagate2@XGRAPHICS@@YAXPAVVerNode@1@@Z");
//};

//public: long XGRAPHICS::VerTable::AddRef(void)
//{
//    mangled_ppc("?AddRef@VerTable@XGRAPHICS@@QAAJXZ");
//};

//void XGRAPHICS::_CleanAfterPrint(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?_CleanAfterPrint@XGRAPHICS@@YAXPAVVerNode@1@@Z");
//};

//void XGRAPHICS::_PrintInOut(struct _iobuf *, class XGRAPHICS::VerTable *)
//{
//    mangled_ppc("?_PrintInOut@XGRAPHICS@@YAXPAU_iobuf@@PAVVerTable@1@@Z");
//};

//void XGRAPHICS::_PrintHeader(struct _iobuf *, class XGRAPHICS::VerTable *)
//{
//    mangled_ppc("?_PrintHeader@XGRAPHICS@@YAXPAU_iobuf@@PAVVerTable@1@@Z");
//};

//void XGRAPHICS::_PrintFooter(struct _iobuf *, class XGRAPHICS::VerTable *)
//{
//    mangled_ppc("?_PrintFooter@XGRAPHICS@@YAXPAU_iobuf@@PAVVerTable@1@@Z");
//};

//void XGRAPHICS::_PrintOpID(struct _iobuf *, class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?_PrintOpID@XGRAPHICS@@YAXPAU_iobuf@@PAVVerOp@1@@Z");
//};

//public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::Constructor(void)
//{
//    mangled_ppc("?Constructor@VerConstTableList@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::ArrayConstructor(int)
//{
//    mangled_ppc("?ArrayConstructor@VerConstTableList@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: void * XGRAPHICS::VerConstTableList::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GVerConstTableList@XGRAPHICS@@QAAPAXI@Z");
//};

//__int64 XGRAPHICS::abs(__int64)
//{
//    mangled_ppc("?abs@XGRAPHICS@@YA_J_J@Z");
//};

//int XGRAPHICS::NearEqual(double, double)
//{
//    mangled_ppc("?NearEqual@XGRAPHICS@@YAHNN@Z");
//};

//bool XGRAPHICS::CleanUpAfterCompare2(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?CleanUpAfterCompare2@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//NativeToUCodeDWORD
//{
//    mangled_ppc("NativeToUCodeDWORD");
//};

//public: void XGRAPHICS::VerNode::ClearRange(void)
//{
//    mangled_ppc("?ClearRange@VerNode@XGRAPHICS@@QAAXXZ");
//};

//public: int XGRAPHICS::VerTable::GetNodeCount(void)
//{
//    mangled_ppc("?GetNodeCount@VerTable@XGRAPHICS@@QAAHXZ");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerTable::GetNodes(void)
//{
//    mangled_ppc("?GetNodes@VerTable@XGRAPHICS@@QAAPAVVerNode@2@XZ");
//};

//void XGRAPHICS::SetBit(unsigned __int64*, int)
//{
//    mangled_ppc("?SetBit@XGRAPHICS@@YAXPA_KH@Z");
//};

//bool XGRAPHICS::CheckBit(unsigned __int64*, int)
//{
//    mangled_ppc("?CheckBit@XGRAPHICS@@YA_NPA_KH@Z");
//};

//unsigned char XGRAPHICS::GetRcpType(unsigned char)
//{
//    mangled_ppc("?GetRcpType@XGRAPHICS@@YAEE@Z");
//};

//private: void XGRAPHICS::VerOp::Cleanup(void)
//{
//    mangled_ppc("?Cleanup@VerOp@XGRAPHICS@@AAAXXZ");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Constructor(void)
//{
//    mangled_ppc("?Constructor@VerNode@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Constructor(int)
//{
//    mangled_ppc("?Constructor@VerNode@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::ArrayConstructor(int)
//{
//    mangled_ppc("?ArrayConstructor@VerNode@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::Destructor(void)
//{
//    mangled_ppc("?Destructor@VerConstTableList@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerConstTableList * XGRAPHICS::VerConstTableList::ArrayDestructor(int)
//{
//    mangled_ppc("?ArrayDestructor@VerConstTableList@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: long XGRAPHICS::OutStream::VPrintf(char const *, char *)
//{
//    mangled_ppc("?VPrintf@OutStream@XGRAPHICS@@QAAJPBDPAD@Z");
//};

//void XGRAPHICS::VER_TRC(char const *, ...)
//{
//    mangled_ppc("?VER_TRC@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_ERR(char const *, ...)
//{
//    mangled_ppc("?VER_ERR@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_MEM(char const *, ...)
//{
//    mangled_ppc("?VER_MEM@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_NYI(char const *, ...)
//{
//    mangled_ppc("?VER_NYI@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_DIF(char const *, ...)
//{
//    mangled_ppc("?VER_DIF@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_VAL(char const *, ...)
//{
//    mangled_ppc("?VER_VAL@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_VALNON(char const *, ...)
//{
//    mangled_ppc("?VER_VALNON@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VER_MSG(char const *, ...)
//{
//    mangled_ppc("?VER_MSG@XGRAPHICS@@YAXPBDZZ");
//};

//char const * XGRAPHICS::GetVerRegInfo(int, int &, char &, bool &)
//{
//    mangled_ppc("?GetVerRegInfo@XGRAPHICS@@YAPBDHAAHAADAA_N@Z");
//};

//bool XGRAPHICS::GetVerReg(int, char *, int)
//{
//    mangled_ppc("?GetVerReg@XGRAPHICS@@YA_NHPADH@Z");
//};

//char const * XGRAPHICS::GetVerOpcode(unsigned char)
//{
//    mangled_ppc("?GetVerOpcode@XGRAPHICS@@YAPBDE@Z");
//};

//int XGRAPHICS::VerOpParamCount(unsigned char)
//{
//    mangled_ppc("?VerOpParamCount@XGRAPHICS@@YAHE@Z");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::Destructor(void)
//{
//    mangled_ppc("?Destructor@VerOp@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::ArrayDestructor(int)
//{
//    mangled_ppc("?ArrayDestructor@VerOp@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: int XGRAPHICS::VerOp::Release(void)
//{
//    mangled_ppc("?Release@VerOp@XGRAPHICS@@QAAHXZ");
//};

//public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeEmptyOp(unsigned char, int, int)
//{
//    mangled_ppc("?MakeEmptyOp@VerOp@XGRAPHICS@@SAPAV12@EHH@Z");
//};

//public: void XGRAPHICS::VerNode::SetValKeepReg(double)
//{
//    mangled_ppc("?SetValKeepReg@VerNode@XGRAPHICS@@QAAXN@Z");
//};

//public: void XGRAPHICS::VerNode::SetNameKeepReg(char const *, unsigned char)
//{
//    mangled_ppc("?SetNameKeepReg@VerNode@XGRAPHICS@@QAAXPBDE@Z");
//};

//public: static class XGRAPHICS::VerNode * XGRAPHICS::VerNode::EncaseOpWithNode(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?EncaseOpWithNode@VerNode@XGRAPHICS@@SAPAV12@PAVVerOp@2@@Z");
//};

//public: void XGRAPHICS::VerNode::Cleanup(void)
//{
//    mangled_ppc("?Cleanup@VerNode@XGRAPHICS@@QAAXXZ");
//};

//void XGRAPHICS::_D3DPrintReg(struct _iobuf *, int)
//{
//    mangled_ppc("?_D3DPrintReg@XGRAPHICS@@YAXPAU_iobuf@@H@Z");
//};

//void XGRAPHICS::_PrintNode(struct _iobuf *, class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?_PrintNode@XGRAPHICS@@YAXPAU_iobuf@@PAVVerNode@1@@Z");
//};

//void XGRAPHICS::_PrintOp(struct _iobuf *, class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?_PrintOp@XGRAPHICS@@YAXPAU_iobuf@@PAVVerOp@1@@Z");
//};

//void XGRAPHICS::_PrepNode(struct _iobuf *, class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?_PrepNode@XGRAPHICS@@YAXPAU_iobuf@@PAVVerNode@1@H@Z");
//};

//void XGRAPHICS::_PrintOutVar(struct _iobuf *, class XGRAPHICS::VerTable *, int)
//{
//    mangled_ppc("?_PrintOutVar@XGRAPHICS@@YAXPAU_iobuf@@PAVVerTable@1@H@Z");
//};

//void XGRAPHICS::_3PC(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?_3PC@XGRAPHICS@@YAXPAVVerNode@1@@Z");
//};

//void XGRAPHICS::_D3DPrintTree(struct _iobuf *, class XGRAPHICS::VerNode *, int, bool, int)
//{
//    mangled_ppc("?_D3DPrintTree@XGRAPHICS@@YAXPAU_iobuf@@PAVVerNode@1@H_NH@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::InvStackCond(void)
//{
//    mangled_ppc("?InvStackCond@VerTableBuilder@XGRAPHICS@@IAA_NXZ");
//};

//protected: bool XGRAPHICS::VerTableBuilder::PushStackLoop(int, int)
//{
//    mangled_ppc("?PushStackLoop@VerTableBuilder@XGRAPHICS@@IAA_NHH@Z");
//};

//public: static bool XGRAPHICS::ms::Initialize(void)
//{
//    mangled_ppc("?Initialize@ms@XGRAPHICS@@SA_NXZ");
//};

//public: static int XGRAPHICS::ms::Release(void)
//{
//    mangled_ppc("?Release@ms@XGRAPHICS@@SAHXZ");
//};

//public: void XGRAPHICS::VerNode::SetVal(double)
//{
//    mangled_ppc("?SetVal@VerNode@XGRAPHICS@@QAAXN@Z");
//};

//public: void XGRAPHICS::VerNode::SetReg(int)
//{
//    mangled_ppc("?SetReg@VerNode@XGRAPHICS@@QAAXH@Z");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Destructor(void)
//{
//    mangled_ppc("?Destructor@VerNode@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::ArrayDestructor(int)
//{
//    mangled_ppc("?ArrayDestructor@VerNode@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: bool XGRAPHICS::VerNode::CopyFrom(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?CopyFrom@VerNode@XGRAPHICS@@QAA_NPAV12@@Z");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::Copy(void)
//{
//    mangled_ppc("?Copy@VerNode@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: void XGRAPHICS::VerNode::CleanupAndUseOp(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?CleanupAndUseOp@VerNode@XGRAPHICS@@QAAXPAVVerOp@2@@Z");
//};

//public: void XGRAPHICS::VerNode::MergeWithReg(int)
//{
//    mangled_ppc("?MergeWithReg@VerNode@XGRAPHICS@@QAAXH@Z");
//};

//public: void XGRAPHICS::VerNode::MergeWithOp(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?MergeWithOp@VerNode@XGRAPHICS@@QAAXPAVVerOp@2@@Z");
//};

//void XGRAPHICS::FixChangeOp(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?FixChangeOp@XGRAPHICS@@YAXPAVVerNode@1@H@Z");
//};

//bool XGRAPHICS::Propagate2(bool (*)(class XGRAPHICS::VerNode *, void *), class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?Propagate2@XGRAPHICS@@YA_NP6A_NPAVVerNode@1@PAX@Z01@Z");
//};

//bool XGRAPHICS::BackPropagate2(bool (*)(class XGRAPHICS::VerNode *, void *), class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?BackPropagate2@XGRAPHICS@@YA_NP6A_NPAVVerNode@1@PAX@Z01@Z");
//};

//public: bool XGRAPHICS::VerTable::Propagate(bool (*)(class XGRAPHICS::VerNode *, void *), void *, bool)
//{
//    mangled_ppc("?Propagate@VerTable@XGRAPHICS@@QAA_NP6A_NPAVVerNode@2@PAX@Z1_N@Z");
//};

//public: bool XGRAPHICS::VerTable::PropagateNonTemp(bool (*)(class XGRAPHICS::VerNode *, void *), void *, bool)
//{
//    mangled_ppc("?PropagateNonTemp@VerTable@XGRAPHICS@@QAA_NP6A_NPAVVerNode@2@PAX@Z1_N@Z");
//};

//public: long XGRAPHICS::VerTable::Release(void)
//{
//    mangled_ppc("?Release@VerTable@XGRAPHICS@@QAAJXZ");
//};

//public: void XGRAPHICS::VerTable::Cleanup(void)
//{
//    mangled_ppc("?Cleanup@VerTable@XGRAPHICS@@QAAXXZ");
//};

//public: void XGRAPHICS::VerTable::PrintTree(bool)
//{
//    mangled_ppc("?PrintTree@VerTable@XGRAPHICS@@QAAX_N@Z");
//};

//bool XGRAPHICS::CompareScaled(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, double *, double *, class XGRAPHICS::VerNode **, bool)
//{
//    mangled_ppc("?CompareScaled@XGRAPHICS@@YA_NPAVVerNode@1@0PAN1PAPAV21@_N@Z");
//};

//bool XGRAPHICS::Compare2(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool, bool)
//{
//    mangled_ppc("?Compare2@XGRAPHICS@@YA_NPAVVerNode@1@0_N1@Z");
//};

//bool XGRAPHICS::Compare(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool, bool)
//{
//    mangled_ppc("?Compare@XGRAPHICS@@YA_NPAVVerNode@1@0_N1@Z");
//};

//bool XGRAPHICS::Verify(class XGRAPHICS::VerTable *, class XGRAPHICS::VerTable *, unsigned short *, unsigned short *, struct _iobuf *, struct _iobuf *, int, int)
//{
//    mangled_ppc("?Verify@XGRAPHICS@@YA_NPAVVerTable@1@0PAG1PAU_iobuf@@2HH@Z");
//};

//protected: class XGRAPHICS::VerNode * XGRAPHICS::VerTableBuilder::StackMatches(int, class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?StackMatches@VerTableBuilder@XGRAPHICS@@IAAPAVVerNode@2@HPAV32@@Z");
//};

//protected: int XGRAPHICS::VerTableBuilder::CompareToStack(class XGRAPHICS::VerNode *, int, int)
//{
//    mangled_ppc("?CompareToStack@VerTableBuilder@XGRAPHICS@@IAAHPAVVerNode@2@HH@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::PushStackCond(class XGRAPHICS::VerNode *, int, int)
//{
//    mangled_ppc("?PushStackCond@VerTableBuilder@XGRAPHICS@@IAA_NPAVVerNode@2@HH@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::PopStackCond(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?PopStackCond@VerTableBuilder@XGRAPHICS@@IAA_NPAVVerNode@2@H@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::PopStackLoop(int, int)
//{
//    mangled_ppc("?PopStackLoop@VerTableBuilder@XGRAPHICS@@IAA_NHH@Z");
//};

//XGCompareVertexShadersRaw
//{
//    mangled_ppc("XGCompareVertexShadersRaw");
//};

//XGComparePixelShadersRaw
//{
//    mangled_ppc("XGComparePixelShadersRaw");
//};

//public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeOpV(unsigned char, int, int, class XGRAPHICS::VerNode **)
//{
//    mangled_ppc("?MakeOpV@VerOp@XGRAPHICS@@SAPAV12@EHHPAPAVVerNode@2@@Z");
//};

//public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeOp(unsigned char, int, int, ...)
//{
//    mangled_ppc("?MakeOp@VerOp@XGRAPHICS@@SAPAV12@EHHZZ");
//};

//public: bool XGRAPHICS::VerOp::ChangeOpV(unsigned char, int, int, class XGRAPHICS::VerNode **)
//{
//    mangled_ppc("?ChangeOpV@VerOp@XGRAPHICS@@QAA_NEHHPAPAVVerNode@2@@Z");
//};

//public: bool XGRAPHICS::VerOp::ChangeOpV2(unsigned char, int, int, class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?ChangeOpV2@VerOp@XGRAPHICS@@QAA_NEHHPAVVerNode@2@@Z");
//};

//public: bool XGRAPHICS::VerOp::ChangeOp(unsigned char, int, int, ...)
//{
//    mangled_ppc("?ChangeOp@VerOp@XGRAPHICS@@QAA_NEHHZZ");
//};

//public: static class XGRAPHICS::VerOp * XGRAPHICS::VerOp::MakeAndExpand(unsigned char, int, class XGRAPHICS::VerOp *, class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?MakeAndExpand@VerOp@XGRAPHICS@@SAPAV12@EHPAV12@PAVVerNode@2@@Z");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::CopyTree(void)
//{
//    mangled_ppc("?CopyTree@VerOp@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerOp * XGRAPHICS::VerOp::CopyTreeRemoveParam(int)
//{
//    mangled_ppc("?CopyTreeRemoveParam@VerOp@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: bool XGRAPHICS::VerNode::MergeNode(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?MergeNode@VerNode@XGRAPHICS@@QAA_NPAV12@@Z");
//};

//public: void XGRAPHICS::VerNode::MergeWithVal(double)
//{
//    mangled_ppc("?MergeWithVal@VerNode@XGRAPHICS@@QAAXN@Z");
//};

//public: static class XGRAPHICS::VerNode * XGRAPHICS::VerNode::EncaseCopyOpRemoveParam(class XGRAPHICS::VerOp *, int)
//{
//    mangled_ppc("?EncaseCopyOpRemoveParam@VerNode@XGRAPHICS@@SAPAV12@PAVVerOp@2@H@Z");
//};

//public: class XGRAPHICS::VerNode * XGRAPHICS::VerNode::CopyNodeAndTree(void)
//{
//    mangled_ppc("?CopyNodeAndTree@VerNode@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: static class XGRAPHICS::VerNode * XGRAPHICS::VerNode::MakeNodeWithOp(unsigned char, int, int, ...)
//{
//    mangled_ppc("?MakeNodeWithOp@VerNode@XGRAPHICS@@SAPAV12@EHHZZ");
//};

//public: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::Destructor(void)
//{
//    mangled_ppc("?Destructor@VerTable@XGRAPHICS@@QAAPAV12@XZ");
//};

//public: class XGRAPHICS::VerTable * XGRAPHICS::VerTable::ArrayDestructor(int)
//{
//    mangled_ppc("?ArrayDestructor@VerTable@XGRAPHICS@@QAAPAV12@H@Z");
//};

//public: static class XGRAPHICS::VerTable * XGRAPHICS::VerTable::MakeTable(int)
//{
//    mangled_ppc("?MakeTable@VerTable@XGRAPHICS@@SAPAV12@H@Z");
//};

//public: bool XGRAPHICS::VerTable::InitTable(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?InitTable@VerTable@XGRAPHICS@@QAA_NPAVVerNode@2@@Z");
//};

//public: bool XGRAPHICS::VerConstTableList::SetData(class XGRAPHICS::VerTable *)
//{
//    mangled_ppc("?SetData@VerConstTableList@XGRAPHICS@@QAA_NPAVVerTable@2@@Z");
//};

//bool XGRAPHICS::CompareNegated(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool)
//{
//    mangled_ppc("?CompareNegated@XGRAPHICS@@YA_NPAVVerNode@1@0_N@Z");
//};

//protected: class XGRAPHICS::VerNode * XGRAPHICS::VerTableBuilder::ReadReg(int, int)
//{
//    mangled_ppc("?ReadReg@VerTableBuilder@XGRAPHICS@@IAAPAVVerNode@2@HH@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::WriteReg(int, class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?WriteReg@VerTableBuilder@XGRAPHICS@@IAA_NHPAVVerNode@2@@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::OrEqual(int, int, int, int)
//{
//    mangled_ppc("?OrEqual@VerTableBuilder@XGRAPHICS@@IAA_NHHHH@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::OrEqual(int, class XGRAPHICS::VerNode *, int, int)
//{
//    mangled_ppc("?OrEqual@VerTableBuilder@XGRAPHICS@@IAA_NHPAVVerNode@2@HH@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::PopStackCond(void)
//{
//    mangled_ppc("?PopStackCond@VerTableBuilder@XGRAPHICS@@IAA_NXZ");
//};

//int XGRAPHICS::XGDisplayTreeFromShader(struct ID3DXBuffer *const, unsigned long)
//{
//    mangled_ppc("?XGDisplayTreeFromShader@XGRAPHICS@@YAHQAUID3DXBuffer@@K@Z");
//};

//XGCompareVertexShaders_imp
//{
//    mangled_ppc("XGCompareVertexShaders_imp");
//};

//XGComparePixelShaders_imp
//{
//    mangled_ppc("XGComparePixelShaders_imp");
//};

//public: XGRAPHICS::VerConstTableList::~VerConstTableList(void)
//{
//    mangled_ppc("??1VerConstTableList@XGRAPHICS@@QAA@XZ");
//};

//public: bool XGRAPHICS::VerOp::RemoveParam(int)
//{
//    mangled_ppc("?RemoveParam@VerOp@XGRAPHICS@@QAA_NH@Z");
//};

//public: bool XGRAPHICS::VerOp::RemoveParams(int, int)
//{
//    mangled_ppc("?RemoveParams@VerOp@XGRAPHICS@@QAA_NHH@Z");
//};

//protected: static bool XGRAPHICS::VerTableBuilder::PatchLOOPU2(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?PatchLOOPU2@VerTableBuilder@XGRAPHICS@@KA_NPAVVerNode@2@PAX@Z");
//};

//protected: bool XGRAPHICS::VerTableBuilder::PatchLOOPU(int, int, class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?PatchLOOPU@VerTableBuilder@XGRAPHICS@@IAA_NHHPAVVerNode@2@H@Z");
//};

