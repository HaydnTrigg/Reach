/* ---------- headers */

#include "havok\hkbase\hkLeakDetectAllocator.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void hkLeakDetectAllocator::init(class hkMemoryAllocator *, class hkMemoryAllocator *, void (*)(char const *, void *), void *);
// public: enum hkResult hkLeakDetectAllocator::getMemorySnapshot(class hkDebugMemorySnapshot &);
// public: void hkLeakDetectAllocator::quit(void);
// protected: void * hkLeakDetectAllocator::checkedAlloc(int, int);
// protected: void hkLeakDetectAllocator::checkedFree(int, void *, int);
// public: virtual void * hkLeakDetectAllocator::blockAlloc(int);
// public: virtual void hkLeakDetectAllocator::blockFree(void *, int);
// public: virtual void * hkLeakDetectAllocator::bufAlloc(int &, int);
// public: virtual void hkLeakDetectAllocator::bufFree(void *, int, int);
// public: virtual void * hkLeakDetectAllocator::bufRealloc(void *, int, int &, int);
// protected: void hkLeakDetectAllocator::danger(char const *, void const *, struct hkLeakDetectAllocator::AllocInfo const &) const;
// public: virtual void hkLeakDetectAllocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: virtual int hkLeakDetectAllocator::getAllocatedSize(void const *, int);
// public: static void * hkLeakDetectAllocator::Dynamic::operator new(unsigned int, void *);
// public: hkLeakDetectAllocator::Dynamic::Dynamic(class hkMemoryAllocator *);
// public: void hkLeakDetectAllocator::Dynamic::quit(class hkMemoryAllocator *);
// public: void * hkLeakDetectAllocator::Dynamic::`scalar deleting destructor'(unsigned int);
// public: static void hkLeakDetectAllocator::Dynamic::operator delete(void *);
// public: hkLeakDetectAllocator::Dynamic::~Dynamic(void);
// public: hkLeakDetectAllocator::AllocInfo::AllocInfo(void);
// public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int);
// public: static void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *);
// public: static void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int, void *);
// public: static void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new[](unsigned int, void *);
// public: static void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *, void *);
// public: static void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete[](void *, void *);
// public: hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void);
// public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hasKey(unsigned long) const;
// public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSize(void) const;
// public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getCapacity(void) const;
// public: void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemStart(void) const;
// public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::wasReallocated(void) const;
// protected: static int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isPower2(unsigned int);
// public: void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const;
// public: static void * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *);
// public: static void * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: static void * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *);
// public: static void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *, void *);
// public: static void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete[](void *, void *);
// public: hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int);
// public: hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void *, int);
// public: hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void);
// public: int hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, struct hkLeakDetectAllocator::AllocInfo);
// public: class Dummy * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::findOrInsertKey(unsigned long, struct hkLeakDetectAllocator::AllocInfo);
// public: void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int);
// public: hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void *, int);
// public: hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::~hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void);
// public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getIterator(void) const;
// public: unsigned long hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const;
// public: struct hkLeakDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getValue(class Dummy *) const;
// public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::setValue(class Dummy *, struct hkLeakDetectAllocator::AllocInfo);
// public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const;
// public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::insert(class hkMemoryAllocator &, unsigned long, struct hkLeakDetectAllocator::AllocInfo);
// public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findKey(unsigned long) const;
// public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findOrInsertKey(class hkMemoryAllocator &, unsigned long, struct hkLeakDetectAllocator::AllocInfo);
// public: struct hkLeakDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getWithDefault(unsigned long, struct hkLeakDetectAllocator::AllocInfo) const;
// public: enum hkResult hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::get(unsigned long, struct hkLeakDetectAllocator::AllocInfo *) const;
// public: enum hkResult hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(unsigned long);
// public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(class Dummy *);
// public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemSize(void) const;
// public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isOk(void) const;
// public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clear(void);
// public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSizeInBytesFor(int);
// protected: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::swap(class hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator> &);

//public: void hkLeakDetectAllocator::init(class hkMemoryAllocator *, class hkMemoryAllocator *, void (*)(char const *, void *), void *)
//{
//    mangled_ppc("?init@hkLeakDetectAllocator@@QAAXPAVhkMemoryAllocator@@0P6AXPBDPAX@Z2@Z");
//};

//public: enum hkResult hkLeakDetectAllocator::getMemorySnapshot(class hkDebugMemorySnapshot &)
//{
//    mangled_ppc("?getMemorySnapshot@hkLeakDetectAllocator@@QAA?AW4hkResult@@AAVhkDebugMemorySnapshot@@@Z");
//};

//public: void hkLeakDetectAllocator::quit(void)
//{
//    mangled_ppc("?quit@hkLeakDetectAllocator@@QAAXXZ");
//};

//protected: void * hkLeakDetectAllocator::checkedAlloc(int, int)
//{
//    mangled_ppc("?checkedAlloc@hkLeakDetectAllocator@@IAAPAXHH@Z");
//};

//protected: void hkLeakDetectAllocator::checkedFree(int, void *, int)
//{
//    mangled_ppc("?checkedFree@hkLeakDetectAllocator@@IAAXHPAXH@Z");
//};

//public: virtual void * hkLeakDetectAllocator::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@hkLeakDetectAllocator@@UAAPAXH@Z");
//};

//public: virtual void hkLeakDetectAllocator::blockFree(void *, int)
//{
//    mangled_ppc("?blockFree@hkLeakDetectAllocator@@UAAXPAXH@Z");
//};

//public: virtual void * hkLeakDetectAllocator::bufAlloc(int &, int)
//{
//    mangled_ppc("?bufAlloc@hkLeakDetectAllocator@@UAAPAXAAHH@Z");
//};

//public: virtual void hkLeakDetectAllocator::bufFree(void *, int, int)
//{
//    mangled_ppc("?bufFree@hkLeakDetectAllocator@@UAAXPAXHH@Z");
//};

//public: virtual void * hkLeakDetectAllocator::bufRealloc(void *, int, int &, int)
//{
//    mangled_ppc("?bufRealloc@hkLeakDetectAllocator@@UAAPAXPAXHAAHH@Z");
//};

//protected: void hkLeakDetectAllocator::danger(char const *, void const *, struct hkLeakDetectAllocator::AllocInfo const &) const
//{
//    mangled_ppc("?danger@hkLeakDetectAllocator@@IBAXPBDPBXABUAllocInfo@1@@Z");
//};

//public: virtual void hkLeakDetectAllocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkLeakDetectAllocator@@UAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: virtual int hkLeakDetectAllocator::getAllocatedSize(void const *, int)
//{
//    mangled_ppc("?getAllocatedSize@hkLeakDetectAllocator@@UAAHPBXH@Z");
//};

//public: static void * hkLeakDetectAllocator::Dynamic::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Dynamic@hkLeakDetectAllocator@@SAPAXIPAX@Z");
//};

//public: hkLeakDetectAllocator::Dynamic::Dynamic(class hkMemoryAllocator *)
//{
//    mangled_ppc("??0Dynamic@hkLeakDetectAllocator@@QAA@PAVhkMemoryAllocator@@@Z");
//};

//public: void hkLeakDetectAllocator::Dynamic::quit(class hkMemoryAllocator *)
//{
//    mangled_ppc("?quit@Dynamic@hkLeakDetectAllocator@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: void * hkLeakDetectAllocator::Dynamic::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GDynamic@hkLeakDetectAllocator@@QAAPAXI@Z");
//};

//public: static void hkLeakDetectAllocator::Dynamic::operator delete(void *)
//{
//    mangled_ppc("??3Dynamic@hkLeakDetectAllocator@@SAXPAX@Z");
//};

//public: hkLeakDetectAllocator::Dynamic::~Dynamic(void)
//{
//    mangled_ppc("??1Dynamic@hkLeakDetectAllocator@@QAA@XZ");
//};

//public: hkLeakDetectAllocator::AllocInfo::AllocInfo(void)
//{
//    mangled_ppc("??0AllocInfo@hkLeakDetectAllocator@@QAA@XZ");
//};

//public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAXXZ");
//};

//public: static void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAXPAX0@Z");
//};

//public: hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??0?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hasKey(unsigned long) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@K@Z");
//};

//public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: void * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@KAHI@Z");
//};

//public: void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QBAXXZ");
//};

//public: static void * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: static void * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: static void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void *, int)
//{
//    mangled_ppc("??0?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@PAXH@Z");
//};

//public: hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::~hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::insert(unsigned long, struct hkLeakDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAHKUAllocInfo@hkLeakDetectAllocator@@@Z");
//};

//public: class Dummy * hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::findOrInsertKey(unsigned long, struct hkLeakDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAPAVDummy@@KUAllocInfo@hkLeakDetectAllocator@@@Z");
//};

//public: void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAA@PAXH@Z");
//};

//public: hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::~hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAVDummy@@XZ");
//};

//public: unsigned long hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAKPAVDummy@@@Z");
//};

//public: struct hkLeakDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AUAllocInfo@hkLeakDetectAllocator@@PAVDummy@@@Z");
//};

//public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::setValue(class Dummy *, struct hkLeakDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?setValue@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAXPAVDummy@@UAllocInfo@hkLeakDetectAllocator@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::insert(class hkMemoryAllocator &, unsigned long, struct hkLeakDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAHAAVhkMemoryAllocator@@KUAllocInfo@hkLeakDetectAllocator@@@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findKey(unsigned long) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAPAVDummy@@K@Z");
//};

//public: class Dummy * hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::findOrInsertKey(class hkMemoryAllocator &, unsigned long, struct hkLeakDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@KUAllocInfo@hkLeakDetectAllocator@@@Z");
//};

//public: struct hkLeakDetectAllocator::AllocInfo hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getWithDefault(unsigned long, struct hkLeakDetectAllocator::AllocInfo) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AUAllocInfo@hkLeakDetectAllocator@@KU23@@Z");
//};

//public: enum hkResult hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::get(unsigned long, struct hkLeakDetectAllocator::AllocInfo *) const
//{
//    mangled_ppc("?get@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AW4hkResult@@KPAUAllocInfo@hkLeakDetectAllocator@@@Z");
//};

//public: enum hkResult hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(unsigned long)
//{
//    mangled_ppc("?remove@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAA?AW4hkResult@@K@Z");
//};

//public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAXXZ");
//};

//public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@SAHH@Z");
//};

//protected: void hkMapBase<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator>::swap(class hkMap<unsigned long, struct hkLeakDetectAllocator::AllocInfo, struct hkMapOperations<unsigned long>, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkMap@KUAllocInfo@hkLeakDetectAllocator@@U?$hkMapOperations@K@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

