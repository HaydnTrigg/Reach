/* ---------- headers */

#include "Rockall\Heap.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: HEAP::HEAP(class CACHE **const, class CACHE **const, int, class NEW_PAGE *, class FIND *, class FIND *, class ROCKALL_BACK_END *, int, int, int, int, class THREAD_SAFE *);
// public: unsigned char HEAP::Delete(void *, int);
// public: void HEAP::DeleteAll(unsigned char);
// public: unsigned char HEAP::Details(void *, struct SEARCH_PAGE *, int *);
// private: class CACHE * HEAP::FindCache(int);
// public: unsigned char HEAP::KnownArea(void *);
// public: void HEAP::LockAll(void);
// public: unsigned char HEAP::MultipleDelete(int, void **const, int);
// public: unsigned char HEAP::MultipleNew(int *, void **const, int, int, int *, unsigned char);
// public: void * HEAP::New(int, int *, unsigned char);
// public: void * HEAP::Resize(void *, int, int, int *, unsigned char, unsigned char);
// public: unsigned char HEAP::Truncate(int);
// public: void HEAP::UnlockAll(unsigned char);
// public: unsigned char HEAP::Verify(void *, int *);
// public: unsigned char HEAP::Walk(unsigned char *, void **, int *);
// public: HEAP::~HEAP(void);
// public: static int ENVIRONMENT::PageSize(void);
// public: COMMON::COMMON(void);
// public: ASSEMBLY::ASSEMBLY(void);
// public: COMMON::~COMMON(void);
// public: ASSEMBLY::~ASSEMBLY(void);
// public: PREFETCH::PREFETCH(void);
// public: PREFETCH::~PREFETCH(void);
// public: void FIND::ClaimFindExclusiveLock(void);
// public: unsigned char SHARELOCK::ClaimExclusiveLock(int);
// public: static void ASSEMBLY::AtomicDoubleIncrement(int volatile *);
// public: static __int64 ASSEMBLY::AtomicCompareExchange64(__int64volatile *, __int64, __int64);
// public: unsigned char THREAD_SAFE::ClaimActiveLock(void);
// public: static int ASSEMBLY::GetThreadId(void);
// public: void FIND::DeleteAll(void);
// public: void FIND::ReleaseFindExclusiveLock(void);
// public: void SHARELOCK::ReleaseExclusiveLock(void);
// public: static void ASSEMBLY::AtomicDoubleDecrement(int volatile *);
// public: void NEW_PAGE::ClaimNewPageLock(void);
// public: void NEW_PAGE::ReleaseNewPageLock(void);
// public: void NEW_PAGE::UpdateNewPage(class CACHE *);
// public: class CACHE * CONNECTIONS::GetParentCache(void);
// public: int BUCKET::GetAllocationSize(void);
// public: int BUCKET::GetChunkSize(void);
// public: int BUCKET::GetPageSize(void);
// public: void CACHE::ClaimCacheLock(void);
// public: short CACHE::GetCacheSize(void);
// public: void CACHE::ReleaseCacheLock(void);
// private: unsigned char HEAP::ResizeTest(int, int);

//public: HEAP::HEAP(class CACHE **const, class CACHE **const, int, class NEW_PAGE *, class FIND *, class FIND *, class ROCKALL_BACK_END *, int, int, int, int, class THREAD_SAFE *)
//{
//    mangled_ppc("??0HEAP@@QAA@QAPAVCACHE@@0HPAVNEW_PAGE@@PAVFIND@@2PAVROCKALL_BACK_END@@HHHHPAVTHREAD_SAFE@@@Z");
//};

//public: unsigned char HEAP::Delete(void *, int)
//{
//    mangled_ppc("?Delete@HEAP@@QAAEPAXH@Z");
//};

//public: void HEAP::DeleteAll(unsigned char)
//{
//    mangled_ppc("?DeleteAll@HEAP@@QAAXE@Z");
//};

//public: unsigned char HEAP::Details(void *, struct SEARCH_PAGE *, int *)
//{
//    mangled_ppc("?Details@HEAP@@QAAEPAXPAUSEARCH_PAGE@@PAH@Z");
//};

//private: class CACHE * HEAP::FindCache(int)
//{
//    mangled_ppc("?FindCache@HEAP@@AAAPAVCACHE@@H@Z");
//};

//public: unsigned char HEAP::KnownArea(void *)
//{
//    mangled_ppc("?KnownArea@HEAP@@QAAEPAX@Z");
//};

//public: void HEAP::LockAll(void)
//{
//    mangled_ppc("?LockAll@HEAP@@QAAXXZ");
//};

//public: unsigned char HEAP::MultipleDelete(int, void **const, int)
//{
//    mangled_ppc("?MultipleDelete@HEAP@@QAAEHQAPAXH@Z");
//};

//public: unsigned char HEAP::MultipleNew(int *, void **const, int, int, int *, unsigned char)
//{
//    mangled_ppc("?MultipleNew@HEAP@@QAAEPAHQAPAXHH0E@Z");
//};

//public: void * HEAP::New(int, int *, unsigned char)
//{
//    mangled_ppc("?New@HEAP@@QAAPAXHPAHE@Z");
//};

//public: void * HEAP::Resize(void *, int, int, int *, unsigned char, unsigned char)
//{
//    mangled_ppc("?Resize@HEAP@@QAAPAXPAXHHPAHEE@Z");
//};

//public: unsigned char HEAP::Truncate(int)
//{
//    mangled_ppc("?Truncate@HEAP@@QAAEH@Z");
//};

//public: void HEAP::UnlockAll(unsigned char)
//{
//    mangled_ppc("?UnlockAll@HEAP@@QAAXE@Z");
//};

//public: unsigned char HEAP::Verify(void *, int *)
//{
//    mangled_ppc("?Verify@HEAP@@QAAEPAXPAH@Z");
//};

//public: unsigned char HEAP::Walk(unsigned char *, void **, int *)
//{
//    mangled_ppc("?Walk@HEAP@@QAAEPAEPAPAXPAH@Z");
//};

//public: HEAP::~HEAP(void)
//{
//    mangled_ppc("??1HEAP@@QAA@XZ");
//};

//public: static int ENVIRONMENT::PageSize(void)
//{
//    mangled_ppc("?PageSize@ENVIRONMENT@@SAHXZ");
//};

//public: COMMON::COMMON(void)
//{
//    mangled_ppc("??0COMMON@@QAA@XZ");
//};

//public: ASSEMBLY::ASSEMBLY(void)
//{
//    mangled_ppc("??0ASSEMBLY@@QAA@XZ");
//};

//public: COMMON::~COMMON(void)
//{
//    mangled_ppc("??1COMMON@@QAA@XZ");
//};

//public: ASSEMBLY::~ASSEMBLY(void)
//{
//    mangled_ppc("??1ASSEMBLY@@QAA@XZ");
//};

//public: PREFETCH::PREFETCH(void)
//{
//    mangled_ppc("??0PREFETCH@@QAA@XZ");
//};

//public: PREFETCH::~PREFETCH(void)
//{
//    mangled_ppc("??1PREFETCH@@QAA@XZ");
//};

//public: void FIND::ClaimFindExclusiveLock(void)
//{
//    mangled_ppc("?ClaimFindExclusiveLock@FIND@@QAAXXZ");
//};

//public: unsigned char SHARELOCK::ClaimExclusiveLock(int)
//{
//    mangled_ppc("?ClaimExclusiveLock@SHARELOCK@@QAAEH@Z");
//};

//public: static void ASSEMBLY::AtomicDoubleIncrement(int volatile *)
//{
//    mangled_ppc("?AtomicDoubleIncrement@ASSEMBLY@@SAXPCH@Z");
//};

//public: static __int64 ASSEMBLY::AtomicCompareExchange64(__int64volatile *, __int64, __int64)
//{
//    mangled_ppc("?AtomicCompareExchange64@ASSEMBLY@@SA_JPC_J_J1@Z");
//};

//public: unsigned char THREAD_SAFE::ClaimActiveLock(void)
//{
//    mangled_ppc("?ClaimActiveLock@THREAD_SAFE@@QAAEXZ");
//};

//public: static int ASSEMBLY::GetThreadId(void)
//{
//    mangled_ppc("?GetThreadId@ASSEMBLY@@SAHXZ");
//};

//public: void FIND::DeleteAll(void)
//{
//    mangled_ppc("?DeleteAll@FIND@@QAAXXZ");
//};

//public: void FIND::ReleaseFindExclusiveLock(void)
//{
//    mangled_ppc("?ReleaseFindExclusiveLock@FIND@@QAAXXZ");
//};

//public: void SHARELOCK::ReleaseExclusiveLock(void)
//{
//    mangled_ppc("?ReleaseExclusiveLock@SHARELOCK@@QAAXXZ");
//};

//public: static void ASSEMBLY::AtomicDoubleDecrement(int volatile *)
//{
//    mangled_ppc("?AtomicDoubleDecrement@ASSEMBLY@@SAXPCH@Z");
//};

//public: void NEW_PAGE::ClaimNewPageLock(void)
//{
//    mangled_ppc("?ClaimNewPageLock@NEW_PAGE@@QAAXXZ");
//};

//public: void NEW_PAGE::ReleaseNewPageLock(void)
//{
//    mangled_ppc("?ReleaseNewPageLock@NEW_PAGE@@QAAXXZ");
//};

//public: void NEW_PAGE::UpdateNewPage(class CACHE *)
//{
//    mangled_ppc("?UpdateNewPage@NEW_PAGE@@QAAXPAVCACHE@@@Z");
//};

//public: class CACHE * CONNECTIONS::GetParentCache(void)
//{
//    mangled_ppc("?GetParentCache@CONNECTIONS@@QAAPAVCACHE@@XZ");
//};

//public: int BUCKET::GetAllocationSize(void)
//{
//    mangled_ppc("?GetAllocationSize@BUCKET@@QAAHXZ");
//};

//public: int BUCKET::GetChunkSize(void)
//{
//    mangled_ppc("?GetChunkSize@BUCKET@@QAAHXZ");
//};

//public: int BUCKET::GetPageSize(void)
//{
//    mangled_ppc("?GetPageSize@BUCKET@@QAAHXZ");
//};

//public: void CACHE::ClaimCacheLock(void)
//{
//    mangled_ppc("?ClaimCacheLock@CACHE@@QAAXXZ");
//};

//public: short CACHE::GetCacheSize(void)
//{
//    mangled_ppc("?GetCacheSize@CACHE@@QAAFXZ");
//};

//public: void CACHE::ReleaseCacheLock(void)
//{
//    mangled_ppc("?ReleaseCacheLock@CACHE@@QAAXXZ");
//};

//private: unsigned char HEAP::ResizeTest(int, int)
//{
//    mangled_ppc("?ResizeTest@HEAP@@AAAEHH@Z");
//};

