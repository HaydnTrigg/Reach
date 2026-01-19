/* ---------- headers */

#include "havok\hkbase\hkLargeBlockAllocator.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkLargeBlockAllocator::`RTTI Complete Object Locator'; // "??_R4hkLargeBlockAllocator@@6B@"
// hkLargeBlockAllocator::`RTTI Class Hierarchy Descriptor'; // "??_R3hkLargeBlockAllocator@@8"
// hkLargeBlockAllocator::`RTTI Base Class Array'; // "??_R2hkLargeBlockAllocator@@8"
// hkLargeBlockAllocator::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkLargeBlockAllocator@@8"
// class hkLargeBlockAllocator::`RTTI Type Descriptor'; // "??_R0?AVhkLargeBlockAllocator@@@8"

// public: hkLargeBlockAllocator::hkLargeBlockAllocator(class hkMemoryBlockServer *);
// public: virtual hkLargeBlockAllocator::~hkLargeBlockAllocator(void);
// public: int hkLargeBlockAllocator::getNumPotentialChunksAvailable(unsigned int);
// protected: void hkLargeBlockAllocator::_init(void);
// public: void hkLargeBlockAllocator::freeAll(void);
// protected: void hkLargeBlockAllocator::_insertLargeChunk(struct hkMemTreeChunk *, unsigned int);
// protected: void hkLargeBlockAllocator::_unlinkLargeChunk(struct hkMemTreeChunk *);
// protected: void * hkLargeBlockAllocator::_allocLarge(unsigned int);
// protected: unsigned int hkLargeBlockAllocator::_findLargestTreeBlockSize(struct hkMemTreeChunk *, unsigned int);
// public: unsigned int hkLargeBlockAllocator::findLargestBlockSize(void);
// protected: void hkLargeBlockAllocator::_makeTopValid(void) const;
// protected: void * hkLargeBlockAllocator::_allocFromTop(unsigned int);
// protected: class hkBool hkLargeBlockAllocator::_resizeSingleBlockServerPage(unsigned int);
// protected: void * hkLargeBlockAllocator::_alloc(unsigned int);
// public: virtual void * hkLargeBlockAllocator::alloc(unsigned int);
// public: virtual void * hkLargeBlockAllocator::criticalAlloc(unsigned int);
// public: virtual void hkLargeBlockAllocator::criticalFree(void *, unsigned int);
// public: void hkLargeBlockAllocator::garbageCollect(void);
// public: virtual class hkBool hkLargeBlockAllocator::isValidAlloc(void *);
// public: virtual void hkLargeBlockAllocator::free(void *);
// public: virtual unsigned int hkLargeBlockAllocator::getAllocatedSize(void const *, unsigned int);
// public: virtual unsigned int hkLargeBlockAllocator::getAllocatedSizeWithOverhead(void *, unsigned int);
// public: void hkLargeBlockAllocator::forAllAllocs(void (*)(void *, unsigned int, void *), void *);
// public: class hkLargeBlockAllocator::Iterator hkLargeBlockAllocator::getIterator(void);
// public: class hkBool hkLargeBlockAllocator::nextBlock(class hkLargeBlockAllocator::Iterator &);
// protected: unsigned int hkLargeBlockAllocator::_calculateUsed(void) const;
// public: void hkLargeBlockAllocator::calculateStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: unsigned int hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(void) const;
// protected: bool hkLargeBlockAllocator::_checkUsedAlloc(void const *);
// protected: class hkBool hkLargeBlockAllocator::_checkFreeChunk(struct hkMemChunk *);
// public: class hkBool hkLargeBlockAllocator::checkAllocations(void **, int);
// protected: static void hkLargeBlockAllocator::_addAlloc(void *, unsigned int, void *);
// public: static void hkLargeBlockAllocator::allocatorTest(class hkLargeBlockAllocator &, int);
// public: static void hkLargeBlockAllocator::selfTest(void);
// merged_83EF5F40;
// public: static void hkLargeBlockAllocator::operator delete(void *);
// protected: static unsigned int hkLargeBlockAllocator::_padRequest(unsigned int);
// protected: void hkLargeBlockAllocator::_markTreeMap(unsigned int);
// protected: bool hkLargeBlockAllocator::_isTreeMapMarked(unsigned int) const;
// protected: static unsigned int hkLargeBlockAllocator::_computeTreeIndex(unsigned int);
// protected: static int hkLargeBlockAllocator::_leftShiftForTreeIndex(int);
// protected: bool hkLargeBlockAllocator::_isOkAddress(void const *) const;
// protected: void hkLargeBlockAllocator::_clearTreeMap(unsigned int);
// public: struct hkMemChunk * hkMemChunk::chunkPlusOffset(unsigned int);
// public: void hkMemChunk::setInuseAndPinuse(unsigned int);
// public: void hkMemChunk::setSizeAndPinuseOfInuseChunk(unsigned int);
// public: void hkMemChunk::setSizeAndPinuseOfFreeChunk(unsigned int);
// public: void hkMemChunk::setFoot(unsigned int);
// public: struct hkMemTreeChunk * hkMemTreeChunk::leftMostChild(void) const;
// protected: static unsigned int hkLargeBlockAllocator::_bitToIndex(unsigned int);
// protected: static int hkLargeBlockAllocator::_leastBit(int);
// protected: static int hkLargeBlockAllocator::_leftBits(int);
// protected: static int hkLargeBlockAllocator::_indexToBit(int);
// protected: class hkBool hkLargeBlockAllocator::_hasPages(void);
// public: bool hkMemChunk::isPinuse(void) const;
// public: struct hkMemChunk * hkMemPage::getFirstChunk(void) const;
// public: struct hkMemChunk * hkMemPage::getFooter(void) const;
// public: unsigned int hkMemPage::getMaxChunkSize(void) const;
// public: struct hkMemChunk * hkMemChunk::nextChunk(void);
// public: struct hkMemChunk * hkMemChunk::previousChunk(void);
// public: char * hkMemPage::getStart(void) const;
// public: static struct hkMemChunk * hkMemChunk::toChunk(void *);
// public: static bool hkMemChunk::isAligned(void const *);
// public: char * hkMemPage::getEnd(void);
// public: struct hkMemChunk * hkMemChunk::chunkMinusOffset(unsigned int);
// public: unsigned int hkMemChunk::getPayloadSize(void);
// public: void hkMemChunk::setFreeWithPinuse(unsigned int, struct hkMemChunk *);
// public: void hkMemChunk::clearPinuse(void);
// public: hkLargeBlockAllocator::Iterator::Iterator(struct hkMemChunk *, struct hkMemPage *, struct hkMemChunk *);
// public: hkLargeBlockAllocator::Iterator::Iterator(void);
// public: hkPseudoRandomGenerator::hkPseudoRandomGenerator(int);
// public: unsigned int hkPseudoRandomGenerator::getRand32(void);
// protected: static class hkBool hkLargeBlockAllocator::_comparePointers(void *, void *);
// public: hkArray<void *, struct hkContainerHeapAllocator>::hkArray<void *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<void *, struct hkContainerHeapAllocator>::pushBack(void *const &);
// protected: static bool hkLargeBlockAllocator::_okNext<struct hkMemChunk, struct hkMemChunk>(struct hkMemChunk const *, struct hkMemChunk const *);
// char * hkAllocateStack<char>(int, char const *);
// void hkDeallocateStack<void>(void *);
// public: hkArrayBase<void *>::hkArrayBase<void *>(void);
// public: void *& hkArrayBase<void *>::operator[](int);
// public: int hkArrayBase<void *>::getSize(void) const;
// public: void hkArrayBase<void *>::clear(void);
// public: void hkArrayBase<void *>::removeAt(int);
// public: void hkArrayBase<void *>::_pushBack(class hkMemoryAllocator &, void *const &);
// public: void ** hkArrayBase<void *>::begin(void);
// public: hkArray<void *, struct hkContainerHeapAllocator>::~hkArray<void *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<void *>::~hkArrayBase<void *>(void);
// public: void hkArray<void *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<void *>::getCapacity(void) const;
// public: void hkArrayBase<void *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<void *>(void **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<void *>(void **, int, void *const &, struct hkTraitBool<1>);

//public: hkLargeBlockAllocator::hkLargeBlockAllocator(class hkMemoryBlockServer *)
//{
//    mangled_ppc("??0hkLargeBlockAllocator@@QAA@PAVhkMemoryBlockServer@@@Z");
//};

//public: virtual hkLargeBlockAllocator::~hkLargeBlockAllocator(void)
//{
//    mangled_ppc("??1hkLargeBlockAllocator@@UAA@XZ");
//};

//public: int hkLargeBlockAllocator::getNumPotentialChunksAvailable(unsigned int)
//{
//    mangled_ppc("?getNumPotentialChunksAvailable@hkLargeBlockAllocator@@QAAHI@Z");
//};

//protected: void hkLargeBlockAllocator::_init(void)
//{
//    mangled_ppc("?_init@hkLargeBlockAllocator@@IAAXXZ");
//};

//public: void hkLargeBlockAllocator::freeAll(void)
//{
//    mangled_ppc("?freeAll@hkLargeBlockAllocator@@QAAXXZ");
//};

//protected: void hkLargeBlockAllocator::_insertLargeChunk(struct hkMemTreeChunk *, unsigned int)
//{
//    mangled_ppc("?_insertLargeChunk@hkLargeBlockAllocator@@IAAXPAUhkMemTreeChunk@@I@Z");
//};

//protected: void hkLargeBlockAllocator::_unlinkLargeChunk(struct hkMemTreeChunk *)
//{
//    mangled_ppc("?_unlinkLargeChunk@hkLargeBlockAllocator@@IAAXPAUhkMemTreeChunk@@@Z");
//};

//protected: void * hkLargeBlockAllocator::_allocLarge(unsigned int)
//{
//    mangled_ppc("?_allocLarge@hkLargeBlockAllocator@@IAAPAXI@Z");
//};

//protected: unsigned int hkLargeBlockAllocator::_findLargestTreeBlockSize(struct hkMemTreeChunk *, unsigned int)
//{
//    mangled_ppc("?_findLargestTreeBlockSize@hkLargeBlockAllocator@@IAAIPAUhkMemTreeChunk@@I@Z");
//};

//public: unsigned int hkLargeBlockAllocator::findLargestBlockSize(void)
//{
//    mangled_ppc("?findLargestBlockSize@hkLargeBlockAllocator@@QAAIXZ");
//};

//protected: void hkLargeBlockAllocator::_makeTopValid(void) const
//{
//    mangled_ppc("?_makeTopValid@hkLargeBlockAllocator@@IBAXXZ");
//};

//protected: void * hkLargeBlockAllocator::_allocFromTop(unsigned int)
//{
//    mangled_ppc("?_allocFromTop@hkLargeBlockAllocator@@IAAPAXI@Z");
//};

//protected: class hkBool hkLargeBlockAllocator::_resizeSingleBlockServerPage(unsigned int)
//{
//    mangled_ppc("?_resizeSingleBlockServerPage@hkLargeBlockAllocator@@IAA?AVhkBool@@I@Z");
//};

//protected: void * hkLargeBlockAllocator::_alloc(unsigned int)
//{
//    mangled_ppc("?_alloc@hkLargeBlockAllocator@@IAAPAXI@Z");
//};

//public: virtual void * hkLargeBlockAllocator::alloc(unsigned int)
//{
//    mangled_ppc("?alloc@hkLargeBlockAllocator@@UAAPAXI@Z");
//};

//public: virtual void * hkLargeBlockAllocator::criticalAlloc(unsigned int)
//{
//    mangled_ppc("?criticalAlloc@hkLargeBlockAllocator@@UAAPAXI@Z");
//};

//public: virtual void hkLargeBlockAllocator::criticalFree(void *, unsigned int)
//{
//    mangled_ppc("?criticalFree@hkLargeBlockAllocator@@UAAXPAXI@Z");
//};

//public: void hkLargeBlockAllocator::garbageCollect(void)
//{
//    mangled_ppc("?garbageCollect@hkLargeBlockAllocator@@QAAXXZ");
//};

//public: virtual class hkBool hkLargeBlockAllocator::isValidAlloc(void *)
//{
//    mangled_ppc("?isValidAlloc@hkLargeBlockAllocator@@UAA?AVhkBool@@PAX@Z");
//};

//public: virtual void hkLargeBlockAllocator::free(void *)
//{
//    mangled_ppc("?free@hkLargeBlockAllocator@@UAAXPAX@Z");
//};

//public: virtual unsigned int hkLargeBlockAllocator::getAllocatedSize(void const *, unsigned int)
//{
//    mangled_ppc("?getAllocatedSize@hkLargeBlockAllocator@@UAAIPBXI@Z");
//};

//public: virtual unsigned int hkLargeBlockAllocator::getAllocatedSizeWithOverhead(void *, unsigned int)
//{
//    mangled_ppc("?getAllocatedSizeWithOverhead@hkLargeBlockAllocator@@UAAIPAXI@Z");
//};

//public: void hkLargeBlockAllocator::forAllAllocs(void (*)(void *, unsigned int, void *), void *)
//{
//    mangled_ppc("?forAllAllocs@hkLargeBlockAllocator@@QAAXP6AXPAXI0@Z0@Z");
//};

//public: class hkLargeBlockAllocator::Iterator hkLargeBlockAllocator::getIterator(void)
//{
//    mangled_ppc("?getIterator@hkLargeBlockAllocator@@QAA?AVIterator@1@XZ");
//};

//public: class hkBool hkLargeBlockAllocator::nextBlock(class hkLargeBlockAllocator::Iterator &)
//{
//    mangled_ppc("?nextBlock@hkLargeBlockAllocator@@QAA?AVhkBool@@AAVIterator@1@@Z");
//};

//protected: unsigned int hkLargeBlockAllocator::_calculateUsed(void) const
//{
//    mangled_ppc("?_calculateUsed@hkLargeBlockAllocator@@IBAIXZ");
//};

//public: void hkLargeBlockAllocator::calculateStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?calculateStatistics@hkLargeBlockAllocator@@QAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: unsigned int hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(void) const
//{
//    mangled_ppc("?calculateMemoryUsedByThisAllocator@hkLargeBlockAllocator@@QBAIXZ");
//};

//protected: bool hkLargeBlockAllocator::_checkUsedAlloc(void const *)
//{
//    mangled_ppc("?_checkUsedAlloc@hkLargeBlockAllocator@@IAA_NPBX@Z");
//};

//protected: class hkBool hkLargeBlockAllocator::_checkFreeChunk(struct hkMemChunk *)
//{
//    mangled_ppc("?_checkFreeChunk@hkLargeBlockAllocator@@IAA?AVhkBool@@PAUhkMemChunk@@@Z");
//};

//public: class hkBool hkLargeBlockAllocator::checkAllocations(void **, int)
//{
//    mangled_ppc("?checkAllocations@hkLargeBlockAllocator@@QAA?AVhkBool@@PAPAXH@Z");
//};

//protected: static void hkLargeBlockAllocator::_addAlloc(void *, unsigned int, void *)
//{
//    mangled_ppc("?_addAlloc@hkLargeBlockAllocator@@KAXPAXI0@Z");
//};

//public: static void hkLargeBlockAllocator::allocatorTest(class hkLargeBlockAllocator &, int)
//{
//    mangled_ppc("?allocatorTest@hkLargeBlockAllocator@@SAXAAV1@H@Z");
//};

//public: static void hkLargeBlockAllocator::selfTest(void)
//{
//    mangled_ppc("?selfTest@hkLargeBlockAllocator@@SAXXZ");
//};

//merged_83EF5F40
//{
//    mangled_ppc("merged_83EF5F40");
//};

//public: static void hkLargeBlockAllocator::operator delete(void *)
//{
//    mangled_ppc("??3hkLargeBlockAllocator@@SAXPAX@Z");
//};

//protected: static unsigned int hkLargeBlockAllocator::_padRequest(unsigned int)
//{
//    mangled_ppc("?_padRequest@hkLargeBlockAllocator@@KAII@Z");
//};

//protected: void hkLargeBlockAllocator::_markTreeMap(unsigned int)
//{
//    mangled_ppc("?_markTreeMap@hkLargeBlockAllocator@@IAAXI@Z");
//};

//protected: bool hkLargeBlockAllocator::_isTreeMapMarked(unsigned int) const
//{
//    mangled_ppc("?_isTreeMapMarked@hkLargeBlockAllocator@@IBA_NI@Z");
//};

//protected: static unsigned int hkLargeBlockAllocator::_computeTreeIndex(unsigned int)
//{
//    mangled_ppc("?_computeTreeIndex@hkLargeBlockAllocator@@KAII@Z");
//};

//protected: static int hkLargeBlockAllocator::_leftShiftForTreeIndex(int)
//{
//    mangled_ppc("?_leftShiftForTreeIndex@hkLargeBlockAllocator@@KAHH@Z");
//};

//protected: bool hkLargeBlockAllocator::_isOkAddress(void const *) const
//{
//    mangled_ppc("?_isOkAddress@hkLargeBlockAllocator@@IBA_NPBX@Z");
//};

//protected: void hkLargeBlockAllocator::_clearTreeMap(unsigned int)
//{
//    mangled_ppc("?_clearTreeMap@hkLargeBlockAllocator@@IAAXI@Z");
//};

//public: struct hkMemChunk * hkMemChunk::chunkPlusOffset(unsigned int)
//{
//    mangled_ppc("?chunkPlusOffset@hkMemChunk@@QAAPAU1@I@Z");
//};

//public: void hkMemChunk::setInuseAndPinuse(unsigned int)
//{
//    mangled_ppc("?setInuseAndPinuse@hkMemChunk@@QAAXI@Z");
//};

//public: void hkMemChunk::setSizeAndPinuseOfInuseChunk(unsigned int)
//{
//    mangled_ppc("?setSizeAndPinuseOfInuseChunk@hkMemChunk@@QAAXI@Z");
//};

//public: void hkMemChunk::setSizeAndPinuseOfFreeChunk(unsigned int)
//{
//    mangled_ppc("?setSizeAndPinuseOfFreeChunk@hkMemChunk@@QAAXI@Z");
//};

//public: void hkMemChunk::setFoot(unsigned int)
//{
//    mangled_ppc("?setFoot@hkMemChunk@@QAAXI@Z");
//};

//public: struct hkMemTreeChunk * hkMemTreeChunk::leftMostChild(void) const
//{
//    mangled_ppc("?leftMostChild@hkMemTreeChunk@@QBAPAU1@XZ");
//};

//protected: static unsigned int hkLargeBlockAllocator::_bitToIndex(unsigned int)
//{
//    mangled_ppc("?_bitToIndex@hkLargeBlockAllocator@@KAII@Z");
//};

//protected: static int hkLargeBlockAllocator::_leastBit(int)
//{
//    mangled_ppc("?_leastBit@hkLargeBlockAllocator@@KAHH@Z");
//};

//protected: static int hkLargeBlockAllocator::_leftBits(int)
//{
//    mangled_ppc("?_leftBits@hkLargeBlockAllocator@@KAHH@Z");
//};

//protected: static int hkLargeBlockAllocator::_indexToBit(int)
//{
//    mangled_ppc("?_indexToBit@hkLargeBlockAllocator@@KAHH@Z");
//};

//protected: class hkBool hkLargeBlockAllocator::_hasPages(void)
//{
//    mangled_ppc("?_hasPages@hkLargeBlockAllocator@@IAA?AVhkBool@@XZ");
//};

//public: bool hkMemChunk::isPinuse(void) const
//{
//    mangled_ppc("?isPinuse@hkMemChunk@@QBA_NXZ");
//};

//public: struct hkMemChunk * hkMemPage::getFirstChunk(void) const
//{
//    mangled_ppc("?getFirstChunk@hkMemPage@@QBAPAUhkMemChunk@@XZ");
//};

//public: struct hkMemChunk * hkMemPage::getFooter(void) const
//{
//    mangled_ppc("?getFooter@hkMemPage@@QBAPAUhkMemChunk@@XZ");
//};

//public: unsigned int hkMemPage::getMaxChunkSize(void) const
//{
//    mangled_ppc("?getMaxChunkSize@hkMemPage@@QBAIXZ");
//};

//public: struct hkMemChunk * hkMemChunk::nextChunk(void)
//{
//    mangled_ppc("?nextChunk@hkMemChunk@@QAAPAU1@XZ");
//};

//public: struct hkMemChunk * hkMemChunk::previousChunk(void)
//{
//    mangled_ppc("?previousChunk@hkMemChunk@@QAAPAU1@XZ");
//};

//public: char * hkMemPage::getStart(void) const
//{
//    mangled_ppc("?getStart@hkMemPage@@QBAPADXZ");
//};

//public: static struct hkMemChunk * hkMemChunk::toChunk(void *)
//{
//    mangled_ppc("?toChunk@hkMemChunk@@SAPAU1@PAX@Z");
//};

//public: static bool hkMemChunk::isAligned(void const *)
//{
//    mangled_ppc("?isAligned@hkMemChunk@@SA_NPBX@Z");
//};

//public: char * hkMemPage::getEnd(void)
//{
//    mangled_ppc("?getEnd@hkMemPage@@QAAPADXZ");
//};

//public: struct hkMemChunk * hkMemChunk::chunkMinusOffset(unsigned int)
//{
//    mangled_ppc("?chunkMinusOffset@hkMemChunk@@QAAPAU1@I@Z");
//};

//public: unsigned int hkMemChunk::getPayloadSize(void)
//{
//    mangled_ppc("?getPayloadSize@hkMemChunk@@QAAIXZ");
//};

//public: void hkMemChunk::setFreeWithPinuse(unsigned int, struct hkMemChunk *)
//{
//    mangled_ppc("?setFreeWithPinuse@hkMemChunk@@QAAXIPAU1@@Z");
//};

//public: void hkMemChunk::clearPinuse(void)
//{
//    mangled_ppc("?clearPinuse@hkMemChunk@@QAAXXZ");
//};

//public: hkLargeBlockAllocator::Iterator::Iterator(struct hkMemChunk *, struct hkMemPage *, struct hkMemChunk *)
//{
//    mangled_ppc("??0Iterator@hkLargeBlockAllocator@@QAA@PAUhkMemChunk@@PAUhkMemPage@@0@Z");
//};

//public: hkLargeBlockAllocator::Iterator::Iterator(void)
//{
//    mangled_ppc("??0Iterator@hkLargeBlockAllocator@@QAA@XZ");
//};

//public: hkPseudoRandomGenerator::hkPseudoRandomGenerator(int)
//{
//    mangled_ppc("??0hkPseudoRandomGenerator@@QAA@H@Z");
//};

//public: unsigned int hkPseudoRandomGenerator::getRand32(void)
//{
//    mangled_ppc("?getRand32@hkPseudoRandomGenerator@@QAAIXZ");
//};

//protected: static class hkBool hkLargeBlockAllocator::_comparePointers(void *, void *)
//{
//    mangled_ppc("?_comparePointers@hkLargeBlockAllocator@@KA?AVhkBool@@PAX0@Z");
//};

//public: hkArray<void *, struct hkContainerHeapAllocator>::hkArray<void *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAXUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<void *, struct hkContainerHeapAllocator>::pushBack(void *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAXUhkContainerHeapAllocator@@@@QAAXABQAX@Z");
//};

//protected: static bool hkLargeBlockAllocator::_okNext<struct hkMemChunk, struct hkMemChunk>(struct hkMemChunk const *, struct hkMemChunk const *)
//{
//    mangled_ppc("??$_okNext@UhkMemChunk@@U1@@hkLargeBlockAllocator@@KA_NPBUhkMemChunk@@0@Z");
//};

//char * hkAllocateStack<char>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@D@@YAPADHPBD@Z");
//};

//void hkDeallocateStack<void>(void *)
//{
//    mangled_ppc("??$hkDeallocateStack@X@@YAXPAX@Z");
//};

//public: hkArrayBase<void *>::hkArrayBase<void *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAX@@QAA@XZ");
//};

//public: void *& hkArrayBase<void *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAX@@QAAAAPAXH@Z");
//};

//public: int hkArrayBase<void *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAX@@QBAHXZ");
//};

//public: void hkArrayBase<void *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAX@@QAAXXZ");
//};

//public: void hkArrayBase<void *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAX@@QAAXH@Z");
//};

//public: void hkArrayBase<void *>::_pushBack(class hkMemoryAllocator &, void *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAX@@QAAXAAVhkMemoryAllocator@@ABQAX@Z");
//};

//public: void ** hkArrayBase<void *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAX@@QAAPAPAXXZ");
//};

//public: hkArray<void *, struct hkContainerHeapAllocator>::~hkArray<void *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAXUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<void *>::~hkArrayBase<void *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAX@@QAA@XZ");
//};

//public: void hkArray<void *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAXUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<void *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAX@@QBAHXZ");
//};

//public: void hkArrayBase<void *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAX@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<void *>(void **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAX@hkArrayUtil@@SAXPAPAXHU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<void *>(void **, int, void *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAX@hkArrayUtil@@SAXPAPAXHABQAXU?$hkTraitBool@$00@@@Z");
//};

