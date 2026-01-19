/* ---------- headers */

#include "havok\hkbase\hkFreeListAllocator.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkFreeListAllocator::`RTTI Complete Object Locator'; // "??_R4hkFreeListAllocator@@6B@"
// hkFreeListAllocator::`RTTI Class Hierarchy Descriptor'; // "??_R3hkFreeListAllocator@@8"
// hkFreeListAllocator::`RTTI Base Class Array'; // "??_R2hkFreeListAllocator@@8"
// hkFreeListAllocator::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkFreeListAllocator@@8"
// public: static unsigned int hkFreeListAllocator::s_fillReturnedToUser; // "?s_fillReturnedToUser@hkFreeListAllocator@@2IA"
// class hkFreeListAllocator::`RTTI Type Descriptor'; // "??_R0?AVhkFreeListAllocator@@@8"

// public: hkFreeListAllocator::hkFreeListAllocator(class hkMemoryBlockServer *);
// public: int hkFreeListAllocator::getNumPotentialFreeListExpansions(int);
// public: int hkFreeListAllocator::getNumPotentialChunksAvailable(unsigned int);
// public: void hkFreeListAllocator::init(class hkMemoryBlockServer *);
// public: virtual void hkFreeListAllocator::quit(void);
// public: virtual hkFreeListAllocator::~hkFreeListAllocator(void);
// public: virtual bool hkFreeListAllocator::canAllocTotal(int);
// public: virtual void hkFreeListAllocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: virtual void hkFreeListAllocator::resetPeakMemoryStatistics(void);
// public: virtual class hkBool hkFreeListAllocator::isOk(void) const;
// protected: class hkFreeList * hkFreeListAllocator::_newFreeList(unsigned int, unsigned int, unsigned int);
// protected: void hkFreeListAllocator::_deleteFreeList(class hkFreeList *);
// public: virtual int hkFreeListAllocator::getAllocatedSize(void const *, int);
// public: virtual void hkFreeListAllocator::printStatistics(class hkOstream *);
// public: virtual void * hkFreeListAllocator::bufAlloc(int &, int);
// void MEMORY_SCRUB(void *, int, int);
// public: virtual void * hkFreeListAllocator::blockAlloc(int);
// public: virtual void hkFreeListAllocator::blockAllocBatch(void **, int, int);
// void MEMORY_SCRUB_BATCH(void **, int, int, int);
// public: virtual void hkFreeListAllocator::blockFree(void *, int);
// public: virtual void hkFreeListAllocator::blockFreeBatch(void **, int, int);
// public: virtual enum hkResult hkFreeListAllocator::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *);
// public: virtual void hkFreeListAllocator::reservePagesFromSystemMemory(int);
// public: virtual void hkFreeListAllocator::garbageCollect(void);
// public: virtual void hkFreeListAllocator::incrementalGarbageCollect(int);
// public: virtual void hkFreeListAllocator::setMemorySoftLimit(unsigned int);
// public: virtual unsigned int hkFreeListAllocator::getMemorySoftLimit(void);
// public: virtual void hkFreeListAllocator::optimize(void);
// public: virtual void hkFreeListAllocator::releaseUnusedPagesToSystemMemory(void);
// public: unsigned int hkFreeList::getElementSize(void) const;
// merged_83EBFD78;
// public: static void hkFreeListAllocator::operator delete(void *);
// public: unsigned int hkFreeList::getNumFreeElements(void) const;
// public: unsigned int hkFreeList::getTotalNumElements(void) const;
// public: void hkLargeBlockAllocator::init(class hkMemoryBlockServer *);
// public: hkFreeList::~hkFreeList(void);
// protected: bool hkFreeListAllocator::_hasMemoryAvailable(unsigned int);
// public: unsigned int hkLargeBlockAllocator::getSumAllocatedSize(void) const;
// public: class hkBool hkFreeList::isFreeElementAvailable(void) const;
// public: class hkBool hkFreeList::isOk(void);
// public: static void * hkFreeList::operator new(unsigned int, void *);
// public: void * hkFreeList::`scalar deleting destructor'(unsigned int);
// public: static void hkFreeList::operator delete(void *);
// public: void * hkFreeList::alloc(void);
// public: static void hkString::memSet4(void *, int, int);
// public: void hkFreeList::allocBatch(void **, int);
// enum hkMemoryAllocator::MemoryState hkGetOutOfMemoryState(void);
// public: void hkFreeList::free(void *);
// public: void hkFreeList::freeBatch(void **, int);
// public: int hkFreeList::getTotalNumBlocks(void) const;
// public: int hkFreeList::_getTotalNumBlocks(struct hkFreeList::Block *) const;
// public: class hkBool hkLargeBlockAllocator::Iterator::isValid(void) const;
// public: unsigned int hkLargeBlockAllocator::Iterator::getSize(void) const;
// public: unsigned int hkMemChunk::getChunkSize(void) const;
// public: void * hkLargeBlockAllocator::Iterator::getAddress(void) const;
// public: void * hkMemChunk::getPayload(void);
// public: class hkBool hkLargeBlockAllocator::Iterator::isInuse(void) const;
// public: bool hkMemChunk::isInuse(void) const;
// protected: static class hkBool hkFreeListAllocator::_comparePointers(void *, void *);
// public: class hkBool hkFreeList::hasFreeBlocks(void) const;
// public: unsigned int hkFreeList::getBlockSize(void) const;
// void hkAlgorithm::quickSort<void *, class hkBool (*)(void *, void *)>(void **, int, class hkBool (*)(void *, void *));
// int hkMath::max2<int>(int, int);
// void hkAlgorithm::quickSortRecursive<void *, class hkBool (*)(void *, void *)>(void **, int, int, class hkBool (*)(void *, void *));

//public: hkFreeListAllocator::hkFreeListAllocator(class hkMemoryBlockServer *)
//{
//    mangled_ppc("??0hkFreeListAllocator@@QAA@PAVhkMemoryBlockServer@@@Z");
//};

//public: int hkFreeListAllocator::getNumPotentialFreeListExpansions(int)
//{
//    mangled_ppc("?getNumPotentialFreeListExpansions@hkFreeListAllocator@@QAAHH@Z");
//};

//public: int hkFreeListAllocator::getNumPotentialChunksAvailable(unsigned int)
//{
//    mangled_ppc("?getNumPotentialChunksAvailable@hkFreeListAllocator@@QAAHI@Z");
//};

//public: void hkFreeListAllocator::init(class hkMemoryBlockServer *)
//{
//    mangled_ppc("?init@hkFreeListAllocator@@QAAXPAVhkMemoryBlockServer@@@Z");
//};

//public: virtual void hkFreeListAllocator::quit(void)
//{
//    mangled_ppc("?quit@hkFreeListAllocator@@UAAXXZ");
//};

//public: virtual hkFreeListAllocator::~hkFreeListAllocator(void)
//{
//    mangled_ppc("??1hkFreeListAllocator@@UAA@XZ");
//};

//public: virtual bool hkFreeListAllocator::canAllocTotal(int)
//{
//    mangled_ppc("?canAllocTotal@hkFreeListAllocator@@UAA_NH@Z");
//};

//public: virtual void hkFreeListAllocator::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkFreeListAllocator@@UAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: virtual void hkFreeListAllocator::resetPeakMemoryStatistics(void)
//{
//    mangled_ppc("?resetPeakMemoryStatistics@hkFreeListAllocator@@UAAXXZ");
//};

//public: virtual class hkBool hkFreeListAllocator::isOk(void) const
//{
//    mangled_ppc("?isOk@hkFreeListAllocator@@UBA?AVhkBool@@XZ");
//};

//protected: class hkFreeList * hkFreeListAllocator::_newFreeList(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?_newFreeList@hkFreeListAllocator@@IAAPAVhkFreeList@@III@Z");
//};

//protected: void hkFreeListAllocator::_deleteFreeList(class hkFreeList *)
//{
//    mangled_ppc("?_deleteFreeList@hkFreeListAllocator@@IAAXPAVhkFreeList@@@Z");
//};

//public: virtual int hkFreeListAllocator::getAllocatedSize(void const *, int)
//{
//    mangled_ppc("?getAllocatedSize@hkFreeListAllocator@@UAAHPBXH@Z");
//};

//public: virtual void hkFreeListAllocator::printStatistics(class hkOstream *)
//{
//    mangled_ppc("?printStatistics@hkFreeListAllocator@@UAAXPAVhkOstream@@@Z");
//};

//public: virtual void * hkFreeListAllocator::bufAlloc(int &, int)
//{
//    mangled_ppc("?bufAlloc@hkFreeListAllocator@@UAAPAXAAHH@Z");
//};

//void MEMORY_SCRUB(void *, int, int)
//{
//    mangled_ppc("?MEMORY_SCRUB@@YAXPAXHH@Z");
//};

//public: virtual void * hkFreeListAllocator::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@hkFreeListAllocator@@UAAPAXH@Z");
//};

//public: virtual void hkFreeListAllocator::blockAllocBatch(void **, int, int)
//{
//    mangled_ppc("?blockAllocBatch@hkFreeListAllocator@@UAAXPAPAXHH@Z");
//};

//void MEMORY_SCRUB_BATCH(void **, int, int, int)
//{
//    mangled_ppc("?MEMORY_SCRUB_BATCH@@YAXPAPAXHHH@Z");
//};

//public: virtual void hkFreeListAllocator::blockFree(void *, int)
//{
//    mangled_ppc("?blockFree@hkFreeListAllocator@@UAAXPAXH@Z");
//};

//public: virtual void hkFreeListAllocator::blockFreeBatch(void **, int, int)
//{
//    mangled_ppc("?blockFreeBatch@hkFreeListAllocator@@UAAXPAPAXHH@Z");
//};

//public: virtual enum hkResult hkFreeListAllocator::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *)
//{
//    mangled_ppc("?walkMemory@hkFreeListAllocator@@UAA?AW4hkResult@@P6AXPAXIVhkBool@@H0@Z0@Z");
//};

//public: virtual void hkFreeListAllocator::reservePagesFromSystemMemory(int)
//{
//    mangled_ppc("?reservePagesFromSystemMemory@hkFreeListAllocator@@UAAXH@Z");
//};

//public: virtual void hkFreeListAllocator::garbageCollect(void)
//{
//    mangled_ppc("?garbageCollect@hkFreeListAllocator@@UAAXXZ");
//};

//public: virtual void hkFreeListAllocator::incrementalGarbageCollect(int)
//{
//    mangled_ppc("?incrementalGarbageCollect@hkFreeListAllocator@@UAAXH@Z");
//};

//public: virtual void hkFreeListAllocator::setMemorySoftLimit(unsigned int)
//{
//    mangled_ppc("?setMemorySoftLimit@hkFreeListAllocator@@UAAXI@Z");
//};

//public: virtual unsigned int hkFreeListAllocator::getMemorySoftLimit(void)
//{
//    mangled_ppc("?getMemorySoftLimit@hkFreeListAllocator@@UAAIXZ");
//};

//public: virtual void hkFreeListAllocator::optimize(void)
//{
//    mangled_ppc("?optimize@hkFreeListAllocator@@UAAXXZ");
//};

//public: virtual void hkFreeListAllocator::releaseUnusedPagesToSystemMemory(void)
//{
//    mangled_ppc("?releaseUnusedPagesToSystemMemory@hkFreeListAllocator@@UAAXXZ");
//};

//public: unsigned int hkFreeList::getElementSize(void) const
//{
//    mangled_ppc("?getElementSize@hkFreeList@@QBAIXZ");
//};

//merged_83EBFD78
//{
//    mangled_ppc("merged_83EBFD78");
//};

//public: static void hkFreeListAllocator::operator delete(void *)
//{
//    mangled_ppc("??3hkFreeListAllocator@@SAXPAX@Z");
//};

//public: unsigned int hkFreeList::getNumFreeElements(void) const
//{
//    mangled_ppc("?getNumFreeElements@hkFreeList@@QBAIXZ");
//};

//public: unsigned int hkFreeList::getTotalNumElements(void) const
//{
//    mangled_ppc("?getTotalNumElements@hkFreeList@@QBAIXZ");
//};

//public: void hkLargeBlockAllocator::init(class hkMemoryBlockServer *)
//{
//    mangled_ppc("?init@hkLargeBlockAllocator@@QAAXPAVhkMemoryBlockServer@@@Z");
//};

//public: hkFreeList::~hkFreeList(void)
//{
//    mangled_ppc("??1hkFreeList@@QAA@XZ");
//};

//protected: bool hkFreeListAllocator::_hasMemoryAvailable(unsigned int)
//{
//    mangled_ppc("?_hasMemoryAvailable@hkFreeListAllocator@@IAA_NI@Z");
//};

//public: unsigned int hkLargeBlockAllocator::getSumAllocatedSize(void) const
//{
//    mangled_ppc("?getSumAllocatedSize@hkLargeBlockAllocator@@QBAIXZ");
//};

//public: class hkBool hkFreeList::isFreeElementAvailable(void) const
//{
//    mangled_ppc("?isFreeElementAvailable@hkFreeList@@QBA?AVhkBool@@XZ");
//};

//public: class hkBool hkFreeList::isOk(void)
//{
//    mangled_ppc("?isOk@hkFreeList@@QAA?AVhkBool@@XZ");
//};

//public: static void * hkFreeList::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkFreeList@@SAPAXIPAX@Z");
//};

//public: void * hkFreeList::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkFreeList@@QAAPAXI@Z");
//};

//public: static void hkFreeList::operator delete(void *)
//{
//    mangled_ppc("??3hkFreeList@@SAXPAX@Z");
//};

//public: void * hkFreeList::alloc(void)
//{
//    mangled_ppc("?alloc@hkFreeList@@QAAPAXXZ");
//};

//public: static void hkString::memSet4(void *, int, int)
//{
//    mangled_ppc("?memSet4@hkString@@SAXPAXHH@Z");
//};

//public: void hkFreeList::allocBatch(void **, int)
//{
//    mangled_ppc("?allocBatch@hkFreeList@@QAAXPAPAXH@Z");
//};

//enum hkMemoryAllocator::MemoryState hkGetOutOfMemoryState(void)
//{
//    mangled_ppc("?hkGetOutOfMemoryState@@YA?AW4MemoryState@hkMemoryAllocator@@XZ");
//};

//public: void hkFreeList::free(void *)
//{
//    mangled_ppc("?free@hkFreeList@@QAAXPAX@Z");
//};

//public: void hkFreeList::freeBatch(void **, int)
//{
//    mangled_ppc("?freeBatch@hkFreeList@@QAAXPAPAXH@Z");
//};

//public: int hkFreeList::getTotalNumBlocks(void) const
//{
//    mangled_ppc("?getTotalNumBlocks@hkFreeList@@QBAHXZ");
//};

//public: int hkFreeList::_getTotalNumBlocks(struct hkFreeList::Block *) const
//{
//    mangled_ppc("?_getTotalNumBlocks@hkFreeList@@QBAHPAUBlock@1@@Z");
//};

//public: class hkBool hkLargeBlockAllocator::Iterator::isValid(void) const
//{
//    mangled_ppc("?isValid@Iterator@hkLargeBlockAllocator@@QBA?AVhkBool@@XZ");
//};

//public: unsigned int hkLargeBlockAllocator::Iterator::getSize(void) const
//{
//    mangled_ppc("?getSize@Iterator@hkLargeBlockAllocator@@QBAIXZ");
//};

//public: unsigned int hkMemChunk::getChunkSize(void) const
//{
//    mangled_ppc("?getChunkSize@hkMemChunk@@QBAIXZ");
//};

//public: void * hkLargeBlockAllocator::Iterator::getAddress(void) const
//{
//    mangled_ppc("?getAddress@Iterator@hkLargeBlockAllocator@@QBAPAXXZ");
//};

//public: void * hkMemChunk::getPayload(void)
//{
//    mangled_ppc("?getPayload@hkMemChunk@@QAAPAXXZ");
//};

//public: class hkBool hkLargeBlockAllocator::Iterator::isInuse(void) const
//{
//    mangled_ppc("?isInuse@Iterator@hkLargeBlockAllocator@@QBA?AVhkBool@@XZ");
//};

//public: bool hkMemChunk::isInuse(void) const
//{
//    mangled_ppc("?isInuse@hkMemChunk@@QBA_NXZ");
//};

//protected: static class hkBool hkFreeListAllocator::_comparePointers(void *, void *)
//{
//    mangled_ppc("?_comparePointers@hkFreeListAllocator@@KA?AVhkBool@@PAX0@Z");
//};

//public: class hkBool hkFreeList::hasFreeBlocks(void) const
//{
//    mangled_ppc("?hasFreeBlocks@hkFreeList@@QBA?AVhkBool@@XZ");
//};

//public: unsigned int hkFreeList::getBlockSize(void) const
//{
//    mangled_ppc("?getBlockSize@hkFreeList@@QBAIXZ");
//};

//void hkAlgorithm::quickSort<void *, class hkBool (*)(void *, void *)>(void **, int, class hkBool (*)(void *, void *))
//{
//    mangled_ppc("??$quickSort@PAXP6A?AVhkBool@@PAX0@Z@hkAlgorithm@@YAXPAPAXHP6A?AVhkBool@@PAX1@Z@Z");
//};

//int hkMath::max2<int>(int, int)
//{
//    mangled_ppc("??$max2@H@hkMath@@YAHHH@Z");
//};

//void hkAlgorithm::quickSortRecursive<void *, class hkBool (*)(void *, void *)>(void **, int, int, class hkBool (*)(void *, void *))
//{
//    mangled_ppc("??$quickSortRecursive@PAXP6A?AVhkBool@@PAX0@Z@hkAlgorithm@@YAXPAPAXHHP6A?AVhkBool@@PAX1@Z@Z");
//};

