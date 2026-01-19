/* ---------- headers */

#include "xdk\xgraphicsd\statepostprocessor.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int XGRAPHICS::GetMaxStateSizeInd(struct XGRAPHICS::_PS_PROGRAM_KEY *);
// unsigned int XGRAPHICS::GetMaxStateSizeIndRts(struct XGRAPHICS::_PS_PROGRAM_KEY *);
// unsigned int XGRAPHICS::GetMaxStateSizeImm(struct XGRAPHICS::_PS_PROGRAM_KEY *);
// unsigned int XGRAPHICS::GetMaxConstSize(struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int XGRAPHICS::GetMaxPreambleConstSize(struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int * XGRAPHICS::OpImLoadImmediate(unsigned int *, enum XGRAPHICS::_E_PP_SHADER_TYPE, struct XGRAPHICS::_CP_SHADERPROGRAM_BLOCK *);
// unsigned int * XGRAPHICS::OpSetALUConstant(unsigned int *, unsigned int, unsigned int const *);
// unsigned int * XGRAPHICS::OpSetINTConstant(unsigned int *, unsigned int, unsigned int, unsigned int *);
// unsigned int * XGRAPHICS::OpSetBOOLConstant(unsigned int *, unsigned int, unsigned int, unsigned int const *);
// unsigned int * XGRAPHICS::OpSetFETCHConstant(unsigned int *, unsigned int, unsigned int const *);
// unsigned int * XGRAPHICS::SetOneRegPM4(unsigned int *, unsigned int, unsigned int);
// unsigned int * XGRAPHICS::ProcInternalALUConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int * XGRAPHICS::ProcInternalBoolConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int * XGRAPHICS::ProcFetchConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int * XGRAPHICS::ProcRegConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::PP_Destroy(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufActivateState(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int XGRAPHICS::AS_GetConstDtBit(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufStateInd(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// void XGRAPHICS::AS_ClrConstDtBit(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int);
// void const * XGRAPHICS::AS_GetPFConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *);
// void const * XGRAPHICS::AS_GetVFConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *);
// void const * XGRAPHICS::AS_GetPIConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *);
// void const * XGRAPHICS::AS_GetVIConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *);
// void const * XGRAPHICS::AS_GetPBConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufStateIndRts(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// void const * XGRAPHICS::AS_GetVBConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufStateImm(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufNonClientConst(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::PP_ProcessState(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// unsigned int * XGRAPHICS::SetConstBlk(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int *);
// void XGRAPHICS::PP_SetPreambleConst(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_ABSTRACT_STATE *);
// void XGRAPHICS::PP_SetPreamble(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_PS_PROGRAM_STORE * XGRAPHICS::PP_GetProgramStore(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *);
// unsigned int * XGRAPHICS::ProcDirtyALUConstants(unsigned int *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int * XGRAPHICS::ProcDirtyINTConstants(unsigned int *, struct XGRAPHICS::_ABSTRACT_STATE *);
// unsigned int * XGRAPHICS::ProcDirtyBOOLConstants(unsigned int *, struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_PP_STATE_POSTPROCESSOR * XGRAPHICS::PP_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SSM_REGISTRY *, struct XGRAPHICS::_PS_PROGRAM_STORE *, struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::PP_ProcessConsts(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *);

//unsigned int XGRAPHICS::GetMaxStateSizeInd(struct XGRAPHICS::_PS_PROGRAM_KEY *)
//{
//    mangled_ppc("?GetMaxStateSizeInd@XGRAPHICS@@YAIPAU_PS_PROGRAM_KEY@1@@Z");
//};

//unsigned int XGRAPHICS::GetMaxStateSizeIndRts(struct XGRAPHICS::_PS_PROGRAM_KEY *)
//{
//    mangled_ppc("?GetMaxStateSizeIndRts@XGRAPHICS@@YAIPAU_PS_PROGRAM_KEY@1@@Z");
//};

//unsigned int XGRAPHICS::GetMaxStateSizeImm(struct XGRAPHICS::_PS_PROGRAM_KEY *)
//{
//    mangled_ppc("?GetMaxStateSizeImm@XGRAPHICS@@YAIPAU_PS_PROGRAM_KEY@1@@Z");
//};

//unsigned int XGRAPHICS::GetMaxConstSize(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?GetMaxConstSize@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int XGRAPHICS::GetMaxPreambleConstSize(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?GetMaxPreambleConstSize@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int * XGRAPHICS::OpImLoadImmediate(unsigned int *, enum XGRAPHICS::_E_PP_SHADER_TYPE, struct XGRAPHICS::_CP_SHADERPROGRAM_BLOCK *)
//{
//    mangled_ppc("?OpImLoadImmediate@XGRAPHICS@@YAPAIPAIW4_E_PP_SHADER_TYPE@1@PAU_CP_SHADERPROGRAM_BLOCK@1@@Z");
//};

//unsigned int * XGRAPHICS::OpSetALUConstant(unsigned int *, unsigned int, unsigned int const *)
//{
//    mangled_ppc("?OpSetALUConstant@XGRAPHICS@@YAPAIPAIIPBI@Z");
//};

//unsigned int * XGRAPHICS::OpSetINTConstant(unsigned int *, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?OpSetINTConstant@XGRAPHICS@@YAPAIPAIII0@Z");
//};

//unsigned int * XGRAPHICS::OpSetBOOLConstant(unsigned int *, unsigned int, unsigned int, unsigned int const *)
//{
//    mangled_ppc("?OpSetBOOLConstant@XGRAPHICS@@YAPAIPAIIIPBI@Z");
//};

//unsigned int * XGRAPHICS::OpSetFETCHConstant(unsigned int *, unsigned int, unsigned int const *)
//{
//    mangled_ppc("?OpSetFETCHConstant@XGRAPHICS@@YAPAIPAIIPBI@Z");
//};

//unsigned int * XGRAPHICS::SetOneRegPM4(unsigned int *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetOneRegPM4@XGRAPHICS@@YAPAIPAIII@Z");
//};

//unsigned int * XGRAPHICS::ProcInternalALUConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcInternalALUConstants@XGRAPHICS@@YAPAIPAIPAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int * XGRAPHICS::ProcInternalBoolConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcInternalBoolConstants@XGRAPHICS@@YAPAIPAIPAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int * XGRAPHICS::ProcFetchConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcFetchConstants@XGRAPHICS@@YAPAIPAIPAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int * XGRAPHICS::ProcRegConstants(unsigned int *, struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcRegConstants@XGRAPHICS@@YAPAIPAIPAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::PP_Destroy(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *)
//{
//    mangled_ppc("?PP_Destroy@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufActivateState(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcCmdBufActivateState@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int XGRAPHICS::AS_GetConstDtBit(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int)
//{
//    mangled_ppc("?AS_GetConstDtBit@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufStateInd(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?ProcCmdBufStateInd@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@I@Z");
//};

//void XGRAPHICS::AS_ClrConstDtBit(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int)
//{
//    mangled_ppc("?AS_ClrConstDtBit@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@I@Z");
//};

//void const * XGRAPHICS::AS_GetPFConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetPFConstDataPtr@XGRAPHICS@@YAPBXPAU_ABSTRACT_STATE@1@@Z");
//};

//void const * XGRAPHICS::AS_GetVFConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetVFConstDataPtr@XGRAPHICS@@YAPBXPAU_ABSTRACT_STATE@1@@Z");
//};

//void const * XGRAPHICS::AS_GetPIConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetPIConstDataPtr@XGRAPHICS@@YAPBXPAU_ABSTRACT_STATE@1@@Z");
//};

//void const * XGRAPHICS::AS_GetVIConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetVIConstDataPtr@XGRAPHICS@@YAPBXPAU_ABSTRACT_STATE@1@@Z");
//};

//void const * XGRAPHICS::AS_GetPBConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetPBConstDataPtr@XGRAPHICS@@YAPBXPAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufStateIndRts(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?ProcCmdBufStateIndRts@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@I@Z");
//};

//void const * XGRAPHICS::AS_GetVBConstDataPtr(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetVBConstDataPtr@XGRAPHICS@@YAPBXPAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufStateImm(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?ProcCmdBufStateImm@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcCmdBufNonClientConst(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcCmdBufNonClientConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::PP_ProcessState(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?PP_ProcessState@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@I@Z");
//};

//unsigned int * XGRAPHICS::SetConstBlk(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?SetConstBlk@XGRAPHICS@@YAPAIPAIIII0@Z");
//};

//void XGRAPHICS::PP_SetPreambleConst(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?PP_SetPreambleConst@XGRAPHICS@@YAXPAU_PP_STATE_POSTPROCESSOR@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//void XGRAPHICS::PP_SetPreamble(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?PP_SetPreamble@XGRAPHICS@@YAXPAU_PP_STATE_POSTPROCESSOR@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_PS_PROGRAM_STORE * XGRAPHICS::PP_GetProgramStore(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *)
//{
//    mangled_ppc("?PP_GetProgramStore@XGRAPHICS@@YAPAU_PS_PROGRAM_STORE@1@PAU_PP_STATE_POSTPROCESSOR@1@@Z");
//};

//unsigned int * XGRAPHICS::ProcDirtyALUConstants(unsigned int *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcDirtyALUConstants@XGRAPHICS@@YAPAIPAIPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int * XGRAPHICS::ProcDirtyINTConstants(unsigned int *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcDirtyINTConstants@XGRAPHICS@@YAPAIPAIPAU_ABSTRACT_STATE@1@@Z");
//};

//unsigned int * XGRAPHICS::ProcDirtyBOOLConstants(unsigned int *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?ProcDirtyBOOLConstants@XGRAPHICS@@YAPAIPAIPAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_PP_STATE_POSTPROCESSOR * XGRAPHICS::PP_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SSM_REGISTRY *, struct XGRAPHICS::_PS_PROGRAM_STORE *, struct XGRAPHICS::_TS_TEXTURE_SERVER *, unsigned int)
//{
//    mangled_ppc("?PP_Create@XGRAPHICS@@YAPAU_PP_STATE_POSTPROCESSOR@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_SSM_REGISTRY@1@PAU_PS_PROGRAM_STORE@1@PAU_TS_TEXTURE_SERVER@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::PP_ProcessConsts(struct XGRAPHICS::_PP_STATE_POSTPROCESSOR *, struct XGRAPHICS::_PS_PROGRAM_KEY *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?PP_ProcessConsts@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_PP_STATE_POSTPROCESSOR@1@PAU_PS_PROGRAM_KEY@1@PAU_ABSTRACT_STATE@1@@Z");
//};

