/* ---------- headers */

#include "xdk\xgraphicsd\xltconvert.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int XGRAPHICS::GetAvailableTemp(struct XGRAPHICS::_XLT_CONTEXT *);
// unsigned int XGRAPHICS::GetAvailableKonst(struct XGRAPHICS::_XLT_CONTEXT *);
// void XGRAPHICS::xltGetFetchConstInfo(struct XGRAPHICS::_XLT_CONTEXT *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// unsigned int XGRAPHICS::AddExportInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXPORT_CACHE *, unsigned int, unsigned int);
// unsigned int XGRAPHICS::FindExportInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXPORT_CACHE *, unsigned int, unsigned int);
// unsigned int XGRAPHICS::PopExportInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXPORT_CACHE *, struct XGRAPHICS::_XLT_EXPORT_CACHE_NODE *);
// void XGRAPHICS::AddExecInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXEC_INFO *, unsigned int, unsigned int, union XGRAPHICS::_XLT_EXEC_INFO_DATA *);
// unsigned int XGRAPHICS::PopExecInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXEC_INFO *, struct XGRAPHICS::_XLT_EXEC_INFO_NODE *);
// void XGRAPHICS::InsertVFetch(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int, unsigned int, unsigned int, unsigned int);
// void XGRAPHICS::InsertTFetch(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_TEXTURE_INFO *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
// float XGRAPHICS::AS_GetArrayStateF(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int);
// void XGRAPHICS::InsertAlloc(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int);
// unsigned char XGRAPHICS::SetHardwareSwizzle(union XGRAPHICS::IL_Src_Mod *);
// void XGRAPHICS::SetOpcode(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int, unsigned int, unsigned int);
// void XGRAPHICS::SetDst(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Dst *, union XGRAPHICS::IL_Dst_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, unsigned int);
// void XGRAPHICS::SetSrc(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, unsigned int, unsigned int *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoInitPredStack(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoInitObjectIndex(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoInitPos(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoInitParam(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoAbs(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoCmp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoCrs(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoDiv(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoExpp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoInitv(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoLit(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoLogp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoLrp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMMul(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMod(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMov(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoNrm(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPow(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSet(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSgn(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSinCos(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSub(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredIfc(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredElse(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredEndif(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredLoop(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredBreak(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredBreakc(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoPredEndLoop(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoTexConv_CubeMap(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_TEXTURE_INFO *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoTexConv_YUV(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoTexConv_BdrClr(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_TEXTURE_INFO *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMemExport(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMovConstToGPR(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrc01Swizzle(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcInvert(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcBias(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcDouble(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcSign(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcDivComp(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcAbs(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcNegation(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoShiftScale(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Dst *, union XGRAPHICS::IL_Dst_Mod *, union XGRAPHICS::IL_Rel_Addr *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMultipassExport(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoSplitMov(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int, unsigned int, unsigned int, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoCopyILToMacroBuffer(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// void XGRAPHICS::DoSaveMova(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoMova(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, union XGRAPHICS::IL_Token *, unsigned int *);
// void XGRAPHICS::DoDCLV(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Dst *, union XGRAPHICS::IL_Dst_Mod *, unsigned int);
// void XGRAPHICS::DoDCLPT(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoDCLPI(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int *);
// void XGRAPHICS::FinishShader(struct XGRAPHICS::_XLT_CONTEXT *);
// void XGRAPHICS::XltSetupRenderstates(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *);
// void XGRAPHICS::InitContext(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_STATE_TRANSLATOR *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// void XGRAPHICS::InitContextAssm(struct XGRAPHICS::_XLT_CONTEXT_ASSM_INFO *, void *);
// void XGRAPHICS::InitTranslatorKonsts(struct XGRAPHICS::_XLT_CONTEXT *);
// void XGRAPHICS::InitSymbolTable(struct XGRAPHICS::_XLT_CONTEXT *, unsigned char *);
// struct XGRAPHICS::_XLT_STATE_TRANSLATOR * XGRAPHICS::XLT_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SS_SHADER_STORE *, struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_SSM_REGISTRY *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::XLT_Destroy(struct XGRAPHICS::_XLT_STATE_TRANSLATOR *);
// unsigned int XGRAPHICS::xltGetTFetchType(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// unsigned int XGRAPHICS::xltGetHosIndexGPR(struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int XGRAPHICS::xltGetClampValue(struct XGRAPHICS::_ABSTRACT_STATE *, int);
// unsigned int XGRAPHICS::xltGetTFetchFormat(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// unsigned int XGRAPHICS::xltGetDivcompUnknown(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// unsigned int XGRAPHICS::xltGetFogEnable(struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int XGRAPHICS::xltGetFogTableMode(struct XGRAPHICS::_ABSTRACT_STATE *);
// float XGRAPHICS::xltGetFogColorRed(struct XGRAPHICS::_ABSTRACT_STATE *);
// float XGRAPHICS::xltGetFogColorGreen(struct XGRAPHICS::_ABSTRACT_STATE *);
// float XGRAPHICS::xltGetFogColorBlue(struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int XGRAPHICS::xltGetFogVertexMode(struct XGRAPHICS::_ABSTRACT_STATE *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoColorClamp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoTexLd(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int *);
// union XGRAPHICS::IL_Token * XGRAPHICS::DoVtxFogLinear(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *);
// union XGRAPHICS::IL_Token * XGRAPHICS::AssembleAluMacro(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *, union XGRAPHICS::IL_Token *, unsigned int *, unsigned int);
// void XGRAPHICS::DoTranslation(struct XGRAPHICS::_XLT_CONTEXT *);
// void XGRAPHICS::BuildSymbolTable(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *);
// unsigned int XGRAPHICS::TranslateShader(struct XGRAPHICS::_XLT_CONTEXT *, unsigned char *, void *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::XLT_TranslateProgram(struct XGRAPHICS::_XLT_STATE_TRANSLATOR *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::XLT_TranslateShader(struct XGRAPHICS::_XLT_STATE_TRANSLATOR *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, unsigned char *);

//unsigned int XGRAPHICS::GetAvailableTemp(struct XGRAPHICS::_XLT_CONTEXT *)
//{
//    mangled_ppc("?GetAvailableTemp@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@@Z");
//};

//unsigned int XGRAPHICS::GetAvailableKonst(struct XGRAPHICS::_XLT_CONTEXT *)
//{
//    mangled_ppc("?GetAvailableKonst@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@@Z");
//};

//void XGRAPHICS::xltGetFetchConstInfo(struct XGRAPHICS::_XLT_CONTEXT *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?xltGetFetchConstInfo@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@W4E_FETCH_TYPE@1@IPAI2@Z");
//};

//unsigned int XGRAPHICS::AddExportInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXPORT_CACHE *, unsigned int, unsigned int)
//{
//    mangled_ppc("?AddExportInfo@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@PAU_XLT_EXPORT_CACHE@1@II@Z");
//};

//unsigned int XGRAPHICS::FindExportInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXPORT_CACHE *, unsigned int, unsigned int)
//{
//    mangled_ppc("?FindExportInfo@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@PAU_XLT_EXPORT_CACHE@1@II@Z");
//};

//unsigned int XGRAPHICS::PopExportInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXPORT_CACHE *, struct XGRAPHICS::_XLT_EXPORT_CACHE_NODE *)
//{
//    mangled_ppc("?PopExportInfo@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@PAU_XLT_EXPORT_CACHE@1@PAU_XLT_EXPORT_CACHE_NODE@1@@Z");
//};

//void XGRAPHICS::AddExecInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXEC_INFO *, unsigned int, unsigned int, union XGRAPHICS::_XLT_EXEC_INFO_DATA *)
//{
//    mangled_ppc("?AddExecInfo@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PAU_XLT_EXEC_INFO@1@IIPAT_XLT_EXEC_INFO_DATA@1@@Z");
//};

//unsigned int XGRAPHICS::PopExecInfo(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_EXEC_INFO *, struct XGRAPHICS::_XLT_EXEC_INFO_NODE *)
//{
//    mangled_ppc("?PopExecInfo@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@PAU_XLT_EXEC_INFO@1@PAU_XLT_EXEC_INFO_NODE@1@@Z");
//};

//void XGRAPHICS::InsertVFetch(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?InsertVFetch@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@IIII@Z");
//};

//void XGRAPHICS::InsertTFetch(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_TEXTURE_INFO *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?InsertTFetch@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PAU_XLT_TEXTURE_INFO@1@IIIIII@Z");
//};

//float XGRAPHICS::AS_GetArrayStateF(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int)
//{
//    mangled_ppc("?AS_GetArrayStateF@XGRAPHICS@@YAMPAU_ABSTRACT_STATE@1@W4_E_AS_ARRAY_STATE@1@I@Z");
//};

//void XGRAPHICS::InsertAlloc(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int)
//{
//    mangled_ppc("?InsertAlloc@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@I@Z");
//};

//unsigned char XGRAPHICS::SetHardwareSwizzle(union XGRAPHICS::IL_Src_Mod *)
//{
//    mangled_ppc("?SetHardwareSwizzle@XGRAPHICS@@YAEPATIL_Src_Mod@1@@Z");
//};

//void XGRAPHICS::SetOpcode(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetOpcode@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@III@Z");
//};

//void XGRAPHICS::SetDst(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Dst *, union XGRAPHICS::IL_Dst_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetDst@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PATIL_Dst@1@PATIL_Dst_Mod@1@PATIL_Rel_Addr@1@II@Z");
//};

//void XGRAPHICS::SetSrc(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?SetSrc@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IIPAI@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoInitPredStack(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoInitPredStack@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoInitObjectIndex(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoInitObjectIndex@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoInitPos(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoInitPos@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoInitParam(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoInitParam@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoAbs(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoAbs@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoCmp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoCmp@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoCrs(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoCrs@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoDiv(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoDiv@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoExpp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoExpp@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoInitv(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoInitv@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoLit(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoLit@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoLogp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoLogp@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoLrp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoLrp@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMMul(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoMMul@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMod(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoMod@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMov(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoMov@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoNrm(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoNrm@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPow(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPow@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSet(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSet@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSgn(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSgn@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSinCos(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSinCos@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSub(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSub@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredIfc(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredIfc@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredElse(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredElse@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredEndif(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredEndif@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredLoop(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredLoop@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredBreak(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredBreak@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredBreakc(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredBreakc@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoPredEndLoop(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoPredEndLoop@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoTexConv_CubeMap(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_TEXTURE_INFO *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoTexConv_CubeMap@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_TEXTURE_INFO@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoTexConv_YUV(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoTexConv_YUV@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoTexConv_BdrClr(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_TEXTURE_INFO *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoTexConv_BdrClr@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_TEXTURE_INFO@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMemExport(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int *)
//{
//    mangled_ppc("?DoMemExport@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@PAI@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMovConstToGPR(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoMovConstToGPR@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrc01Swizzle(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrc01Swizzle@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcInvert(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcInvert@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcBias(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcBias@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcDouble(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcDouble@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcSign(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcSign@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcDivComp(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcDivComp@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcAbs(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcAbs@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSrcNegation(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Src *, union XGRAPHICS::IL_Src_Mod *, union XGRAPHICS::IL_Rel_Addr *, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSrcNegation@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Src@1@PATIL_Src_Mod@1@PATIL_Rel_Addr@1@IPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoShiftScale(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Dst *, union XGRAPHICS::IL_Dst_Mod *, union XGRAPHICS::IL_Rel_Addr *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoShiftScale@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PATIL_Dst@1@PATIL_Dst_Mod@1@PATIL_Rel_Addr@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMultipassExport(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoMultipassExport@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoSplitMov(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int, unsigned int, unsigned int, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSplitMov@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@IIIPAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoCopyILToMacroBuffer(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoCopyILToMacroBuffer@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@@Z");
//};

//void XGRAPHICS::DoSaveMova(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoSaveMova@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PATIL_Token@1@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoMova(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, union XGRAPHICS::IL_Token *, unsigned int *)
//{
//    mangled_ppc("?DoMova@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@2PAI@Z");
//};

//void XGRAPHICS::DoDCLV(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Dst *, union XGRAPHICS::IL_Dst_Mod *, unsigned int)
//{
//    mangled_ppc("?DoDCLV@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PATIL_Dst@1@PATIL_Dst_Mod@1@I@Z");
//};

//void XGRAPHICS::DoDCLPT(struct XGRAPHICS::_XLT_CONTEXT *, unsigned int)
//{
//    mangled_ppc("?DoDCLPT@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@I@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoDCLPI(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int *)
//{
//    mangled_ppc("?DoDCLPI@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@PAI@Z");
//};

//void XGRAPHICS::FinishShader(struct XGRAPHICS::_XLT_CONTEXT *)
//{
//    mangled_ppc("?FinishShader@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@@Z");
//};

//void XGRAPHICS::XltSetupRenderstates(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *)
//{
//    mangled_ppc("?XltSetupRenderstates@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PAU_CP_COMPILED_PROGRAM@1@@Z");
//};

//void XGRAPHICS::InitContext(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_STATE_TRANSLATOR *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?InitContext@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PAU_XLT_STATE_TRANSLATOR@1@PAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//void XGRAPHICS::InitContextAssm(struct XGRAPHICS::_XLT_CONTEXT_ASSM_INFO *, void *)
//{
//    mangled_ppc("?InitContextAssm@XGRAPHICS@@YAXPAU_XLT_CONTEXT_ASSM_INFO@1@PAX@Z");
//};

//void XGRAPHICS::InitTranslatorKonsts(struct XGRAPHICS::_XLT_CONTEXT *)
//{
//    mangled_ppc("?InitTranslatorKonsts@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@@Z");
//};

//void XGRAPHICS::InitSymbolTable(struct XGRAPHICS::_XLT_CONTEXT *, unsigned char *)
//{
//    mangled_ppc("?InitSymbolTable@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PAE@Z");
//};

//struct XGRAPHICS::_XLT_STATE_TRANSLATOR * XGRAPHICS::XLT_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SS_SHADER_STORE *, struct XGRAPHICS::_TS_TEXTURE_SERVER *, struct XGRAPHICS::_SSM_REGISTRY *)
//{
//    mangled_ppc("?XLT_Create@XGRAPHICS@@YAPAU_XLT_STATE_TRANSLATOR@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_SS_SHADER_STORE@1@PAU_TS_TEXTURE_SERVER@1@PAU_SSM_REGISTRY@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::XLT_Destroy(struct XGRAPHICS::_XLT_STATE_TRANSLATOR *)
//{
//    mangled_ppc("?XLT_Destroy@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_XLT_STATE_TRANSLATOR@1@@Z");
//};

//unsigned int XGRAPHICS::xltGetTFetchType(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?xltGetTFetchType@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@I@Z");
//};

//unsigned int XGRAPHICS::xltGetHosIndexGPR(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetHosIndexGPR@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int XGRAPHICS::xltGetClampValue(struct XGRAPHICS::_ABSTRACT_STATE *, int)
//{
//    mangled_ppc("?xltGetClampValue@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@H@Z");
//};

//unsigned int XGRAPHICS::xltGetTFetchFormat(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?xltGetTFetchFormat@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@I@Z");
//};

//unsigned int XGRAPHICS::xltGetDivcompUnknown(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?xltGetDivcompUnknown@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@I@Z");
//};

//unsigned int XGRAPHICS::xltGetFogEnable(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetFogEnable@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int XGRAPHICS::xltGetFogTableMode(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetFogTableMode@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@@Z");
//};

//float XGRAPHICS::xltGetFogColorRed(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetFogColorRed@XGRAPHICS@@YAMPAU_ABSTRACT_STATE@1@@Z");
//};

//float XGRAPHICS::xltGetFogColorGreen(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetFogColorGreen@XGRAPHICS@@YAMPAU_ABSTRACT_STATE@1@@Z");
//};

//float XGRAPHICS::xltGetFogColorBlue(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetFogColorBlue@XGRAPHICS@@YAMPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int XGRAPHICS::xltGetFogVertexMode(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?xltGetFogVertexMode@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoColorClamp(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int)
//{
//    mangled_ppc("?DoColorClamp@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@I@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoTexLd(struct XGRAPHICS::_XLT_CONTEXT *, struct XGRAPHICS::_XLT_IL_INSTRUCTION *, union XGRAPHICS::IL_Token *, unsigned int *)
//{
//    mangled_ppc("?DoTexLd@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAU_XLT_IL_INSTRUCTION@1@PAT21@PAI@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::DoVtxFogLinear(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?DoVtxFogLinear@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAT21@@Z");
//};

//union XGRAPHICS::IL_Token * XGRAPHICS::AssembleAluMacro(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *, union XGRAPHICS::IL_Token *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?AssembleAluMacro@XGRAPHICS@@YAPATIL_Token@1@PAU_XLT_CONTEXT@1@PAT21@1PAII@Z");
//};

//void XGRAPHICS::DoTranslation(struct XGRAPHICS::_XLT_CONTEXT *)
//{
//    mangled_ppc("?DoTranslation@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@@Z");
//};

//void XGRAPHICS::BuildSymbolTable(struct XGRAPHICS::_XLT_CONTEXT *, union XGRAPHICS::IL_Token *)
//{
//    mangled_ppc("?BuildSymbolTable@XGRAPHICS@@YAXPAU_XLT_CONTEXT@1@PATIL_Token@1@@Z");
//};

//unsigned int XGRAPHICS::TranslateShader(struct XGRAPHICS::_XLT_CONTEXT *, unsigned char *, void *)
//{
//    mangled_ppc("?TranslateShader@XGRAPHICS@@YAIPAU_XLT_CONTEXT@1@PAEPAX@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::XLT_TranslateProgram(struct XGRAPHICS::_XLT_STATE_TRANSLATOR *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *)
//{
//    mangled_ppc("?XLT_TranslateProgram@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_XLT_STATE_TRANSLATOR@1@PAU_ABSTRACT_STATE@1@PAU_CP_COMPILED_PROGRAM@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::XLT_TranslateShader(struct XGRAPHICS::_XLT_STATE_TRANSLATOR *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, unsigned char *)
//{
//    mangled_ppc("?XLT_TranslateShader@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_XLT_STATE_TRANSLATOR@1@PAU_ABSTRACT_STATE@1@PAU_CP_COMPILED_PROGRAM@1@PAE@Z");
//};

