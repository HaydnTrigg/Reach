/* ---------- headers */

#include "havok\hkpdynamics\hkpContinuousSimulation.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpContinuousSimulation::`RTTI Complete Object Locator'; // "??_R4hkpContinuousSimulation@@6B@"

// public: hkpContinuousSimulation::hkpContinuousSimulation(class hkpWorld *);
// public: virtual hkpContinuousSimulation::~hkpContinuousSimulation(void);
// protected: class hkBool hkpContinuousSimulation::fireEarliestToiCallbacksAndCheckEnabled(struct hkpToiEvent &, float &);
// protected: enum hkpStepResult hkpContinuousSimulation::handleAllToisTill(float);
// protected: virtual void hkpContinuousSimulation::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual enum hkpStepResult hkpContinuousSimulation::advanceTime(void);
// protected: enum hkpStepResult hkpContinuousSimulation::advanceTimeInternal(void);
// public: virtual void hkpContinuousSimulation::resetCollisionInformationForEntities(class hkpEntity **, int, class hkpWorld *, enum hkpSimulation::ResetCollisionInformation);
// public: virtual void hkpContinuousSimulation::reintegrateAndRecollideEntities(class hkpEntity **, int, class hkpWorld *, int);
// public: virtual void hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities(class hkpEntity **, int, class hkpWorld *);
// public: virtual void hkpContinuousSimulation::removeCollisionInformationForAgent(struct hkpAgentNnEntry *);
// public: virtual void hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent(struct hkpAgentNnEntry *);
// public: virtual void hkpContinuousSimulation::warpTime(float);
// protected: virtual void hkpContinuousSimulation::collideInternal(class hkStepInfo const &);
// public: void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs(class hkpEntity **, int, class hkpWorld *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous(class hkpEntity **, int, class hkpWorld *, signed char *);
// public: void hkpContinuousSimulation::collideIslandNarrowPhaseContinuous(class hkpSimulationIsland *, struct hkpProcessCollisionInput const &);
// public: void hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous(class hkpEntity **, int, struct hkpProcessCollisionInput const &);
// protected: void hkpContinuousSimulation::processAgentCollideContinuous(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &);
// public: void hkpContinuousSimulation::addToiEvent(struct hkpProcessCollisionOutput const &, struct hkpAgentNnEntry const &);
// protected: void hkpContinuousSimulation::removeToiEventsOfEntities(class hkpEntity **, int);
// protected: void hkpContinuousSimulation::removeToiEventsOfEntity(class hkpEntity *);
// protected: virtual void hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly(class hkpEntity **, int, struct hkpProcessCollisionInput const &, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> &);
// protected: virtual void hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly(struct hkpProcessCollisionInput const &, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> &);
// protected: void hkpContinuousSimulation::handleSimpleToi(class hkpWorld *, struct hkpToiEvent &, float, float);
// protected: virtual void hkpContinuousSimulation::simulateToi(class hkpWorld *, struct hkpToiEvent &, float, float);
// void hkLs_doSimpleCollisionResponse(class hkpWorld *, struct hkpToiEvent const &, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &);
// public: virtual void hkpContinuousSimulation::processAgentNnEntries(struct hkpAgentNnEntry *const *, int, struct hkpProcessCollisionInput const &, class hkpSimulationIsland *, class hkBool);
// void hkLs_collectAgentEntriesToProcess(class hkpEntity const *, enum hkpConstraintInstance::ConstraintPriority, float, class hkFixedArray<unsigned char> &, class hkLocalArray<struct hkpAgentNnEntry *> &);
// int hkLs_areVelocitiesOk(float, struct hkpConstraintSchemaInfo const &, float const *, int, struct hkpProcessCollisionInput const &);
// void hkLs_toiCheckValidityOfConstraints(struct hkpConstraintSolverResources &, struct hkpProcessCollisionInput &, class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &, int &, enum hkpConstraintInstance::ConstraintPriority, class hkFixedArray<unsigned char> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &);
// void hkLs_toiActivateEntitiesAndCheckConstraints(struct hkpProcessCollisionInput &, enum hkpConstraintInstance::ConstraintPriority, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkFixedArray<unsigned char> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &);
// class hkBool less_EntityPtr(class hkpEntity const *, class hkpEntity const *);
// class hkBool less_ConstraintPtr(class hkpConstraintInstance const *, class hkpConstraintInstance const *);
// void hkLs_toiActivateConstraintsLinkingToFixedAndKeyframedEntities(class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &, int &, int);
// void hkLs_toiActivateConstraintsLinkingActivatedEntities(class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &, int &, class hkFixedArray<unsigned char> &);
// void hkLs_toiResetVelocityAccumulatorsForEntities(struct hkpConstraintSolverResources &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &);
// void hkLs_backstepAndFreezeEntireIsland(float, class hkpSimulationIsland *, class hkFixedArray<unsigned char> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &);
// void hkLs_restoreTransformOnBodiesWithUpdatedTransform(class hkpSimulationIsland *, class hkFixedArray<unsigned char> &, struct hkpConstraintSolverResources &);
// class hkBool hkLs_toiCheckFinalValidityOfCriticalConstraints(struct hkpConstraintSolverResources &, class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> const &, struct hkpProcessCollisionInput &, class hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator> *);
// enum hkResult hkLs_localizedSolveToi(struct hkpToiResources const &, struct hkpConstraintSolverResources &, struct hkpToiEvent &, class hkpToiResourceMgr &, class hkpWorld *, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkFixedArray<unsigned char> &, float);
// merged_846A2170;
// public: hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>(void);
// public: hkpContinuousSimulation::LockCriticalOperationsScope::LockCriticalOperationsScope(class hkpWorld *);
// public: hkpContinuousSimulation::LockCriticalOperationsScope::~LockCriticalOperationsScope(void);
// protected: void hkpContinuousSimulation::fireToiEventRemoved(struct hkpToiEvent &);
// public: void hkpContinuousSimulation::waitForSolverExport(signed char *);
// public: void hkpContinuousSimulation::removeAndAddPairs(class hkpWorld *, class hkpEntity **, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: hkpToiResources::hkpToiResources(void);
// protected: void hkpContinuousSimulation::collideEntitiesOfOneIslandContinuous_toiOnly(class hkpEntity **, int, class hkpWorld *, struct hkpProcessCollisionInput const &, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> &);
// protected: void hkpContinuousSimulation::deleteToiEventsForActiveEntitiesInIsland(class hkpSimulationIsland const *, class hkFixedArray<unsigned char> const &, class hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator> &);
// void hkLs_buildStepInfos(class hkpWorld *, struct hkpToiEvent const &, float, class hkStepInfo &, struct hkpSolverInfo &, class hkpConstraintQueryIn &);
// public: struct hkpSolverInfo & hkpSolverInfo::operator=(struct hkpSolverInfo const &);
// public: float hkContactPointMaterial::getFriction(void) const;
// public: float hkContactPointMaterial::getRestitution(void) const;
// public: void hkpContactImpulseLimitBreachedListenerInfo::set(class hkpConstraintInstance *, class hkpContactPointProperties *, class hkContactPoint *, bool);
// public: hkpSimpleConstraintUtilCollideParams::hkpSimpleConstraintUtilCollideParams(void);
// void hkLs_updateTransformIfNeeded(class hkpEntity *, float, class hkFixedArray<unsigned char> &);
// class hkBool hkLs_isAgentInteresting(struct hkpAgentNnEntry *, enum hkpConstraintInstance::ConstraintPriority);
// void hkSweptTransformUtil::getVelocity(class hkMotionState const &, class hkVector4&, class hkVector4&);
// class hkBool hkLs_isConstraintInteresting(class hkpConstraintInstance *, enum hkpConstraintInstance::ConstraintPriority);
// public: class hkpEntity * hkConstraintInternal::getOtherEntity(class hkpEntity const *) const;
// public: class hkpEntity * hkpConstraintInstance::getSlaveEntity(void) const;
// public: class hkpContactPointPropertiesStream * hkpSimpleContactConstraintAtom::getContactPointPropertiesStream(int) const;
// public: struct hkpProcessCollisionInput * hkpWorld::getCollisionInputRw(void);
// void hkLs_updateTransform(class hkpEntity *, float);
// public: hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::reserve(int);
// public: hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::getSize(void) const;
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::insertAt(int, class hkpEntity *const *, int);
// public: hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>(void);
// public: struct `anonymous namespace'::EntryAndIsland & hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>(void);
// public: struct hkpToiResourceMgr::ConstraintViolationInfo & hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>(void);
// public: hkLocalArray<class hkpEntity *>::hkLocalArray<class hkpEntity *>(int);
// public: hkLocalArray<class hkpEntity *>::~hkLocalArray<class hkpEntity *>(void);
// public: hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<class hkpEntity *>::wasReallocated(void) const;
// class hkpContactPointPropertiesStream const * hkAddByteOffsetConst<class hkpContactPointPropertiesStream>(class hkpContactPointPropertiesStream const *, long);
// public: hkArrayBase<struct hkpToiEvent>::hkArrayBase<struct hkpToiEvent>(void);
// public: struct hkpToiEvent & hkArrayBase<struct hkpToiEvent>::operator[](int);
// public: int hkArrayBase<struct hkpToiEvent>::getSize(void) const;
// public: int hkArrayBase<struct hkpToiEvent>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpToiEvent>::clear(void);
// public: void hkArrayBase<struct hkpToiEvent>::removeAt(int);
// public: void hkArrayBase<struct hkpToiEvent>::_reserve(class hkMemoryAllocator &, int);
// public: struct hkpToiEvent * hkArrayBase<struct hkpToiEvent>::expandByUnchecked(int);
// public: hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::~hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpToiEvent>::~hkArrayBase<struct hkpToiEvent>(void);
// public: void hkStatisticsCollector::addArray<struct hkpToiEvent>(char const *, class hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addPointerMap<unsigned int, class hkpEntity *>(char const *, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> const &);
// class hkpBroadPhaseHandle const ** hkAllocateStack<class hkpBroadPhaseHandle const *>(int, char const *);
// void hkDeallocateStack<class hkpBroadPhaseHandle const *>(class hkpBroadPhaseHandle const **);
// public: hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::hkArrayBase<struct `anonymous namespace'::EntryAndIsland>(void);
// public: struct `anonymous namespace'::EntryAndIsland & hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::getSize(void) const;
// public: struct `anonymous namespace'::EntryAndIsland & hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::~hkArrayBase<struct `anonymous namespace'::EntryAndIsland>(void);
// public: unsigned char const & hkFixedArray<unsigned char>::operator[](int) const;
// public: unsigned char & hkFixedArray<unsigned char>::operator[](int);
// public: hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>(int);
// public: static void hkReferencedObject::addReferences<class hkpEntity>(class hkpEntity const *const *, int, int);
// public: struct hkpAgentNnEntry *& hkArrayBase<struct hkpAgentNnEntry *>::operator[](int);
// public: struct hkpConstraintSchemaInfo const & hkArrayBase<struct hkpConstraintSchemaInfo>::operator[](int) const;
// public: struct hkpConstraintSchemaInfo & hkArrayBase<struct hkpConstraintSchemaInfo>::operator[](int);
// public: int hkArrayBase<struct hkpConstraintSchemaInfo>::getSize(void) const;
// public: hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>(void);
// void hkAlgorithm::swap<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo &, struct hkpConstraintSchemaInfo &);
// void hkAlgorithm::quickSort<class hkpConstraintInstance *, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance *)>(class hkpConstraintInstance **, int, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance const *));
// void hkAlgorithm::quickSort<class hkpEntity *, class hkBool (*)(class hkpEntity const *, class hkpEntity *)>(class hkpEntity **, int, class hkBool (*)(class hkpEntity const *, class hkpEntity const *));
// public: struct hkpToiResourceMgr::ConstraintViolationInfo & hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>(int);
// class hkpEntity ** hkAllocateStack<class hkpEntity *>(int, char const *);
// void hkDeallocateStack<class hkpEntity *>(class hkpEntity **);
// public: void hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::getMemSize(void) const;
// public: void * hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::getMemStart(void) const;
// public: void hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>(struct hkpConstraintSchemaInfo *, int, int);
// public: void hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, int);
// public: void hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkpToiEvent>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: struct hkpToiEvent const * hkArrayBase<struct hkpToiEvent>::begin(void) const;
// public: static void hkArrayUtil::destruct<struct hkpToiEvent>(struct hkpToiEvent *, int, struct hkTraitBool<0>);
// void hkMemUtil::memCpyOneAligned<112, 16>(void *, void const *);
// public: static void hkArrayUtil::construct<struct hkpToiEvent>(struct hkpToiEvent *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct `anonymous namespace'::EntryAndIsland>(struct `anonymous namespace'::EntryAndIsland *, int, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkpConstraintSchemaInfo>::hkArrayBase<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo *, int, int);
// public: hkArrayBase<struct hkpConstraintSchemaInfo>::~hkArrayBase<struct hkpConstraintSchemaInfo>(void);
// public: void hkArrayBase<struct hkpConstraintSchemaInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// void hkAlgorithm::quickSortRecursive<class hkpConstraintInstance *, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance *)>(class hkpConstraintInstance **, int, int, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance const *));
// void hkAlgorithm::quickSortRecursive<class hkpEntity *, class hkBool (*)(class hkpEntity const *, class hkpEntity *)>(class hkpEntity **, int, int, class hkBool (*)(class hkpEntity const *, class hkpEntity const *));
// public: hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, int);
// public: hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::~hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>(void);
// public: int hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct hkpToiResourceMgr::ConstraintViolationInfo>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, struct hkTraitBool<0>);
// public: hkpToiEvent::hkpToiEvent(void);
// public: void hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::clear(void);
// public: void hkArrayBase<struct hkpConstraintSchemaInfo>::clear(void);
// public: void hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::clear(void);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::EntryAndIsland>(struct `anonymous namespace'::EntryAndIsland *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkpToiResourceMgr::ConstraintViolationInfo>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, struct hkTraitBool<0>);

//public: hkpContinuousSimulation::hkpContinuousSimulation(class hkpWorld *)
//{
//    mangled_ppc("??0hkpContinuousSimulation@@QAA@PAVhkpWorld@@@Z");
//};

//public: virtual hkpContinuousSimulation::~hkpContinuousSimulation(void)
//{
//    mangled_ppc("??1hkpContinuousSimulation@@UAA@XZ");
//};

//protected: class hkBool hkpContinuousSimulation::fireEarliestToiCallbacksAndCheckEnabled(struct hkpToiEvent &, float &)
//{
//    mangled_ppc("?fireEarliestToiCallbacksAndCheckEnabled@hkpContinuousSimulation@@IAA?AVhkBool@@AAUhkpToiEvent@@AAM@Z");
//};

//protected: enum hkpStepResult hkpContinuousSimulation::handleAllToisTill(float)
//{
//    mangled_ppc("?handleAllToisTill@hkpContinuousSimulation@@IAA?AW4hkpStepResult@@M@Z");
//};

//protected: virtual void hkpContinuousSimulation::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpContinuousSimulation@@MBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual enum hkpStepResult hkpContinuousSimulation::advanceTime(void)
//{
//    mangled_ppc("?advanceTime@hkpContinuousSimulation@@UAA?AW4hkpStepResult@@XZ");
//};

//protected: enum hkpStepResult hkpContinuousSimulation::advanceTimeInternal(void)
//{
//    mangled_ppc("?advanceTimeInternal@hkpContinuousSimulation@@IAA?AW4hkpStepResult@@XZ");
//};

//public: virtual void hkpContinuousSimulation::resetCollisionInformationForEntities(class hkpEntity **, int, class hkpWorld *, enum hkpSimulation::ResetCollisionInformation)
//{
//    mangled_ppc("?resetCollisionInformationForEntities@hkpContinuousSimulation@@UAAXPAPAVhkpEntity@@HPAVhkpWorld@@W4ResetCollisionInformation@hkpSimulation@@@Z");
//};

//public: virtual void hkpContinuousSimulation::reintegrateAndRecollideEntities(class hkpEntity **, int, class hkpWorld *, int)
//{
//    mangled_ppc("?reintegrateAndRecollideEntities@hkpContinuousSimulation@@UAAXPAPAVhkpEntity@@HPAVhkpWorld@@H@Z");
//};

//public: virtual void hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities(class hkpEntity **, int, class hkpWorld *)
//{
//    mangled_ppc("?assertThereIsNoCollisionInformationForEntities@hkpContinuousSimulation@@UAAXPAPAVhkpEntity@@HPAVhkpWorld@@@Z");
//};

//public: virtual void hkpContinuousSimulation::removeCollisionInformationForAgent(struct hkpAgentNnEntry *)
//{
//    mangled_ppc("?removeCollisionInformationForAgent@hkpContinuousSimulation@@UAAXPAUhkpAgentNnEntry@@@Z");
//};

//public: virtual void hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent(struct hkpAgentNnEntry *)
//{
//    mangled_ppc("?assertThereIsNoCollisionInformationForAgent@hkpContinuousSimulation@@UAAXPAUhkpAgentNnEntry@@@Z");
//};

//public: virtual void hkpContinuousSimulation::warpTime(float)
//{
//    mangled_ppc("?warpTime@hkpContinuousSimulation@@UAAXM@Z");
//};

//protected: virtual void hkpContinuousSimulation::collideInternal(class hkStepInfo const &)
//{
//    mangled_ppc("?collideInternal@hkpContinuousSimulation@@MAAXABVhkStepInfo@@@Z");
//};

//public: void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs(class hkpEntity **, int, class hkpWorld *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?collideEntitiesBroadPhaseContinuousFindPairs@hkpContinuousSimulation@@QAAXPAPAVhkpEntity@@HPAVhkpWorld@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous(class hkpEntity **, int, class hkpWorld *, signed char *)
//{
//    mangled_ppc("?collideEntitiesBroadPhaseContinuous@hkpContinuousSimulation@@QAAXPAPAVhkpEntity@@HPAVhkpWorld@@PAC@Z");
//};

//public: void hkpContinuousSimulation::collideIslandNarrowPhaseContinuous(class hkpSimulationIsland *, struct hkpProcessCollisionInput const &)
//{
//    mangled_ppc("?collideIslandNarrowPhaseContinuous@hkpContinuousSimulation@@QAAXPAVhkpSimulationIsland@@ABUhkpProcessCollisionInput@@@Z");
//};

//public: void hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous(class hkpEntity **, int, struct hkpProcessCollisionInput const &)
//{
//    mangled_ppc("?collideEntitiesNarrowPhaseContinuous@hkpContinuousSimulation@@QAAXPAPAVhkpEntity@@HABUhkpProcessCollisionInput@@@Z");
//};

//protected: void hkpContinuousSimulation::processAgentCollideContinuous(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &)
//{
//    mangled_ppc("?processAgentCollideContinuous@hkpContinuousSimulation@@IAAXPAUhkpAgentNnEntry@@ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@@Z");
//};

//public: void hkpContinuousSimulation::addToiEvent(struct hkpProcessCollisionOutput const &, struct hkpAgentNnEntry const &)
//{
//    mangled_ppc("?addToiEvent@hkpContinuousSimulation@@QAAXABUhkpProcessCollisionOutput@@ABUhkpAgentNnEntry@@@Z");
//};

//protected: void hkpContinuousSimulation::removeToiEventsOfEntities(class hkpEntity **, int)
//{
//    mangled_ppc("?removeToiEventsOfEntities@hkpContinuousSimulation@@IAAXPAPAVhkpEntity@@H@Z");
//};

//protected: void hkpContinuousSimulation::removeToiEventsOfEntity(class hkpEntity *)
//{
//    mangled_ppc("?removeToiEventsOfEntity@hkpContinuousSimulation@@IAAXPAVhkpEntity@@@Z");
//};

//protected: virtual void hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly(class hkpEntity **, int, struct hkpProcessCollisionInput const &, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly@hkpContinuousSimulation@@MAAXPAPAVhkpEntity@@HABUhkpProcessCollisionInput@@AAV?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: virtual void hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly(struct hkpProcessCollisionInput const &, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly@hkpContinuousSimulation@@MAAXABUhkpProcessCollisionInput@@AAV?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: void hkpContinuousSimulation::handleSimpleToi(class hkpWorld *, struct hkpToiEvent &, float, float)
//{
//    mangled_ppc("?handleSimpleToi@hkpContinuousSimulation@@IAAXPAVhkpWorld@@AAUhkpToiEvent@@MM@Z");
//};

//protected: virtual void hkpContinuousSimulation::simulateToi(class hkpWorld *, struct hkpToiEvent &, float, float)
//{
//    mangled_ppc("?simulateToi@hkpContinuousSimulation@@MAAXPAVhkpWorld@@AAUhkpToiEvent@@MM@Z");
//};

//void hkLs_doSimpleCollisionResponse(class hkpWorld *, struct hkpToiEvent const &, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?hkLs_doSimpleCollisionResponse@@YAXPAVhkpWorld@@ABUhkpToiEvent@@MAAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpContinuousSimulation::processAgentNnEntries(struct hkpAgentNnEntry *const *, int, struct hkpProcessCollisionInput const &, class hkpSimulationIsland *, class hkBool)
//{
//    mangled_ppc("?processAgentNnEntries@hkpContinuousSimulation@@UAAXPBQAUhkpAgentNnEntry@@HABUhkpProcessCollisionInput@@PAVhkpSimulationIsland@@VhkBool@@@Z");
//};

//void hkLs_collectAgentEntriesToProcess(class hkpEntity const *, enum hkpConstraintInstance::ConstraintPriority, float, class hkFixedArray<unsigned char> &, class hkLocalArray<struct hkpAgentNnEntry *> &)
//{
//    mangled_ppc("?hkLs_collectAgentEntriesToProcess@@YAXPBVhkpEntity@@W4ConstraintPriority@hkpConstraintInstance@@MAAV?$hkFixedArray@E@@AAV?$hkLocalArray@PAUhkpAgentNnEntry@@@@@Z");
//};

//int hkLs_areVelocitiesOk(float, struct hkpConstraintSchemaInfo const &, float const *, int, struct hkpProcessCollisionInput const &)
//{
//    mangled_ppc("?hkLs_areVelocitiesOk@@YAHMABUhkpConstraintSchemaInfo@@PBMHABUhkpProcessCollisionInput@@@Z");
//};

//void hkLs_toiCheckValidityOfConstraints(struct hkpConstraintSolverResources &, struct hkpProcessCollisionInput &, class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &, int &, enum hkpConstraintInstance::ConstraintPriority, class hkFixedArray<unsigned char> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?hkLs_toiCheckValidityOfConstraints@@YAXAAUhkpConstraintSolverResources@@AAUhkpProcessCollisionInput@@AAV?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@AAHW4ConstraintPriority@hkpConstraintInstance@@AAV?$hkFixedArray@E@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@AAV7@@Z");
//};

//void hkLs_toiActivateEntitiesAndCheckConstraints(struct hkpProcessCollisionInput &, enum hkpConstraintInstance::ConstraintPriority, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkFixedArray<unsigned char> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?hkLs_toiActivateEntitiesAndCheckConstraints@@YAXAAUhkpProcessCollisionInput@@W4ConstraintPriority@hkpConstraintInstance@@MABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@AAV?$hkFixedArray@E@@AAV4@AAV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@@Z");
//};

//class hkBool less_EntityPtr(class hkpEntity const *, class hkpEntity const *)
//{
//    mangled_ppc("?less_EntityPtr@@YA?AVhkBool@@PBVhkpEntity@@0@Z");
//};

//class hkBool less_ConstraintPtr(class hkpConstraintInstance const *, class hkpConstraintInstance const *)
//{
//    mangled_ppc("?less_ConstraintPtr@@YA?AVhkBool@@PBVhkpConstraintInstance@@0@Z");
//};

//void hkLs_toiActivateConstraintsLinkingToFixedAndKeyframedEntities(class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &, int &, int)
//{
//    mangled_ppc("?hkLs_toiActivateConstraintsLinkingToFixedAndKeyframedEntities@@YAXAAV?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@AAHH@Z");
//};

//void hkLs_toiActivateConstraintsLinkingActivatedEntities(class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &, int &, class hkFixedArray<unsigned char> &)
//{
//    mangled_ppc("?hkLs_toiActivateConstraintsLinkingActivatedEntities@@YAXAAV?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@AAHAAV?$hkFixedArray@E@@@Z");
//};

//void hkLs_toiResetVelocityAccumulatorsForEntities(struct hkpConstraintSolverResources &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?hkLs_toiResetVelocityAccumulatorsForEntities@@YAXAAUhkpConstraintSolverResources@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkLs_backstepAndFreezeEntireIsland(float, class hkpSimulationIsland *, class hkFixedArray<unsigned char> &, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?hkLs_backstepAndFreezeEntireIsland@@YAXMPAVhkpSimulationIsland@@AAV?$hkFixedArray@E@@AAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkLs_restoreTransformOnBodiesWithUpdatedTransform(class hkpSimulationIsland *, class hkFixedArray<unsigned char> &, struct hkpConstraintSolverResources &)
//{
//    mangled_ppc("?hkLs_restoreTransformOnBodiesWithUpdatedTransform@@YAXPAVhkpSimulationIsland@@AAV?$hkFixedArray@E@@AAUhkpConstraintSolverResources@@@Z");
//};

//class hkBool hkLs_toiCheckFinalValidityOfCriticalConstraints(struct hkpConstraintSolverResources &, class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> const &, struct hkpProcessCollisionInput &, class hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?hkLs_toiCheckFinalValidityOfCriticalConstraints@@YA?AVhkBool@@AAUhkpConstraintSolverResources@@ABV?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@AAUhkpProcessCollisionInput@@PAV?$hkArray@UConstraintViolationInfo@hkpToiResourceMgr@@UhkContainerHeapAllocator@@@@@Z");
//};

//enum hkResult hkLs_localizedSolveToi(struct hkpToiResources const &, struct hkpConstraintSolverResources &, struct hkpToiEvent &, class hkpToiResourceMgr &, class hkpWorld *, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkFixedArray<unsigned char> &, float)
//{
//    mangled_ppc("?hkLs_localizedSolveToi@@YA?AW4hkResult@@ABUhkpToiResources@@AAUhkpConstraintSolverResources@@AAUhkpToiEvent@@AAVhkpToiResourceMgr@@PAVhkpWorld@@AAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@AAV?$hkFixedArray@E@@M@Z");
//};

//merged_846A2170
//{
//    mangled_ppc("merged_846A2170");
//};

//public: hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkpContinuousSimulation::LockCriticalOperationsScope::LockCriticalOperationsScope(class hkpWorld *)
//{
//    mangled_ppc("??0LockCriticalOperationsScope@hkpContinuousSimulation@@QAA@PAVhkpWorld@@@Z");
//};

//public: hkpContinuousSimulation::LockCriticalOperationsScope::~LockCriticalOperationsScope(void)
//{
//    mangled_ppc("??1LockCriticalOperationsScope@hkpContinuousSimulation@@QAA@XZ");
//};

//protected: void hkpContinuousSimulation::fireToiEventRemoved(struct hkpToiEvent &)
//{
//    mangled_ppc("?fireToiEventRemoved@hkpContinuousSimulation@@IAAXAAUhkpToiEvent@@@Z");
//};

//public: void hkpContinuousSimulation::waitForSolverExport(signed char *)
//{
//    mangled_ppc("?waitForSolverExport@hkpContinuousSimulation@@QAAXPAC@Z");
//};

//public: void hkpContinuousSimulation::removeAndAddPairs(class hkpWorld *, class hkpEntity **, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?removeAndAddPairs@hkpContinuousSimulation@@QAAXPAVhkpWorld@@PAPAVhkpEntity@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: hkpToiResources::hkpToiResources(void)
//{
//    mangled_ppc("??0hkpToiResources@@QAA@XZ");
//};

//protected: void hkpContinuousSimulation::collideEntitiesOfOneIslandContinuous_toiOnly(class hkpEntity **, int, class hkpWorld *, struct hkpProcessCollisionInput const &, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?collideEntitiesOfOneIslandContinuous_toiOnly@hkpContinuousSimulation@@IAAXPAPAVhkpEntity@@HPAVhkpWorld@@ABUhkpProcessCollisionInput@@AAV?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: void hkpContinuousSimulation::deleteToiEventsForActiveEntitiesInIsland(class hkpSimulationIsland const *, class hkFixedArray<unsigned char> const &, class hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?deleteToiEventsForActiveEntitiesInIsland@hkpContinuousSimulation@@IAAXPBVhkpSimulationIsland@@ABV?$hkFixedArray@E@@AAV?$hkArray@UhkpToiEvent@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkLs_buildStepInfos(class hkpWorld *, struct hkpToiEvent const &, float, class hkStepInfo &, struct hkpSolverInfo &, class hkpConstraintQueryIn &)
//{
//    mangled_ppc("?hkLs_buildStepInfos@@YAXPAVhkpWorld@@ABUhkpToiEvent@@MAAVhkStepInfo@@AAUhkpSolverInfo@@AAVhkpConstraintQueryIn@@@Z");
//};

//public: struct hkpSolverInfo & hkpSolverInfo::operator=(struct hkpSolverInfo const &)
//{
//    mangled_ppc("??4hkpSolverInfo@@QAAAAU0@ABU0@@Z");
//};

//public: float hkContactPointMaterial::getFriction(void) const
//{
//    mangled_ppc("?getFriction@hkContactPointMaterial@@QBAMXZ");
//};

//public: float hkContactPointMaterial::getRestitution(void) const
//{
//    mangled_ppc("?getRestitution@hkContactPointMaterial@@QBAMXZ");
//};

//public: void hkpContactImpulseLimitBreachedListenerInfo::set(class hkpConstraintInstance *, class hkpContactPointProperties *, class hkContactPoint *, bool)
//{
//    mangled_ppc("?set@hkpContactImpulseLimitBreachedListenerInfo@@QAAXPAVhkpConstraintInstance@@PAVhkpContactPointProperties@@PAVhkContactPoint@@_N@Z");
//};

//public: hkpSimpleConstraintUtilCollideParams::hkpSimpleConstraintUtilCollideParams(void)
//{
//    mangled_ppc("??0hkpSimpleConstraintUtilCollideParams@@QAA@XZ");
//};

//void hkLs_updateTransformIfNeeded(class hkpEntity *, float, class hkFixedArray<unsigned char> &)
//{
//    mangled_ppc("?hkLs_updateTransformIfNeeded@@YAXPAVhkpEntity@@MAAV?$hkFixedArray@E@@@Z");
//};

//class hkBool hkLs_isAgentInteresting(struct hkpAgentNnEntry *, enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("?hkLs_isAgentInteresting@@YA?AVhkBool@@PAUhkpAgentNnEntry@@W4ConstraintPriority@hkpConstraintInstance@@@Z");
//};

//void hkSweptTransformUtil::getVelocity(class hkMotionState const &, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?getVelocity@hkSweptTransformUtil@@YAXABVhkMotionState@@AAVhkVector4@@1@Z");
//};

//class hkBool hkLs_isConstraintInteresting(class hkpConstraintInstance *, enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("?hkLs_isConstraintInteresting@@YA?AVhkBool@@PAVhkpConstraintInstance@@W4ConstraintPriority@2@@Z");
//};

//public: class hkpEntity * hkConstraintInternal::getOtherEntity(class hkpEntity const *) const
//{
//    mangled_ppc("?getOtherEntity@hkConstraintInternal@@QBAPAVhkpEntity@@PBV2@@Z");
//};

//public: class hkpEntity * hkpConstraintInstance::getSlaveEntity(void) const
//{
//    mangled_ppc("?getSlaveEntity@hkpConstraintInstance@@QBAPAVhkpEntity@@XZ");
//};

//public: class hkpContactPointPropertiesStream * hkpSimpleContactConstraintAtom::getContactPointPropertiesStream(int) const
//{
//    mangled_ppc("?getContactPointPropertiesStream@hkpSimpleContactConstraintAtom@@QBAPAVhkpContactPointPropertiesStream@@H@Z");
//};

//public: struct hkpProcessCollisionInput * hkpWorld::getCollisionInputRw(void)
//{
//    mangled_ppc("?getCollisionInputRw@hkpWorld@@QAAPAUhkpProcessCollisionInput@@XZ");
//};

//void hkLs_updateTransform(class hkpEntity *, float)
//{
//    mangled_ppc("?hkLs_updateTransform@@YAXPAVhkpEntity@@M@Z");
//};

//public: hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkpToiEvent@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@UhkpToiEvent@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::insertAt(int, class hkpEntity *const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXHPBQAVhkpEntity@@H@Z");
//};

//public: hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UEntryAndIsland@?A0x4fe762ed@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::EntryAndIsland & hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UEntryAndIsland@?A0x4fe762ed@@UhkContainerHeapAllocator@@@@QAAAAUEntryAndIsland@?A0x4fe762ed@@XZ");
//};

//public: hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpEntity@@$01UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpEntity@@$0EA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkpToiResourceMgr::ConstraintViolationInfo & hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UConstraintViolationInfo@hkpToiResourceMgr@@UhkContainerHeapAllocator@@@@QAAAAUConstraintViolationInfo@hkpToiResourceMgr@@XZ");
//};

//public: hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UhkpConstraintSchemaInfo@@$0EA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkLocalArray<class hkpEntity *>::hkLocalArray<class hkpEntity *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PAVhkpEntity@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkpEntity *>::~hkLocalArray<class hkpEntity *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PAVhkpEntity@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpConstraintInstance@@$0EA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UConstraintViolationInfo@hkpToiResourceMgr@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<class hkpEntity *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PAVhkpEntity@@@@QBA?AVhkBool@@XZ");
//};

//class hkpContactPointPropertiesStream const * hkAddByteOffsetConst<class hkpContactPointPropertiesStream>(class hkpContactPointPropertiesStream const *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetConst@VhkpContactPointPropertiesStream@@@@YAPBVhkpContactPointPropertiesStream@@PBV0@J@Z");
//};

//public: hkArrayBase<struct hkpToiEvent>::hkArrayBase<struct hkpToiEvent>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpToiEvent@@@@QAA@XZ");
//};

//public: struct hkpToiEvent & hkArrayBase<struct hkpToiEvent>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpToiEvent@@@@QAAAAUhkpToiEvent@@H@Z");
//};

//public: int hkArrayBase<struct hkpToiEvent>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkpToiEvent@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkpToiEvent>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpToiEvent@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpToiEvent>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpToiEvent@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpToiEvent>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UhkpToiEvent@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkpToiEvent>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkpToiEvent@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpToiEvent * hkArrayBase<struct hkpToiEvent>::expandByUnchecked(int)
//{
//    mangled_ppc("?expandByUnchecked@?$hkArrayBase@UhkpToiEvent@@@@QAAPAUhkpToiEvent@@H@Z");
//};

//public: hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::~hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpToiEvent@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpToiEvent>::~hkArrayBase<struct hkpToiEvent>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpToiEvent@@@@QAA@XZ");
//};

//public: void hkStatisticsCollector::addArray<struct hkpToiEvent>(char const *, class hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UhkpToiEvent@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UhkpToiEvent@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addPointerMap<unsigned int, class hkpEntity *>(char const *, class hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addPointerMap@IPAVhkpEntity@@@hkStatisticsCollector@@QAAXPBDABV?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//class hkpBroadPhaseHandle const ** hkAllocateStack<class hkpBroadPhaseHandle const *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PBVhkpBroadPhaseHandle@@@@YAPAPBVhkpBroadPhaseHandle@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpBroadPhaseHandle const *>(class hkpBroadPhaseHandle const **)
//{
//    mangled_ppc("??$hkDeallocateStack@PBVhkpBroadPhaseHandle@@@@YAXPAPBVhkpBroadPhaseHandle@@@Z");
//};

//public: hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::hkArrayBase<struct `anonymous namespace'::EntryAndIsland>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::EntryAndIsland & hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QAAAAUEntryAndIsland@?A0x4fe762ed@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QBAHXZ");
//};

//public: struct `anonymous namespace'::EntryAndIsland & hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QAAAAUEntryAndIsland@?A0x4fe762ed@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UEntryAndIsland@?A0x4fe762ed@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::~hkArrayBase<struct `anonymous namespace'::EntryAndIsland>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QAA@XZ");
//};

//public: unsigned char const & hkFixedArray<unsigned char>::operator[](int) const
//{
//    mangled_ppc("??A?$hkFixedArray@E@@QBAABEH@Z");
//};

//public: unsigned char & hkFixedArray<unsigned char>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@E@@QAAAAEH@Z");
//};

//public: hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 2, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpEntity@@$01UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 64, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpEntity@@$0EA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: static void hkReferencedObject::addReferences<class hkpEntity>(class hkpEntity const *const *, int, int)
//{
//    mangled_ppc("??$addReferences@VhkpEntity@@@hkReferencedObject@@SAXPBQBVhkpEntity@@HH@Z");
//};

//public: struct hkpAgentNnEntry *& hkArrayBase<struct hkpAgentNnEntry *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAAAAPAUhkpAgentNnEntry@@H@Z");
//};

//public: struct hkpConstraintSchemaInfo const & hkArrayBase<struct hkpConstraintSchemaInfo>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QBAABUhkpConstraintSchemaInfo@@H@Z");
//};

//public: struct hkpConstraintSchemaInfo & hkArrayBase<struct hkpConstraintSchemaInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QAAAAUhkpConstraintSchemaInfo@@H@Z");
//};

//public: int hkArrayBase<struct hkpConstraintSchemaInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QBAHXZ");
//};

//public: hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//void hkAlgorithm::swap<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo &, struct hkpConstraintSchemaInfo &)
//{
//    mangled_ppc("??$swap@UhkpConstraintSchemaInfo@@@hkAlgorithm@@YAXAAUhkpConstraintSchemaInfo@@0@Z");
//};

//void hkAlgorithm::quickSort<class hkpConstraintInstance *, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance *)>(class hkpConstraintInstance **, int, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance const *))
//{
//    mangled_ppc("??$quickSort@PAVhkpConstraintInstance@@P6A?AVhkBool@@PBV1@0@Z@hkAlgorithm@@YAXPAPAVhkpConstraintInstance@@HP6A?AVhkBool@@PBV1@1@Z@Z");
//};

//void hkAlgorithm::quickSort<class hkpEntity *, class hkBool (*)(class hkpEntity const *, class hkpEntity *)>(class hkpEntity **, int, class hkBool (*)(class hkpEntity const *, class hkpEntity const *))
//{
//    mangled_ppc("??$quickSort@PAVhkpEntity@@P6A?AVhkBool@@PBV1@0@Z@hkAlgorithm@@YAXPAPAVhkpEntity@@HP6A?AVhkBool@@PBV1@1@Z@Z");
//};

//public: struct hkpToiResourceMgr::ConstraintViolationInfo & hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UConstraintViolationInfo@hkpToiResourceMgr@@@@QAAAAUConstraintViolationInfo@hkpToiResourceMgr@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UConstraintViolationInfo@hkpToiResourceMgr@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpConstraintSchemaInfo, 64, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UhkpConstraintSchemaInfo@@$0EA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance *, 64, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpConstraintInstance@@$0EA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpToiResourceMgr::ConstraintViolationInfo, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UConstraintViolationInfo@hkpToiResourceMgr@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//class hkpEntity ** hkAllocateStack<class hkpEntity *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PAVhkpEntity@@@@YAPAPAVhkpEntity@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpEntity *>(class hkpEntity **)
//{
//    mangled_ppc("??$hkDeallocateStack@PAVhkpEntity@@@@YAXPAPAVhkpEntity@@@Z");
//};

//public: void hkArray<struct hkpToiEvent, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpToiEvent@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void * hkPointerMap<unsigned int, class hkpEntity *, struct hkContainerHeapAllocator>::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkPointerMap@IPAVhkpEntity@@UhkContainerHeapAllocator@@@@QBAPAXXZ");
//};

//public: void hkArray<struct `anonymous namespace'::EntryAndIsland, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UEntryAndIsland@?A0x4fe762ed@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>(struct hkpConstraintSchemaInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@QAA@PAUhkpConstraintSchemaInfo@@HH@Z");
//};

//public: void hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UConstraintViolationInfo@hkpToiResourceMgr@@UhkContainerHeapAllocator@@@@QAA@PAUConstraintViolationInfo@hkpToiResourceMgr@@HH@Z");
//};

//public: void hkArray<struct hkpToiResourceMgr::ConstraintViolationInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UConstraintViolationInfo@hkpToiResourceMgr@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpToiEvent>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpToiEvent@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpToiEvent const * hkArrayBase<struct hkpToiEvent>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpToiEvent@@@@QBAPBUhkpToiEvent@@XZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpToiEvent>(struct hkpToiEvent *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpToiEvent@@@hkArrayUtil@@SAXPAUhkpToiEvent@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkMemUtil::memCpyOneAligned<112, 16>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$0HA@$0BA@@hkMemUtil@@YAXPAXPBX@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpToiEvent>(struct hkpToiEvent *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpToiEvent@@@hkArrayUtil@@SAXPAUhkpToiEvent@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct `anonymous namespace'::EntryAndIsland>(struct `anonymous namespace'::EntryAndIsland *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UEntryAndIsland@?A0x4fe762ed@@@hkArrayUtil@@SAXPAUEntryAndIsland@?A0x4fe762ed@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkpConstraintSchemaInfo>::hkArrayBase<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QAA@PAUhkpConstraintSchemaInfo@@HH@Z");
//};

//public: hkArrayBase<struct hkpConstraintSchemaInfo>::~hkArrayBase<struct hkpConstraintSchemaInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpConstraintSchemaInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<class hkpConstraintInstance *, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance *)>(class hkpConstraintInstance **, int, int, class hkBool (*)(class hkpConstraintInstance const *, class hkpConstraintInstance const *))
//{
//    mangled_ppc("??$quickSortRecursive@PAVhkpConstraintInstance@@P6A?AVhkBool@@PBV1@0@Z@hkAlgorithm@@YAXPAPAVhkpConstraintInstance@@HHP6A?AVhkBool@@PBV1@1@Z@Z");
//};

//void hkAlgorithm::quickSortRecursive<class hkpEntity *, class hkBool (*)(class hkpEntity const *, class hkpEntity *)>(class hkpEntity **, int, int, class hkBool (*)(class hkpEntity const *, class hkpEntity const *))
//{
//    mangled_ppc("??$quickSortRecursive@PAVhkpEntity@@P6A?AVhkBool@@PBV1@0@Z@hkAlgorithm@@YAXPAPAVhkpEntity@@HHP6A?AVhkBool@@PBV1@1@Z@Z");
//};

//public: hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UConstraintViolationInfo@hkpToiResourceMgr@@@@QAA@PAUConstraintViolationInfo@hkpToiResourceMgr@@HH@Z");
//};

//public: hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::~hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UConstraintViolationInfo@hkpToiResourceMgr@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UConstraintViolationInfo@hkpToiResourceMgr@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UConstraintViolationInfo@hkpToiResourceMgr@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpToiResourceMgr::ConstraintViolationInfo>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UConstraintViolationInfo@hkpToiResourceMgr@@@hkArrayUtil@@SAXPAUConstraintViolationInfo@hkpToiResourceMgr@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpToiEvent::hkpToiEvent(void)
//{
//    mangled_ppc("??0hkpToiEvent@@QAA@XZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::EntryAndIsland>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UEntryAndIsland@?A0x4fe762ed@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpConstraintSchemaInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpToiResourceMgr::ConstraintViolationInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UConstraintViolationInfo@hkpToiResourceMgr@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::EntryAndIsland>(struct `anonymous namespace'::EntryAndIsland *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UEntryAndIsland@?A0x4fe762ed@@@hkArrayUtil@@SAXPAUEntryAndIsland@?A0x4fe762ed@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpConstraintSchemaInfo@@@hkArrayUtil@@SAXPAUhkpConstraintSchemaInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpToiResourceMgr::ConstraintViolationInfo>(struct hkpToiResourceMgr::ConstraintViolationInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UConstraintViolationInfo@hkpToiResourceMgr@@@hkArrayUtil@@SAXPAUConstraintViolationInfo@hkpToiResourceMgr@@HU?$hkTraitBool@$0A@@@@Z");
//};

