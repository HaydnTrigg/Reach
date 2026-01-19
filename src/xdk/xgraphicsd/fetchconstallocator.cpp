/* ---------- headers */

#include "xdk\xgraphicsd\fetchconstallocator.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct XGRAPHICS::_FA_FETCHCONST_ALLOC * XGRAPHICS::FA_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SSM_REGISTRY *, enum XGRAPHICS::E_FA_FETCH_ALLOCATOR_MODE, unsigned int);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::FA_MergeCreate(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_FA_FETCHCONST_ALLOC **);
// void XGRAPHICS::FA_Destroy(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *);
// enum XGRAPHICS::E_FA_FETCH_ALLOCATOR_MODE XGRAPHICS::FA_GetMode(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *);
// unsigned int XGRAPHICS::FA_GetNumAllocatedConsts(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::FA_AllocFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// unsigned int XGRAPHICS::FindVertexFetchConstUsingDecl(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// unsigned int XGRAPHICS::FindTextureFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// struct XGRAPHICS::_FA_FETCHUSAGE_BLOCK * XGRAPHICS::FA_GetFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, unsigned int);
// unsigned int XGRAPHICS::FindVertexFetchConstUsingStream(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// unsigned int XGRAPHICS::FA_FindFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);
// enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::FA_FindOrAllocFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *);

//struct XGRAPHICS::_FA_FETCHCONST_ALLOC * XGRAPHICS::FA_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_SSM_REGISTRY *, enum XGRAPHICS::E_FA_FETCH_ALLOCATOR_MODE, unsigned int)
//{
//    mangled_ppc("?FA_Create@XGRAPHICS@@YAPAU_FA_FETCHCONST_ALLOC@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_SSM_REGISTRY@1@W4E_FA_FETCH_ALLOCATOR_MODE@1@I@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::FA_MergeCreate(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_FA_FETCHCONST_ALLOC **)
//{
//    mangled_ppc("?FA_MergeCreate@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_FA_FETCHCONST_ALLOC@1@0PAPAU31@@Z");
//};

//void XGRAPHICS::FA_Destroy(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *)
//{
//    mangled_ppc("?FA_Destroy@XGRAPHICS@@YAXPAU_FA_FETCHCONST_ALLOC@1@@Z");
//};

//enum XGRAPHICS::E_FA_FETCH_ALLOCATOR_MODE XGRAPHICS::FA_GetMode(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *)
//{
//    mangled_ppc("?FA_GetMode@XGRAPHICS@@YA?AW4E_FA_FETCH_ALLOCATOR_MODE@1@PAU_FA_FETCHCONST_ALLOC@1@@Z");
//};

//unsigned int XGRAPHICS::FA_GetNumAllocatedConsts(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *)
//{
//    mangled_ppc("?FA_GetNumAllocatedConsts@XGRAPHICS@@YAIPAU_FA_FETCHCONST_ALLOC@1@@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::FA_AllocFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FA_AllocFetchConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_FA_FETCHCONST_ALLOC@1@W4E_FETCH_TYPE@1@IPAI2@Z");
//};

//unsigned int XGRAPHICS::FindVertexFetchConstUsingDecl(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindVertexFetchConstUsingDecl@XGRAPHICS@@YAIPAU_FA_FETCHCONST_ALLOC@1@W4E_FETCH_TYPE@1@IPAI2@Z");
//};

//unsigned int XGRAPHICS::FindTextureFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindTextureFetchConst@XGRAPHICS@@YAIPAU_FA_FETCHCONST_ALLOC@1@W4E_FETCH_TYPE@1@IPAI2@Z");
//};

//struct XGRAPHICS::_FA_FETCHUSAGE_BLOCK * XGRAPHICS::FA_GetFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, unsigned int)
//{
//    mangled_ppc("?FA_GetFetchConst@XGRAPHICS@@YAPAU_FA_FETCHUSAGE_BLOCK@1@PAU_FA_FETCHCONST_ALLOC@1@I@Z");
//};

//unsigned int XGRAPHICS::FindVertexFetchConstUsingStream(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindVertexFetchConstUsingStream@XGRAPHICS@@YAIPAU_FA_FETCHCONST_ALLOC@1@PAU_ABSTRACT_STATE@1@W4E_FETCH_TYPE@1@IPAI3@Z");
//};

//unsigned int XGRAPHICS::FA_FindFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FA_FindFetchConst@XGRAPHICS@@YAIPAU_FA_FETCHCONST_ALLOC@1@PAU_ABSTRACT_STATE@1@W4E_FETCH_TYPE@1@IPAI3@Z");
//};

//enum XGRAPHICS::_E_SSM_RETURNCODE XGRAPHICS::FA_FindOrAllocFetchConst(struct XGRAPHICS::_FA_FETCHCONST_ALLOC *, struct XGRAPHICS::_ABSTRACT_STATE *, enum XGRAPHICS::E_FETCH_TYPE, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FA_FindOrAllocFetchConst@XGRAPHICS@@YA?AW4_E_SSM_RETURNCODE@1@PAU_FA_FETCHCONST_ALLOC@1@PAU_ABSTRACT_STATE@1@W4E_FETCH_TYPE@1@IPAI3@Z");
//};

