/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpWorldOperationQueue::hkpWorldOperationQueue(class hkpWorld *);
// public: hkpWorldOperationQueue::~hkpWorldOperationQueue(void);
// public: void hkpWorldOperationQueue::queueOperation(struct hkWorldOperation::BaseOperation const &);
// void addReferenceTo(class hkReferencedObject *);
// void removeReferenceFrom(class hkReferencedObject *);
// public: void hkpWorldOperationQueue::queueBodyOperation(class hkpEntity *, class hkpBodyOperation *, int, enum hkpBodyOperation::ExecutionState);
// bool hkpWorldBodyOperationQueueSortCmp(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry const &);
// public: void hkpWorldOperationQueue::executeAllPendingBodyOperations(void);
// public: void hkpWorldOperationQueue::executeAllPending(void);
// class hkBool islandLess(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands const &);
// public: static void hkpDebugInfoOnPendingOperationQueues::init(class hkpWorld *);
// public: static void hkpDebugInfoOnPendingOperationQueues::cleanup(class hkpWorld *);
// public: static void hkpDebugInfoOnPendingOperationQueues::updateNextPendingOperationIndex(class hkpWorld *, int);
// public: static void hkpDebugInfoOnPendingOperationQueues::addNextPendingOperationQueue(class hkpWorld *, class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> *);
// public: static void hkpDebugInfoOnPendingOperationQueues::removeLastPendingOperationQueue(class hkpWorld *, class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> *);
// public: static int hkpDebugInfoOnPendingOperationQueues::getNumPendingOperationQueues(class hkpWorld *);
// public: static struct hkWorldOperation::BaseOperation const * hkpDebugInfoOnPendingOperationQueues::findFirstPendingIslandMerge(class hkpWorld *, class hkpSimulationIsland *, class hkpSimulationIsland *);
// public: static class hkBool const hkpDebugInfoOnPendingOperationQueues::areEmpty(class hkpWorld *);
// public: hkpBodyOperation::UpdateInfo::UpdateInfo(void);
// public: static void * hkpDebugInfoOnPendingOperationQueues::operator new(unsigned int);
// public: hkpDebugInfoOnPendingOperationQueues::hkpDebugInfoOnPendingOperationQueues(class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> *);
// public: static void hkpDebugInfoOnPendingOperationQueues::operator delete(void *);
// public: static void * hkAabb::operator new(unsigned int);
// public: static void hkAabb::operator delete(void *);
// public: static struct hkpDebugInfoOnPendingOperationQueues * hkpDebugInfoOnPendingOperationQueues::getLastQueue(struct hkpDebugInfoOnPendingOperationQueues *);
// public: enum hkWorldOperation::Type hkEnum<enum hkWorldOperation::Type, unsigned char>::operator enum hkWorldOperation::Type(void) const;
// public: class hkBool hkEnum<enum hkWorldOperation::Type, unsigned char>::operator!=(enum hkWorldOperation::Type) const;
// public: enum hkpEntityActivation hkEnum<enum hkpEntityActivation, unsigned char>::operator enum hkpEntityActivation(void) const;
// public: enum hkpUpdateCollisionFilterOnEntityMode hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>::operator enum hkpUpdateCollisionFilterOnEntityMode(void) const;
// public: enum hkpUpdateCollectionFilterMode hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>::operator enum hkpUpdateCollectionFilterMode(void) const;
// public: enum hkpUpdateCollisionFilterOnWorldMode hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>::operator enum hkpUpdateCollisionFilterOnWorldMode(void) const;
// public: hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>(void);
// public: struct hkWorldOperation::BiggestOperation & hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::pushBack(struct hkWorldOperation::MergeIslands const &);
// public: hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::reserve(int);
// public: struct hkpBodyOperationEntry & hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArrayBase<struct hkWorldOperation::BiggestOperation>::hkArrayBase<struct hkWorldOperation::BiggestOperation>(void);
// public: struct hkWorldOperation::BiggestOperation & hkArrayBase<struct hkWorldOperation::BiggestOperation>::operator[](int);
// public: void hkArrayBase<struct hkWorldOperation::BiggestOperation>::popBack(int);
// public: struct hkWorldOperation::BiggestOperation & hkArrayBase<struct hkWorldOperation::BiggestOperation>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::~hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkWorldOperation::BiggestOperation>::~hkArrayBase<struct hkWorldOperation::BiggestOperation>(void);
// public: void hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<struct hkWorldOperation::MergeIslands>::hkArrayBase<struct hkWorldOperation::MergeIslands>(void);
// public: struct hkWorldOperation::MergeIslands & hkArrayBase<struct hkWorldOperation::MergeIslands>::operator[](int);
// public: struct hkWorldOperation::MergeIslands & hkArrayBase<struct hkWorldOperation::MergeIslands>::back(void);
// public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::popBack(int);
// public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::_pushBack(class hkMemoryAllocator &, struct hkWorldOperation::MergeIslands const &);
// public: struct hkWorldOperation::MergeIslands * hkArrayBase<struct hkWorldOperation::MergeIslands>::begin(void);
// public: hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::~hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkWorldOperation::MergeIslands>::~hkArrayBase<struct hkWorldOperation::MergeIslands>(void);
// public: hkArrayBase<struct hkpBodyOperationEntry>::hkArrayBase<struct hkpBodyOperationEntry>(void);
// public: struct hkpBodyOperationEntry & hkArrayBase<struct hkpBodyOperationEntry>::operator[](int);
// public: void hkArrayBase<struct hkpBodyOperationEntry>::_reserve(class hkMemoryAllocator &, int);
// public: struct hkpBodyOperationEntry & hkArrayBase<struct hkpBodyOperationEntry>::_expandOne(class hkMemoryAllocator &);
// public: struct hkpBodyOperationEntry * hkArrayBase<struct hkpBodyOperationEntry>::begin(void);
// public: hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::~hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpBodyOperationEntry>::~hkArrayBase<struct hkpBodyOperationEntry>(void);
// public: void hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator> &);
// class hkpEntity ** hkAllocateChunk<class hkpEntity *>(int, int);
// class hkpPhantom ** hkAllocateChunk<class hkpPhantom *>(int, int);
// void hkAlgorithm::quickSort<struct hkpBodyOperationEntry, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry)>(struct hkpBodyOperationEntry *, int, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry const &));
// void hkAlgorithm::quickSort<struct hkWorldOperation::MergeIslands, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands)>(struct hkWorldOperation::MergeIslands *, int, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands const &));
// void hkDeallocateChunk<class hkpEntity *>(class hkpEntity **, int, int);
// public: static void hkReferencedObject::removeReferences<class hkpPhantom>(class hkpPhantom const *const *, int, int);
// public: class hkReferencedObject const * hkpPhantom::iMustBeDerivedFromReferencedObject(void) const;
// void hkDeallocateChunk<class hkpPhantom *>(class hkpPhantom **, int, int);
// void hkDeallocateChunk<class hkVector4>(class hkVector4*, int, int);
// void hkDeallocateChunk<class hkAabb>(class hkAabb *, int, int);
// public: static void hkArrayUtil::construct<struct hkWorldOperation::BiggestOperation>(struct hkWorldOperation::BiggestOperation *, int, struct hkTraitBool<0>);
// public: hkWorldOperation::BiggestOperation::BiggestOperation(void);
// public: static void hkArrayUtil::constructWithCopy<struct hkWorldOperation::MergeIslands>(struct hkWorldOperation::MergeIslands *, int, struct hkWorldOperation::MergeIslands const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpBodyOperationEntry>(struct hkpBodyOperationEntry *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSortRecursive<struct hkpBodyOperationEntry, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry)>(struct hkpBodyOperationEntry *, int, int, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry const &));
// void hkAlgorithm::quickSortRecursive<struct hkWorldOperation::MergeIslands, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands)>(struct hkWorldOperation::MergeIslands *, int, int, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands const &));

//public: hkpWorldOperationQueue::hkpWorldOperationQueue(class hkpWorld *)
//{
//    mangled_ppc("??0hkpWorldOperationQueue@@QAA@PAVhkpWorld@@@Z");
//};

//public: hkpWorldOperationQueue::~hkpWorldOperationQueue(void)
//{
//    mangled_ppc("??1hkpWorldOperationQueue@@QAA@XZ");
//};

//public: void hkpWorldOperationQueue::queueOperation(struct hkWorldOperation::BaseOperation const &)
//{
//    mangled_ppc("?queueOperation@hkpWorldOperationQueue@@QAAXABUBaseOperation@hkWorldOperation@@@Z");
//};

//void addReferenceTo(class hkReferencedObject *)
//{
//    mangled_ppc("?addReferenceTo@@YAXPAVhkReferencedObject@@@Z");
//};

//void removeReferenceFrom(class hkReferencedObject *)
//{
//    mangled_ppc("?removeReferenceFrom@@YAXPAVhkReferencedObject@@@Z");
//};

//public: void hkpWorldOperationQueue::queueBodyOperation(class hkpEntity *, class hkpBodyOperation *, int, enum hkpBodyOperation::ExecutionState)
//{
//    mangled_ppc("?queueBodyOperation@hkpWorldOperationQueue@@QAAXPAVhkpEntity@@PAVhkpBodyOperation@@HW4ExecutionState@3@@Z");
//};

//bool hkpWorldBodyOperationQueueSortCmp(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry const &)
//{
//    mangled_ppc("?hkpWorldBodyOperationQueueSortCmp@@YA_NABUhkpBodyOperationEntry@@0@Z");
//};

//public: void hkpWorldOperationQueue::executeAllPendingBodyOperations(void)
//{
//    mangled_ppc("?executeAllPendingBodyOperations@hkpWorldOperationQueue@@QAAXXZ");
//};

//public: void hkpWorldOperationQueue::executeAllPending(void)
//{
//    mangled_ppc("?executeAllPending@hkpWorldOperationQueue@@QAAXXZ");
//};

//class hkBool islandLess(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands const &)
//{
//    mangled_ppc("?islandLess@@YA?AVhkBool@@ABUMergeIslands@hkWorldOperation@@0@Z");
//};

//public: static void hkpDebugInfoOnPendingOperationQueues::init(class hkpWorld *)
//{
//    mangled_ppc("?init@hkpDebugInfoOnPendingOperationQueues@@SAXPAVhkpWorld@@@Z");
//};

//public: static void hkpDebugInfoOnPendingOperationQueues::cleanup(class hkpWorld *)
//{
//    mangled_ppc("?cleanup@hkpDebugInfoOnPendingOperationQueues@@SAXPAVhkpWorld@@@Z");
//};

//public: static void hkpDebugInfoOnPendingOperationQueues::updateNextPendingOperationIndex(class hkpWorld *, int)
//{
//    mangled_ppc("?updateNextPendingOperationIndex@hkpDebugInfoOnPendingOperationQueues@@SAXPAVhkpWorld@@H@Z");
//};

//public: static void hkpDebugInfoOnPendingOperationQueues::addNextPendingOperationQueue(class hkpWorld *, class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?addNextPendingOperationQueue@hkpDebugInfoOnPendingOperationQueues@@SAXPAVhkpWorld@@PAV?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkpDebugInfoOnPendingOperationQueues::removeLastPendingOperationQueue(class hkpWorld *, class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?removeLastPendingOperationQueue@hkpDebugInfoOnPendingOperationQueues@@SAXPAVhkpWorld@@PAV?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static int hkpDebugInfoOnPendingOperationQueues::getNumPendingOperationQueues(class hkpWorld *)
//{
//    mangled_ppc("?getNumPendingOperationQueues@hkpDebugInfoOnPendingOperationQueues@@SAHPAVhkpWorld@@@Z");
//};

//public: static struct hkWorldOperation::BaseOperation const * hkpDebugInfoOnPendingOperationQueues::findFirstPendingIslandMerge(class hkpWorld *, class hkpSimulationIsland *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?findFirstPendingIslandMerge@hkpDebugInfoOnPendingOperationQueues@@SAPBUBaseOperation@hkWorldOperation@@PAVhkpWorld@@PAVhkpSimulationIsland@@1@Z");
//};

//public: static class hkBool const hkpDebugInfoOnPendingOperationQueues::areEmpty(class hkpWorld *)
//{
//    mangled_ppc("?areEmpty@hkpDebugInfoOnPendingOperationQueues@@SA?BVhkBool@@PAVhkpWorld@@@Z");
//};

//public: hkpBodyOperation::UpdateInfo::UpdateInfo(void)
//{
//    mangled_ppc("??0UpdateInfo@hkpBodyOperation@@QAA@XZ");
//};

//public: static void * hkpDebugInfoOnPendingOperationQueues::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpDebugInfoOnPendingOperationQueues@@SAPAXI@Z");
//};

//public: hkpDebugInfoOnPendingOperationQueues::hkpDebugInfoOnPendingOperationQueues(class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("??0hkpDebugInfoOnPendingOperationQueues@@QAA@PAV?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkpDebugInfoOnPendingOperationQueues::operator delete(void *)
//{
//    mangled_ppc("??3hkpDebugInfoOnPendingOperationQueues@@SAXPAX@Z");
//};

//public: static void * hkAabb::operator new(unsigned int)
//{
//    mangled_ppc("??2hkAabb@@SAPAXI@Z");
//};

//public: static void hkAabb::operator delete(void *)
//{
//    mangled_ppc("??3hkAabb@@SAXPAX@Z");
//};

//public: static struct hkpDebugInfoOnPendingOperationQueues * hkpDebugInfoOnPendingOperationQueues::getLastQueue(struct hkpDebugInfoOnPendingOperationQueues *)
//{
//    mangled_ppc("?getLastQueue@hkpDebugInfoOnPendingOperationQueues@@SAPAU1@PAU1@@Z");
//};

//public: enum hkWorldOperation::Type hkEnum<enum hkWorldOperation::Type, unsigned char>::operator enum hkWorldOperation::Type(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4Type@hkWorldOperation@@E@@QBA?AW4Type@hkWorldOperation@@XZ");
//};

//public: class hkBool hkEnum<enum hkWorldOperation::Type, unsigned char>::operator!=(enum hkWorldOperation::Type) const
//{
//    mangled_ppc("??9?$hkEnum@W4Type@hkWorldOperation@@E@@QBA?AVhkBool@@W4Type@hkWorldOperation@@@Z");
//};

//public: enum hkpEntityActivation hkEnum<enum hkpEntityActivation, unsigned char>::operator enum hkpEntityActivation(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpEntityActivation@@E@@QBA?AW4hkpEntityActivation@@XZ");
//};

//public: enum hkpUpdateCollisionFilterOnEntityMode hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>::operator enum hkpUpdateCollisionFilterOnEntityMode(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpUpdateCollisionFilterOnEntityMode@@E@@QBA?AW4hkpUpdateCollisionFilterOnEntityMode@@XZ");
//};

//public: enum hkpUpdateCollectionFilterMode hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>::operator enum hkpUpdateCollectionFilterMode(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpUpdateCollectionFilterMode@@E@@QBA?AW4hkpUpdateCollectionFilterMode@@XZ");
//};

//public: enum hkpUpdateCollisionFilterOnWorldMode hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>::operator enum hkpUpdateCollisionFilterOnWorldMode(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpUpdateCollisionFilterOnWorldMode@@E@@QBA?AW4hkpUpdateCollisionFilterOnWorldMode@@XZ");
//};

//public: hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkWorldOperation::BiggestOperation & hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAAAAUBiggestOperation@hkWorldOperation@@XZ");
//};

//public: hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UMergeIslands@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::pushBack(struct hkWorldOperation::MergeIslands const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UMergeIslands@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAAXABUMergeIslands@hkWorldOperation@@@Z");
//};

//public: hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkpBodyOperationEntry & hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@QAAAAUhkpBodyOperationEntry@@XZ");
//};

//public: hkArrayBase<struct hkWorldOperation::BiggestOperation>::hkArrayBase<struct hkWorldOperation::BiggestOperation>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAA@XZ");
//};

//public: struct hkWorldOperation::BiggestOperation & hkArrayBase<struct hkWorldOperation::BiggestOperation>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAAAAUBiggestOperation@hkWorldOperation@@H@Z");
//};

//public: void hkArrayBase<struct hkWorldOperation::BiggestOperation>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAAXH@Z");
//};

//public: struct hkWorldOperation::BiggestOperation & hkArrayBase<struct hkWorldOperation::BiggestOperation>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAAAAUBiggestOperation@hkWorldOperation@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::~hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkWorldOperation::BiggestOperation>::~hkArrayBase<struct hkWorldOperation::BiggestOperation>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QAA@XZ");
//};

//public: void hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<struct hkWorldOperation::MergeIslands>::hkArrayBase<struct hkWorldOperation::MergeIslands>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAA@XZ");
//};

//public: struct hkWorldOperation::MergeIslands & hkArrayBase<struct hkWorldOperation::MergeIslands>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAAAUMergeIslands@hkWorldOperation@@H@Z");
//};

//public: struct hkWorldOperation::MergeIslands & hkArrayBase<struct hkWorldOperation::MergeIslands>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAAAUMergeIslands@hkWorldOperation@@XZ");
//};

//public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkWorldOperation::MergeIslands>::_pushBack(class hkMemoryAllocator &, struct hkWorldOperation::MergeIslands const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAXAAVhkMemoryAllocator@@ABUMergeIslands@hkWorldOperation@@@Z");
//};

//public: struct hkWorldOperation::MergeIslands * hkArrayBase<struct hkWorldOperation::MergeIslands>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAAPAUMergeIslands@hkWorldOperation@@XZ");
//};

//public: hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>::~hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UMergeIslands@hkWorldOperation@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkWorldOperation::MergeIslands>::~hkArrayBase<struct hkWorldOperation::MergeIslands>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpBodyOperationEntry>::hkArrayBase<struct hkpBodyOperationEntry>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpBodyOperationEntry@@@@QAA@XZ");
//};

//public: struct hkpBodyOperationEntry & hkArrayBase<struct hkpBodyOperationEntry>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpBodyOperationEntry@@@@QAAAAUhkpBodyOperationEntry@@H@Z");
//};

//public: void hkArrayBase<struct hkpBodyOperationEntry>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkpBodyOperationEntry@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpBodyOperationEntry & hkArrayBase<struct hkpBodyOperationEntry>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkpBodyOperationEntry@@@@QAAAAUhkpBodyOperationEntry@@AAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpBodyOperationEntry * hkArrayBase<struct hkpBodyOperationEntry>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpBodyOperationEntry@@@@QAAPAUhkpBodyOperationEntry@@XZ");
//};

//public: hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::~hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpBodyOperationEntry>::~hkArrayBase<struct hkpBodyOperationEntry>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpBodyOperationEntry@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//class hkpEntity ** hkAllocateChunk<class hkpEntity *>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@PAVhkpEntity@@@@YAPAPAVhkpEntity@@HH@Z");
//};

//class hkpPhantom ** hkAllocateChunk<class hkpPhantom *>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@PAVhkpPhantom@@@@YAPAPAVhkpPhantom@@HH@Z");
//};

//void hkAlgorithm::quickSort<struct hkpBodyOperationEntry, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry)>(struct hkpBodyOperationEntry *, int, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry const &))
//{
//    mangled_ppc("??$quickSort@UhkpBodyOperationEntry@@P6A_NABU1@0@Z@hkAlgorithm@@YAXPAUhkpBodyOperationEntry@@HP6A_NABU1@1@Z@Z");
//};

//void hkAlgorithm::quickSort<struct hkWorldOperation::MergeIslands, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands)>(struct hkWorldOperation::MergeIslands *, int, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands const &))
//{
//    mangled_ppc("??$quickSort@UMergeIslands@hkWorldOperation@@P6A?AVhkBool@@ABU12@0@Z@hkAlgorithm@@YAXPAUMergeIslands@hkWorldOperation@@HP6A?AVhkBool@@ABU12@1@Z@Z");
//};

//void hkDeallocateChunk<class hkpEntity *>(class hkpEntity **, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@PAVhkpEntity@@@@YAXPAPAVhkpEntity@@HH@Z");
//};

//public: static void hkReferencedObject::removeReferences<class hkpPhantom>(class hkpPhantom const *const *, int, int)
//{
//    mangled_ppc("??$removeReferences@VhkpPhantom@@@hkReferencedObject@@SAXPBQBVhkpPhantom@@HH@Z");
//};

//public: class hkReferencedObject const * hkpPhantom::iMustBeDerivedFromReferencedObject(void) const
//{
//    mangled_ppc("?iMustBeDerivedFromReferencedObject@hkpPhantom@@QBAPBVhkReferencedObject@@XZ");
//};

//void hkDeallocateChunk<class hkpPhantom *>(class hkpPhantom **, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@PAVhkpPhantom@@@@YAXPAPAVhkpPhantom@@HH@Z");
//};

//void hkDeallocateChunk<class hkVector4>(class hkVector4*, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@VhkVector4@@@@YAXPAVhkVector4@@HH@Z");
//};

//void hkDeallocateChunk<class hkAabb>(class hkAabb *, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@VhkAabb@@@@YAXPAVhkAabb@@HH@Z");
//};

//public: static void hkArrayUtil::construct<struct hkWorldOperation::BiggestOperation>(struct hkWorldOperation::BiggestOperation *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UBiggestOperation@hkWorldOperation@@@hkArrayUtil@@SAXPAUBiggestOperation@hkWorldOperation@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkWorldOperation::BiggestOperation::BiggestOperation(void)
//{
//    mangled_ppc("??0BiggestOperation@hkWorldOperation@@QAA@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkWorldOperation::MergeIslands>(struct hkWorldOperation::MergeIslands *, int, struct hkWorldOperation::MergeIslands const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UMergeIslands@hkWorldOperation@@@hkArrayUtil@@SAXPAUMergeIslands@hkWorldOperation@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpBodyOperationEntry>(struct hkpBodyOperationEntry *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpBodyOperationEntry@@@hkArrayUtil@@SAXPAUhkpBodyOperationEntry@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkpBodyOperationEntry, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry)>(struct hkpBodyOperationEntry *, int, int, bool (*)(struct hkpBodyOperationEntry const &, struct hkpBodyOperationEntry const &))
//{
//    mangled_ppc("??$quickSortRecursive@UhkpBodyOperationEntry@@P6A_NABU1@0@Z@hkAlgorithm@@YAXPAUhkpBodyOperationEntry@@HHP6A_NABU1@1@Z@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkWorldOperation::MergeIslands, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands)>(struct hkWorldOperation::MergeIslands *, int, int, class hkBool (*)(struct hkWorldOperation::MergeIslands const &, struct hkWorldOperation::MergeIslands const &))
//{
//    mangled_ppc("??$quickSortRecursive@UMergeIslands@hkWorldOperation@@P6A?AVhkBool@@ABU12@0@Z@hkAlgorithm@@YAXPAUMergeIslands@hkWorldOperation@@HHP6A?AVhkBool@@ABU12@1@Z@Z");
//};

