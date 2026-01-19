/* ---------- headers */

#include "omaha\physics\havok_blam_memory_system.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_havok_blam_memory_system::c_havok_blam_memory_system(void);
// merged_835A1D98;
// public: hkMemorySystem::hkMemorySystem(void);
// merged_835A1E00;
// public: virtual c_havok_blam_memory_system::~c_havok_blam_memory_system(void);
// public: virtual c_fixed_memory_allocator::~c_fixed_memory_allocator(void);
// public: virtual hkSystemMemoryBlockServer::~hkSystemMemoryBlockServer(void);
// public: virtual class hkMemoryRouter * c_havok_blam_memory_system::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void c_havok_blam_memory_system::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void c_havok_blam_memory_system::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void c_havok_blam_memory_system::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual enum hkResult c_havok_blam_memory_system::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *);
// public: virtual void c_havok_blam_memory_system::printStatistics(class hkOstream &);
// public: hkMemorySystem::_PrintStatisticsInput::~_PrintStatisticsInput(void);
// unsigned char * havok_memory_get_overflow_buffer(void);
// public: c_fixed_memory_allocator::c_fixed_memory_allocator(void);
// public: virtual void c_fixed_memory_allocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: virtual int c_fixed_memory_allocator::getAllocatedSize(void const *, int);
// merged_835A23F0;
// public: void c_fixed_memory_allocator::init(class c_havok_blam_memory_system *);
// public: virtual void * c_fixed_memory_allocator::blockAlloc(int);
// public: class hkSystemMemoryBlockServer * c_havok_blam_memory_system::get_memory_server(void);
// public: virtual void c_fixed_memory_allocator::blockFree(void *, int);
// public: bool c_fixed_memory_allocator::using_overflow_memory(void);
// public: void hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::pushBack(class hkThreadMemory *const &);
// public: void hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::pushBack(struct hkStackMemory *const &);
// public: int hkFlags<enum hkMemorySystem::FlagBits, int>::get(int) const;
// public: void hkArrayBase<struct hkStackMemory *>::_pushBack(class hkMemoryAllocator &, struct hkStackMemory *const &);
// public: void hkArrayBase<class hkThreadMemory *>::_pushBack(class hkMemoryAllocator &, class hkThreadMemory *const &);
// public: static void hkArrayUtil::constructWithCopy<struct hkStackMemory *>(struct hkStackMemory **, int, struct hkStackMemory *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkThreadMemory *>(class hkThreadMemory **, int, class hkThreadMemory *const &, struct hkTraitBool<1>);
// public: void hkMemoryRouter::setTemp(class hkMemoryAllocator *);
// public: void hkMemoryRouter::setHeap(class hkMemoryAllocator *);
// public: void hkMemoryRouter::setDebug(class hkMemoryAllocator *);
// public: void hkMemoryRouter::setSolver(class hkMemoryAllocator *);
// public: void hkMemoryRouter::setGlobal(class hkMemoryAllocator *);
// public: class hkMemoryAllocator & hkContainerDebugAllocator::get(void *);
// public: class hkMemoryAllocator & hkMemoryRouter::debug(void);
// public: virtual hkThreadMemory::~hkThreadMemory(void);
// merged_835A30C8;
// public: static void hkThreadMemory::operator delete(void *);
// public: static void hkMemorySystem::operator delete(void *);
// public: virtual void hkMemorySystem::advanceFrame(void);
// public: virtual void const * hkMemorySystem::debugFindBaseAddress(void const *, int);
// public: virtual enum hkResult hkMemorySystem::getMemorySnapshot(class hkDebugMemorySnapshot &);
// public: virtual void hkMemorySystem::debugLockBaseAddress(void const *);
// public: virtual void hkMemorySystem::debugUnlockBaseAddress(void const *);
// public: virtual void hkMemorySystem::debugTagAddress(void const *, void const *);
// public: virtual void hkMemorySystem::getMemoryStatistics(struct hkMemorySystem::MemoryStatistics &);
// public: hkMemorySystem::_PrintStatisticsInput::_PrintStatisticsInput(void);
// public: virtual hkMemoryBlockServer::~hkMemoryBlockServer(void);
// merged_835A3208;
// public: static void hkMemoryBlockServer::operator delete(void *);
// public: hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>(void);
// public: hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>(void);
// public: hkArrayBase<class hkThreadMemory *>::hkArrayBase<class hkThreadMemory *>(void);
// public: hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::~hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>(void);
// public: hkArrayBase<class hkThreadMemory *>::~hkArrayBase<class hkThreadMemory *>(void);
// public: hkArrayBase<struct hkStackMemory *>::hkArrayBase<struct hkStackMemory *>(void);
// public: hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::~hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>(void);
// public: hkArrayBase<struct hkStackMemory *>::~hkArrayBase<struct hkStackMemory *>(void);
// public: void hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<class hkThreadMemory *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkStackMemory *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkArrayBase<class hkThreadMemory *>::getCapacity(void) const;
// public: void hkArrayBase<class hkThreadMemory *>::clear(void);
// public: int hkArrayBase<struct hkStackMemory *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkStackMemory *>::clear(void);
// public: static void hkArrayUtil::destruct<class hkThreadMemory *>(class hkThreadMemory **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkStackMemory *>(struct hkStackMemory **, int, struct hkTraitBool<1>);

//public: c_havok_blam_memory_system::c_havok_blam_memory_system(void)
//{
//    mangled_ppc("??0c_havok_blam_memory_system@@QAA@XZ");
//};

//merged_835A1D98
//{
//    mangled_ppc("merged_835A1D98");
//};

//public: hkMemorySystem::hkMemorySystem(void)
//{
//    mangled_ppc("??0hkMemorySystem@@QAA@XZ");
//};

//merged_835A1E00
//{
//    mangled_ppc("merged_835A1E00");
//};

//public: virtual c_havok_blam_memory_system::~c_havok_blam_memory_system(void)
//{
//    mangled_ppc("??1c_havok_blam_memory_system@@UAA@XZ");
//};

//public: virtual c_fixed_memory_allocator::~c_fixed_memory_allocator(void)
//{
//    mangled_ppc("??1c_fixed_memory_allocator@@UAA@XZ");
//};

//public: virtual hkSystemMemoryBlockServer::~hkSystemMemoryBlockServer(void)
//{
//    mangled_ppc("??1hkSystemMemoryBlockServer@@UAA@XZ");
//};

//public: virtual class hkMemoryRouter * c_havok_blam_memory_system::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainInit@c_havok_blam_memory_system@@UAAPAVhkMemoryRouter@@ABUFrameInfo@hkMemorySystem@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void c_havok_blam_memory_system::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainQuit@c_havok_blam_memory_system@@UAAXV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void c_havok_blam_memory_system::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadInit@c_havok_blam_memory_system@@UAAXAAVhkMemoryRouter@@PBDV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void c_havok_blam_memory_system::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadQuit@c_havok_blam_memory_system@@UAAXAAVhkMemoryRouter@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual enum hkResult c_havok_blam_memory_system::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *)
//{
//    mangled_ppc("?walkMemory@c_havok_blam_memory_system@@UAA?AW4hkResult@@P6AXPAXIVhkBool@@H0@Z0@Z");
//};

//public: virtual void c_havok_blam_memory_system::printStatistics(class hkOstream &)
//{
//    mangled_ppc("?printStatistics@c_havok_blam_memory_system@@UAAXAAVhkOstream@@@Z");
//};

//public: hkMemorySystem::_PrintStatisticsInput::~_PrintStatisticsInput(void)
//{
//    mangled_ppc("??1_PrintStatisticsInput@hkMemorySystem@@QAA@XZ");
//};

//unsigned char * havok_memory_get_overflow_buffer(void)
//{
//    mangled_ppc("?havok_memory_get_overflow_buffer@@YAPAEXZ");
//};

//public: c_fixed_memory_allocator::c_fixed_memory_allocator(void)
//{
//    mangled_ppc("??0c_fixed_memory_allocator@@QAA@XZ");
//};

//public: virtual void c_fixed_memory_allocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@c_fixed_memory_allocator@@UAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: virtual int c_fixed_memory_allocator::getAllocatedSize(void const *, int)
//{
//    mangled_ppc("?getAllocatedSize@c_fixed_memory_allocator@@UAAHPBXH@Z");
//};

//merged_835A23F0
//{
//    mangled_ppc("merged_835A23F0");
//};

//public: void c_fixed_memory_allocator::init(class c_havok_blam_memory_system *)
//{
//    mangled_ppc("?init@c_fixed_memory_allocator@@QAAXPAVc_havok_blam_memory_system@@@Z");
//};

//public: virtual void * c_fixed_memory_allocator::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@c_fixed_memory_allocator@@UAAPAXH@Z");
//};

//public: class hkSystemMemoryBlockServer * c_havok_blam_memory_system::get_memory_server(void)
//{
//    mangled_ppc("?get_memory_server@c_havok_blam_memory_system@@QAAPAVhkSystemMemoryBlockServer@@XZ");
//};

//public: virtual void c_fixed_memory_allocator::blockFree(void *, int)
//{
//    mangled_ppc("?blockFree@c_fixed_memory_allocator@@UAAXPAXH@Z");
//};

//public: bool c_fixed_memory_allocator::using_overflow_memory(void)
//{
//    mangled_ppc("?using_overflow_memory@c_fixed_memory_allocator@@QAA_NXZ");
//};

//public: void hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::pushBack(class hkThreadMemory *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkThreadMemory@@UhkContainerDebugAllocator@@@@QAAXABQAVhkThreadMemory@@@Z");
//};

//public: void hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::pushBack(struct hkStackMemory *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUhkStackMemory@@UhkContainerDebugAllocator@@@@QAAXABQAUhkStackMemory@@@Z");
//};

//public: int hkFlags<enum hkMemorySystem::FlagBits, int>::get(int) const
//{
//    mangled_ppc("?get@?$hkFlags@W4FlagBits@hkMemorySystem@@H@@QBAHH@Z");
//};

//public: void hkArrayBase<struct hkStackMemory *>::_pushBack(class hkMemoryAllocator &, struct hkStackMemory *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUhkStackMemory@@@@QAAXAAVhkMemoryAllocator@@ABQAUhkStackMemory@@@Z");
//};

//public: void hkArrayBase<class hkThreadMemory *>::_pushBack(class hkMemoryAllocator &, class hkThreadMemory *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkThreadMemory@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkThreadMemory@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkStackMemory *>(struct hkStackMemory **, int, struct hkStackMemory *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUhkStackMemory@@@hkArrayUtil@@SAXPAPAUhkStackMemory@@HABQAU1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkThreadMemory *>(class hkThreadMemory **, int, class hkThreadMemory *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkThreadMemory@@@hkArrayUtil@@SAXPAPAVhkThreadMemory@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkMemoryRouter::setTemp(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setTemp@hkMemoryRouter@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void hkMemoryRouter::setHeap(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setHeap@hkMemoryRouter@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void hkMemoryRouter::setDebug(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setDebug@hkMemoryRouter@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void hkMemoryRouter::setSolver(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setSolver@hkMemoryRouter@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void hkMemoryRouter::setGlobal(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setGlobal@hkMemoryRouter@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: class hkMemoryAllocator & hkContainerDebugAllocator::get(void *)
//{
//    mangled_ppc("?get@hkContainerDebugAllocator@@QAAAAVhkMemoryAllocator@@PAX@Z");
//};

//public: class hkMemoryAllocator & hkMemoryRouter::debug(void)
//{
//    mangled_ppc("?debug@hkMemoryRouter@@QAAAAVhkMemoryAllocator@@XZ");
//};

//public: virtual hkThreadMemory::~hkThreadMemory(void)
//{
//    mangled_ppc("??1hkThreadMemory@@UAA@XZ");
//};

//merged_835A30C8
//{
//    mangled_ppc("merged_835A30C8");
//};

//public: static void hkThreadMemory::operator delete(void *)
//{
//    mangled_ppc("??3hkThreadMemory@@SAXPAX@Z");
//};

//public: static void hkMemorySystem::operator delete(void *)
//{
//    mangled_ppc("??3hkMemorySystem@@SAXPAX@Z");
//};

//public: virtual void hkMemorySystem::advanceFrame(void)
//{
//    mangled_ppc("?advanceFrame@hkMemorySystem@@UAAXXZ");
//};

//public: virtual void const * hkMemorySystem::debugFindBaseAddress(void const *, int)
//{
//    mangled_ppc("?debugFindBaseAddress@hkMemorySystem@@UAAPBXPBXH@Z");
//};

//public: virtual enum hkResult hkMemorySystem::getMemorySnapshot(class hkDebugMemorySnapshot &)
//{
//    mangled_ppc("?getMemorySnapshot@hkMemorySystem@@UAA?AW4hkResult@@AAVhkDebugMemorySnapshot@@@Z");
//};

//public: virtual void hkMemorySystem::debugLockBaseAddress(void const *)
//{
//    mangled_ppc("?debugLockBaseAddress@hkMemorySystem@@UAAXPBX@Z");
//};

//public: virtual void hkMemorySystem::debugUnlockBaseAddress(void const *)
//{
//    mangled_ppc("?debugUnlockBaseAddress@hkMemorySystem@@UAAXPBX@Z");
//};

//public: virtual void hkMemorySystem::debugTagAddress(void const *, void const *)
//{
//    mangled_ppc("?debugTagAddress@hkMemorySystem@@UAAXPBX0@Z");
//};

//public: virtual void hkMemorySystem::getMemoryStatistics(struct hkMemorySystem::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkMemorySystem@@UAAXAAUMemoryStatistics@1@@Z");
//};

//public: hkMemorySystem::_PrintStatisticsInput::_PrintStatisticsInput(void)
//{
//    mangled_ppc("??0_PrintStatisticsInput@hkMemorySystem@@QAA@XZ");
//};

//public: virtual hkMemoryBlockServer::~hkMemoryBlockServer(void)
//{
//    mangled_ppc("??1hkMemoryBlockServer@@UAA@XZ");
//};

//merged_835A3208
//{
//    mangled_ppc("merged_835A3208");
//};

//public: static void hkMemoryBlockServer::operator delete(void *)
//{
//    mangled_ppc("??3hkMemoryBlockServer@@SAXPAX@Z");
//};

//public: hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkThreadMemory@@UhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUhkStackMemory@@UhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkThreadMemory *>::hkArrayBase<class hkThreadMemory *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkThreadMemory@@@@QAA@XZ");
//};

//public: hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::~hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkThreadMemory@@UhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkThreadMemory *>::~hkArrayBase<class hkThreadMemory *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkThreadMemory@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkStackMemory *>::hkArrayBase<struct hkStackMemory *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUhkStackMemory@@@@QAA@XZ");
//};

//public: hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::~hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUhkStackMemory@@UhkContainerDebugAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkStackMemory *>::~hkArrayBase<struct hkStackMemory *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUhkStackMemory@@@@QAA@XZ");
//};

//public: void hkArray<class hkThreadMemory *, struct hkContainerDebugAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkThreadMemory@@UhkContainerDebugAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkStackMemory *, struct hkContainerDebugAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUhkStackMemory@@UhkContainerDebugAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkThreadMemory *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkThreadMemory@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkStackMemory *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUhkStackMemory@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<class hkThreadMemory *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkThreadMemory@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkThreadMemory *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkThreadMemory@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkStackMemory *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUhkStackMemory@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkStackMemory *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUhkStackMemory@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkThreadMemory *>(class hkThreadMemory **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkThreadMemory@@@hkArrayUtil@@SAXPAPAVhkThreadMemory@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkStackMemory *>(struct hkStackMemory **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUhkStackMemory@@@hkArrayUtil@@SAXPAPAUhkStackMemory@@HU?$hkTraitBool@$00@@@Z");
//};

