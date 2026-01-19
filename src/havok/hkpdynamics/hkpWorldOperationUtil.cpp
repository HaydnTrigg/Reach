/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void hkpWorldOperationUtil::updateEntityBP(class hkpWorld *, class hkpEntity *);
// public: static void hkpWorldOperationUtil::addEntityBP(class hkpWorld *, class hkpEntity *);
// public: static void hkpWorldOperationUtil::addPhantomBP(class hkpWorld *, class hkpPhantom *);
// public: static void hkpWorldOperationUtil::addEntitySI(class hkpWorld *, class hkpEntity *, enum hkpEntityActivation);
// class hkpSimulationIsland * findSmallSparseActiveIsland(class hkpWorld *, class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> &, int, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::removeEntityBP(class hkpWorld *, class hkpEntity *);
// public: static void hkpWorldOperationUtil::removePhantomBP(class hkpWorld *, class hkpPhantom *);
// public: static void hkpWorldOperationUtil::removeEntitySI(class hkpWorld *, class hkpEntity *);
// public: static void hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland(class hkpWorld *, class hkpEntity *, class hkArray<class hkpAction *, struct hkContainerHeapAllocator> &);
// public: static void hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland(class hkpWorld *, class hkpEntity *, class hkArray<class hkpAction *, struct hkContainerHeapAllocator> &);
// public: static void hkpWorldOperationUtil::addActionsToEntitysIsland(class hkpWorld *, class hkpEntity *, class hkArray<class hkpAction *, struct hkContainerHeapAllocator> &);
// public: static void hkpWorldOperationUtil::removeIsland(class hkpWorld *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::addConstraintToCriticalLockedIsland(class hkpWorld *, class hkpConstraintInstance *);
// public: static void hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(class hkpWorld *, class hkpConstraintInstance *);
// public: static class hkpConstraintInstance * hkpWorldOperationUtil::addConstraintImmediately(class hkpWorld *, class hkpConstraintInstance *, enum hkpWorldOperationUtil::FireCallbacks);
// public: static void hkpWorldOperationUtil::removeConstraintImmediately(class hkpWorld *, class hkpConstraintInstance *, enum hkpWorldOperationUtil::FireCallbacks);
// public: static void hkpWorldOperationUtil::splitSimulationIsland(class hkpSimulationIsland *, class hkpWorld *, class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> *);
// void identifyDeactivatedSubgroups(class hkUnionFind &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkpWorld const *, class hkArray<int, struct hkContainerHeapAllocator> &, class hkFixedArray<signed char> &);
// void findInactiveGroups(class hkUnionFind const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkpWorld const *, int, class hkFixedArray<int> &);
// void mergeSmallSubgroups(class hkpWorld *, class hkUnionFind &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkFixedArray<signed char> &);
// void findInactiveGroupsAndEstimateSolverSize(class hkUnionFind const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, int, class hkFixedArray<int> &, class hkFixedArray<int> &, unsigned char *);
// void estimateSolverSize(class hkUnionFind const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, int, class hkFixedArray<int> &, class hkFixedArray<int> &);
// public: static void hkpWorldOperationUtil::splitSimulationIsland(class hkpWorld *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::splitSimulationIslands(class hkpWorld *);
// public: static void hkpWorldOperationUtil::mergeIslands(class hkpWorld *, class hkpEntity *, class hkpEntity *);
// public: static void hkpWorldOperationUtil::internalMergeTwoIslands(class hkpWorld *, class hkpSimulationIsland *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::validateWorld(class hkpWorld *);
// public: static void hkpWorldOperationUtil::setRigidBodyMotionType(class hkpRigidBody *, enum hkpMotion::MotionType, enum hkpEntityActivation, enum hkpUpdateCollisionFilterOnEntityMode);
// private: static void hkpWorldOperationUtil::removeAttachedConstraints(class hkpEntity *, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &);
// private: static void hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus(struct hkpAgentNnTrack &, class hkpEntity *, struct hkpAgentNnTrack &, enum hkpMotion::MotionType);
// public: static void hkpWorldOperationUtil::cleanupDirtyIslands(class hkpWorld *);
// class hkBool worldOperationUtil_less_hkSimulationIslandPtr(class hkpSimulationIsland const *, class hkpSimulationIsland const *);
// public: static void hkpWorldOperationUtil::internalActivateIsland(class hkpWorld *, class hkpSimulationIsland *, class hkBool);
// public: static void hkpWorldOperationUtil::internalDeactivateIsland(class hkpWorld *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::markIslandInactive(class hkpWorld *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::markIslandInactiveMt(class hkpWorld *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::markIslandActive(class hkpWorld *, class hkpSimulationIsland *);
// public: static void hkpWorldOperationUtil::removeIslandFromDirtyList(class hkpWorld *, class hkpSimulationIsland *);
// private: static void hkpWorldOperationUtil::replaceMotionObject(class hkpRigidBody *, enum hkpMotion::MotionType, class hkBool, class hkBool, class hkpWorld *);
// public: hkWorldOperation::UpdateEntityBP::UpdateEntityBP(void);
// public: static int hkpWorldOperationUtil::estimateIslandSize(int, int);
// public: static bool hkpWorldOperationUtil::canIslandBeSparse(class hkpWorld *, int);
// public: class hkpAction * hkpEntity::getAction(int);
// public: int hkpEntity::getNumActions(void) const;
// public: int hkSmallArray<class hkpAction *>::getSize(void) const;
// public: class hkpAction *& hkSmallArray<class hkpAction *>::operator[](int);
// public: static void hkpWorldOperationUtil::mergeIslandsIfNeeded(class hkpEntity *, class hkpEntity *);
// public: int hkpWorld::areCriticalOperationsLockedUnchecked(void) const;
// public: hkUnionFind::~hkUnionFind(void);
// public: void hkpConstraintInstance::setOwner(class hkpConstraintOwner *);
// public: void hkConstraintInternal::getConstraintInfo(struct hkpConstraintInfo &) const;
// public: hkpAgentNnTrack::hkpAgentNnTrack(void);
// public: void hkpAction::setSimulationIsland(class hkpSimulationIsland *);
// public: static class hkpNullAction * hkpNullAction::getNullAction(void);
// public: int hkpMotion::getNumInactiveFramesMt(int, int);
// public: hkpAgentNnTrack::~hkpAgentNnTrack(void);
// public: hkWorldOperation::MergeIslands::MergeIslands(void);
// public: int hkpSimulationIsland::getStorageIndex(void);
// private: static void hkpWorldOperationUtil::sortBigIslandToFront(class hkpWorld *, class hkpSimulationIsland *);
// public: float hkUFloat8::operator float(void) const;
// public: static void * hkpMotion::operator new(unsigned int);
// public: void hkpMotion::setLinearDamping(float);
// public: void hkpMotion::setAngularDamping(float);
// public: class hkMotionState & hkMotionState::operator=(class hkMotionState const &);
// public: class hkSweptTransform & hkSweptTransform::operator=(class hkSweptTransform const &);
// public: hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: void hkArray<class hkpAction *, struct hkContainerHeapAllocator>::pushBack(class hkpAction *const &);
// public: void hkArray<class hkpAction *, struct hkContainerHeapAllocator>::setSize(int);
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>(void);
// public: int hkFixedArray<signed char>::getSizeDebug(void) const;
// public: hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>(void);
// public: int * hkFixedArray<int>::begin(void);
// public: void hkArrayBase<struct hkpAgentNnSector *>::pushBackUnchecked(struct hkpAgentNnSector *const &);
// public: void hkArrayBase<struct hkpAgentNnSector *>::_reserveExactly(class hkMemoryAllocator &, int);
// public: hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::~hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator> &);
// public: hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>(int);
// public: class hkpSimulationIsland ** hkArrayBase<class hkpSimulationIsland *>::begin(void);
// public: class hkpAction *& hkArrayBase<class hkpAction *>::operator[](int);
// public: void hkArrayBase<class hkpAction *>::clear(void);
// public: void hkArrayBase<class hkpAction *>::_pushBack(class hkMemoryAllocator &, class hkpAction *const &);
// public: void hkArrayBase<class hkpAction *>::_setSize(class hkMemoryAllocator &, int);
// public: class hkpAction ** hkArrayBase<class hkpAction *>::begin(void);
// public: hkArray<class hkpAction *, struct hkContainerHeapAllocator>::~hkArray<class hkpAction *, struct hkContainerHeapAllocator>(void);
// public: void hkArrayBase<class hkpEntity *>::pushBackUnchecked(class hkpEntity *const &);
// public: void hkArrayBase<class hkpEntity *>::_reserveExactly(class hkMemoryAllocator &, int);
// public: class hkpEntity *const * hkArrayBase<class hkpEntity *>::begin(void) const;
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::swap(class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &);
// public: hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>(int);
// public: signed char & hkFixedArray<signed char>::operator[](int);
// public: signed char * hkFixedArray<signed char>::begin(void);
// public: struct hkConstraintInternal * hkSmallArray<struct hkConstraintInternal>::begin(void);
// public: hkLocalBuffer<signed char>::hkLocalBuffer<signed char>(int, char const *);
// public: hkLocalBuffer<signed char>::~hkLocalBuffer<signed char>(void);
// public: class hkpSimulationIsland *& hkFixedArray<class hkpSimulationIsland *>::operator[](int);
// public: hkLocalBuffer<class hkpSimulationIsland *>::hkLocalBuffer<class hkpSimulationIsland *>(int, char const *);
// public: hkLocalBuffer<class hkpSimulationIsland *>::~hkLocalBuffer<class hkpSimulationIsland *>(void);
// public: static void hkCheckDeterminismUtil::checkMt<signed char>(int, signed char const &);
// void hkAlgorithm::swap<class hkpSimulationIsland *>(class hkpSimulationIsland *&, class hkpSimulationIsland *&);
// public: hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>(int);
// void hkAlgorithm::quickSort<class hkpSimulationIsland *, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland *)>(class hkpSimulationIsland **, int, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland const *));
// class hkpMaxSizeMotion * hkAddByteOffset<class hkpMaxSizeMotion>(class hkpMaxSizeMotion *, long);
// public: hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>(struct hkpAgentNnSector **, int, int);
// public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<class hkpAction *, struct hkContainerHeapAllocator>::hkArray<class hkpAction *, struct hkContainerHeapAllocator>(class hkpAction **, int, int);
// public: void hkArray<class hkpAction *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// protected: hkFixedArray<signed char>::hkFixedArray<signed char>(void);
// public: void hkPadSpu<signed char *>::operator=(signed char *);
// public: signed char * hkPadSpu<signed char *>::val(void) const;
// public: signed char * hkPadSpu<signed char *>::operator signed char *(void) const;
// protected: hkFixedArray<class hkpSimulationIsland *>::hkFixedArray<class hkpSimulationIsland *>(void);
// public: void hkPadSpu<class hkpSimulationIsland **>::operator=(class hkpSimulationIsland **);
// public: class hkpSimulationIsland ** hkPadSpu<class hkpSimulationIsland **>::val(void) const;
// public: class hkpSimulationIsland ** hkPadSpu<class hkpSimulationIsland **>::operator class hkpSimulationIsland **(void) const;
// public: hkPadSpu<signed char *>::hkPadSpu<signed char *>(void);
// public: hkPadSpu<class hkpSimulationIsland **>::hkPadSpu<class hkpSimulationIsland **>(void);
// public: hkArrayBase<struct hkpAgentNnSector *>::hkArrayBase<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, int);
// public: hkArrayBase<struct hkpAgentNnSector *>::~hkArrayBase<struct hkpAgentNnSector *>(void);
// public: void hkArrayBase<struct hkpAgentNnSector *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: hkArrayBase<class hkpAction *>::hkArrayBase<class hkpAction *>(class hkpAction **, int, int);
// public: hkArrayBase<class hkpAction *>::~hkArrayBase<class hkpAction *>(void);
// public: int hkArrayBase<class hkpAction *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpAction *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkpAction *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkpAction *>(class hkpAction **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpAction *>(class hkpAction **, int, class hkpAction *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<class hkpAction *>(class hkpAction **, int, struct hkTraitBool<1>);
// signed char * hkAllocateStack<signed char>(int, char const *);
// void hkDeallocateStack<signed char>(signed char *);
// class hkpSimulationIsland ** hkAllocateStack<class hkpSimulationIsland *>(int, char const *);
// void hkDeallocateStack<class hkpSimulationIsland *>(class hkpSimulationIsland **);
// void hkAlgorithm::quickSortRecursive<class hkpSimulationIsland *, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland *)>(class hkpSimulationIsland **, int, int, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland const *));

//public: static void hkpWorldOperationUtil::updateEntityBP(class hkpWorld *, class hkpEntity *)
//{
//    mangled_ppc("?updateEntityBP@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@@Z");
//};

//public: static void hkpWorldOperationUtil::addEntityBP(class hkpWorld *, class hkpEntity *)
//{
//    mangled_ppc("?addEntityBP@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@@Z");
//};

//public: static void hkpWorldOperationUtil::addPhantomBP(class hkpWorld *, class hkpPhantom *)
//{
//    mangled_ppc("?addPhantomBP@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpPhantom@@@Z");
//};

//public: static void hkpWorldOperationUtil::addEntitySI(class hkpWorld *, class hkpEntity *, enum hkpEntityActivation)
//{
//    mangled_ppc("?addEntitySI@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@W4hkpEntityActivation@@@Z");
//};

//class hkpSimulationIsland * findSmallSparseActiveIsland(class hkpWorld *, class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> &, int, class hkpSimulationIsland *)
//{
//    mangled_ppc("?findSmallSparseActiveIsland@@YAPAVhkpSimulationIsland@@PAVhkpWorld@@AAV?$hkArray@PAVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@HPAV1@@Z");
//};

//public: static void hkpWorldOperationUtil::removeEntityBP(class hkpWorld *, class hkpEntity *)
//{
//    mangled_ppc("?removeEntityBP@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@@Z");
//};

//public: static void hkpWorldOperationUtil::removePhantomBP(class hkpWorld *, class hkpPhantom *)
//{
//    mangled_ppc("?removePhantomBP@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpPhantom@@@Z");
//};

//public: static void hkpWorldOperationUtil::removeEntitySI(class hkpWorld *, class hkpEntity *)
//{
//    mangled_ppc("?removeEntitySI@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@@Z");
//};

//public: static void hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland(class hkpWorld *, class hkpEntity *, class hkArray<class hkpAction *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?removeAttachedActionsFromFixedIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@AAV?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland(class hkpWorld *, class hkpEntity *, class hkArray<class hkpAction *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?removeAttachedActionsFromDynamicIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@AAV?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkpWorldOperationUtil::addActionsToEntitysIsland(class hkpWorld *, class hkpEntity *, class hkArray<class hkpAction *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?addActionsToEntitysIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@AAV?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkpWorldOperationUtil::removeIsland(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?removeIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: static void hkpWorldOperationUtil::addConstraintToCriticalLockedIsland(class hkpWorld *, class hkpConstraintInstance *)
//{
//    mangled_ppc("?addConstraintToCriticalLockedIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpConstraintInstance@@@Z");
//};

//public: static void hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(class hkpWorld *, class hkpConstraintInstance *)
//{
//    mangled_ppc("?removeConstraintFromCriticalLockedIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpConstraintInstance@@@Z");
//};

//public: static class hkpConstraintInstance * hkpWorldOperationUtil::addConstraintImmediately(class hkpWorld *, class hkpConstraintInstance *, enum hkpWorldOperationUtil::FireCallbacks)
//{
//    mangled_ppc("?addConstraintImmediately@hkpWorldOperationUtil@@SAPAVhkpConstraintInstance@@PAVhkpWorld@@PAV2@W4FireCallbacks@1@@Z");
//};

//public: static void hkpWorldOperationUtil::removeConstraintImmediately(class hkpWorld *, class hkpConstraintInstance *, enum hkpWorldOperationUtil::FireCallbacks)
//{
//    mangled_ppc("?removeConstraintImmediately@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpConstraintInstance@@W4FireCallbacks@1@@Z");
//};

//public: static void hkpWorldOperationUtil::splitSimulationIsland(class hkpSimulationIsland *, class hkpWorld *, class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?splitSimulationIsland@hkpWorldOperationUtil@@SAXPAVhkpSimulationIsland@@PAVhkpWorld@@AAV?$hkArray@PAVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@PAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//void identifyDeactivatedSubgroups(class hkUnionFind &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkpWorld const *, class hkArray<int, struct hkContainerHeapAllocator> &, class hkFixedArray<signed char> &)
//{
//    mangled_ppc("?identifyDeactivatedSubgroups@@YAXAAVhkUnionFind@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@PBVhkpWorld@@AAV?$hkArray@HUhkContainerHeapAllocator@@@@AAV?$hkFixedArray@C@@@Z");
//};

//void findInactiveGroups(class hkUnionFind const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkpWorld const *, int, class hkFixedArray<int> &)
//{
//    mangled_ppc("?findInactiveGroups@@YAXABVhkUnionFind@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@PBVhkpWorld@@HAAV?$hkFixedArray@H@@@Z");
//};

//void mergeSmallSubgroups(class hkpWorld *, class hkUnionFind &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkFixedArray<signed char> &)
//{
//    mangled_ppc("?mergeSmallSubgroups@@YAXPAVhkpWorld@@AAVhkUnionFind@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@AAV?$hkArray@HUhkContainerHeapAllocator@@@@AAV?$hkFixedArray@C@@@Z");
//};

//void findInactiveGroupsAndEstimateSolverSize(class hkUnionFind const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, int, class hkFixedArray<int> &, class hkFixedArray<int> &, unsigned char *)
//{
//    mangled_ppc("?findInactiveGroupsAndEstimateSolverSize@@YAXABVhkUnionFind@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@HAAV?$hkFixedArray@H@@2PAE@Z");
//};

//void estimateSolverSize(class hkUnionFind const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, int, class hkFixedArray<int> &, class hkFixedArray<int> &)
//{
//    mangled_ppc("?estimateSolverSize@@YAXABVhkUnionFind@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@HAAV?$hkFixedArray@H@@2@Z");
//};

//public: static void hkpWorldOperationUtil::splitSimulationIsland(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?splitSimulationIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: static void hkpWorldOperationUtil::splitSimulationIslands(class hkpWorld *)
//{
//    mangled_ppc("?splitSimulationIslands@hkpWorldOperationUtil@@SAXPAVhkpWorld@@@Z");
//};

//public: static void hkpWorldOperationUtil::mergeIslands(class hkpWorld *, class hkpEntity *, class hkpEntity *)
//{
//    mangled_ppc("?mergeIslands@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpEntity@@1@Z");
//};

//public: static void hkpWorldOperationUtil::internalMergeTwoIslands(class hkpWorld *, class hkpSimulationIsland *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?internalMergeTwoIslands@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@1@Z");
//};

//public: static void hkpWorldOperationUtil::validateWorld(class hkpWorld *)
//{
//    mangled_ppc("?validateWorld@hkpWorldOperationUtil@@SAXPAVhkpWorld@@@Z");
//};

//public: static void hkpWorldOperationUtil::setRigidBodyMotionType(class hkpRigidBody *, enum hkpMotion::MotionType, enum hkpEntityActivation, enum hkpUpdateCollisionFilterOnEntityMode)
//{
//    mangled_ppc("?setRigidBodyMotionType@hkpWorldOperationUtil@@SAXPAVhkpRigidBody@@W4MotionType@hkpMotion@@W4hkpEntityActivation@@W4hkpUpdateCollisionFilterOnEntityMode@@@Z");
//};

//private: static void hkpWorldOperationUtil::removeAttachedConstraints(class hkpEntity *, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?removeAttachedConstraints@hkpWorldOperationUtil@@CAXPAVhkpEntity@@AAV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@@Z");
//};

//private: static void hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus(struct hkpAgentNnTrack &, class hkpEntity *, struct hkpAgentNnTrack &, enum hkpMotion::MotionType)
//{
//    mangled_ppc("?removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus@hkpWorldOperationUtil@@CAXAAUhkpAgentNnTrack@@PAVhkpEntity@@0W4MotionType@hkpMotion@@@Z");
//};

//public: static void hkpWorldOperationUtil::cleanupDirtyIslands(class hkpWorld *)
//{
//    mangled_ppc("?cleanupDirtyIslands@hkpWorldOperationUtil@@SAXPAVhkpWorld@@@Z");
//};

//class hkBool worldOperationUtil_less_hkSimulationIslandPtr(class hkpSimulationIsland const *, class hkpSimulationIsland const *)
//{
//    mangled_ppc("?worldOperationUtil_less_hkSimulationIslandPtr@@YA?AVhkBool@@PBVhkpSimulationIsland@@0@Z");
//};

//public: static void hkpWorldOperationUtil::internalActivateIsland(class hkpWorld *, class hkpSimulationIsland *, class hkBool)
//{
//    mangled_ppc("?internalActivateIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@VhkBool@@@Z");
//};

//public: static void hkpWorldOperationUtil::internalDeactivateIsland(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?internalDeactivateIsland@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: static void hkpWorldOperationUtil::markIslandInactive(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?markIslandInactive@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: static void hkpWorldOperationUtil::markIslandInactiveMt(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?markIslandInactiveMt@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: static void hkpWorldOperationUtil::markIslandActive(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?markIslandActive@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: static void hkpWorldOperationUtil::removeIslandFromDirtyList(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?removeIslandFromDirtyList@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//private: static void hkpWorldOperationUtil::replaceMotionObject(class hkpRigidBody *, enum hkpMotion::MotionType, class hkBool, class hkBool, class hkpWorld *)
//{
//    mangled_ppc("?replaceMotionObject@hkpWorldOperationUtil@@CAXPAVhkpRigidBody@@W4MotionType@hkpMotion@@VhkBool@@2PAVhkpWorld@@@Z");
//};

//public: hkWorldOperation::UpdateEntityBP::UpdateEntityBP(void)
//{
//    mangled_ppc("??0UpdateEntityBP@hkWorldOperation@@QAA@XZ");
//};

//public: static int hkpWorldOperationUtil::estimateIslandSize(int, int)
//{
//    mangled_ppc("?estimateIslandSize@hkpWorldOperationUtil@@SAHHH@Z");
//};

//public: static bool hkpWorldOperationUtil::canIslandBeSparse(class hkpWorld *, int)
//{
//    mangled_ppc("?canIslandBeSparse@hkpWorldOperationUtil@@SA_NPAVhkpWorld@@H@Z");
//};

//public: class hkpAction * hkpEntity::getAction(int)
//{
//    mangled_ppc("?getAction@hkpEntity@@QAAPAVhkpAction@@H@Z");
//};

//public: int hkpEntity::getNumActions(void) const
//{
//    mangled_ppc("?getNumActions@hkpEntity@@QBAHXZ");
//};

//public: int hkSmallArray<class hkpAction *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkSmallArray@PAVhkpAction@@@@QBAHXZ");
//};

//public: class hkpAction *& hkSmallArray<class hkpAction *>::operator[](int)
//{
//    mangled_ppc("??A?$hkSmallArray@PAVhkpAction@@@@QAAAAPAVhkpAction@@H@Z");
//};

//public: static void hkpWorldOperationUtil::mergeIslandsIfNeeded(class hkpEntity *, class hkpEntity *)
//{
//    mangled_ppc("?mergeIslandsIfNeeded@hkpWorldOperationUtil@@SAXPAVhkpEntity@@0@Z");
//};

//public: int hkpWorld::areCriticalOperationsLockedUnchecked(void) const
//{
//    mangled_ppc("?areCriticalOperationsLockedUnchecked@hkpWorld@@QBAHXZ");
//};

//public: hkUnionFind::~hkUnionFind(void)
//{
//    mangled_ppc("??1hkUnionFind@@QAA@XZ");
//};

//public: void hkpConstraintInstance::setOwner(class hkpConstraintOwner *)
//{
//    mangled_ppc("?setOwner@hkpConstraintInstance@@QAAXPAVhkpConstraintOwner@@@Z");
//};

//public: void hkConstraintInternal::getConstraintInfo(struct hkpConstraintInfo &) const
//{
//    mangled_ppc("?getConstraintInfo@hkConstraintInternal@@QBAXAAUhkpConstraintInfo@@@Z");
//};

//public: hkpAgentNnTrack::hkpAgentNnTrack(void)
//{
//    mangled_ppc("??0hkpAgentNnTrack@@QAA@XZ");
//};

//public: void hkpAction::setSimulationIsland(class hkpSimulationIsland *)
//{
//    mangled_ppc("?setSimulationIsland@hkpAction@@QAAXPAVhkpSimulationIsland@@@Z");
//};

//public: static class hkpNullAction * hkpNullAction::getNullAction(void)
//{
//    mangled_ppc("?getNullAction@hkpNullAction@@SAPAV1@XZ");
//};

//public: int hkpMotion::getNumInactiveFramesMt(int, int)
//{
//    mangled_ppc("?getNumInactiveFramesMt@hkpMotion@@QAAHHH@Z");
//};

//public: hkpAgentNnTrack::~hkpAgentNnTrack(void)
//{
//    mangled_ppc("??1hkpAgentNnTrack@@QAA@XZ");
//};

//public: hkWorldOperation::MergeIslands::MergeIslands(void)
//{
//    mangled_ppc("??0MergeIslands@hkWorldOperation@@QAA@XZ");
//};

//public: int hkpSimulationIsland::getStorageIndex(void)
//{
//    mangled_ppc("?getStorageIndex@hkpSimulationIsland@@QAAHXZ");
//};

//private: static void hkpWorldOperationUtil::sortBigIslandToFront(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?sortBigIslandToFront@hkpWorldOperationUtil@@CAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: float hkUFloat8::operator float(void) const
//{
//    mangled_ppc("??BhkUFloat8@@QBAMXZ");
//};

//public: static void * hkpMotion::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpMotion@@SAPAXI@Z");
//};

//public: void hkpMotion::setLinearDamping(float)
//{
//    mangled_ppc("?setLinearDamping@hkpMotion@@QAAXM@Z");
//};

//public: void hkpMotion::setAngularDamping(float)
//{
//    mangled_ppc("?setAngularDamping@hkpMotion@@QAAXM@Z");
//};

//public: class hkMotionState & hkMotionState::operator=(class hkMotionState const &)
//{
//    mangled_ppc("??4hkMotionState@@QAAAAV0@ABV0@@Z");
//};

//public: class hkSweptTransform & hkSweptTransform::operator=(class hkSweptTransform const &)
//{
//    mangled_ppc("??4hkSweptTransform@@QAAAAV0@ABV0@@Z");
//};

//public: hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAUhkpAgentNnSector@@$00UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkpAction *, struct hkContainerHeapAllocator>::pushBack(class hkpAction *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpAction@@@Z");
//};

//public: void hkArray<class hkpAction *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpEntity@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkFixedArray<signed char>::getSizeDebug(void) const
//{
//    mangled_ppc("?getSizeDebug@?$hkFixedArray@C@@QBAHXZ");
//};

//public: hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpConstraintInstance@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpAction@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int * hkFixedArray<int>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@H@@QAAPAHXZ");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::pushBackUnchecked(struct hkpAgentNnSector *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXABQAUhkpAgentNnSector@@@Z");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::~hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAUhkpAgentNnSector@@$00UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: class hkpSimulationIsland ** hkArrayBase<class hkpSimulationIsland *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpSimulationIsland@@@@QAAPAPAVhkpSimulationIsland@@XZ");
//};

//public: class hkpAction *& hkArrayBase<class hkpAction *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpAction@@@@QAAAAPAVhkpAction@@H@Z");
//};

//public: void hkArrayBase<class hkpAction *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpAction@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpAction *>::_pushBack(class hkMemoryAllocator &, class hkpAction *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpAction@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpAction@@@Z");
//};

//public: void hkArrayBase<class hkpAction *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAVhkpAction@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkpAction ** hkArrayBase<class hkpAction *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpAction@@@@QAAPAPAVhkpAction@@XZ");
//};

//public: hkArray<class hkpAction *, struct hkContainerHeapAllocator>::~hkArray<class hkpAction *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkpEntity *>::pushBackUnchecked(class hkpEntity *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PAVhkpEntity@@@@QAAXABQAVhkpEntity@@@Z");
//};

//public: void hkArrayBase<class hkpEntity *>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkpEntity *const * hkArrayBase<class hkpEntity *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpEntity@@@@QBAPBQAVhkpEntity@@XZ");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::swap(class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpEntity@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: signed char & hkFixedArray<signed char>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@C@@QAAAACH@Z");
//};

//public: signed char * hkFixedArray<signed char>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@C@@QAAPACXZ");
//};

//public: struct hkConstraintInternal * hkSmallArray<struct hkConstraintInternal>::begin(void)
//{
//    mangled_ppc("?begin@?$hkSmallArray@UhkConstraintInternal@@@@QAAPAUhkConstraintInternal@@XZ");
//};

//public: hkLocalBuffer<signed char>::hkLocalBuffer<signed char>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@C@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<signed char>::~hkLocalBuffer<signed char>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@C@@QAA@XZ");
//};

//public: class hkpSimulationIsland *& hkFixedArray<class hkpSimulationIsland *>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@PAVhkpSimulationIsland@@@@QAAAAPAVhkpSimulationIsland@@H@Z");
//};

//public: hkLocalBuffer<class hkpSimulationIsland *>::hkLocalBuffer<class hkpSimulationIsland *>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@PAVhkpSimulationIsland@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<class hkpSimulationIsland *>::~hkLocalBuffer<class hkpSimulationIsland *>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@PAVhkpSimulationIsland@@@@QAA@XZ");
//};

//public: static void hkCheckDeterminismUtil::checkMt<signed char>(int, signed char const &)
//{
//    mangled_ppc("??$checkMt@C@hkCheckDeterminismUtil@@SAXHABC@Z");
//};

//void hkAlgorithm::swap<class hkpSimulationIsland *>(class hkpSimulationIsland *&, class hkpSimulationIsland *&)
//{
//    mangled_ppc("??$swap@PAVhkpSimulationIsland@@@hkAlgorithm@@YAXAAPAVhkpSimulationIsland@@0@Z");
//};

//public: hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance *, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpConstraintInstance@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpAction *, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpAction@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//void hkAlgorithm::quickSort<class hkpSimulationIsland *, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland *)>(class hkpSimulationIsland **, int, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland const *))
//{
//    mangled_ppc("??$quickSort@PAVhkpSimulationIsland@@P6A?AVhkBool@@PBV1@0@Z@hkAlgorithm@@YAXPAPAVhkpSimulationIsland@@HP6A?AVhkBool@@PBV1@1@Z@Z");
//};

//class hkpMaxSizeMotion * hkAddByteOffset<class hkpMaxSizeMotion>(class hkpMaxSizeMotion *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpMaxSizeMotion@@@@YAPAVhkpMaxSizeMotion@@PAV0@J@Z");
//};

//public: hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>(struct hkpAgentNnSector **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAA@PAPAUhkpAgentNnSector@@HH@Z");
//};

//public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<class hkpAction *, struct hkContainerHeapAllocator>::hkArray<class hkpAction *, struct hkContainerHeapAllocator>(class hkpAction **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@QAA@PAPAVhkpAction@@HH@Z");
//};

//public: void hkArray<class hkpAction *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//protected: hkFixedArray<signed char>::hkFixedArray<signed char>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@C@@IAA@XZ");
//};

//public: void hkPadSpu<signed char *>::operator=(signed char *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAC@@QAAXPAC@Z");
//};

//public: signed char * hkPadSpu<signed char *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAC@@QBAPACXZ");
//};

//public: signed char * hkPadSpu<signed char *>::operator signed char *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAC@@QBAPACXZ");
//};

//protected: hkFixedArray<class hkpSimulationIsland *>::hkFixedArray<class hkpSimulationIsland *>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@PAVhkpSimulationIsland@@@@IAA@XZ");
//};

//public: void hkPadSpu<class hkpSimulationIsland **>::operator=(class hkpSimulationIsland **)
//{
//    mangled_ppc("??4?$hkPadSpu@PAPAVhkpSimulationIsland@@@@QAAXPAPAVhkpSimulationIsland@@@Z");
//};

//public: class hkpSimulationIsland ** hkPadSpu<class hkpSimulationIsland **>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAPAVhkpSimulationIsland@@@@QBAPAPAVhkpSimulationIsland@@XZ");
//};

//public: class hkpSimulationIsland ** hkPadSpu<class hkpSimulationIsland **>::operator class hkpSimulationIsland **(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAPAVhkpSimulationIsland@@@@QBAPAPAVhkpSimulationIsland@@XZ");
//};

//public: hkPadSpu<signed char *>::hkPadSpu<signed char *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAC@@QAA@XZ");
//};

//public: hkPadSpu<class hkpSimulationIsland **>::hkPadSpu<class hkpSimulationIsland **>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAPAVhkpSimulationIsland@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpAgentNnSector *>::hkArrayBase<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUhkpAgentNnSector@@@@QAA@PAPAUhkpAgentNnSector@@HH@Z");
//};

//public: hkArrayBase<struct hkpAgentNnSector *>::~hkArrayBase<struct hkpAgentNnSector *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUhkpAgentNnSector@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: hkArrayBase<class hkpAction *>::hkArrayBase<class hkpAction *>(class hkpAction **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpAction@@@@QAA@PAPAVhkpAction@@HH@Z");
//};

//public: hkArrayBase<class hkpAction *>::~hkArrayBase<class hkpAction *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpAction@@@@QAA@XZ");
//};

//public: int hkArrayBase<class hkpAction *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpAction@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpAction *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpAction@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkpAction *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAVhkpAction@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpAction *>(class hkpAction **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpAction@@@hkArrayUtil@@SAXPAPAVhkpAction@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpAction *>(class hkpAction **, int, class hkpAction *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpAction@@@hkArrayUtil@@SAXPAPAVhkpAction@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkpAction *>(class hkpAction **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAVhkpAction@@@hkArrayUtil@@SAXPAPAVhkpAction@@HU?$hkTraitBool@$00@@@Z");
//};

//signed char * hkAllocateStack<signed char>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@C@@YAPACHPBD@Z");
//};

//void hkDeallocateStack<signed char>(signed char *)
//{
//    mangled_ppc("??$hkDeallocateStack@C@@YAXPAC@Z");
//};

//class hkpSimulationIsland ** hkAllocateStack<class hkpSimulationIsland *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PAVhkpSimulationIsland@@@@YAPAPAVhkpSimulationIsland@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpSimulationIsland *>(class hkpSimulationIsland **)
//{
//    mangled_ppc("??$hkDeallocateStack@PAVhkpSimulationIsland@@@@YAXPAPAVhkpSimulationIsland@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<class hkpSimulationIsland *, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland *)>(class hkpSimulationIsland **, int, int, class hkBool (*)(class hkpSimulationIsland const *, class hkpSimulationIsland const *))
//{
//    mangled_ppc("??$quickSortRecursive@PAVhkpSimulationIsland@@P6A?AVhkBool@@PBV1@0@Z@hkAlgorithm@@YAXPAPAVhkpSimulationIsland@@HHP6A?AVhkBool@@PBV1@1@Z@Z");
//};

