/* ---------- headers */

#include "Rockall\NewPage.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: NEW_PAGE::NEW_PAGE(int *const, class ROCKALL_BACK_END *, int, class THREAD_SAFE *);
// public: class PAGE * NEW_PAGE::CreatePage(class CACHE *, int);
// public: void NEW_PAGE::DeleteAll(unsigned char);
// public: void NEW_PAGE::DeletePage(class PAGE *);
// public: short NEW_PAGE::FindSizeKey(short);
// public: void * NEW_PAGE::NewCacheStack(int);
// public: void NEW_PAGE::ResizeStack(void);
// private: void * NEW_PAGE::VerifyNewArea(int, int, unsigned char);
// public: unsigned char NEW_PAGE::Walk(struct SEARCH_PAGE *, class FIND *);
// public: NEW_PAGE::~NEW_PAGE(void);
// public: void * PAGE::`scalar deleting destructor'(unsigned int);
// public: void * LIST::`scalar deleting destructor'(unsigned int);
// public: static int ENVIRONMENT::CacheAlignSize(int);
// public: unsigned char LIST::EndOfList(void);
// public: void NEW_PAGE_LIST::DeleteFromNewPageList(class LIST *);
// public: unsigned char NEW_PAGE_LIST::EndOfNewPageList(void);
// public: static class PAGE * NEW_PAGE_LIST::FirstInNewPageList(class LIST *);
// public: class LIST * LIST::First(void);
// public: void NEW_PAGE_LIST::InsertInNewPageList(class LIST *);
// public: static class PAGE * NEW_PAGE_LIST::LastInNewPageList(class LIST *);
// public: class LIST * LIST::Last(void);
// public: class PAGE * NEW_PAGE_LIST::NextInNewPageList(void);
// public: class LIST * LIST::Next(void);
// private: static class PAGE * NEW_PAGE_LIST::ComputePageAddress(char *);
// public: unsigned char PAGE::Empty(void);
// public: unsigned char PAGE::Full(void);
// public: void * PAGE::GetAddress(void);
// public: class CACHE * PAGE::GetCache(void);
// public: int PAGE::GetPageSize(void);
// public: unsigned char CONNECTIONS::TopCache(void);
// public: short BUCKET::GetSizeKey(void);

//public: NEW_PAGE::NEW_PAGE(int *const, class ROCKALL_BACK_END *, int, class THREAD_SAFE *)
//{
//    mangled_ppc("??0NEW_PAGE@@QAA@QAHPAVROCKALL_BACK_END@@HPAVTHREAD_SAFE@@@Z");
//};

//public: class PAGE * NEW_PAGE::CreatePage(class CACHE *, int)
//{
//    mangled_ppc("?CreatePage@NEW_PAGE@@QAAPAVPAGE@@PAVCACHE@@H@Z");
//};

//public: void NEW_PAGE::DeleteAll(unsigned char)
//{
//    mangled_ppc("?DeleteAll@NEW_PAGE@@QAAXE@Z");
//};

//public: void NEW_PAGE::DeletePage(class PAGE *)
//{
//    mangled_ppc("?DeletePage@NEW_PAGE@@QAAXPAVPAGE@@@Z");
//};

//public: short NEW_PAGE::FindSizeKey(short)
//{
//    mangled_ppc("?FindSizeKey@NEW_PAGE@@QAAFF@Z");
//};

//public: void * NEW_PAGE::NewCacheStack(int)
//{
//    mangled_ppc("?NewCacheStack@NEW_PAGE@@QAAPAXH@Z");
//};

//public: void NEW_PAGE::ResizeStack(void)
//{
//    mangled_ppc("?ResizeStack@NEW_PAGE@@QAAXXZ");
//};

//private: void * NEW_PAGE::VerifyNewArea(int, int, unsigned char)
//{
//    mangled_ppc("?VerifyNewArea@NEW_PAGE@@AAAPAXHHE@Z");
//};

//public: unsigned char NEW_PAGE::Walk(struct SEARCH_PAGE *, class FIND *)
//{
//    mangled_ppc("?Walk@NEW_PAGE@@QAAEPAUSEARCH_PAGE@@PAVFIND@@@Z");
//};

//public: NEW_PAGE::~NEW_PAGE(void)
//{
//    mangled_ppc("??1NEW_PAGE@@QAA@XZ");
//};

//public: void * PAGE::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GPAGE@@QAAPAXI@Z");
//};

//public: void * LIST::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GLIST@@QAAPAXI@Z");
//};

//public: static int ENVIRONMENT::CacheAlignSize(int)
//{
//    mangled_ppc("?CacheAlignSize@ENVIRONMENT@@SAHH@Z");
//};

//public: unsigned char LIST::EndOfList(void)
//{
//    mangled_ppc("?EndOfList@LIST@@QAAEXZ");
//};

//public: void NEW_PAGE_LIST::DeleteFromNewPageList(class LIST *)
//{
//    mangled_ppc("?DeleteFromNewPageList@NEW_PAGE_LIST@@QAAXPAVLIST@@@Z");
//};

//public: unsigned char NEW_PAGE_LIST::EndOfNewPageList(void)
//{
//    mangled_ppc("?EndOfNewPageList@NEW_PAGE_LIST@@QAAEXZ");
//};

//public: static class PAGE * NEW_PAGE_LIST::FirstInNewPageList(class LIST *)
//{
//    mangled_ppc("?FirstInNewPageList@NEW_PAGE_LIST@@SAPAVPAGE@@PAVLIST@@@Z");
//};

//public: class LIST * LIST::First(void)
//{
//    mangled_ppc("?First@LIST@@QAAPAV1@XZ");
//};

//public: void NEW_PAGE_LIST::InsertInNewPageList(class LIST *)
//{
//    mangled_ppc("?InsertInNewPageList@NEW_PAGE_LIST@@QAAXPAVLIST@@@Z");
//};

//public: static class PAGE * NEW_PAGE_LIST::LastInNewPageList(class LIST *)
//{
//    mangled_ppc("?LastInNewPageList@NEW_PAGE_LIST@@SAPAVPAGE@@PAVLIST@@@Z");
//};

//public: class LIST * LIST::Last(void)
//{
//    mangled_ppc("?Last@LIST@@QAAPAV1@XZ");
//};

//public: class PAGE * NEW_PAGE_LIST::NextInNewPageList(void)
//{
//    mangled_ppc("?NextInNewPageList@NEW_PAGE_LIST@@QAAPAVPAGE@@XZ");
//};

//public: class LIST * LIST::Next(void)
//{
//    mangled_ppc("?Next@LIST@@QAAPAV1@XZ");
//};

//private: static class PAGE * NEW_PAGE_LIST::ComputePageAddress(char *)
//{
//    mangled_ppc("?ComputePageAddress@NEW_PAGE_LIST@@CAPAVPAGE@@PAD@Z");
//};

//public: unsigned char PAGE::Empty(void)
//{
//    mangled_ppc("?Empty@PAGE@@QAAEXZ");
//};

//public: unsigned char PAGE::Full(void)
//{
//    mangled_ppc("?Full@PAGE@@QAAEXZ");
//};

//public: void * PAGE::GetAddress(void)
//{
//    mangled_ppc("?GetAddress@PAGE@@QAAPAXXZ");
//};

//public: class CACHE * PAGE::GetCache(void)
//{
//    mangled_ppc("?GetCache@PAGE@@QAAPAVCACHE@@XZ");
//};

//public: int PAGE::GetPageSize(void)
//{
//    mangled_ppc("?GetPageSize@PAGE@@QAAHXZ");
//};

//public: unsigned char CONNECTIONS::TopCache(void)
//{
//    mangled_ppc("?TopCache@CONNECTIONS@@QAAEXZ");
//};

//public: short BUCKET::GetSizeKey(void)
//{
//    mangled_ppc("?GetSizeKey@BUCKET@@QAAFXZ");
//};

