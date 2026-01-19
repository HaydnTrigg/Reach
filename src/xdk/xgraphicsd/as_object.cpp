/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void * XGRAPHICS::AS_AllocMemory(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::AS_FreeMemory(struct XGRAPHICS::_ABSTRACT_STATE *, void *);
// enum XGRAPHICS::_E_AS_CTYPE XGRAPHICS::operator++(enum XGRAPHICS::_E_AS_CTYPE &, int);
// void XGRAPHICS::SSM_BitArraySetMulti(unsigned int *, unsigned int, unsigned int);
// void XGRAPHICS::AS_Delete(struct XGRAPHICS::_ABSTRACT_STATE *);
// enum XGRAPHICS::_E_AS_BLOCK_NAME XGRAPHICS::operator++(enum XGRAPHICS::_E_AS_BLOCK_NAME &, int);
// unsigned int XGRAPHICS::AS_GetConstStateIdx(unsigned int);
// unsigned int XGRAPHICS::AS_GetConstDBIdxRnd(unsigned int, unsigned int, unsigned int);
// unsigned int XGRAPHICS::AS_TstFlags(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int);
// void XGRAPHICS::AS_GetFloatConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, unsigned int *, float *);
// void XGRAPHICS::AS_SetIntConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, int *);
// void XGRAPHICS::AS_GetIntConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, unsigned int *, int *);
// void XGRAPHICS::AS_SetBoolConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, int *);
// void XGRAPHICS::AS_GetBoolConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, unsigned int *, int *);
// void XGRAPHICS::AS_FileDump(struct XGRAPHICS::_ABSTRACT_STATE *, char *);
// void XGRAPHICS::AS_FileDumpFuncGroup(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_BLOCK_NAME, char *);
// struct XGRAPHICS::_ABSTRACT_STATE * XGRAPHICS::AS_Initialize(void *, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::AS_Convert2Uas(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_ABSTRACT_STATE *);
// void XGRAPHICS::AS_SetFloatConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, float *);

//void * XGRAPHICS::AS_AllocMemory(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?AS_AllocMemory@XGRAPHICS@@YAPAXPAU_ABSTRACT_STATE@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::AS_FreeMemory(struct XGRAPHICS::_ABSTRACT_STATE *, void *)
//{
//    mangled_ppc("?AS_FreeMemory@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_ABSTRACT_STATE@1@PAX@Z");
//};

//enum XGRAPHICS::_E_AS_CTYPE XGRAPHICS::operator++(enum XGRAPHICS::_E_AS_CTYPE &, int)
//{
//    mangled_ppc("??EXGRAPHICS@@YA?AW4_E_AS_CTYPE@0@AAW410@H@Z");
//};

//void XGRAPHICS::SSM_BitArraySetMulti(unsigned int *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SSM_BitArraySetMulti@XGRAPHICS@@YAXPAIII@Z");
//};

//void XGRAPHICS::AS_Delete(struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_Delete@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@@Z");
//};

//enum XGRAPHICS::_E_AS_BLOCK_NAME XGRAPHICS::operator++(enum XGRAPHICS::_E_AS_BLOCK_NAME &, int)
//{
//    mangled_ppc("??EXGRAPHICS@@YA?AW4_E_AS_BLOCK_NAME@0@AAW410@H@Z");
//};

//unsigned int XGRAPHICS::AS_GetConstStateIdx(unsigned int)
//{
//    mangled_ppc("?AS_GetConstStateIdx@XGRAPHICS@@YAII@Z");
//};

//unsigned int XGRAPHICS::AS_GetConstDBIdxRnd(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?AS_GetConstDBIdxRnd@XGRAPHICS@@YAIIII@Z");
//};

//unsigned int XGRAPHICS::AS_TstFlags(struct XGRAPHICS::_ABSTRACT_STATE *, unsigned int)
//{
//    mangled_ppc("?AS_TstFlags@XGRAPHICS@@YAIPAU_ABSTRACT_STATE@1@I@Z");
//};

//void XGRAPHICS::AS_GetFloatConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, unsigned int *, float *)
//{
//    mangled_ppc("?AS_GetFloatConstants@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@IIPAIPAM@Z");
//};

//void XGRAPHICS::AS_SetIntConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, int *)
//{
//    mangled_ppc("?AS_SetIntConstants@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@IIPAH@Z");
//};

//void XGRAPHICS::AS_GetIntConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, unsigned int *, int *)
//{
//    mangled_ppc("?AS_GetIntConstants@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@IIPAIPAH@Z");
//};

//void XGRAPHICS::AS_SetBoolConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, int *)
//{
//    mangled_ppc("?AS_SetBoolConstants@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@IIPAH@Z");
//};

//void XGRAPHICS::AS_GetBoolConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, unsigned int *, int *)
//{
//    mangled_ppc("?AS_GetBoolConstants@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@IIPAIPAH@Z");
//};

//void XGRAPHICS::AS_FileDump(struct XGRAPHICS::_ABSTRACT_STATE *, char *)
//{
//    mangled_ppc("?AS_FileDump@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@PAD@Z");
//};

//void XGRAPHICS::AS_FileDumpFuncGroup(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_BLOCK_NAME, char *)
//{
//    mangled_ppc("?AS_FileDumpFuncGroup@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_BLOCK_NAME@1@PAD@Z");
//};

//struct XGRAPHICS::_ABSTRACT_STATE * XGRAPHICS::AS_Initialize(void *, unsigned int)
//{
//    mangled_ppc("?AS_Initialize@XGRAPHICS@@YAPAU_ABSTRACT_STATE@1@PAXI@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::AS_Convert2Uas(struct XGRAPHICS::_ABSTRACT_STATE *, struct XGRAPHICS::_ABSTRACT_STATE *)
//{
//    mangled_ppc("?AS_Convert2Uas@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_ABSTRACT_STATE@1@0@Z");
//};

//void XGRAPHICS::AS_SetFloatConstants(struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::_E_AS_CTYPE, unsigned int, unsigned int, float *)
//{
//    mangled_ppc("?AS_SetFloatConstants@XGRAPHICS@@YAXPAU_ABSTRACT_STATE@1@W4_E_AS_CTYPE@1@IIPAM@Z");
//};

