/* ---------- headers */

#include "havok\hkbase\hkOptimizerMemorySystem.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkOptimizerMemorySystem::`RTTI Complete Object Locator'; // "??_R4hkOptimizerMemorySystem@@6B@"
// hkOptimizerMemorySystem::`RTTI Class Hierarchy Descriptor'; // "??_R3hkOptimizerMemorySystem@@8"
// hkOptimizerMemorySystem::`RTTI Base Class Array'; // "??_R2hkOptimizerMemorySystem@@8"
// hkOptimizerMemorySystem::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkOptimizerMemorySystem@@8"
// class hkOptimizerMemorySystem::`RTTI Type Descriptor'; // "??_R0?AVhkOptimizerMemorySystem@@@8"

// public: hkOptimizerMemorySystem::hkOptimizerMemorySystem(void);
// public: void hkOptimizerMemorySystem::init(class hkMemoryAllocator *, void (*)(char const *, void *), void *);
// public: virtual class hkMemoryRouter * hkOptimizerMemorySystem::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkOptimizerMemorySystem::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkOptimizerMemorySystem::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkOptimizerMemorySystem::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkOptimizerMemorySystem::printStatistics(class hkOstream &);
// public: virtual void hkOptimizerMemorySystem::advanceFrame(void);
// public: virtual enum hkResult hkOptimizerMemorySystem::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *);
// merged_83EEA670;
// public: virtual hkOptimizerMemorySystem::~hkOptimizerMemorySystem(void);
// public: virtual hkTempDetectAllocator::~hkTempDetectAllocator(void);
// public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int);
// public: static void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *);
// public: static void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int, void *);
// public: static void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new[](unsigned int, void *);
// public: static void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *, void *);
// public: static void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete[](void *, void *);
// public: hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void);
// public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hasKey(unsigned long) const;
// public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSize(void) const;
// public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getCapacity(void) const;
// public: void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemStart(void) const;
// public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::wasReallocated(void) const;
// protected: static int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isPower2(unsigned int);
// public: void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const;
// public: static void * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *);
// public: static void * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: static void * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *);
// public: static void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *, void *);
// public: static void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete[](void *, void *);
// public: hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int);
// public: hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void *, int);
// public: hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void);
// public: int hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, struct hkTempDetectAllocator::AllocInfo);
// public: class Dummy * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::findOrInsertKey(unsigned long, struct hkTempDetectAllocator::AllocInfo);
// public: void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int);
// public: hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::~hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >(void);
// public: hkMapBase<int, int, struct hkMapOperations<int> >::~hkMapBase<int, int, struct hkMapOperations<int> >(void);
// public: hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void *, int);
// public: hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::~hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void);
// public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getIterator(void) const;
// public: unsigned long hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const;
// public: struct hkTempDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getValue(class Dummy *) const;
// public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::setValue(class Dummy *, struct hkTempDetectAllocator::AllocInfo);
// public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const;
// public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::insert(class hkMemoryAllocator &, unsigned long, struct hkTempDetectAllocator::AllocInfo);
// public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findKey(unsigned long) const;
// public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findOrInsertKey(class hkMemoryAllocator &, unsigned long, struct hkTempDetectAllocator::AllocInfo);
// public: struct hkTempDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getWithDefault(unsigned long, struct hkTempDetectAllocator::AllocInfo) const;
// public: enum hkResult hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::get(unsigned long, struct hkTempDetectAllocator::AllocInfo *) const;
// public: enum hkResult hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(unsigned long);
// public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(class Dummy *);
// public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemSize(void) const;
// public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isOk(void) const;
// public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clear(void);
// public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSizeInBytesFor(int);
// protected: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::swap(class hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator> &);

//public: hkOptimizerMemorySystem::hkOptimizerMemorySystem(void)
//{
//    mangled_ppc("??0hkOptimizerMemorySystem@@QAA@XZ");
//};

//public: void hkOptimizerMemorySystem::init(class hkMemoryAllocator *, void (*)(char const *, void *), void *)
//{
//    mangled_ppc("?init@hkOptimizerMemorySystem@@QAAXPAVhkMemoryAllocator@@P6AXPBDPAX@Z2@Z");
//};

//public: virtual class hkMemoryRouter * hkOptimizerMemorySystem::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainInit@hkOptimizerMemorySystem@@UAAPAVhkMemoryRouter@@ABUFrameInfo@hkMemorySystem@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkOptimizerMemorySystem::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainQuit@hkOptimizerMemorySystem@@UAAXV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkOptimizerMemorySystem::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadInit@hkOptimizerMemorySystem@@UAAXAAVhkMemoryRouter@@PBDV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkOptimizerMemorySystem::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadQuit@hkOptimizerMemorySystem@@UAAXAAVhkMemoryRouter@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkOptimizerMemorySystem::printStatistics(class hkOstream &)
//{
//    mangled_ppc("?printStatistics@hkOptimizerMemorySystem@@UAAXAAVhkOstream@@@Z");
//};

//public: virtual void hkOptimizerMemorySystem::advanceFrame(void)
//{
//    mangled_ppc("?advanceFrame@hkOptimizerMemorySystem@@UAAXXZ");
//};

//public: virtual enum hkResult hkOptimizerMemorySystem::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *)
//{
//    mangled_ppc("?walkMemory@hkOptimizerMemorySystem@@UAA?AW4hkResult@@P6AXPAXIVhkBool@@H0@Z0@Z");
//};

//merged_83EEA670
//{
//    mangled_ppc("merged_83EEA670");
//};

//public: virtual hkOptimizerMemorySystem::~hkOptimizerMemorySystem(void)
//{
//    mangled_ppc("??1hkOptimizerMemorySystem@@UAA@XZ");
//};

//public: virtual hkTempDetectAllocator::~hkTempDetectAllocator(void)
//{
//    mangled_ppc("??1hkTempDetectAllocator@@UAA@XZ");
//};

//public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAXXZ");
//};

//public: static void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAXPAX0@Z");
//};

//public: hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??0?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hasKey(unsigned long) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@K@Z");
//};

//public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: void * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@KAHI@Z");
//};

//public: void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QBAXXZ");
//};

//public: static void * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: static void * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: static void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void *, int)
//{
//    mangled_ppc("??0?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@PAXH@Z");
//};

//public: hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, struct hkTempDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAHKUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: class Dummy * hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::findOrInsertKey(unsigned long, struct hkTempDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAPAVDummy@@KUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::~hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAA@XZ");
//};

//public: hkMapBase<int, int, struct hkMapOperations<int> >::~hkMapBase<int, int, struct hkMapOperations<int> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@HHU?$hkMapOperations@H@@@@QAA@XZ");
//};

//public: hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAA@PAXH@Z");
//};

//public: hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::~hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAVDummy@@XZ");
//};

//public: unsigned long hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAKPAVDummy@@@Z");
//};

//public: struct hkTempDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AUAllocInfo@hkTempDetectAllocator@@PAVDummy@@@Z");
//};

//public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::setValue(class Dummy *, struct hkTempDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?setValue@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAXPAVDummy@@UAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::insert(class hkMemoryAllocator &, unsigned long, struct hkTempDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAHAAVhkMemoryAllocator@@KUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findKey(unsigned long) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAVDummy@@K@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findOrInsertKey(class hkMemoryAllocator &, unsigned long, struct hkTempDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@KUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: struct hkTempDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getWithDefault(unsigned long, struct hkTempDetectAllocator::AllocInfo) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AUAllocInfo@hkTempDetectAllocator@@KU23@@Z");
//};

//public: enum hkResult hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::get(unsigned long, struct hkTempDetectAllocator::AllocInfo *) const
//{
//    mangled_ppc("?get@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AW4hkResult@@KPAUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: enum hkResult hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(unsigned long)
//{
//    mangled_ppc("?remove@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAA?AW4hkResult@@K@Z");
//};

//public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAXXZ");
//};

//public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@SAHH@Z");
//};

//protected: void hkMapBase<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::swap(class hkMap<unsigned long, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkMap@KUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

