/* ---------- headers */

#include "xdk\xgraphicsd\hashtable.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct XGRAPHICS::_HASH_TABLE * XGRAPHICS::HASHTABLE_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_ORDERED_LIST_FACTORY *, unsigned int);
// void XGRAPHICS::HASHTABLE_Destroy(struct XGRAPHICS::_HASH_TABLE *);
// void XGRAPHICS::HASHTABLE_InsertItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int, void *);
// struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::HASHTABLE_GetItems(struct XGRAPHICS::_HASH_TABLE *, unsigned int);
// void * XGRAPHICS::HASHTABLE_GetSingleItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int);
// void * XGRAPHICS::HASHTABLE_RemoveItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int);
// unsigned int XGRAPHICS::HASHTABLE_GetNumTableEntries(struct XGRAPHICS::_HASH_TABLE *);
// unsigned int XGRAPHICS::HASHTABLE_GetNumBinEntries(struct XGRAPHICS::_HASH_TABLE *, unsigned int);
// void * XGRAPHICS::HASHTABLE_RemoveAnyItem(struct XGRAPHICS::_HASH_TABLE *);
// struct XGRAPHICS::_HASH_TABLE * XGRAPHICS::SHASHTABLE_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_ORDERED_LIST_FACTORY *, unsigned int);
// void XGRAPHICS::SHASHTABLE_Destroy(struct XGRAPHICS::_HASH_TABLE *);
// void XGRAPHICS::SHASHTABLE_InsertItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int, void *);
// struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::SHASHTABLE_GetItems(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int);
// void * XGRAPHICS::SHASHTABLE_GetSingleItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int);
// void * XGRAPHICS::SHASHTABLE_RemoveItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int);
// unsigned int XGRAPHICS::SHASHTABLE_GetNumTableEntries(struct XGRAPHICS::_HASH_TABLE *);
// unsigned int XGRAPHICS::SHASHTABLE_GetNumBinEntries(struct XGRAPHICS::_HASH_TABLE *, unsigned int);
// void * XGRAPHICS::SHASHTABLE_RemoveAnyItem(struct XGRAPHICS::_HASH_TABLE *);

//struct XGRAPHICS::_HASH_TABLE * XGRAPHICS::HASHTABLE_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_ORDERED_LIST_FACTORY *, unsigned int)
//{
//    mangled_ppc("?HASHTABLE_Create@XGRAPHICS@@YAPAU_HASH_TABLE@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_ORDERED_LIST_FACTORY@1@I@Z");
//};

//void XGRAPHICS::HASHTABLE_Destroy(struct XGRAPHICS::_HASH_TABLE *)
//{
//    mangled_ppc("?HASHTABLE_Destroy@XGRAPHICS@@YAXPAU_HASH_TABLE@1@@Z");
//};

//void XGRAPHICS::HASHTABLE_InsertItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int, void *)
//{
//    mangled_ppc("?HASHTABLE_InsertItem@XGRAPHICS@@YAXPAU_HASH_TABLE@1@IPAX@Z");
//};

//struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::HASHTABLE_GetItems(struct XGRAPHICS::_HASH_TABLE *, unsigned int)
//{
//    mangled_ppc("?HASHTABLE_GetItems@XGRAPHICS@@YAPAU_READONLY_LIST@1@PAU_HASH_TABLE@1@I@Z");
//};

//void * XGRAPHICS::HASHTABLE_GetSingleItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int)
//{
//    mangled_ppc("?HASHTABLE_GetSingleItem@XGRAPHICS@@YAPAXPAU_HASH_TABLE@1@I@Z");
//};

//void * XGRAPHICS::HASHTABLE_RemoveItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int)
//{
//    mangled_ppc("?HASHTABLE_RemoveItem@XGRAPHICS@@YAPAXPAU_HASH_TABLE@1@I@Z");
//};

//unsigned int XGRAPHICS::HASHTABLE_GetNumTableEntries(struct XGRAPHICS::_HASH_TABLE *)
//{
//    mangled_ppc("?HASHTABLE_GetNumTableEntries@XGRAPHICS@@YAIPAU_HASH_TABLE@1@@Z");
//};

//unsigned int XGRAPHICS::HASHTABLE_GetNumBinEntries(struct XGRAPHICS::_HASH_TABLE *, unsigned int)
//{
//    mangled_ppc("?HASHTABLE_GetNumBinEntries@XGRAPHICS@@YAIPAU_HASH_TABLE@1@I@Z");
//};

//void * XGRAPHICS::HASHTABLE_RemoveAnyItem(struct XGRAPHICS::_HASH_TABLE *)
//{
//    mangled_ppc("?HASHTABLE_RemoveAnyItem@XGRAPHICS@@YAPAXPAU_HASH_TABLE@1@@Z");
//};

//struct XGRAPHICS::_HASH_TABLE * XGRAPHICS::SHASHTABLE_Create(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_ORDERED_LIST_FACTORY *, unsigned int)
//{
//    mangled_ppc("?SHASHTABLE_Create@XGRAPHICS@@YAPAU_HASH_TABLE@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_ORDERED_LIST_FACTORY@1@I@Z");
//};

//void XGRAPHICS::SHASHTABLE_Destroy(struct XGRAPHICS::_HASH_TABLE *)
//{
//    mangled_ppc("?SHASHTABLE_Destroy@XGRAPHICS@@YAXPAU_HASH_TABLE@1@@Z");
//};

//void XGRAPHICS::SHASHTABLE_InsertItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int, void *)
//{
//    mangled_ppc("?SHASHTABLE_InsertItem@XGRAPHICS@@YAXPAU_HASH_TABLE@1@QAIIPAX@Z");
//};

//struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::SHASHTABLE_GetItems(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int)
//{
//    mangled_ppc("?SHASHTABLE_GetItems@XGRAPHICS@@YAPAU_READONLY_LIST@1@PAU_HASH_TABLE@1@QAII@Z");
//};

//void * XGRAPHICS::SHASHTABLE_GetSingleItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int)
//{
//    mangled_ppc("?SHASHTABLE_GetSingleItem@XGRAPHICS@@YAPAXPAU_HASH_TABLE@1@QAII@Z");
//};

//void * XGRAPHICS::SHASHTABLE_RemoveItem(struct XGRAPHICS::_HASH_TABLE *, unsigned int *const, unsigned int)
//{
//    mangled_ppc("?SHASHTABLE_RemoveItem@XGRAPHICS@@YAPAXPAU_HASH_TABLE@1@QAII@Z");
//};

//unsigned int XGRAPHICS::SHASHTABLE_GetNumTableEntries(struct XGRAPHICS::_HASH_TABLE *)
//{
//    mangled_ppc("?SHASHTABLE_GetNumTableEntries@XGRAPHICS@@YAIPAU_HASH_TABLE@1@@Z");
//};

//unsigned int XGRAPHICS::SHASHTABLE_GetNumBinEntries(struct XGRAPHICS::_HASH_TABLE *, unsigned int)
//{
//    mangled_ppc("?SHASHTABLE_GetNumBinEntries@XGRAPHICS@@YAIPAU_HASH_TABLE@1@I@Z");
//};

//void * XGRAPHICS::SHASHTABLE_RemoveAnyItem(struct XGRAPHICS::_HASH_TABLE *)
//{
//    mangled_ppc("?SHASHTABLE_RemoveAnyItem@XGRAPHICS@@YAPAXPAU_HASH_TABLE@1@@Z");
//};

