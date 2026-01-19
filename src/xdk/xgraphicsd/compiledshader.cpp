/* ---------- headers */

#include "xdk\xgraphicsd\compiledshader.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct XGRAPHICS::_CS_COMPILED_SHADER * XGRAPHICS::CS_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SSM_REGISTRY *, struct XGRAPHICS::_ORDERED_LIST_FACTORY *, struct XGRAPHICS::_INTEGER_LIST_FACTORY *, struct XGRAPHICS::_OBJECT_LIST_FACTORY *, unsigned int);
// void XGRAPHICS::CS_Destroy(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// void XGRAPHICS::CS_AddRef(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// unsigned int XGRAPHICS::CS_IsValid(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// void XGRAPHICS::CS_SetShaderType(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::IL_Shader_Type);
// unsigned int XGRAPHICS::CS_GetShaderType(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::IL_Shader_Type *);
// unsigned int XGRAPHICS::AS_GetStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE);
// void XGRAPHICS::CS_SetShaderHandle(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int);
// unsigned int XGRAPHICS::CS_GetShaderHandle(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// void XGRAPHICS::CS_SetInternalConstantAllocator(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_IA_INTERNALCONST_ALLOCATOR *);
// struct XGRAPHICS::_IA_INTERNALCONST_ALLOCATOR * XGRAPHICS::CS_GetInternalConstantAllocator(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetCode(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, void *);
// struct XGRAPHICS::_CP_SHADERPROGRAM_BLOCK * XGRAPHICS::CS_GetCode(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// unsigned int XGRAPHICS::AS_GetArrayStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int);
// void XGRAPHICS::CS_SetInterpolatorUsage(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::_E_INTERP_CHANNEL, enum XGRAPHICS::_E_INTERP_USAGE, unsigned int, enum XGRAPHICS::_E_INTERP_CHANNEL, unsigned int);
// void XGRAPHICS::CS_SetInterpolatorSampling(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::_E_INTERP_SAMPLING);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_GetInterpUsage(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, struct XGRAPHICS::_CS_INTERP_USAGE *);
// struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::CS_GetPatchDescriptionList(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetGroupedFetchPatchDescription(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, struct XGRAPHICS::_CS_VERTEX_INPUT_PATCH *);
// struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::CS_GetGroupedFetchPatchDescription(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetR400State(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::_E_R400_STATE, unsigned int);
// struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::CS_GetR400StateList(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetRequiredRenderState(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::E_SSM_COMPILEWITH_QUERY, unsigned int, enum XGRAPHICS::_SSM_COMPILEWITH_RESULT);
// enum XGRAPHICS::_E_INTERP_CHANNEL XGRAPHICS::operator++(enum XGRAPHICS::_E_INTERP_CHANNEL &, int);
// unsigned int XGRAPHICS::GetPatchDescrSize(struct XGRAPHICS::_CS_GENERIC_PATCH_DESCRIPTION *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetRequiredAbstractState(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::_E_AS_STATE, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetRequiredArrayState(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int, unsigned int);
// struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::CS_GetRequiredRenderStateList(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// unsigned int XGRAPHICS::ValidateQueryState(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_REQUIRED_RENDERSTATE *);
// unsigned int XGRAPHICS::ValidateAbstractState(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_REQUIRED_RENDERSTATE *);
// unsigned int XGRAPHICS::ValidateArrayState(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_REQUIRED_RENDERSTATE *);
// unsigned int XGRAPHICS::CS_ValidateRenderstate(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocFetchConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// unsigned int XGRAPHICS::CS_FindFetchConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_FindOrAllocFetchConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// struct XGRAPHICS::_FA_FETCHCONST_ALLOC * XGRAPHICS::CS_GetFetchConstAlloc(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocStaticScalarConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::E_IA_FLOAT_CHANNEL, float);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocQueryScalarConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::E_IA_FLOAT_CHANNEL, enum XGRAPHICS::E_SSM_COMPILEGET_QUERY, int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocExportConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocQueryBoolConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::E_SSM_COMPILEWITH_QUERY, unsigned int);
// struct XGRAPHICS::_IA_INTERNALCONST_BLOCK_HEADER * XGRAPHICS::CS_GetInternalConstBlock(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetWildcardMetaData(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::E_SSM_COMPILEWITH_QUERY);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_PostCompile(struct XGRAPHICS::_CS_COMPILED_SHADER *);
// void XGRAPHICS::CS_SetInterpUsage(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::_E_INTERP_USAGE, unsigned int, union XGRAPHICS::_CS_COMPONENT_SEL, enum XGRAPHICS::_E_INTERP_SAMPLING, int, int *, int *, int *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetPatchDescription(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_CS_GENERIC_PATCH_DESCRIPTION *);

//struct XGRAPHICS::_CS_COMPILED_SHADER * XGRAPHICS::CS_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SSM_REGISTRY *, struct XGRAPHICS::_ORDERED_LIST_FACTORY *, struct XGRAPHICS::_INTEGER_LIST_FACTORY *, struct XGRAPHICS::_OBJECT_LIST_FACTORY *, unsigned int)
//{
//    mangled_ppc("?CS_Create@XGRAPHICS@@YAPAU_CS_COMPILED_SHADER@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_SSM_REGISTRY@1@PAU_ORDERED_LIST_FACTORY@1@PAU_INTEGER_LIST_FACTORY@1@PAU_OBJECT_LIST_FACTORY@1@I@Z");
//};

//void XGRAPHICS::CS_Destroy(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_Destroy@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@@Z");
//};

//void XGRAPHICS::CS_AddRef(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_AddRef@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@@Z");
//};

//unsigned int XGRAPHICS::CS_IsValid(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_IsValid@XGRAPHICS@@YAIPAU_CS_COMPILED_SHADER@1@@Z");
//};

//void XGRAPHICS::CS_SetShaderType(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::IL_Shader_Type)
//{
//    mangled_ppc("?CS_SetShaderType@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@W4IL_Shader_Type@1@@Z");
//};

//unsigned int XGRAPHICS::CS_GetShaderType(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::IL_Shader_Type *)
//{
//    mangled_ppc("?CS_GetShaderType@XGRAPHICS@@YAIPAU_CS_COMPILED_SHADER@1@PAW4IL_Shader_Type@1@@Z");
//};

//unsigned int XGRAPHICS::AS_GetStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE)
//{
//    mangled_ppc("?AS_GetStateI@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@W4_E_AS_STATE@1@@Z");
//};

//void XGRAPHICS::CS_SetShaderHandle(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int)
//{
//    mangled_ppc("?CS_SetShaderHandle@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@I@Z");
//};

//unsigned int XGRAPHICS::CS_GetShaderHandle(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetShaderHandle@XGRAPHICS@@YAIPAU_CS_COMPILED_SHADER@1@@Z");
//};

//void XGRAPHICS::CS_SetInternalConstantAllocator(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_IA_INTERNALCONST_ALLOCATOR *)
//{
//    mangled_ppc("?CS_SetInternalConstantAllocator@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@PAU_IA_INTERNALCONST_ALLOCATOR@1@@Z");
//};

//struct XGRAPHICS::_IA_INTERNALCONST_ALLOCATOR * XGRAPHICS::CS_GetInternalConstantAllocator(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetInternalConstantAllocator@XGRAPHICS@@YAPAU_IA_INTERNALCONST_ALLOCATOR@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetCode(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, void *)
//{
//    mangled_ppc("?CS_SetCode@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@IPAX@Z");
//};

//struct XGRAPHICS::_CP_SHADERPROGRAM_BLOCK * XGRAPHICS::CS_GetCode(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetCode@XGRAPHICS@@YAPAU_CP_SHADERPROGRAM_BLOCK@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//unsigned int XGRAPHICS::AS_GetArrayStateI(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int)
//{
//    mangled_ppc("?AS_GetArrayStateI@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@W4_E_AS_ARRAY_STATE@1@I@Z");
//};

//void XGRAPHICS::CS_SetInterpolatorUsage(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::_E_INTERP_CHANNEL, enum XGRAPHICS::_E_INTERP_USAGE, unsigned int, enum XGRAPHICS::_E_INTERP_CHANNEL, unsigned int)
//{
//    mangled_ppc("?CS_SetInterpolatorUsage@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@IW4_E_INTERP_CHANNEL@1@W4_E_INTERP_USAGE@1@I1I@Z");
//};

//void XGRAPHICS::CS_SetInterpolatorSampling(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::_E_INTERP_SAMPLING)
//{
//    mangled_ppc("?CS_SetInterpolatorSampling@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@IW4_E_INTERP_SAMPLING@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_GetInterpUsage(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, struct XGRAPHICS::_CS_INTERP_USAGE *)
//{
//    mangled_ppc("?CS_GetInterpUsage@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@IPAU_CS_INTERP_USAGE@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::CS_GetPatchDescriptionList(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetPatchDescriptionList@XGRAPHICS@@YAPAU_OBJECT_LIST@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetGroupedFetchPatchDescription(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, struct XGRAPHICS::_CS_VERTEX_INPUT_PATCH *)
//{
//    mangled_ppc("?CS_SetGroupedFetchPatchDescription@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@IPAU_CS_VERTEX_INPUT_PATCH@1@@Z");
//};

//struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::CS_GetGroupedFetchPatchDescription(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int)
//{
//    mangled_ppc("?CS_GetGroupedFetchPatchDescription@XGRAPHICS@@YAPAU_READONLY_LIST@1@PAU_CS_COMPILED_SHADER@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetR400State(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::_E_R400_STATE, unsigned int)
//{
//    mangled_ppc("?CS_SetR400State@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@W4_E_R400_STATE@1@I@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::CS_GetR400StateList(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetR400StateList@XGRAPHICS@@YAPAU_OBJECT_LIST@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetRequiredRenderState(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::E_SSM_COMPILEWITH_QUERY, unsigned int, enum XGRAPHICS::_SSM_COMPILEWITH_RESULT)
//{
//    mangled_ppc("?CS_SetRequiredRenderState@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@W4E_SSM_COMPILEWITH_QUERY@1@IW4_SSM_COMPILEWITH_RESULT@1@@Z");
//};

//enum XGRAPHICS::_E_INTERP_CHANNEL XGRAPHICS::operator++(enum XGRAPHICS::_E_INTERP_CHANNEL &, int)
//{
//    mangled_ppc("??EXGRAPHICS@@YA?AW4_E_INTERP_CHANNEL@0@AAW410@H@Z");
//};

//unsigned int XGRAPHICS::GetPatchDescrSize(struct XGRAPHICS::_CS_GENERIC_PATCH_DESCRIPTION *)
//{
//    mangled_ppc("?GetPatchDescrSize@XGRAPHICS@@YAIPAU_CS_GENERIC_PATCH_DESCRIPTION@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetRequiredAbstractState(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::_E_AS_STATE, unsigned int)
//{
//    mangled_ppc("?CS_SetRequiredAbstractState@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@W4_E_AS_STATE@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetRequiredArrayState(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::_E_AS_ARRAY_STATE, unsigned int, unsigned int)
//{
//    mangled_ppc("?CS_SetRequiredArrayState@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@W4_E_AS_ARRAY_STATE@1@II@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::CS_GetRequiredRenderStateList(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetRequiredRenderStateList@XGRAPHICS@@YAPAU_OBJECT_LIST@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//unsigned int XGRAPHICS::ValidateQueryState(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_REQUIRED_RENDERSTATE *)
//{
//    mangled_ppc("?ValidateQueryState@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@PAU_CS_REQUIRED_RENDERSTATE@1@@Z");
//};

//unsigned int XGRAPHICS::ValidateAbstractState(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_REQUIRED_RENDERSTATE *)
//{
//    mangled_ppc("?ValidateAbstractState@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@PAU_CS_REQUIRED_RENDERSTATE@1@@Z");
//};

//unsigned int XGRAPHICS::ValidateArrayState(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CS_REQUIRED_RENDERSTATE *)
//{
//    mangled_ppc("?ValidateArrayState@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@PAU_CS_REQUIRED_RENDERSTATE@1@@Z");
//};

//unsigned int XGRAPHICS::CS_ValidateRenderstate(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CS_ValidateRenderstate@XGRAPHICS@@YAIPAU_CS_COMPILED_SHADER@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocFetchConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?CS_AllocFetchConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@W4E_FETCH_TYPE@1@IPAI2@Z");
//};

//unsigned int XGRAPHICS::CS_FindFetchConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?CS_FindFetchConst@XGRAPHICS@@YAIPAU_CS_COMPILED_SHADER@1@PAU_ABSTRACT_STATE@1@W4E_FETCH_TYPE@1@IPAI3@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_FindOrAllocFetchConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?CS_FindOrAllocFetchConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@PAU_ABSTRACT_STATE@1@W4E_FETCH_TYPE@1@IPAI3@Z");
//};

//struct XGRAPHICS::_FA_FETCHCONST_ALLOC * XGRAPHICS::CS_GetFetchConstAlloc(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetFetchConstAlloc@XGRAPHICS@@YAPAU_FA_FETCHCONST_ALLOC@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocStaticScalarConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::E_IA_FLOAT_CHANNEL, float)
//{
//    mangled_ppc("?CS_AllocStaticScalarConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@IW4E_IA_FLOAT_CHANNEL@1@M@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocQueryScalarConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::E_IA_FLOAT_CHANNEL, enum XGRAPHICS::E_SSM_COMPILEGET_QUERY, int)
//{
//    mangled_ppc("?CS_AllocQueryScalarConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@IW4E_IA_FLOAT_CHANNEL@1@W4E_SSM_COMPILEGET_QUERY@1@H@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocExportConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CS_AllocExportConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@II@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_AllocQueryBoolConst(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::E_SSM_COMPILEWITH_QUERY, unsigned int)
//{
//    mangled_ppc("?CS_AllocQueryBoolConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@IW4E_SSM_COMPILEWITH_QUERY@1@I@Z");
//};

//struct XGRAPHICS::_IA_INTERNALCONST_BLOCK_HEADER * XGRAPHICS::CS_GetInternalConstBlock(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_GetInternalConstBlock@XGRAPHICS@@YAPAU_IA_INTERNALCONST_BLOCK_HEADER@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetWildcardMetaData(struct XGRAPHICS::_CS_COMPILED_SHADER *, enum XGRAPHICS::E_SSM_COMPILEWITH_QUERY)
//{
//    mangled_ppc("?CS_SetWildcardMetaData@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@W4E_SSM_COMPILEWITH_QUERY@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_PostCompile(struct XGRAPHICS::_CS_COMPILED_SHADER *)
//{
//    mangled_ppc("?CS_PostCompile@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@@Z");
//};

//void XGRAPHICS::CS_SetInterpUsage(struct XGRAPHICS::_CS_COMPILED_SHADER *, unsigned int, enum XGRAPHICS::_E_INTERP_USAGE, unsigned int, union XGRAPHICS::_CS_COMPONENT_SEL, enum XGRAPHICS::_E_INTERP_SAMPLING, int, int *, int *, int *)
//{
//    mangled_ppc("?CS_SetInterpUsage@XGRAPHICS@@YAXPAU_CS_COMPILED_SHADER@1@IW4_E_INTERP_USAGE@1@IT_CS_COMPONENT_SEL@1@W4_E_INTERP_SAMPLING@1@HPAH44@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::CS_SetPatchDescription(struct XGRAPHICS::_CS_COMPILED_SHADER *, struct XGRAPHICS::_CS_GENERIC_PATCH_DESCRIPTION *)
//{
//    mangled_ppc("?CS_SetPatchDescription@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_CS_COMPILED_SHADER@1@PAU_CS_GENERIC_PATCH_DESCRIPTION@1@@Z");
//};

