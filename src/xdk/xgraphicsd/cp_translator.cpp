/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void XGRAPHICS::SSM_BitArrayClrMulti(unsigned int *, unsigned int, unsigned int);
// void XGRAPHICS::AS_GetState(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE, union XGRAPHICS::__AS_STATEVALUE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcessInternalBoolConstants(struct XGRAPHICS::_IA_INTERNALCONST_BLOCK_HEADER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_TRANSLATED_BOOL_CONSTANTS *);
// unsigned int XGRAPHICS::AS_GetStateBlk(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE);
// void XGRAPHICS::AS_ClrMultipleStateBlkDtBit(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int);
// void * XGRAPHICS::AS_GetCPDataHandle(struct XGRAPHICS::_ABSTRACT_STATE *);
// void XGRAPHICS::TranslateVertexFetch(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *);
// void XGRAPHICS::TranslateVertexFetch_EdgeFlag(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *);
// void XGRAPHICS::CP_TranslateClearDirtyBits(struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_CP_TRANSLATED_ALU_CONSTANTS * XGRAPHICS::CP_GetTranslateALU(struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_CP_TRANSLATED_BOOL_CONSTANTS * XGRAPHICS::CP_GetTranslateBool(struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_CP_FETCHCONST_BLOCK * XGRAPHICS::CP_GetTranslateFetch(struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_R400_RS_BLK_C * XGRAPHICS::CP_GetTranslateReg(struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcessInternalALUConstants(struct XGRAPHICS::_IA_INTERNALCONST_BLOCK_HEADER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_TRANSLATED_ALU_CONSTANTS *, enum XGRAPHICS::IL_Shader_Type);
// struct XGRAPHICS::_CP_TRANSLATED_ALU_CONSTANTS const * XGRAPHICS::CP_TranslateInternalALUConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_CP_TRANSLATED_BOOL_CONSTANTS const * XGRAPHICS::CP_TranslateInternalBoolConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// void XGRAPHICS::TranslateTextureFetch(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *);
// void XGRAPHICS::DispatchFetchConstant(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_FA_FETCHUSAGE_BLOCK *, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *);
// struct XGRAPHICS::_CP_FETCHCONST_BLOCK const * XGRAPHICS::CP_TranslateFetchConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);
// struct XGRAPHICS::_R400_RS_BLK_C const * XGRAPHICS::CP_TranslateRegConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *);

//void XGRAPHICS::SSM_BitArrayClrMulti(unsigned int *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SSM_BitArrayClrMulti@XGRAPHICS@@YAXPAIII@Z");
//};

//void XGRAPHICS::AS_GetState(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE, union XGRAPHICS::__AS_STATEVALUE *)
//{
//    mangled_ppc("?AS_GetState@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_STATE@1@PAT__AS_STATEVALUE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcessInternalBoolConstants(struct XGRAPHICS::_IA_INTERNALCONST_BLOCK_HEADER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_TRANSLATED_BOOL_CONSTANTS *)
//{
//    mangled_ppc("?ProcessInternalBoolConstants@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_IA_INTERNALCONST_BLOCK_HEADER@1@PAU_ABSTRACT_STATE@1@PAU_CP_TRANSLATED_BOOL_CONSTANTS@1@@Z");
//};

//unsigned int XGRAPHICS::AS_GetStateBlk(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_STATE)
//{
//    mangled_ppc("?AS_GetStateBlk@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@W4_E_AS_STATE@1@@Z");
//};

//void XGRAPHICS::AS_ClrMultipleStateBlkDtBit(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int)
//{
//    mangled_ppc("?AS_ClrMultipleStateBlkDtBit@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@II@Z");
//};

//void * XGRAPHICS::AS_GetCPDataHandle(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_GetCPDataHandle@XGRAPHICS@@YAPAXPAU_ABSTRACT_STATE@1@@Z");
//};

//void XGRAPHICS::TranslateVertexFetch(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *)
//{
//    mangled_ppc("?TranslateVertexFetch@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@IIIPAU_CP_FETCHCONST_BLOCK@1@@Z");
//};

//void XGRAPHICS::TranslateVertexFetch_EdgeFlag(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *)
//{
//    mangled_ppc("?TranslateVertexFetch_EdgeFlag@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@IIPAU_CP_FETCHCONST_BLOCK@1@@Z");
//};

//void XGRAPHICS::CP_TranslateClearDirtyBits(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_TranslateClearDirtyBits@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_CP_TRANSLATED_ALU_CONSTANTS * XGRAPHICS::CP_GetTranslateALU(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_GetTranslateALU@XGRAPHICS@@YAPAU_CP_TRANSLATED_ALU_CONSTANTS@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_CP_TRANSLATED_BOOL_CONSTANTS * XGRAPHICS::CP_GetTranslateBool(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_GetTranslateBool@XGRAPHICS@@YAPAU_CP_TRANSLATED_BOOL_CONSTANTS@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_CP_FETCHCONST_BLOCK * XGRAPHICS::CP_GetTranslateFetch(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_GetTranslateFetch@XGRAPHICS@@YAPAU_CP_FETCHCONST_BLOCK@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_R400_RS_BLK_C * XGRAPHICS::CP_GetTranslateReg(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_GetTranslateReg@XGRAPHICS@@YAPAU_R400_RS_BLK_C@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::ProcessInternalALUConstants(struct XGRAPHICS::_IA_INTERNALCONST_BLOCK_HEADER *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_CP_TRANSLATED_ALU_CONSTANTS *, enum XGRAPHICS::IL_Shader_Type)
//{
//    mangled_ppc("?ProcessInternalALUConstants@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_IA_INTERNALCONST_BLOCK_HEADER@1@PAU_ABSTRACT_STATE@1@PAU_CP_TRANSLATED_ALU_CONSTANTS@1@W4IL_Shader_Type@1@@Z");
//};

//struct XGRAPHICS::_CP_TRANSLATED_ALU_CONSTANTS const * XGRAPHICS::CP_TranslateInternalALUConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_TranslateInternalALUConstants@XGRAPHICS@@YAPBU_CP_TRANSLATED_ALU_CONSTANTS@1@PAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_CP_TRANSLATED_BOOL_CONSTANTS const * XGRAPHICS::CP_TranslateInternalBoolConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_TranslateInternalBoolConstants@XGRAPHICS@@YAPBU_CP_TRANSLATED_BOOL_CONSTANTS@1@PAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//void XGRAPHICS::TranslateTextureFetch(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *)
//{
//    mangled_ppc("?TranslateTextureFetch@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@IIPAU_CP_FETCHCONST_BLOCK@1@@Z");
//};

//void XGRAPHICS::DispatchFetchConstant(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_FA_FETCHUSAGE_BLOCK *, unsigned int, struct XGRAPHICS::_CP_FETCHCONST_BLOCK *)
//{
//    mangled_ppc("?DispatchFetchConstant@XGRAPHICS@@YAXPAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@PAU_FA_FETCHUSAGE_BLOCK@1@IPAU_CP_FETCHCONST_BLOCK@1@@Z");
//};

//struct XGRAPHICS::_CP_FETCHCONST_BLOCK const * XGRAPHICS::CP_TranslateFetchConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_TranslateFetchConstants@XGRAPHICS@@YAPBU_CP_FETCHCONST_BLOCK@1@PAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

//struct XGRAPHICS::_R400_RS_BLK_C const * XGRAPHICS::CP_TranslateRegConstants(struct XGRAPHICS::_CP_COMPILED_PROGRAM *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?CP_TranslateRegConstants@XGRAPHICS@@YAPBU_R400_RS_BLK_C@1@PAU_CP_COMPILED_PROGRAM@1@PAU_ABSTRACT_STATE@1@@Z");
//};

