/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkCheckingMemorySystem::`RTTI Complete Object Locator'; // "??_R4hkCheckingMemorySystem@@6B@"
// hkCheckingMemorySystem::`RTTI Class Hierarchy Descriptor'; // "??_R3hkCheckingMemorySystem@@8"
// hkCheckingMemorySystem::`RTTI Base Class Array'; // "??_R2hkCheckingMemorySystem@@8"
// hkCheckingMemorySystem::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkCheckingMemorySystem@@8"
// const hkCheckingMemorySystem::AllocatorForwarder::`RTTI Complete Object Locator'; // "??_R4AllocatorForwarder@hkCheckingMemorySystem@@6B@"
// hkCheckingMemorySystem::AllocatorForwarder::`RTTI Class Hierarchy Descriptor'; // "??_R3AllocatorForwarder@hkCheckingMemorySystem@@8"
// hkCheckingMemorySystem::AllocatorForwarder::`RTTI Base Class Array'; // "??_R2AllocatorForwarder@hkCheckingMemorySystem@@8"
// hkCheckingMemorySystem::AllocatorForwarder::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@AllocatorForwarder@hkCheckingMemorySystem@@8"
// class hkCheckingMemorySystem::`RTTI Type Descriptor'; // "??_R0?AVhkCheckingMemorySystem@@@8"
// struct hkCheckingMemorySystem::AllocatorForwarder::`RTTI Type Descriptor'; // "??_R0?AUAllocatorForwarder@hkCheckingMemorySystem@@@8"

// public: virtual void * hkCheckingMemorySystem::AllocatorForwarder::blockAlloc(int);
// public: virtual void hkCheckingMemorySystem::AllocatorForwarder::blockFree(void *, int);
// public: virtual void * hkCheckingMemorySystem::AllocatorForwarder::bufAlloc(int &, int);
// public: virtual void hkCheckingMemorySystem::AllocatorForwarder::bufFree(void *, int, int);
// public: virtual void * hkCheckingMemorySystem::AllocatorForwarder::bufRealloc(void *, int, int &, int);
// public: virtual void hkCheckingMemorySystem::AllocatorForwarder::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: virtual int hkCheckingMemorySystem::AllocatorForwarder::getAllocatedSize(void const *, int);
// public: virtual void hkCheckingMemorySystem::AllocatorForwarder::resetPeakMemoryStatistics(void);
// public: hkCheckingMemorySystem::hkCheckingMemorySystem(void);
// public: void hkCheckingMemorySystem::init(class hkMemoryAllocator *, void (*)(char const *, void *), void *);
// public: class hkBool hkCheckingMemorySystem::isInit(void);
// protected: void hkCheckingMemorySystem::danger(char const *, void const *, struct hkCheckingMemorySystem::AllocInfo const &) const;
// public: void hkCheckingMemorySystem::quit(void);
// protected: struct hkCheckingMemorySystem::AllocatorForwarder * hkCheckingMemorySystem::newAllocator(char const *, unsigned __int64, int);
// protected: void hkCheckingMemorySystem::deleteAllocators(unsigned __int64);
// protected: void hkCheckingMemorySystem::deleteAllocator(class hkMemoryAllocator *);
// public: void * hkCheckingMemorySystem::checkedAlloc(int, struct hkCheckingMemorySystem::AllocationContext const &, int);
// public: void hkCheckingMemorySystem::checkedFree(int, struct hkCheckingMemorySystem::AllocationContext const &, void *, int);
// public: int hkCheckingMemorySystem::isOk(void) const;
// public: virtual enum hkResult hkCheckingMemorySystem::getMemorySnapshot(class hkDebugMemorySnapshot &);
// public: virtual void const * hkCheckingMemorySystem::debugFindBaseAddress(void const *, int);
// public: void hkCheckingMemorySystem::debugLockBlock(void const *);
// public: void hkCheckingMemorySystem::debugUnlockBlock(void const *);
// public: virtual void hkCheckingMemorySystem::debugTagAddress(void const *, void const *);
// public: virtual class hkMemoryRouter * hkCheckingMemorySystem::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkCheckingMemorySystem::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkCheckingMemorySystem::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkCheckingMemorySystem::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkCheckingMemorySystem::printStatistics(class hkOstream &);
// public: virtual void hkCheckingMemorySystem::getMemoryStatistics(struct hkMemorySystem::MemoryStatistics &);
// public: virtual void hkCheckingMemorySystem::advanceFrame(void);
// public: virtual enum hkResult hkCheckingMemorySystem::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *);
// merged_83EE6868;
// public: static void hkCheckingMemorySystem::operator delete(void *);
// public: virtual hkCheckingMemorySystem::~hkCheckingMemorySystem(void);
// public: virtual hkPaddedAllocator::~hkPaddedAllocator(void);
// public: virtual hkDelayedFreeAllocator::~hkDelayedFreeAllocator(void);
// public: void hkStackTracer::CallTree::init(class hkMemoryAllocator *);
// public: static void * hkCheckingMemorySystem::Dynamic::operator new(unsigned int, void *);
// public: hkCheckingMemorySystem::Dynamic::Dynamic(class hkMemoryAllocator *);
// public: void hkStackTracer::CallTree::quit(void);
// public: void hkCheckingMemorySystem::Dynamic::quit(class hkMemoryAllocator *);
// public: void * hkCheckingMemorySystem::Dynamic::`scalar deleting destructor'(unsigned int);
// public: static void hkCheckingMemorySystem::Dynamic::operator delete(void *);
// public: hkCheckingMemorySystem::Dynamic::~Dynamic(void);
// public: static void * hkCheckingMemorySystem::AllocatorForwarder::operator new(unsigned int, void *);
// public: hkCheckingMemorySystem::AllocatorForwarder::AllocatorForwarder(void);
// merged_83EE6B48;
// public: static void hkCheckingMemorySystem::AllocatorForwarder::operator delete(void *);
// public: hkCheckingMemorySystem::AllocationContext::AllocationContext(void);
// public: virtual hkCheckingMemorySystem::AllocatorForwarder::~AllocatorForwarder(void);
// public: hkFlags<enum hkCheckingMemorySystem::RuleBits, int>::hkFlags<enum hkCheckingMemorySystem::RuleBits, int>(void);
// public: hkFlags<enum hkCheckingMemorySystem::RuleBits, int>::hkFlags<enum hkCheckingMemorySystem::RuleBits, int>(int);
// public: int hkFlags<enum hkCheckingMemorySystem::RuleBits, int>::get(int) const;
// public: hkFlags<enum hkCheckingMemorySystem::CheckBits, int>::hkFlags<enum hkCheckingMemorySystem::CheckBits, int>(int);
// public: int hkFlags<enum hkCheckingMemorySystem::CheckBits, int>::get(int) const;
// public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int);
// public: static void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *);
// public: static void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int, void *);
// public: static void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator new[](unsigned int, void *);
// public: static void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *, void *);
// public: static void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete[](void *, void *);
// public: hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >(void);
// public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::hasKey(unsigned long) const;
// public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getSize(void) const;
// public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getCapacity(void) const;
// public: void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getMemStart(void) const;
// public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::wasReallocated(void) const;
// protected: static int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::isPower2(unsigned int);
// public: void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const;
// public: static void * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *);
// public: static void * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: static void * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *);
// public: static void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *, void *);
// public: static void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete[](void *, void *);
// public: hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int);
// public: hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void *, int);
// public: hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void);
// public: int hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, struct hkCheckingMemorySystem::AllocInfo);
// public: class Dummy * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::findOrInsertKey(unsigned long, struct hkCheckingMemorySystem::AllocInfo);
// public: void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArrayBase<struct hkStackTracer::CallTree::Node>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: hkArrayBase<struct hkDelayedFreeAllocator::Alloc>::~hkArrayBase<struct hkDelayedFreeAllocator::Alloc>(void);
// public: hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>(void);
// public: hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::~hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>(void);
// public: struct hkCheckingMemorySystem::AllocatorForwarder *& hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::operator[](int);
// public: int hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::getSize(void) const;
// public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::removeAt(int);
// public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::_pushBack(class hkMemoryAllocator &, struct hkCheckingMemorySystem::AllocatorForwarder *const &);
// public: hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >(void *, int);
// public: hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::~hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >(void);
// public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getIterator(void) const;
// public: unsigned long hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const;
// public: struct hkCheckingMemorySystem::AllocInfo hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getValue(class Dummy *) const;
// public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::setValue(class Dummy *, struct hkCheckingMemorySystem::AllocInfo);
// public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const;
// public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::insert(class hkMemoryAllocator &, unsigned long, struct hkCheckingMemorySystem::AllocInfo);
// public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::findKey(unsigned long) const;
// public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::findOrInsertKey(class hkMemoryAllocator &, unsigned long, struct hkCheckingMemorySystem::AllocInfo);
// public: struct hkCheckingMemorySystem::AllocInfo hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getWithDefault(unsigned long, struct hkCheckingMemorySystem::AllocInfo) const;
// public: enum hkResult hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::get(unsigned long, struct hkCheckingMemorySystem::AllocInfo *) const;
// public: enum hkResult hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::remove(unsigned long);
// public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::remove(class Dummy *);
// public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getMemSize(void) const;
// public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::isOk(void) const;
// public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::clear(void);
// public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getSizeInBytesFor(int);
// protected: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::resizeTable(class hkMemoryAllocator &, int);
// struct hkDebugMemorySnapshot::PointerInfo * hkMemDebugBlockAlloc<struct hkDebugMemorySnapshot::PointerInfo>(int);
// void ** hkMemDebugBlockAlloc<void *>(int);
// public: void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::swap(class hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator> &);
// public: static unsigned int hkMapOperations<unsigned long>::hash(unsigned long, unsigned int);
// public: static void hkMapOperations<unsigned long>::invalidate(unsigned long &);
// public: static int hkMapOperations<unsigned long>::equal(unsigned long, unsigned long);
// public: int hkArrayBase<struct hkStackTracer::CallTree::Node>::getCapacity(void) const;
// public: void hkArrayBase<struct hkStackTracer::CallTree::Node>::clear(void);
// public: int hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkCheckingMemorySystem::AllocatorForwarder *>(struct hkCheckingMemorySystem::AllocatorForwarder **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkCheckingMemorySystem::AllocatorForwarder *>(struct hkCheckingMemorySystem::AllocatorForwarder **, int, struct hkCheckingMemorySystem::AllocatorForwarder *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkStackTracer::CallTree::Node>(struct hkStackTracer::CallTree::Node *, int, struct hkTraitBool<0>);

//public: virtual void * hkCheckingMemorySystem::AllocatorForwarder::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@AllocatorForwarder@hkCheckingMemorySystem@@UAAPAXH@Z");
//};

//public: virtual void hkCheckingMemorySystem::AllocatorForwarder::blockFree(void *, int)
//{
//    mangled_ppc("?blockFree@AllocatorForwarder@hkCheckingMemorySystem@@UAAXPAXH@Z");
//};

//public: virtual void * hkCheckingMemorySystem::AllocatorForwarder::bufAlloc(int &, int)
//{
//    mangled_ppc("?bufAlloc@AllocatorForwarder@hkCheckingMemorySystem@@UAAPAXAAHH@Z");
//};

//public: virtual void hkCheckingMemorySystem::AllocatorForwarder::bufFree(void *, int, int)
//{
//    mangled_ppc("?bufFree@AllocatorForwarder@hkCheckingMemorySystem@@UAAXPAXHH@Z");
//};

//public: virtual void * hkCheckingMemorySystem::AllocatorForwarder::bufRealloc(void *, int, int &, int)
//{
//    mangled_ppc("?bufRealloc@AllocatorForwarder@hkCheckingMemorySystem@@UAAPAXPAXHAAHH@Z");
//};

//public: virtual void hkCheckingMemorySystem::AllocatorForwarder::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@AllocatorForwarder@hkCheckingMemorySystem@@UAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: virtual int hkCheckingMemorySystem::AllocatorForwarder::getAllocatedSize(void const *, int)
//{
//    mangled_ppc("?getAllocatedSize@AllocatorForwarder@hkCheckingMemorySystem@@UAAHPBXH@Z");
//};

//public: virtual void hkCheckingMemorySystem::AllocatorForwarder::resetPeakMemoryStatistics(void)
//{
//    mangled_ppc("?resetPeakMemoryStatistics@AllocatorForwarder@hkCheckingMemorySystem@@UAAXXZ");
//};

//public: hkCheckingMemorySystem::hkCheckingMemorySystem(void)
//{
//    mangled_ppc("??0hkCheckingMemorySystem@@QAA@XZ");
//};

//public: void hkCheckingMemorySystem::init(class hkMemoryAllocator *, void (*)(char const *, void *), void *)
//{
//    mangled_ppc("?init@hkCheckingMemorySystem@@QAAXPAVhkMemoryAllocator@@P6AXPBDPAX@Z2@Z");
//};

//public: class hkBool hkCheckingMemorySystem::isInit(void)
//{
//    mangled_ppc("?isInit@hkCheckingMemorySystem@@QAA?AVhkBool@@XZ");
//};

//protected: void hkCheckingMemorySystem::danger(char const *, void const *, struct hkCheckingMemorySystem::AllocInfo const &) const
//{
//    mangled_ppc("?danger@hkCheckingMemorySystem@@IBAXPBDPBXABUAllocInfo@1@@Z");
//};

//public: void hkCheckingMemorySystem::quit(void)
//{
//    mangled_ppc("?quit@hkCheckingMemorySystem@@QAAXXZ");
//};

//protected: struct hkCheckingMemorySystem::AllocatorForwarder * hkCheckingMemorySystem::newAllocator(char const *, unsigned __int64, int)
//{
//    mangled_ppc("?newAllocator@hkCheckingMemorySystem@@IAAPAUAllocatorForwarder@1@PBD_KH@Z");
//};

//protected: void hkCheckingMemorySystem::deleteAllocators(unsigned __int64)
//{
//    mangled_ppc("?deleteAllocators@hkCheckingMemorySystem@@IAAX_K@Z");
//};

//protected: void hkCheckingMemorySystem::deleteAllocator(class hkMemoryAllocator *)
//{
//    mangled_ppc("?deleteAllocator@hkCheckingMemorySystem@@IAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void * hkCheckingMemorySystem::checkedAlloc(int, struct hkCheckingMemorySystem::AllocationContext const &, int)
//{
//    mangled_ppc("?checkedAlloc@hkCheckingMemorySystem@@QAAPAXHABUAllocationContext@1@H@Z");
//};

//public: void hkCheckingMemorySystem::checkedFree(int, struct hkCheckingMemorySystem::AllocationContext const &, void *, int)
//{
//    mangled_ppc("?checkedFree@hkCheckingMemorySystem@@QAAXHABUAllocationContext@1@PAXH@Z");
//};

//public: int hkCheckingMemorySystem::isOk(void) const
//{
//    mangled_ppc("?isOk@hkCheckingMemorySystem@@QBAHXZ");
//};

//public: virtual enum hkResult hkCheckingMemorySystem::getMemorySnapshot(class hkDebugMemorySnapshot &)
//{
//    mangled_ppc("?getMemorySnapshot@hkCheckingMemorySystem@@UAA?AW4hkResult@@AAVhkDebugMemorySnapshot@@@Z");
//};

//public: virtual void const * hkCheckingMemorySystem::debugFindBaseAddress(void const *, int)
//{
//    mangled_ppc("?debugFindBaseAddress@hkCheckingMemorySystem@@UAAPBXPBXH@Z");
//};

//public: void hkCheckingMemorySystem::debugLockBlock(void const *)
//{
//    mangled_ppc("?debugLockBlock@hkCheckingMemorySystem@@QAAXPBX@Z");
//};

//public: void hkCheckingMemorySystem::debugUnlockBlock(void const *)
//{
//    mangled_ppc("?debugUnlockBlock@hkCheckingMemorySystem@@QAAXPBX@Z");
//};

//public: virtual void hkCheckingMemorySystem::debugTagAddress(void const *, void const *)
//{
//    mangled_ppc("?debugTagAddress@hkCheckingMemorySystem@@UAAXPBX0@Z");
//};

//public: virtual class hkMemoryRouter * hkCheckingMemorySystem::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainInit@hkCheckingMemorySystem@@UAAPAVhkMemoryRouter@@ABUFrameInfo@hkMemorySystem@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkCheckingMemorySystem::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainQuit@hkCheckingMemorySystem@@UAAXV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkCheckingMemorySystem::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadInit@hkCheckingMemorySystem@@UAAXAAVhkMemoryRouter@@PBDV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkCheckingMemorySystem::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadQuit@hkCheckingMemorySystem@@UAAXAAVhkMemoryRouter@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkCheckingMemorySystem::printStatistics(class hkOstream &)
//{
//    mangled_ppc("?printStatistics@hkCheckingMemorySystem@@UAAXAAVhkOstream@@@Z");
//};

//public: virtual void hkCheckingMemorySystem::getMemoryStatistics(struct hkMemorySystem::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkCheckingMemorySystem@@UAAXAAUMemoryStatistics@hkMemorySystem@@@Z");
//};

//public: virtual void hkCheckingMemorySystem::advanceFrame(void)
//{
//    mangled_ppc("?advanceFrame@hkCheckingMemorySystem@@UAAXXZ");
//};

//public: virtual enum hkResult hkCheckingMemorySystem::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *)
//{
//    mangled_ppc("?walkMemory@hkCheckingMemorySystem@@UAA?AW4hkResult@@P6AXPAXIVhkBool@@H0@Z0@Z");
//};

//merged_83EE6868
//{
//    mangled_ppc("merged_83EE6868");
//};

//public: static void hkCheckingMemorySystem::operator delete(void *)
//{
//    mangled_ppc("??3hkCheckingMemorySystem@@SAXPAX@Z");
//};

//public: virtual hkCheckingMemorySystem::~hkCheckingMemorySystem(void)
//{
//    mangled_ppc("??1hkCheckingMemorySystem@@UAA@XZ");
//};

//public: virtual hkPaddedAllocator::~hkPaddedAllocator(void)
//{
//    mangled_ppc("??1hkPaddedAllocator@@UAA@XZ");
//};

//public: virtual hkDelayedFreeAllocator::~hkDelayedFreeAllocator(void)
//{
//    mangled_ppc("??1hkDelayedFreeAllocator@@UAA@XZ");
//};

//public: void hkStackTracer::CallTree::init(class hkMemoryAllocator *)
//{
//    mangled_ppc("?init@CallTree@hkStackTracer@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: static void * hkCheckingMemorySystem::Dynamic::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Dynamic@hkCheckingMemorySystem@@SAPAXIPAX@Z");
//};

//public: hkCheckingMemorySystem::Dynamic::Dynamic(class hkMemoryAllocator *)
//{
//    mangled_ppc("??0Dynamic@hkCheckingMemorySystem@@QAA@PAVhkMemoryAllocator@@@Z");
//};

//public: void hkStackTracer::CallTree::quit(void)
//{
//    mangled_ppc("?quit@CallTree@hkStackTracer@@QAAXXZ");
//};

//public: void hkCheckingMemorySystem::Dynamic::quit(class hkMemoryAllocator *)
//{
//    mangled_ppc("?quit@Dynamic@hkCheckingMemorySystem@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void * hkCheckingMemorySystem::Dynamic::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GDynamic@hkCheckingMemorySystem@@QAAPAXI@Z");
//};

//public: static void hkCheckingMemorySystem::Dynamic::operator delete(void *)
//{
//    mangled_ppc("??3Dynamic@hkCheckingMemorySystem@@SAXPAX@Z");
//};

//public: hkCheckingMemorySystem::Dynamic::~Dynamic(void)
//{
//    mangled_ppc("??1Dynamic@hkCheckingMemorySystem@@QAA@XZ");
//};

//public: static void * hkCheckingMemorySystem::AllocatorForwarder::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2AllocatorForwarder@hkCheckingMemorySystem@@SAPAXIPAX@Z");
//};

//public: hkCheckingMemorySystem::AllocatorForwarder::AllocatorForwarder(void)
//{
//    mangled_ppc("??0AllocatorForwarder@hkCheckingMemorySystem@@QAA@XZ");
//};

//merged_83EE6B48
//{
//    mangled_ppc("merged_83EE6B48");
//};

//public: static void hkCheckingMemorySystem::AllocatorForwarder::operator delete(void *)
//{
//    mangled_ppc("??3AllocatorForwarder@hkCheckingMemorySystem@@SAXPAX@Z");
//};

//public: hkCheckingMemorySystem::AllocationContext::AllocationContext(void)
//{
//    mangled_ppc("??0AllocationContext@hkCheckingMemorySystem@@QAA@XZ");
//};

//public: virtual hkCheckingMemorySystem::AllocatorForwarder::~AllocatorForwarder(void)
//{
//    mangled_ppc("??1AllocatorForwarder@hkCheckingMemorySystem@@UAA@XZ");
//};

//public: hkFlags<enum hkCheckingMemorySystem::RuleBits, int>::hkFlags<enum hkCheckingMemorySystem::RuleBits, int>(void)
//{
//    mangled_ppc("??0?$hkFlags@W4RuleBits@hkCheckingMemorySystem@@H@@QAA@XZ");
//};

//public: hkFlags<enum hkCheckingMemorySystem::RuleBits, int>::hkFlags<enum hkCheckingMemorySystem::RuleBits, int>(int)
//{
//    mangled_ppc("??0?$hkFlags@W4RuleBits@hkCheckingMemorySystem@@H@@QAA@H@Z");
//};

//public: int hkFlags<enum hkCheckingMemorySystem::RuleBits, int>::get(int) const
//{
//    mangled_ppc("?get@?$hkFlags@W4RuleBits@hkCheckingMemorySystem@@H@@QBAHH@Z");
//};

//public: hkFlags<enum hkCheckingMemorySystem::CheckBits, int>::hkFlags<enum hkCheckingMemorySystem::CheckBits, int>(int)
//{
//    mangled_ppc("??0?$hkFlags@W4CheckBits@hkCheckingMemorySystem@@H@@QAA@H@Z");
//};

//public: int hkFlags<enum hkCheckingMemorySystem::CheckBits, int>::get(int) const
//{
//    mangled_ppc("?get@?$hkFlags@W4CheckBits@hkCheckingMemorySystem@@H@@QBAHH@Z");
//};

//public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAXXZ");
//};

//public: static void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAXPAX0@Z");
//};

//public: hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??0?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::hasKey(unsigned long) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@K@Z");
//};

//public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: void * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@KAHI@Z");
//};

//public: void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QBAXXZ");
//};

//public: static void * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: static void * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: static void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void *, int)
//{
//    mangled_ppc("??0?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@PAXH@Z");
//};

//public: hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, struct hkCheckingMemorySystem::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAHKUAllocInfo@hkCheckingMemorySystem@@@Z");
//};

//public: class Dummy * hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::findOrInsertKey(unsigned long, struct hkCheckingMemorySystem::AllocInfo)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAPAVDummy@@KUAllocInfo@hkCheckingMemorySystem@@@Z");
//};

//public: void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkStackTracer::CallTree::Node>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UNode@CallTree@hkStackTracer@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: hkArrayBase<struct hkDelayedFreeAllocator::Alloc>::~hkArrayBase<struct hkDelayedFreeAllocator::Alloc>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UAlloc@hkDelayedFreeAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::~hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAA@XZ");
//};

//public: struct hkCheckingMemorySystem::AllocatorForwarder *& hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAAAAPAUAllocatorForwarder@hkCheckingMemorySystem@@H@Z");
//};

//public: int hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::_pushBack(class hkMemoryAllocator &, struct hkCheckingMemorySystem::AllocatorForwarder *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAAXAAVhkMemoryAllocator@@ABQAUAllocatorForwarder@hkCheckingMemorySystem@@@Z");
//};

//public: hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAA@PAXH@Z");
//};

//public: hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::~hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAPAVDummy@@XZ");
//};

//public: unsigned long hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAKPAVDummy@@@Z");
//};

//public: struct hkCheckingMemorySystem::AllocInfo hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AUAllocInfo@hkCheckingMemorySystem@@PAVDummy@@@Z");
//};

//public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::setValue(class Dummy *, struct hkCheckingMemorySystem::AllocInfo)
//{
//    mangled_ppc("?setValue@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAXPAVDummy@@UAllocInfo@hkCheckingMemorySystem@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::insert(class hkMemoryAllocator &, unsigned long, struct hkCheckingMemorySystem::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAHAAVhkMemoryAllocator@@KUAllocInfo@hkCheckingMemorySystem@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::findKey(unsigned long) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAPAVDummy@@K@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::findOrInsertKey(class hkMemoryAllocator &, unsigned long, struct hkCheckingMemorySystem::AllocInfo)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@KUAllocInfo@hkCheckingMemorySystem@@@Z");
//};

//public: struct hkCheckingMemorySystem::AllocInfo hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getWithDefault(unsigned long, struct hkCheckingMemorySystem::AllocInfo) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AUAllocInfo@hkCheckingMemorySystem@@KU23@@Z");
//};

//public: enum hkResult hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::get(unsigned long, struct hkCheckingMemorySystem::AllocInfo *) const
//{
//    mangled_ppc("?get@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AW4hkResult@@KPAUAllocInfo@hkCheckingMemorySystem@@@Z");
//};

//public: enum hkResult hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::remove(unsigned long)
//{
//    mangled_ppc("?remove@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAA?AW4hkResult@@K@Z");
//};

//public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAXXZ");
//};

//public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@SAHH@Z");
//};

//protected: void hkMapBase<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//struct hkDebugMemorySnapshot::PointerInfo * hkMemDebugBlockAlloc<struct hkDebugMemorySnapshot::PointerInfo>(int)
//{
//    mangled_ppc("??$hkMemDebugBlockAlloc@UPointerInfo@hkDebugMemorySnapshot@@@@YAPAUPointerInfo@hkDebugMemorySnapshot@@H@Z");
//};

//void ** hkMemDebugBlockAlloc<void *>(int)
//{
//    mangled_ppc("??$hkMemDebugBlockAlloc@PAX@@YAPAPAXH@Z");
//};

//public: void hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::swap(class hkMap<unsigned long, struct hkCheckingMemorySystem::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkMap@KUAllocInfo@hkCheckingMemorySystem@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: static unsigned int hkMapOperations<unsigned long>::hash(unsigned long, unsigned int)
//{
//    mangled_ppc("?hash@?$hkMapOperations@K@@SAIKI@Z");
//};

//public: static void hkMapOperations<unsigned long>::invalidate(unsigned long &)
//{
//    mangled_ppc("?invalidate@?$hkMapOperations@K@@SAXAAK@Z");
//};

//public: static int hkMapOperations<unsigned long>::equal(unsigned long, unsigned long)
//{
//    mangled_ppc("?equal@?$hkMapOperations@K@@SAHKK@Z");
//};

//public: int hkArrayBase<struct hkStackTracer::CallTree::Node>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UNode@CallTree@hkStackTracer@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkStackTracer::CallTree::Node>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UNode@CallTree@hkStackTracer@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkCheckingMemorySystem::AllocatorForwarder *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUAllocatorForwarder@hkCheckingMemorySystem@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkCheckingMemorySystem::AllocatorForwarder *>(struct hkCheckingMemorySystem::AllocatorForwarder **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUAllocatorForwarder@hkCheckingMemorySystem@@@hkArrayUtil@@SAXPAPAUAllocatorForwarder@hkCheckingMemorySystem@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkCheckingMemorySystem::AllocatorForwarder *>(struct hkCheckingMemorySystem::AllocatorForwarder **, int, struct hkCheckingMemorySystem::AllocatorForwarder *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUAllocatorForwarder@hkCheckingMemorySystem@@@hkArrayUtil@@SAXPAPAUAllocatorForwarder@hkCheckingMemorySystem@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkStackTracer::CallTree::Node>(struct hkStackTracer::CallTree::Node *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UNode@CallTree@hkStackTracer@@@hkArrayUtil@@SAXPAUNode@CallTree@hkStackTracer@@HU?$hkTraitBool@$0A@@@@Z");
//};

