/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83E86F20; // "except_record_83E86F20"
// except_record_83E88128; // "except_record_83E88128"
// except_record_83E88260; // "except_record_83E88260"
// except_record_83E88578; // "except_record_83E88578"
// except_record_83E88980; // "except_record_83E88980"
// except_record_83E88C98; // "except_record_83E88C98"
// except_record_83E88DD8; // "except_record_83E88DD8"
// except_record_83E88ED8; // "except_record_83E88ED8"
// except_record_83E88F68; // "except_record_83E88F68"
// except_record_83E89740; // "except_record_83E89740"
// except_record_83E89D10; // "except_record_83E89D10"
// except_record_83E8A000; // "except_record_83E8A000"
// except_record_83E8A160; // "except_record_83E8A160"
// except_record_83E8B6B8; // "except_record_83E8B6B8"
// except_record_83E8B9D8; // "except_record_83E8B9D8"
// except_record_83E8C9C8; // "except_record_83E8C9C8"
// except_record_83E8CA78; // "except_record_83E8CA78"
// except_record_83E8CB28; // "except_record_83E8CB28"
// except_record_83E8CC68; // "except_record_83E8CC68"
// except_record_83E8CCF8; // "except_record_83E8CCF8"
// except_record_83E8CD88; // "except_record_83E8CD88"
// except_record_83E8D048; // "except_record_83E8D048"
// except_record_83E8D480; // "except_record_83E8D480"

// public: FIND::FIND(int, int, int, unsigned char, unsigned char, class ROCKALL_BACK_END *, class THREAD_SAFE *);
// public: unsigned char FIND::Delete(void *, class CACHE *);
// public: void FIND::DeleteFromFindList(class PAGE *);
// public: unsigned char FIND::Details(void *, struct SEARCH_PAGE *, class CACHE *, int *);
// private: unsigned char FIND::FindLookAside(void *, class PAGE **);
// public: class PAGE * FIND::FindPage(void *, class CACHE *);
// public: void FIND::InsertInFindList(class PAGE *);
// public: unsigned char FIND::KnownArea(void *, class CACHE *);
// public: void FIND::ReleaseFindShareLockAndUpdate(void *, class PAGE *, int);
// private: void FIND::ResizeHashTable(void);
// public: void FIND::UpdateFind(unsigned int, unsigned int);
// public: unsigned char FIND::Walk(unsigned char *, void **, class CACHE *, int *);
// public: FIND::~FIND(void);
// public: void PRIVATE_FIND_LIST::DeleteFromPrivateFindList(class LIST *);
// public: unsigned char PRIVATE_FIND_LIST::EndOfPrivateFindList(void);
// public: static class PAGE * PRIVATE_FIND_LIST::FirstInPrivateFindList(class LIST *);
// public: void PRIVATE_FIND_LIST::InsertInPrivateFindList(class LIST *);
// public: class PAGE * PRIVATE_FIND_LIST::NextInPrivateFindList(void);
// private: static class PAGE * PRIVATE_FIND_LIST::ComputePageAddress(char *);
// public: void PUBLIC_FIND_LIST::DeleteFromPublicFindList(class LIST *);
// public: unsigned char PUBLIC_FIND_LIST::EndOfPublicFindList(void);
// public: static class PAGE * PUBLIC_FIND_LIST::FirstInPublicFindList(class LIST *);
// public: void PUBLIC_FIND_LIST::InsertInPublicFindList(class LIST *);
// public: class PAGE * PUBLIC_FIND_LIST::NextInPublicFindList(void);
// private: static class PAGE * PUBLIC_FIND_LIST::ComputePageAddress(char *);
// public: class CACHE * PAGE::GetParentPage(void);
// public: int PAGE::GetVersion(void);
// public: unsigned char PAGE::ValidPage(void);
// public: static void PREFETCH::Nta(char *, int);
// public: void FIND::ClaimFindShareLock(void);
// public: unsigned char SHARELOCK::ClaimShareLock(int);
// public: static int ASSEMBLY::AtomicIncrement(int volatile *);
// public: void FIND::ReleaseFindShareLock(void);
// public: void SHARELOCK::ReleaseShareLock(void);
// public: static int ASSEMBLY::AtomicDecrement(int volatile *);
// private: void FIND::ChangeToExclusiveLock(void);
// public: unsigned char SHARELOCK::ChangeSharedLockToExclusiveLock(int);
// private: class LIST * FIND::FindHashHead(void *);
// private: struct FIND::LOOK_ASIDE * FIND::FindLookAsideHead(void *);

//public: FIND::FIND(int, int, int, unsigned char, unsigned char, class ROCKALL_BACK_END *, class THREAD_SAFE *)
//{
//    mangled_ppc("??0FIND@@QAA@HHHEEPAVROCKALL_BACK_END@@PAVTHREAD_SAFE@@@Z");
//};

//public: unsigned char FIND::Delete(void *, class CACHE *)
//{
//    mangled_ppc("?Delete@FIND@@QAAEPAXPAVCACHE@@@Z");
//};

//public: void FIND::DeleteFromFindList(class PAGE *)
//{
//    mangled_ppc("?DeleteFromFindList@FIND@@QAAXPAVPAGE@@@Z");
//};

//public: unsigned char FIND::Details(void *, struct SEARCH_PAGE *, class CACHE *, int *)
//{
//    mangled_ppc("?Details@FIND@@QAAEPAXPAUSEARCH_PAGE@@PAVCACHE@@PAH@Z");
//};

//private: unsigned char FIND::FindLookAside(void *, class PAGE **)
//{
//    mangled_ppc("?FindLookAside@FIND@@AAAEPAXPAPAVPAGE@@@Z");
//};

//public: class PAGE * FIND::FindPage(void *, class CACHE *)
//{
//    mangled_ppc("?FindPage@FIND@@QAAPAVPAGE@@PAXPAVCACHE@@@Z");
//};

//public: void FIND::InsertInFindList(class PAGE *)
//{
//    mangled_ppc("?InsertInFindList@FIND@@QAAXPAVPAGE@@@Z");
//};

//public: unsigned char FIND::KnownArea(void *, class CACHE *)
//{
//    mangled_ppc("?KnownArea@FIND@@QAAEPAXPAVCACHE@@@Z");
//};

//public: void FIND::ReleaseFindShareLockAndUpdate(void *, class PAGE *, int)
//{
//    mangled_ppc("?ReleaseFindShareLockAndUpdate@FIND@@QAAXPAXPAVPAGE@@H@Z");
//};

//private: void FIND::ResizeHashTable(void)
//{
//    mangled_ppc("?ResizeHashTable@FIND@@AAAXXZ");
//};

//public: void FIND::UpdateFind(unsigned int, unsigned int)
//{
//    mangled_ppc("?UpdateFind@FIND@@QAAXII@Z");
//};

//public: unsigned char FIND::Walk(unsigned char *, void **, class CACHE *, int *)
//{
//    mangled_ppc("?Walk@FIND@@QAAEPAEPAPAXPAVCACHE@@PAH@Z");
//};

//public: FIND::~FIND(void)
//{
//    mangled_ppc("??1FIND@@QAA@XZ");
//};

//public: void PRIVATE_FIND_LIST::DeleteFromPrivateFindList(class LIST *)
//{
//    mangled_ppc("?DeleteFromPrivateFindList@PRIVATE_FIND_LIST@@QAAXPAVLIST@@@Z");
//};

//public: unsigned char PRIVATE_FIND_LIST::EndOfPrivateFindList(void)
//{
//    mangled_ppc("?EndOfPrivateFindList@PRIVATE_FIND_LIST@@QAAEXZ");
//};

//public: static class PAGE * PRIVATE_FIND_LIST::FirstInPrivateFindList(class LIST *)
//{
//    mangled_ppc("?FirstInPrivateFindList@PRIVATE_FIND_LIST@@SAPAVPAGE@@PAVLIST@@@Z");
//};

//public: void PRIVATE_FIND_LIST::InsertInPrivateFindList(class LIST *)
//{
//    mangled_ppc("?InsertInPrivateFindList@PRIVATE_FIND_LIST@@QAAXPAVLIST@@@Z");
//};

//public: class PAGE * PRIVATE_FIND_LIST::NextInPrivateFindList(void)
//{
//    mangled_ppc("?NextInPrivateFindList@PRIVATE_FIND_LIST@@QAAPAVPAGE@@XZ");
//};

//private: static class PAGE * PRIVATE_FIND_LIST::ComputePageAddress(char *)
//{
//    mangled_ppc("?ComputePageAddress@PRIVATE_FIND_LIST@@CAPAVPAGE@@PAD@Z");
//};

//public: void PUBLIC_FIND_LIST::DeleteFromPublicFindList(class LIST *)
//{
//    mangled_ppc("?DeleteFromPublicFindList@PUBLIC_FIND_LIST@@QAAXPAVLIST@@@Z");
//};

//public: unsigned char PUBLIC_FIND_LIST::EndOfPublicFindList(void)
//{
//    mangled_ppc("?EndOfPublicFindList@PUBLIC_FIND_LIST@@QAAEXZ");
//};

//public: static class PAGE * PUBLIC_FIND_LIST::FirstInPublicFindList(class LIST *)
//{
//    mangled_ppc("?FirstInPublicFindList@PUBLIC_FIND_LIST@@SAPAVPAGE@@PAVLIST@@@Z");
//};

//public: void PUBLIC_FIND_LIST::InsertInPublicFindList(class LIST *)
//{
//    mangled_ppc("?InsertInPublicFindList@PUBLIC_FIND_LIST@@QAAXPAVLIST@@@Z");
//};

//public: class PAGE * PUBLIC_FIND_LIST::NextInPublicFindList(void)
//{
//    mangled_ppc("?NextInPublicFindList@PUBLIC_FIND_LIST@@QAAPAVPAGE@@XZ");
//};

//private: static class PAGE * PUBLIC_FIND_LIST::ComputePageAddress(char *)
//{
//    mangled_ppc("?ComputePageAddress@PUBLIC_FIND_LIST@@CAPAVPAGE@@PAD@Z");
//};

//public: class CACHE * PAGE::GetParentPage(void)
//{
//    mangled_ppc("?GetParentPage@PAGE@@QAAPAVCACHE@@XZ");
//};

//public: int PAGE::GetVersion(void)
//{
//    mangled_ppc("?GetVersion@PAGE@@QAAHXZ");
//};

//public: unsigned char PAGE::ValidPage(void)
//{
//    mangled_ppc("?ValidPage@PAGE@@QAAEXZ");
//};

//public: static void PREFETCH::Nta(char *, int)
//{
//    mangled_ppc("?Nta@PREFETCH@@SAXPADH@Z");
//};

//public: void FIND::ClaimFindShareLock(void)
//{
//    mangled_ppc("?ClaimFindShareLock@FIND@@QAAXXZ");
//};

//public: unsigned char SHARELOCK::ClaimShareLock(int)
//{
//    mangled_ppc("?ClaimShareLock@SHARELOCK@@QAAEH@Z");
//};

//public: static int ASSEMBLY::AtomicIncrement(int volatile *)
//{
//    mangled_ppc("?AtomicIncrement@ASSEMBLY@@SAHPCH@Z");
//};

//public: void FIND::ReleaseFindShareLock(void)
//{
//    mangled_ppc("?ReleaseFindShareLock@FIND@@QAAXXZ");
//};

//public: void SHARELOCK::ReleaseShareLock(void)
//{
//    mangled_ppc("?ReleaseShareLock@SHARELOCK@@QAAXXZ");
//};

//public: static int ASSEMBLY::AtomicDecrement(int volatile *)
//{
//    mangled_ppc("?AtomicDecrement@ASSEMBLY@@SAHPCH@Z");
//};

//private: void FIND::ChangeToExclusiveLock(void)
//{
//    mangled_ppc("?ChangeToExclusiveLock@FIND@@AAAXXZ");
//};

//public: unsigned char SHARELOCK::ChangeSharedLockToExclusiveLock(int)
//{
//    mangled_ppc("?ChangeSharedLockToExclusiveLock@SHARELOCK@@QAAEH@Z");
//};

//private: class LIST * FIND::FindHashHead(void *)
//{
//    mangled_ppc("?FindHashHead@FIND@@AAAPAVLIST@@PAX@Z");
//};

//private: struct FIND::LOOK_ASIDE * FIND::FindLookAsideHead(void *)
//{
//    mangled_ppc("?FindLookAsideHead@FIND@@AAAPAULOOK_ASIDE@1@PAX@Z");
//};

