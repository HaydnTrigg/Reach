/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void * XGRAPHICS::LST_CreateItem(struct XGRAPHICS::_MEM_HEAD *);
// void XGRAPHICS::LST_InsertAfterItem(struct XGRAPHICS::_LIST_PRIM_ITEM *, struct XGRAPHICS::_LIST_PRIM_ITEM *);
// void XGRAPHICS::LST_InsertBeforeItem(struct XGRAPHICS::_LIST_PRIM_ITEM *, struct XGRAPHICS::_LIST_PRIM_ITEM *);
// void XGRAPHICS::LST_MoveAfterItem(struct XGRAPHICS::_LIST_PRIM_ITEM *, struct XGRAPHICS::_LIST_PRIM_ITEM *);
// struct XGRAPHICS::_LIST_PRIM_ITEM * XGRAPHICS::LST_RemoveItem(struct XGRAPHICS::_LIST_PRIM_ITEM *);
// void XGRAPHICS::LST_DestroyItem(struct XGRAPHICS::_LIST_PRIM_ITEM *);
// struct XGRAPHICS::_LIST_PRIM_ITEM * XGRAPHICS::LST_GetNextItem(struct XGRAPHICS::_LIST_PRIM_ITEM *);
// struct XGRAPHICS::_LIST_PRIM_ITEM * XGRAPHICS::LST_GetPrevItem(struct XGRAPHICS::_LIST_PRIM_ITEM *);
// struct XGRAPHICS::_KEY_LIST * XGRAPHICS::ULIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// void XGRAPHICS::ULIST_DestroyList(struct XGRAPHICS::_KEY_LIST *);
// void XGRAPHICS::ULIST_InsertItem(struct XGRAPHICS::_KEY_LIST *, unsigned int, void *);
// struct XGRAPHICS::_KEY_LIST_ITEM * XGRAPHICS::ULIST_Search(struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int);
// void * XGRAPHICS::ULIST_GetItem(struct XGRAPHICS::_KEY_LIST *, unsigned int);
// void * XGRAPHICS::ULIST_GetNextItem(struct XGRAPHICS::_KEY_LIST *);
// void * XGRAPHICS::ULIST_RemoveItem(struct XGRAPHICS::_KEY_LIST *, unsigned int);
// void * XGRAPHICS::ULIST_RemoveFirstItem(struct XGRAPHICS::_KEY_LIST *);
// unsigned int XGRAPHICS::ULIST_GetNumItems(struct XGRAPHICS::_KEY_LIST *);
// void XGRAPHICS::ULIST_PrintList(struct XGRAPHICS::_KEY_LIST *);
// void XGRAPHICS::OLIST_InitList(struct XGRAPHICS::_KEY_LIST *, struct XGRAPHICS::_MEM_HEAD *, void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *));
// void XGRAPHICS::OLIST_DestroyList(struct XGRAPHICS::_KEY_LIST *);
// void XGRAPHICS::OLIST_InsertItem(struct XGRAPHICS::_KEY_LIST *, unsigned int, void *);
// struct XGRAPHICS::_KEY_LIST_ITEM * XGRAPHICS::OLIST_Search(struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int);
// void * XGRAPHICS::OLIST_GetItem(struct XGRAPHICS::_KEY_LIST *, unsigned int);
// void * XGRAPHICS::OLIST_GetNextItem(struct XGRAPHICS::_KEY_LIST *);
// void * XGRAPHICS::OLIST_RemoveItem(struct XGRAPHICS::_KEY_LIST *, unsigned int);
// void * XGRAPHICS::OLIST_RemoveFirstItem(struct XGRAPHICS::_KEY_LIST *);
// unsigned int XGRAPHICS::OLIST_GetNumItems(struct XGRAPHICS::_KEY_LIST *);
// void XGRAPHICS::OLIST_PrintList(struct XGRAPHICS::_KEY_LIST *);
// struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OLIST_CreateObjMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OLIST_CreateItemMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// unsigned int XGRAPHICS::OLIST_GetObjSize(void);
// struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::ROLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int);
// void XGRAPHICS::ROLIST_DestroyList(struct XGRAPHICS::_READONLY_LIST *);
// unsigned int XGRAPHICS::ROLIST_Search(struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int, struct XGRAPHICS::_KEY_LIST_ITEM **, unsigned int, unsigned int);
// void * XGRAPHICS::ROLIST_GetItem(struct XGRAPHICS::_READONLY_LIST *, unsigned int);
// void * XGRAPHICS::ROLIST_GetByIndex(struct XGRAPHICS::_READONLY_LIST *, unsigned int);
// void * XGRAPHICS::ROLIST_GetNextItem(struct XGRAPHICS::_READONLY_LIST *);
// unsigned int XGRAPHICS::ROLIST_GetNumItems(struct XGRAPHICS::_READONLY_LIST *);
// void XGRAPHICS::ROLIST_PrintList(struct XGRAPHICS::_READONLY_LIST *);
// void XGRAPHICS::INTLIST_InitList(struct XGRAPHICS::_INTEGER_LIST *, struct XGRAPHICS::_MEM_HEAD *);
// void XGRAPHICS::INTLIST_DestroyList(struct XGRAPHICS::_INTEGER_LIST *);
// unsigned int XGRAPHICS::INTLIST_GetNumItems(struct XGRAPHICS::_INTEGER_LIST *);
// void XGRAPHICS::INTLIST_PrependItem(struct XGRAPHICS::_INTEGER_LIST *, unsigned int);
// void XGRAPHICS::INTLIST_AppendItem(struct XGRAPHICS::_INTEGER_LIST *, unsigned int);
// unsigned int XGRAPHICS::INTLIST_GetFirstItem(struct XGRAPHICS::_INTEGER_LIST *);
// unsigned int XGRAPHICS::INTLIST_GetLastItem(struct XGRAPHICS::_INTEGER_LIST *);
// unsigned int XGRAPHICS::INTLIST_RemoveFirstItem(struct XGRAPHICS::_INTEGER_LIST *);
// unsigned int XGRAPHICS::INTLIST_RemoveLastItem(struct XGRAPHICS::_INTEGER_LIST *);
// unsigned int XGRAPHICS::INTLIST_RemoveItem(struct XGRAPHICS::_INTEGER_LIST *, unsigned int);
// struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::INTLIST_CreateObjMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::INTLIST_CreateItemMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// unsigned int XGRAPHICS::INTLIST_GetObjSize(void);
// void XGRAPHICS::OBJLIST_InitList(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_MEM_HEAD *);
// void XGRAPHICS::OBJLIST_DestroyList(struct XGRAPHICS::_OBJECT_LIST *);
// unsigned int XGRAPHICS::OBJLIST_GetNumItems(struct XGRAPHICS::_OBJECT_LIST *);
// void XGRAPHICS::OBJLIST_PrependItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_PrependNewItem(struct XGRAPHICS::_OBJECT_LIST *, void *);
// void XGRAPHICS::OBJLIST_AppendItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_AppendNewItem(struct XGRAPHICS::_OBJECT_LIST *, void *);
// void XGRAPHICS::OBJLIST_MoveItemToHead(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetFirstItem(struct XGRAPHICS::_OBJECT_LIST *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetLastItem(struct XGRAPHICS::_OBJECT_LIST *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetByIndex(struct XGRAPHICS::_OBJECT_LIST *, unsigned int);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveByIndex(struct XGRAPHICS::_OBJECT_LIST *, unsigned int);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveFirstItem(struct XGRAPHICS::_OBJECT_LIST *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveLastItem(struct XGRAPHICS::_OBJECT_LIST *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetPrevItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetNextItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// void XGRAPHICS::OBJLIST_DestroyListItem(struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// void * XGRAPHICS::OBJLIST_GetDataObject(struct XGRAPHICS::_OBJECT_LIST_ITEM *);
// struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OBJLIST_CreateObjMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OBJLIST_CreateItemMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// unsigned int XGRAPHICS::OBJLIST_GetObjSize(void);
// struct XGRAPHICS::_KEY_LIST * XGRAPHICS::OLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::OLIST_GetAllItems(struct XGRAPHICS::_KEY_LIST *, unsigned int);
// struct XGRAPHICS::_INTEGER_LIST * XGRAPHICS::INTLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);
// struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::OBJLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int);

//void * XGRAPHICS::LST_CreateItem(struct XGRAPHICS::_MEM_HEAD *)
//{
//    mangled_ppc("?LST_CreateItem@XGRAPHICS@@YAPAXPAU_MEM_HEAD@1@@Z");
//};

//void XGRAPHICS::LST_InsertAfterItem(struct XGRAPHICS::_LIST_PRIM_ITEM *, struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_InsertAfterItem@XGRAPHICS@@YAXPAU_LIST_PRIM_ITEM@1@0@Z");
//};

//void XGRAPHICS::LST_InsertBeforeItem(struct XGRAPHICS::_LIST_PRIM_ITEM *, struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_InsertBeforeItem@XGRAPHICS@@YAXPAU_LIST_PRIM_ITEM@1@0@Z");
//};

//void XGRAPHICS::LST_MoveAfterItem(struct XGRAPHICS::_LIST_PRIM_ITEM *, struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_MoveAfterItem@XGRAPHICS@@YAXPAU_LIST_PRIM_ITEM@1@0@Z");
//};

//struct XGRAPHICS::_LIST_PRIM_ITEM * XGRAPHICS::LST_RemoveItem(struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_RemoveItem@XGRAPHICS@@YAPAU_LIST_PRIM_ITEM@1@PAU21@@Z");
//};

//void XGRAPHICS::LST_DestroyItem(struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_DestroyItem@XGRAPHICS@@YAXPAU_LIST_PRIM_ITEM@1@@Z");
//};

//struct XGRAPHICS::_LIST_PRIM_ITEM * XGRAPHICS::LST_GetNextItem(struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_GetNextItem@XGRAPHICS@@YAPAU_LIST_PRIM_ITEM@1@PAU21@@Z");
//};

//struct XGRAPHICS::_LIST_PRIM_ITEM * XGRAPHICS::LST_GetPrevItem(struct XGRAPHICS::_LIST_PRIM_ITEM *)
//{
//    mangled_ppc("?LST_GetPrevItem@XGRAPHICS@@YAPAU_LIST_PRIM_ITEM@1@PAU21@@Z");
//};

//struct XGRAPHICS::_KEY_LIST * XGRAPHICS::ULIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?ULIST_CreateList@XGRAPHICS@@YAPAU_KEY_LIST@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//void XGRAPHICS::ULIST_DestroyList(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?ULIST_DestroyList@XGRAPHICS@@YAXPAU_KEY_LIST@1@@Z");
//};

//void XGRAPHICS::ULIST_InsertItem(struct XGRAPHICS::_KEY_LIST *, unsigned int, void *)
//{
//    mangled_ppc("?ULIST_InsertItem@XGRAPHICS@@YAXPAU_KEY_LIST@1@IPAX@Z");
//};

//struct XGRAPHICS::_KEY_LIST_ITEM * XGRAPHICS::ULIST_Search(struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int)
//{
//    mangled_ppc("?ULIST_Search@XGRAPHICS@@YAPAU_KEY_LIST_ITEM@1@PAU21@0I@Z");
//};

//void * XGRAPHICS::ULIST_GetItem(struct XGRAPHICS::_KEY_LIST *, unsigned int)
//{
//    mangled_ppc("?ULIST_GetItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@I@Z");
//};

//void * XGRAPHICS::ULIST_GetNextItem(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?ULIST_GetNextItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@@Z");
//};

//void * XGRAPHICS::ULIST_RemoveItem(struct XGRAPHICS::_KEY_LIST *, unsigned int)
//{
//    mangled_ppc("?ULIST_RemoveItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@I@Z");
//};

//void * XGRAPHICS::ULIST_RemoveFirstItem(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?ULIST_RemoveFirstItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::ULIST_GetNumItems(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?ULIST_GetNumItems@XGRAPHICS@@YAIPAU_KEY_LIST@1@@Z");
//};

//void XGRAPHICS::ULIST_PrintList(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?ULIST_PrintList@XGRAPHICS@@YAXPAU_KEY_LIST@1@@Z");
//};

//void XGRAPHICS::OLIST_InitList(struct XGRAPHICS::_KEY_LIST *, struct XGRAPHICS::_MEM_HEAD *, void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *))
//{
//    mangled_ppc("?OLIST_InitList@XGRAPHICS@@YAXPAU_KEY_LIST@1@PAU_MEM_HEAD@1@PAXP6APAX2I@ZP6A?AW4_E_SSM_RETURNCODE@1@22@Z@Z");
//};

//void XGRAPHICS::OLIST_DestroyList(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?OLIST_DestroyList@XGRAPHICS@@YAXPAU_KEY_LIST@1@@Z");
//};

//void XGRAPHICS::OLIST_InsertItem(struct XGRAPHICS::_KEY_LIST *, unsigned int, void *)
//{
//    mangled_ppc("?OLIST_InsertItem@XGRAPHICS@@YAXPAU_KEY_LIST@1@IPAX@Z");
//};

//struct XGRAPHICS::_KEY_LIST_ITEM * XGRAPHICS::OLIST_Search(struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int)
//{
//    mangled_ppc("?OLIST_Search@XGRAPHICS@@YAPAU_KEY_LIST_ITEM@1@PAU21@0I@Z");
//};

//void * XGRAPHICS::OLIST_GetItem(struct XGRAPHICS::_KEY_LIST *, unsigned int)
//{
//    mangled_ppc("?OLIST_GetItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@I@Z");
//};

//void * XGRAPHICS::OLIST_GetNextItem(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?OLIST_GetNextItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@@Z");
//};

//void * XGRAPHICS::OLIST_RemoveItem(struct XGRAPHICS::_KEY_LIST *, unsigned int)
//{
//    mangled_ppc("?OLIST_RemoveItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@I@Z");
//};

//void * XGRAPHICS::OLIST_RemoveFirstItem(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?OLIST_RemoveFirstItem@XGRAPHICS@@YAPAXPAU_KEY_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::OLIST_GetNumItems(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?OLIST_GetNumItems@XGRAPHICS@@YAIPAU_KEY_LIST@1@@Z");
//};

//void XGRAPHICS::OLIST_PrintList(struct XGRAPHICS::_KEY_LIST *)
//{
//    mangled_ppc("?OLIST_PrintList@XGRAPHICS@@YAXPAU_KEY_LIST@1@@Z");
//};

//struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OLIST_CreateObjMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?OLIST_CreateObjMemMgr@XGRAPHICS@@YAPAU_MEM_HEAD@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OLIST_CreateItemMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?OLIST_CreateItemMemMgr@XGRAPHICS@@YAPAU_MEM_HEAD@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//unsigned int XGRAPHICS::OLIST_GetObjSize(void)
//{
//    mangled_ppc("?OLIST_GetObjSize@XGRAPHICS@@YAIXZ");
//};

//struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::ROLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int)
//{
//    mangled_ppc("?ROLIST_CreateList@XGRAPHICS@@YAPAU_READONLY_LIST@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZPAU_KEY_LIST_ITEM@1@3I@Z");
//};

//void XGRAPHICS::ROLIST_DestroyList(struct XGRAPHICS::_READONLY_LIST *)
//{
//    mangled_ppc("?ROLIST_DestroyList@XGRAPHICS@@YAXPAU_READONLY_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::ROLIST_Search(struct XGRAPHICS::_KEY_LIST_ITEM *, struct XGRAPHICS::_KEY_LIST_ITEM *, unsigned int, struct XGRAPHICS::_KEY_LIST_ITEM **, unsigned int, unsigned int)
//{
//    mangled_ppc("?ROLIST_Search@XGRAPHICS@@YAIPAU_KEY_LIST_ITEM@1@0IPAPAU21@II@Z");
//};

//void * XGRAPHICS::ROLIST_GetItem(struct XGRAPHICS::_READONLY_LIST *, unsigned int)
//{
//    mangled_ppc("?ROLIST_GetItem@XGRAPHICS@@YAPAXPAU_READONLY_LIST@1@I@Z");
//};

//void * XGRAPHICS::ROLIST_GetByIndex(struct XGRAPHICS::_READONLY_LIST *, unsigned int)
//{
//    mangled_ppc("?ROLIST_GetByIndex@XGRAPHICS@@YAPAXPAU_READONLY_LIST@1@I@Z");
//};

//void * XGRAPHICS::ROLIST_GetNextItem(struct XGRAPHICS::_READONLY_LIST *)
//{
//    mangled_ppc("?ROLIST_GetNextItem@XGRAPHICS@@YAPAXPAU_READONLY_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::ROLIST_GetNumItems(struct XGRAPHICS::_READONLY_LIST *)
//{
//    mangled_ppc("?ROLIST_GetNumItems@XGRAPHICS@@YAIPAU_READONLY_LIST@1@@Z");
//};

//void XGRAPHICS::ROLIST_PrintList(struct XGRAPHICS::_READONLY_LIST *)
//{
//    mangled_ppc("?ROLIST_PrintList@XGRAPHICS@@YAXPAU_READONLY_LIST@1@@Z");
//};

//void XGRAPHICS::INTLIST_InitList(struct XGRAPHICS::_INTEGER_LIST *, struct XGRAPHICS::_MEM_HEAD *)
//{
//    mangled_ppc("?INTLIST_InitList@XGRAPHICS@@YAXPAU_INTEGER_LIST@1@PAU_MEM_HEAD@1@@Z");
//};

//void XGRAPHICS::INTLIST_DestroyList(struct XGRAPHICS::_INTEGER_LIST *)
//{
//    mangled_ppc("?INTLIST_DestroyList@XGRAPHICS@@YAXPAU_INTEGER_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::INTLIST_GetNumItems(struct XGRAPHICS::_INTEGER_LIST *)
//{
//    mangled_ppc("?INTLIST_GetNumItems@XGRAPHICS@@YAIPAU_INTEGER_LIST@1@@Z");
//};

//void XGRAPHICS::INTLIST_PrependItem(struct XGRAPHICS::_INTEGER_LIST *, unsigned int)
//{
//    mangled_ppc("?INTLIST_PrependItem@XGRAPHICS@@YAXPAU_INTEGER_LIST@1@I@Z");
//};

//void XGRAPHICS::INTLIST_AppendItem(struct XGRAPHICS::_INTEGER_LIST *, unsigned int)
//{
//    mangled_ppc("?INTLIST_AppendItem@XGRAPHICS@@YAXPAU_INTEGER_LIST@1@I@Z");
//};

//unsigned int XGRAPHICS::INTLIST_GetFirstItem(struct XGRAPHICS::_INTEGER_LIST *)
//{
//    mangled_ppc("?INTLIST_GetFirstItem@XGRAPHICS@@YAIPAU_INTEGER_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::INTLIST_GetLastItem(struct XGRAPHICS::_INTEGER_LIST *)
//{
//    mangled_ppc("?INTLIST_GetLastItem@XGRAPHICS@@YAIPAU_INTEGER_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::INTLIST_RemoveFirstItem(struct XGRAPHICS::_INTEGER_LIST *)
//{
//    mangled_ppc("?INTLIST_RemoveFirstItem@XGRAPHICS@@YAIPAU_INTEGER_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::INTLIST_RemoveLastItem(struct XGRAPHICS::_INTEGER_LIST *)
//{
//    mangled_ppc("?INTLIST_RemoveLastItem@XGRAPHICS@@YAIPAU_INTEGER_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::INTLIST_RemoveItem(struct XGRAPHICS::_INTEGER_LIST *, unsigned int)
//{
//    mangled_ppc("?INTLIST_RemoveItem@XGRAPHICS@@YAIPAU_INTEGER_LIST@1@I@Z");
//};

//struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::INTLIST_CreateObjMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?INTLIST_CreateObjMemMgr@XGRAPHICS@@YAPAU_MEM_HEAD@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::INTLIST_CreateItemMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?INTLIST_CreateItemMemMgr@XGRAPHICS@@YAPAU_MEM_HEAD@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//unsigned int XGRAPHICS::INTLIST_GetObjSize(void)
//{
//    mangled_ppc("?INTLIST_GetObjSize@XGRAPHICS@@YAIXZ");
//};

//void XGRAPHICS::OBJLIST_InitList(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_MEM_HEAD *)
//{
//    mangled_ppc("?OBJLIST_InitList@XGRAPHICS@@YAXPAU_OBJECT_LIST@1@PAU_MEM_HEAD@1@@Z");
//};

//void XGRAPHICS::OBJLIST_DestroyList(struct XGRAPHICS::_OBJECT_LIST *)
//{
//    mangled_ppc("?OBJLIST_DestroyList@XGRAPHICS@@YAXPAU_OBJECT_LIST@1@@Z");
//};

//unsigned int XGRAPHICS::OBJLIST_GetNumItems(struct XGRAPHICS::_OBJECT_LIST *)
//{
//    mangled_ppc("?OBJLIST_GetNumItems@XGRAPHICS@@YAIPAU_OBJECT_LIST@1@@Z");
//};

//void XGRAPHICS::OBJLIST_PrependItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_PrependItem@XGRAPHICS@@YAXPAU_OBJECT_LIST@1@PAU_OBJECT_LIST_ITEM@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_PrependNewItem(struct XGRAPHICS::_OBJECT_LIST *, void *)
//{
//    mangled_ppc("?OBJLIST_PrependNewItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@PAX@Z");
//};

//void XGRAPHICS::OBJLIST_AppendItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_AppendItem@XGRAPHICS@@YAXPAU_OBJECT_LIST@1@PAU_OBJECT_LIST_ITEM@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_AppendNewItem(struct XGRAPHICS::_OBJECT_LIST *, void *)
//{
//    mangled_ppc("?OBJLIST_AppendNewItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@PAX@Z");
//};

//void XGRAPHICS::OBJLIST_MoveItemToHead(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_MoveItemToHead@XGRAPHICS@@YAXPAU_OBJECT_LIST@1@PAU_OBJECT_LIST_ITEM@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetFirstItem(struct XGRAPHICS::_OBJECT_LIST *)
//{
//    mangled_ppc("?OBJLIST_GetFirstItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetLastItem(struct XGRAPHICS::_OBJECT_LIST *)
//{
//    mangled_ppc("?OBJLIST_GetLastItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetByIndex(struct XGRAPHICS::_OBJECT_LIST *, unsigned int)
//{
//    mangled_ppc("?OBJLIST_GetByIndex@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@I@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveByIndex(struct XGRAPHICS::_OBJECT_LIST *, unsigned int)
//{
//    mangled_ppc("?OBJLIST_RemoveByIndex@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@I@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveFirstItem(struct XGRAPHICS::_OBJECT_LIST *)
//{
//    mangled_ppc("?OBJLIST_RemoveFirstItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveLastItem(struct XGRAPHICS::_OBJECT_LIST *)
//{
//    mangled_ppc("?OBJLIST_RemoveLastItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_RemoveItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_RemoveItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@PAU21@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetPrevItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_GetPrevItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@PAU21@@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST_ITEM * XGRAPHICS::OBJLIST_GetNextItem(struct XGRAPHICS::_OBJECT_LIST *, struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_GetNextItem@XGRAPHICS@@YAPAU_OBJECT_LIST_ITEM@1@PAU_OBJECT_LIST@1@PAU21@@Z");
//};

//void XGRAPHICS::OBJLIST_DestroyListItem(struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_DestroyListItem@XGRAPHICS@@YAXPAU_OBJECT_LIST_ITEM@1@@Z");
//};

//void * XGRAPHICS::OBJLIST_GetDataObject(struct XGRAPHICS::_OBJECT_LIST_ITEM *)
//{
//    mangled_ppc("?OBJLIST_GetDataObject@XGRAPHICS@@YAPAXPAU_OBJECT_LIST_ITEM@1@@Z");
//};

//struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OBJLIST_CreateObjMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?OBJLIST_CreateObjMemMgr@XGRAPHICS@@YAPAU_MEM_HEAD@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//struct XGRAPHICS::_MEM_HEAD * XGRAPHICS::OBJLIST_CreateItemMemMgr(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?OBJLIST_CreateItemMemMgr@XGRAPHICS@@YAPAU_MEM_HEAD@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//unsigned int XGRAPHICS::OBJLIST_GetObjSize(void)
//{
//    mangled_ppc("?OBJLIST_GetObjSize@XGRAPHICS@@YAIXZ");
//};

//struct XGRAPHICS::_KEY_LIST * XGRAPHICS::OLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?OLIST_CreateList@XGRAPHICS@@YAPAU_KEY_LIST@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//struct XGRAPHICS::_READONLY_LIST * XGRAPHICS::OLIST_GetAllItems(struct XGRAPHICS::_KEY_LIST *, unsigned int)
//{
//    mangled_ppc("?OLIST_GetAllItems@XGRAPHICS@@YAPAU_READONLY_LIST@1@PAU_KEY_LIST@1@I@Z");
//};

//struct XGRAPHICS::_INTEGER_LIST * XGRAPHICS::INTLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?INTLIST_CreateList@XGRAPHICS@@YAPAU_INTEGER_LIST@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

//struct XGRAPHICS::_OBJECT_LIST * XGRAPHICS::OBJLIST_CreateList(void *, void * (*)(void *, unsigned int), enum XGRAPHICS::_E_SSM_RETURNCODE (*)(void *, void *), unsigned int)
//{
//    mangled_ppc("?OBJLIST_CreateList@XGRAPHICS@@YAPAU_OBJECT_LIST@1@PAXP6APAX0I@ZP6A?AW4_E_SSM_RETURNCODE@1@00@ZI@Z");
//};

