/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkTempDetectAllocator::`RTTI Complete Object Locator'; // "??_R4hkTempDetectAllocator@@6B@"
// hkTempDetectAllocator::`RTTI Class Hierarchy Descriptor'; // "??_R3hkTempDetectAllocator@@8"
// hkTempDetectAllocator::`RTTI Base Class Array'; // "??_R2hkTempDetectAllocator@@8"
// hkTempDetectAllocator::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkTempDetectAllocator@@8"
// class hkTempDetectAllocator::`RTTI Type Descriptor'; // "??_R0?AVhkTempDetectAllocator@@@8"

// public: hkTempDetectAllocator::hkTempDetectAllocator(void);
// public: void hkTempDetectAllocator::init(class hkMemoryAllocator *, void (*)(char const *, void *), void *);
// public: `int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)'::`2'::PrintArgs::PrintArgs(class hkMemoryAllocator *);
// public: `int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)'::`2'::PrintArgs::~PrintArgs(void);
// public: static void `int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)'::`2'::PrintArgs::appendToBuffer(char const *, void *);
// public: void hkTempDetectAllocator::quit(void);
// int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int);
// public: virtual void * hkTempDetectAllocator::blockAlloc(int);
// public: virtual void hkTempDetectAllocator::blockFree(void *, int);
// public: virtual void * hkTempDetectAllocator::bufAlloc(int &, int);
// public: virtual void hkTempDetectAllocator::bufFree(void *, int, int);
// public: virtual void * hkTempDetectAllocator::bufRealloc(void *, int, int &, int);
// public: void hkTempDetectAllocator::advanceFrame(void);
// public: virtual void hkTempDetectAllocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: virtual int hkTempDetectAllocator::getAllocatedSize(void const *, int);
// merged_83F0B478;
// public: static void hkTempDetectAllocator::operator delete(void *);
// public: class hkBool hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::hasKey(void *) const;
// public: int hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getSize(void) const;
// public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<void *, int, struct hkMapOperations<void *> >::operator new(unsigned int);
// public: static void hkMapBase<void *, int, struct hkMapOperations<void *> >::operator delete(void *);
// public: static void * hkMapBase<void *, int, struct hkMapOperations<void *> >::operator new(unsigned int, void *);
// public: static void * hkMapBase<void *, int, struct hkMapOperations<void *> >::operator new[](unsigned int, void *);
// public: static void hkMapBase<void *, int, struct hkMapOperations<void *> >::operator delete(void *, void *);
// public: static void hkMapBase<void *, int, struct hkMapOperations<void *> >::operator delete[](void *, void *);
// public: hkMapBase<void *, int, struct hkMapOperations<void *> >::hkMapBase<void *, int, struct hkMapOperations<void *> >(void);
// public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::hasKey(void *) const;
// public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getSize(void) const;
// public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getCapacity(void) const;
// public: void * hkMapBase<void *, int, struct hkMapOperations<void *> >::getMemStart(void) const;
// public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::wasReallocated(void) const;
// protected: static int hkMapBase<void *, int, struct hkMapOperations<void *> >::isPower2(unsigned int);
// public: hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >(void *, int);
// public: class Dummy * hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getIterator(void) const;
// public: struct hkTempDetectAllocator::AllocInfo hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getValue(class Dummy *) const;
// public: class Dummy * hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::isValid(class Dummy *) const;
// public: int hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::insert(class hkMemoryAllocator &, void *, struct hkTempDetectAllocator::AllocInfo);
// public: class Dummy * hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::findKey(void *) const;
// public: enum hkResult hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::get(void *, struct hkTempDetectAllocator::AllocInfo *) const;
// public: enum hkResult hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::remove(void *);
// public: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::remove(class Dummy *);
// public: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: hkMapBase<int, int, struct hkMapOperations<int> >::hkMapBase<int, int, struct hkMapOperations<int> >(void *, int);
// public: static void hkMapOperations<int>::invalidate(int &);
// public: class Dummy * hkMapBase<int, int, struct hkMapOperations<int> >::getIterator(void) const;
// public: static int hkMapOperations<int>::isValid(int);
// public: int hkMapBase<int, int, struct hkMapOperations<int> >::getKey(class Dummy *) const;
// public: int hkMapBase<int, int, struct hkMapOperations<int> >::getValue(class Dummy *) const;
// public: class Dummy * hkMapBase<int, int, struct hkMapOperations<int> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<int, int, struct hkMapOperations<int> >::isValid(class Dummy *) const;
// public: int hkMapBase<int, int, struct hkMapOperations<int> >::insert(class hkMemoryAllocator &, int, int);
// public: static unsigned int hkMapOperations<int>::hash(int, unsigned int);
// public: static int hkMapOperations<int>::equal(int, int);
// public: int hkMapBase<int, int, struct hkMapOperations<int> >::getWithDefault(int, int) const;
// public: void hkMapBase<int, int, struct hkMapOperations<int> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: hkMapBase<void *, int, struct hkMapOperations<void *> >::hkMapBase<void *, int, struct hkMapOperations<void *> >(void *, int);
// public: hkMapBase<void *, int, struct hkMapOperations<void *> >::~hkMapBase<void *, int, struct hkMapOperations<void *> >(void);
// public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::getIterator(void) const;
// public: void * hkMapBase<void *, int, struct hkMapOperations<void *> >::getKey(class Dummy *) const;
// public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getValue(class Dummy *) const;
// public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::setValue(class Dummy *, int);
// public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::isValid(class Dummy *) const;
// public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::insert(class hkMemoryAllocator &, void *, int);
// public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::findKey(void *) const;
// public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::findOrInsertKey(class hkMemoryAllocator &, void *, int);
// public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getWithDefault(void *, int) const;
// public: enum hkResult hkMapBase<void *, int, struct hkMapOperations<void *> >::get(void *, int *) const;
// public: enum hkResult hkMapBase<void *, int, struct hkMapOperations<void *> >::remove(void *);
// public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::remove(class Dummy *);
// public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getMemSize(void) const;
// public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::isOk(void) const;
// public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::clear(void);
// public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<void *, int, struct hkMapOperations<void *> >::getSizeInBytesFor(int);
// protected: void hkMapBase<void *, int, struct hkMapOperations<void *> >::resizeTable(class hkMemoryAllocator &, int);
// public: void hkArrayBase<char>::_append(class hkMemoryAllocator &, char const *, int);
// protected: static int hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::isPower2(unsigned int);
// protected: static int hkMapBase<int, int, struct hkMapOperations<int> >::isPower2(unsigned int);
// public: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::clear(void);
// protected: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMapBase<int, int, struct hkMapOperations<int> >::clear(void);
// protected: void hkMapBase<int, int, struct hkMapOperations<int> >::resizeTable(class hkMemoryAllocator &, int);

//public: hkTempDetectAllocator::hkTempDetectAllocator(void)
//{
//    mangled_ppc("??0hkTempDetectAllocator@@QAA@XZ");
//};

//public: void hkTempDetectAllocator::init(class hkMemoryAllocator *, void (*)(char const *, void *), void *)
//{
//    mangled_ppc("?init@hkTempDetectAllocator@@QAAXPAVhkMemoryAllocator@@P6AXPBDPAX@Z2@Z");
//};

//public: `int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)'::`2'::PrintArgs::PrintArgs(class hkMemoryAllocator *)
//{
//    mangled_ppc("??0PrintArgs@?1??shouldIgnoreCallstack@@YAHPAVhkStackTracer@@PAVhkMemoryAllocator@@PBKH@Z@QAA@1@Z");
//};

//public: `int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)'::`2'::PrintArgs::~PrintArgs(void)
//{
//    mangled_ppc("??1PrintArgs@?1??shouldIgnoreCallstack@@YAHPAVhkStackTracer@@PAVhkMemoryAllocator@@PBKH@Z@QAA@XZ");
//};

//public: static void `int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)'::`2'::PrintArgs::appendToBuffer(char const *, void *)
//{
//    mangled_ppc("?appendToBuffer@PrintArgs@?1??shouldIgnoreCallstack@@YAHPAVhkStackTracer@@PAVhkMemoryAllocator@@PBKH@Z@SAXPBDPAX@Z");
//};

//public: void hkTempDetectAllocator::quit(void)
//{
//    mangled_ppc("?quit@hkTempDetectAllocator@@QAAXXZ");
//};

//int shouldIgnoreCallstack(class hkStackTracer *, class hkMemoryAllocator *, unsigned long const *, int)
//{
//    mangled_ppc("?shouldIgnoreCallstack@@YAHPAVhkStackTracer@@PAVhkMemoryAllocator@@PBKH@Z");
//};

//public: virtual void * hkTempDetectAllocator::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@hkTempDetectAllocator@@UAAPAXH@Z");
//};

//public: virtual void hkTempDetectAllocator::blockFree(void *, int)
//{
//    mangled_ppc("?blockFree@hkTempDetectAllocator@@UAAXPAXH@Z");
//};

//public: virtual void * hkTempDetectAllocator::bufAlloc(int &, int)
//{
//    mangled_ppc("?bufAlloc@hkTempDetectAllocator@@UAAPAXAAHH@Z");
//};

//public: virtual void hkTempDetectAllocator::bufFree(void *, int, int)
//{
//    mangled_ppc("?bufFree@hkTempDetectAllocator@@UAAXPAXHH@Z");
//};

//public: virtual void * hkTempDetectAllocator::bufRealloc(void *, int, int &, int)
//{
//    mangled_ppc("?bufRealloc@hkTempDetectAllocator@@UAAPAXPAXHAAHH@Z");
//};

//public: void hkTempDetectAllocator::advanceFrame(void)
//{
//    mangled_ppc("?advanceFrame@hkTempDetectAllocator@@QAAXXZ");
//};

//public: virtual void hkTempDetectAllocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkTempDetectAllocator@@UAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: virtual int hkTempDetectAllocator::getAllocatedSize(void const *, int)
//{
//    mangled_ppc("?getAllocatedSize@hkTempDetectAllocator@@UAAHPBXH@Z");
//};

//merged_83F0B478
//{
//    mangled_ppc("merged_83F0B478");
//};

//public: static void hkTempDetectAllocator::operator delete(void *)
//{
//    mangled_ppc("??3hkTempDetectAllocator@@SAXPAX@Z");
//};

//public: class hkBool hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::hasKey(void *) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBA?AVhkBool@@PAX@Z");
//};

//public: int hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBAHXZ");
//};

//public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAXXZ");
//};

//public: static void * hkMapBase<void *, int, struct hkMapOperations<void *> >::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<void *, int, struct hkMapOperations<void *> >::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<void *, int, struct hkMapOperations<void *> >::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<void *, int, struct hkMapOperations<void *> >::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<void *, int, struct hkMapOperations<void *> >::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<void *, int, struct hkMapOperations<void *> >::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAXPAX0@Z");
//};

//public: hkMapBase<void *, int, struct hkMapOperations<void *> >::hkMapBase<void *, int, struct hkMapOperations<void *> >(void)
//{
//    mangled_ppc("??0?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::hasKey(void *) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBA?AVhkBool@@PAX@Z");
//};

//public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAHXZ");
//};

//public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAHXZ");
//};

//public: void * hkMapBase<void *, int, struct hkMapOperations<void *> >::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<void *, int, struct hkMapOperations<void *> >::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@KAHI@Z");
//};

//public: hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAA@PAXH@Z");
//};

//public: class Dummy * hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBAPAVDummy@@XZ");
//};

//public: struct hkTempDetectAllocator::AllocInfo hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBA?AUAllocInfo@hkTempDetectAllocator@@PAVDummy@@@Z");
//};

//public: class Dummy * hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::insert(class hkMemoryAllocator &, void *, struct hkTempDetectAllocator::AllocInfo)
//{
//    mangled_ppc("?insert@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAAHAAVhkMemoryAllocator@@PAXUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: class Dummy * hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::findKey(void *) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBAPAVDummy@@PAX@Z");
//};

//public: enum hkResult hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::get(void *, struct hkTempDetectAllocator::AllocInfo *) const
//{
//    mangled_ppc("?get@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QBA?AW4hkResult@@PAXPAUAllocInfo@hkTempDetectAllocator@@@Z");
//};

//public: enum hkResult hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::remove(void *)
//{
//    mangled_ppc("?remove@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAA?AW4hkResult@@PAX@Z");
//};

//public: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAAXPAVDummy@@@Z");
//};

//public: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: hkMapBase<int, int, struct hkMapOperations<int> >::hkMapBase<int, int, struct hkMapOperations<int> >(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@HHU?$hkMapOperations@H@@@@QAA@PAXH@Z");
//};

//public: static void hkMapOperations<int>::invalidate(int &)
//{
//    mangled_ppc("?invalidate@?$hkMapOperations@H@@SAXAAH@Z");
//};

//public: class Dummy * hkMapBase<int, int, struct hkMapOperations<int> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@HHU?$hkMapOperations@H@@@@QBAPAVDummy@@XZ");
//};

//public: static int hkMapOperations<int>::isValid(int)
//{
//    mangled_ppc("?isValid@?$hkMapOperations@H@@SAHH@Z");
//};

//public: int hkMapBase<int, int, struct hkMapOperations<int> >::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@HHU?$hkMapOperations@H@@@@QBAHPAVDummy@@@Z");
//};

//public: int hkMapBase<int, int, struct hkMapOperations<int> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@HHU?$hkMapOperations@H@@@@QBAHPAVDummy@@@Z");
//};

//public: class Dummy * hkMapBase<int, int, struct hkMapOperations<int> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@HHU?$hkMapOperations@H@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<int, int, struct hkMapOperations<int> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@HHU?$hkMapOperations@H@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<int, int, struct hkMapOperations<int> >::insert(class hkMemoryAllocator &, int, int)
//{
//    mangled_ppc("?insert@?$hkMapBase@HHU?$hkMapOperations@H@@@@QAAHAAVhkMemoryAllocator@@HH@Z");
//};

//public: static unsigned int hkMapOperations<int>::hash(int, unsigned int)
//{
//    mangled_ppc("?hash@?$hkMapOperations@H@@SAIHI@Z");
//};

//public: static int hkMapOperations<int>::equal(int, int)
//{
//    mangled_ppc("?equal@?$hkMapOperations@H@@SAHHH@Z");
//};

//public: int hkMapBase<int, int, struct hkMapOperations<int> >::getWithDefault(int, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@HHU?$hkMapOperations@H@@@@QBAHHH@Z");
//};

//public: void hkMapBase<int, int, struct hkMapOperations<int> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@HHU?$hkMapOperations@H@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: hkMapBase<void *, int, struct hkMapOperations<void *> >::hkMapBase<void *, int, struct hkMapOperations<void *> >(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAA@PAXH@Z");
//};

//public: hkMapBase<void *, int, struct hkMapOperations<void *> >::~hkMapBase<void *, int, struct hkMapOperations<void *> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAPAVDummy@@XZ");
//};

//public: void * hkMapBase<void *, int, struct hkMapOperations<void *> >::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAPAXPAVDummy@@@Z");
//};

//public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAHPAVDummy@@@Z");
//};

//public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::setValue(class Dummy *, int)
//{
//    mangled_ppc("?setValue@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAXPAVDummy@@H@Z");
//};

//public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::insert(class hkMemoryAllocator &, void *, int)
//{
//    mangled_ppc("?insert@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAHAAVhkMemoryAllocator@@PAXH@Z");
//};

//public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::findKey(void *) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAPAVDummy@@PAX@Z");
//};

//public: class Dummy * hkMapBase<void *, int, struct hkMapOperations<void *> >::findOrInsertKey(class hkMemoryAllocator &, void *, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@PAXH@Z");
//};

//public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getWithDefault(void *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAHPAXH@Z");
//};

//public: enum hkResult hkMapBase<void *, int, struct hkMapOperations<void *> >::get(void *, int *) const
//{
//    mangled_ppc("?get@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBA?AW4hkResult@@PAXPAH@Z");
//};

//public: enum hkResult hkMapBase<void *, int, struct hkMapOperations<void *> >::remove(void *)
//{
//    mangled_ppc("?remove@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAA?AW4hkResult@@PAX@Z");
//};

//public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<void *, int, struct hkMapOperations<void *> >::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<void *, int, struct hkMapOperations<void *> >::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAXXZ");
//};

//public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<void *, int, struct hkMapOperations<void *> >::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<void *, int, struct hkMapOperations<void *> >::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@SAHH@Z");
//};

//protected: void hkMapBase<void *, int, struct hkMapOperations<void *> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@PAXHU?$hkMapOperations@PAX@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<char>::_append(class hkMemoryAllocator &, char const *, int)
//{
//    mangled_ppc("?_append@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@PBDH@Z");
//};

//protected: static int hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@KAHI@Z");
//};

//protected: static int hkMapBase<int, int, struct hkMapOperations<int> >::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@HHU?$hkMapOperations@H@@@@KAHI@Z");
//};

//public: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@QAAXXZ");
//};

//protected: void hkMapBase<void *, struct hkTempDetectAllocator::AllocInfo, struct hkMapOperations<void *> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@PAXUAllocInfo@hkTempDetectAllocator@@U?$hkMapOperations@PAX@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMapBase<int, int, struct hkMapOperations<int> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@HHU?$hkMapOperations@H@@@@QAAXXZ");
//};

//protected: void hkMapBase<int, int, struct hkMapOperations<int> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@HHU?$hkMapOperations@H@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

