/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkFreeList::hkFreeList(unsigned int, unsigned int, unsigned int, class hkFreeListAllocatorServer *);
// public: hkFreeList::hkFreeList(void);
// protected: void hkFreeList::_init(unsigned int, unsigned int, unsigned int, class hkFreeListAllocatorServer *);
// public: void hkFreeList::init(unsigned int, unsigned int, unsigned int, class hkFreeListAllocatorServer *);
// protected: class hkBool hkFreeList::_checkFreeBlocks(void);
// protected: int hkFreeList::_freeBlocks(struct hkFreeList::Block *);
// public: void hkFreeList::freeAllMemory(void);
// protected: int hkFreeList::_calcBlockFree(struct hkFreeList::Block *);
// public: class hkBool hkFreeList::incrementalFindGarbage(int, int &);
// protected: unsigned int hkFreeList::_calcNumFreeElements(void) const;
// protected: static unsigned int hkFreeList::_calcTotalNumElements(struct hkFreeList::Block *);
// protected: unsigned int hkFreeList::_calculateBlockAllocatedSize(struct hkFreeList::Block *);
// protected: unsigned int hkFreeList::_calcTotalNumElements(void) const;
// public: int hkFreeList::findGarbage(void);
// protected: void hkFreeList::_walkMemoryBlockList(struct hkFreeList::Block *, void (*)(void *, unsigned int, class hkBool, int, void *), int, void *);
// public: void hkFreeList::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), int, void *);
// public: int hkFreeList::freeAllFreeBlocks(void);
// public: void hkFreeList::freeSmallFreeBlocks(unsigned int);
// protected: void * hkFreeList::addSpace(void);
// public: static unsigned int hkFreeList::bestBlockSize(unsigned int, unsigned int);
// public: void hkFreeList::freeAll(void);
// public: void hkFreeList::calculateStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// public: void hkFreeList::getBlocks(void **, int);
// protected: static class hkBool hkFreeList::_compareElements(struct hkFreeList::Element const *, struct hkFreeList::Element const *);
// protected: static class hkBool hkFreeList::_compareBlocks(struct hkFreeList::Block const *, struct hkFreeList::Block const *);
// protected: void hkFreeList::_addBlockElements(struct hkFreeList::Block *);
// public: struct hkFreeList::Element *& hkFixedArray<struct hkFreeList::Element *>::operator[](int);
// public: struct hkFreeList::Element ** hkFixedArray<struct hkFreeList::Element *>::begin(void);
// public: hkLocalBuffer<struct hkFreeList::Element *>::hkLocalBuffer<struct hkFreeList::Element *>(int, char const *);
// public: hkLocalBuffer<struct hkFreeList::Element *>::~hkLocalBuffer<struct hkFreeList::Element *>(void);
// void hkAlgorithm::quickSort<struct hkFreeList::Element *, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element *)>(struct hkFreeList::Element **, int, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element const *));
// void hkAlgorithm::quickSort<struct hkFreeList::Block *, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block *)>(struct hkFreeList::Block **, int, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block const *));
// protected: hkFixedArray<struct hkFreeList::Element *>::hkFixedArray<struct hkFreeList::Element *>(void);
// public: void hkPadSpu<struct hkFreeList::Element **>::operator=(struct hkFreeList::Element **);
// public: struct hkFreeList::Element ** hkPadSpu<struct hkFreeList::Element **>::val(void) const;
// public: struct hkFreeList::Element ** hkPadSpu<struct hkFreeList::Element **>::operator struct hkFreeList::Element **(void) const;
// public: hkPadSpu<struct hkFreeList::Element **>::hkPadSpu<struct hkFreeList::Element **>(void);
// struct hkFreeList::Element ** hkAllocateStack<struct hkFreeList::Element *>(int, char const *);
// void hkDeallocateStack<struct hkFreeList::Element *>(struct hkFreeList::Element **);
// void hkAlgorithm::quickSortRecursive<struct hkFreeList::Element *, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element *)>(struct hkFreeList::Element **, int, int, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element const *));
// void hkAlgorithm::quickSortRecursive<struct hkFreeList::Block *, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block *)>(struct hkFreeList::Block **, int, int, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block const *));

//public: hkFreeList::hkFreeList(unsigned int, unsigned int, unsigned int, class hkFreeListAllocatorServer *)
//{
//    mangled_ppc("??0hkFreeList@@QAA@IIIPAVhkFreeListAllocatorServer@@@Z");
//};

//public: hkFreeList::hkFreeList(void)
//{
//    mangled_ppc("??0hkFreeList@@QAA@XZ");
//};

//protected: void hkFreeList::_init(unsigned int, unsigned int, unsigned int, class hkFreeListAllocatorServer *)
//{
//    mangled_ppc("?_init@hkFreeList@@IAAXIIIPAVhkFreeListAllocatorServer@@@Z");
//};

//public: void hkFreeList::init(unsigned int, unsigned int, unsigned int, class hkFreeListAllocatorServer *)
//{
//    mangled_ppc("?init@hkFreeList@@QAAXIIIPAVhkFreeListAllocatorServer@@@Z");
//};

//protected: class hkBool hkFreeList::_checkFreeBlocks(void)
//{
//    mangled_ppc("?_checkFreeBlocks@hkFreeList@@IAA?AVhkBool@@XZ");
//};

//protected: int hkFreeList::_freeBlocks(struct hkFreeList::Block *)
//{
//    mangled_ppc("?_freeBlocks@hkFreeList@@IAAHPAUBlock@1@@Z");
//};

//public: void hkFreeList::freeAllMemory(void)
//{
//    mangled_ppc("?freeAllMemory@hkFreeList@@QAAXXZ");
//};

//protected: int hkFreeList::_calcBlockFree(struct hkFreeList::Block *)
//{
//    mangled_ppc("?_calcBlockFree@hkFreeList@@IAAHPAUBlock@1@@Z");
//};

//public: class hkBool hkFreeList::incrementalFindGarbage(int, int &)
//{
//    mangled_ppc("?incrementalFindGarbage@hkFreeList@@QAA?AVhkBool@@HAAH@Z");
//};

//protected: unsigned int hkFreeList::_calcNumFreeElements(void) const
//{
//    mangled_ppc("?_calcNumFreeElements@hkFreeList@@IBAIXZ");
//};

//protected: static unsigned int hkFreeList::_calcTotalNumElements(struct hkFreeList::Block *)
//{
//    mangled_ppc("?_calcTotalNumElements@hkFreeList@@KAIPAUBlock@1@@Z");
//};

//protected: unsigned int hkFreeList::_calculateBlockAllocatedSize(struct hkFreeList::Block *)
//{
//    mangled_ppc("?_calculateBlockAllocatedSize@hkFreeList@@IAAIPAUBlock@1@@Z");
//};

//protected: unsigned int hkFreeList::_calcTotalNumElements(void) const
//{
//    mangled_ppc("?_calcTotalNumElements@hkFreeList@@IBAIXZ");
//};

//public: int hkFreeList::findGarbage(void)
//{
//    mangled_ppc("?findGarbage@hkFreeList@@QAAHXZ");
//};

//protected: void hkFreeList::_walkMemoryBlockList(struct hkFreeList::Block *, void (*)(void *, unsigned int, class hkBool, int, void *), int, void *)
//{
//    mangled_ppc("?_walkMemoryBlockList@hkFreeList@@IAAXPAUBlock@1@P6AXPAXIVhkBool@@H1@ZH1@Z");
//};

//public: void hkFreeList::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), int, void *)
//{
//    mangled_ppc("?walkMemory@hkFreeList@@QAAXP6AXPAXIVhkBool@@H0@ZH0@Z");
//};

//public: int hkFreeList::freeAllFreeBlocks(void)
//{
//    mangled_ppc("?freeAllFreeBlocks@hkFreeList@@QAAHXZ");
//};

//public: void hkFreeList::freeSmallFreeBlocks(unsigned int)
//{
//    mangled_ppc("?freeSmallFreeBlocks@hkFreeList@@QAAXI@Z");
//};

//protected: void * hkFreeList::addSpace(void)
//{
//    mangled_ppc("?addSpace@hkFreeList@@IAAPAXXZ");
//};

//public: static unsigned int hkFreeList::bestBlockSize(unsigned int, unsigned int)
//{
//    mangled_ppc("?bestBlockSize@hkFreeList@@SAIII@Z");
//};

//public: void hkFreeList::freeAll(void)
//{
//    mangled_ppc("?freeAll@hkFreeList@@QAAXXZ");
//};

//public: void hkFreeList::calculateStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?calculateStatistics@hkFreeList@@QAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//public: void hkFreeList::getBlocks(void **, int)
//{
//    mangled_ppc("?getBlocks@hkFreeList@@QAAXPAPAXH@Z");
//};

//protected: static class hkBool hkFreeList::_compareElements(struct hkFreeList::Element const *, struct hkFreeList::Element const *)
//{
//    mangled_ppc("?_compareElements@hkFreeList@@KA?AVhkBool@@PBUElement@1@0@Z");
//};

//protected: static class hkBool hkFreeList::_compareBlocks(struct hkFreeList::Block const *, struct hkFreeList::Block const *)
//{
//    mangled_ppc("?_compareBlocks@hkFreeList@@KA?AVhkBool@@PBUBlock@1@0@Z");
//};

//protected: void hkFreeList::_addBlockElements(struct hkFreeList::Block *)
//{
//    mangled_ppc("?_addBlockElements@hkFreeList@@IAAXPAUBlock@1@@Z");
//};

//public: struct hkFreeList::Element *& hkFixedArray<struct hkFreeList::Element *>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@PAUElement@hkFreeList@@@@QAAAAPAUElement@hkFreeList@@H@Z");
//};

//public: struct hkFreeList::Element ** hkFixedArray<struct hkFreeList::Element *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@PAUElement@hkFreeList@@@@QAAPAPAUElement@hkFreeList@@XZ");
//};

//public: hkLocalBuffer<struct hkFreeList::Element *>::hkLocalBuffer<struct hkFreeList::Element *>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@PAUElement@hkFreeList@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<struct hkFreeList::Element *>::~hkLocalBuffer<struct hkFreeList::Element *>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@PAUElement@hkFreeList@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<struct hkFreeList::Element *, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element *)>(struct hkFreeList::Element **, int, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element const *))
//{
//    mangled_ppc("??$quickSort@PAUElement@hkFreeList@@P6A?AVhkBool@@PBU12@0@Z@hkAlgorithm@@YAXPAPAUElement@hkFreeList@@HP6A?AVhkBool@@PBU12@1@Z@Z");
//};

//void hkAlgorithm::quickSort<struct hkFreeList::Block *, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block *)>(struct hkFreeList::Block **, int, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block const *))
//{
//    mangled_ppc("??$quickSort@PAUBlock@hkFreeList@@P6A?AVhkBool@@PBU12@0@Z@hkAlgorithm@@YAXPAPAUBlock@hkFreeList@@HP6A?AVhkBool@@PBU12@1@Z@Z");
//};

//protected: hkFixedArray<struct hkFreeList::Element *>::hkFixedArray<struct hkFreeList::Element *>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@PAUElement@hkFreeList@@@@IAA@XZ");
//};

//public: void hkPadSpu<struct hkFreeList::Element **>::operator=(struct hkFreeList::Element **)
//{
//    mangled_ppc("??4?$hkPadSpu@PAPAUElement@hkFreeList@@@@QAAXPAPAUElement@hkFreeList@@@Z");
//};

//public: struct hkFreeList::Element ** hkPadSpu<struct hkFreeList::Element **>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAPAUElement@hkFreeList@@@@QBAPAPAUElement@hkFreeList@@XZ");
//};

//public: struct hkFreeList::Element ** hkPadSpu<struct hkFreeList::Element **>::operator struct hkFreeList::Element **(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAPAUElement@hkFreeList@@@@QBAPAPAUElement@hkFreeList@@XZ");
//};

//public: hkPadSpu<struct hkFreeList::Element **>::hkPadSpu<struct hkFreeList::Element **>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAPAUElement@hkFreeList@@@@QAA@XZ");
//};

//struct hkFreeList::Element ** hkAllocateStack<struct hkFreeList::Element *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PAUElement@hkFreeList@@@@YAPAPAUElement@hkFreeList@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkFreeList::Element *>(struct hkFreeList::Element **)
//{
//    mangled_ppc("??$hkDeallocateStack@PAUElement@hkFreeList@@@@YAXPAPAUElement@hkFreeList@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkFreeList::Element *, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element *)>(struct hkFreeList::Element **, int, int, class hkBool (*)(struct hkFreeList::Element const *, struct hkFreeList::Element const *))
//{
//    mangled_ppc("??$quickSortRecursive@PAUElement@hkFreeList@@P6A?AVhkBool@@PBU12@0@Z@hkAlgorithm@@YAXPAPAUElement@hkFreeList@@HHP6A?AVhkBool@@PBU12@1@Z@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkFreeList::Block *, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block *)>(struct hkFreeList::Block **, int, int, class hkBool (*)(struct hkFreeList::Block const *, struct hkFreeList::Block const *))
//{
//    mangled_ppc("??$quickSortRecursive@PAUBlock@hkFreeList@@P6A?AVhkBool@@PBU12@0@Z@hkAlgorithm@@YAXPAPAUBlock@hkFreeList@@HHP6A?AVhkBool@@PBU12@1@Z@Z");
//};

