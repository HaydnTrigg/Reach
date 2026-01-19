/* ---------- headers */

#include "havok\hkpdynamics\hkpWorld.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned short const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::s_invalidIdx; // "?s_invalidIdx@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@2GB"
// protected: static unsigned short const hkpAabbTreeWorldManager::s_invalidIdx; // "?s_invalidIdx@hkpAabbTreeWorldManager@@1GB"
// public: static unsigned short const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node::s_leafMask; // "?s_leafMask@Node@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@2GB"
// public: static unsigned short const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node::s_leafFlag; // "?s_leafFlag@Node@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@2GB"
// const hkpPhantomBroadPhaseListener::`vftable'{for `hkpBroadPhaseListener'}; // "??_7hkpPhantomBroadPhaseListener@@6BhkpBroadPhaseListener@@@"
// const hkpPhantomBroadPhaseListener::`vftable'{for `hkReferencedObject'}; // "??_7hkpPhantomBroadPhaseListener@@6BhkReferencedObject@@@"
// const hkpBroadPhaseBorderListener::`vftable'{for `hkpBroadPhaseListener'}; // "??_7hkpBroadPhaseBorderListener@@6BhkpBroadPhaseListener@@@"
// const hkpBroadPhaseBorderListener::`vftable'{for `hkReferencedObject'}; // "??_7hkpBroadPhaseBorderListener@@6BhkReferencedObject@@@"
// const hkpWorld::`RTTI Complete Object Locator'; // "??_R4hkpWorld@@6B@"
// hkpWorld::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpWorld@@8"
// hkpWorld::`RTTI Base Class Array'; // "??_R2hkpWorld@@8"
// hkpWorld::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpWorld@@8"
// const hkpPhantomBroadPhaseListener::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkpPhantomBroadPhaseListener@@6BhkReferencedObject@@@"
// hkpPhantomBroadPhaseListener::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpPhantomBroadPhaseListener@@8"
// hkpPhantomBroadPhaseListener::`RTTI Base Class Array'; // "??_R2hkpPhantomBroadPhaseListener@@8"
// hkpPhantomBroadPhaseListener::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpPhantomBroadPhaseListener@@8"
// hkpBroadPhaseListener::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@hkpBroadPhaseListener@@8"
// hkpBroadPhaseListener::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpBroadPhaseListener@@8"
// hkpBroadPhaseListener::`RTTI Base Class Array'; // "??_R2hkpBroadPhaseListener@@8"
// hkpBroadPhaseListener::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpBroadPhaseListener@@8"
// const hkpPhantomBroadPhaseListener::`RTTI Complete Object Locator'{for `hkpBroadPhaseListener'}; // "??_R4hkpPhantomBroadPhaseListener@@6BhkpBroadPhaseListener@@@"
// const hkpBroadPhaseListener::`RTTI Complete Object Locator'; // "??_R4hkpBroadPhaseListener@@6B@"
// const hkpBroadPhaseBorderListener::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkpBroadPhaseBorderListener@@6BhkReferencedObject@@@"
// hkpBroadPhaseBorderListener::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpBroadPhaseBorderListener@@8"
// hkpBroadPhaseBorderListener::`RTTI Base Class Array'; // "??_R2hkpBroadPhaseBorderListener@@8"
// hkpBroadPhaseBorderListener::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpBroadPhaseBorderListener@@8"
// const hkpBroadPhaseBorderListener::`RTTI Complete Object Locator'{for `hkpBroadPhaseListener'}; // "??_R4hkpBroadPhaseBorderListener@@6BhkpBroadPhaseListener@@@"
// const hkpNullContactMgrFactory::`RTTI Complete Object Locator'; // "??_R4hkpNullContactMgrFactory@@6B@"
// hkpNullContactMgrFactory::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpNullContactMgrFactory@@8"
// hkpNullContactMgrFactory::`RTTI Base Class Array'; // "??_R2hkpNullContactMgrFactory@@8"
// hkpNullContactMgrFactory::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpNullContactMgrFactory@@8"
// hkpContactMgrFactory::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpContactMgrFactory@@8"
// hkpContactMgrFactory::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpContactMgrFactory@@8"
// hkpContactMgrFactory::`RTTI Base Class Array'; // "??_R2hkpContactMgrFactory@@8"
// const hkpNullContactMgr::`RTTI Complete Object Locator'; // "??_R4hkpNullContactMgr@@6B@"
// hkpNullContactMgr::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpNullContactMgr@@8"
// hkpNullContactMgr::`RTTI Base Class Array'; // "??_R2hkpNullContactMgr@@8"
// hkpNullContactMgr::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpNullContactMgr@@8"
// const hkpContactMgrFactory::`RTTI Complete Object Locator'; // "??_R4hkpContactMgrFactory@@6B@"
// const hkpWorldRayCaster::`RTTI Complete Object Locator'; // "??_R4hkpWorldRayCaster@@6B@"
// hkpWorldRayCaster::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpWorldRayCaster@@8"
// hkpWorldRayCaster::`RTTI Base Class Array'; // "??_R2hkpWorldRayCaster@@8"
// hkpWorldRayCaster::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpWorldRayCaster@@8"
// hkpBroadPhaseCastCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpBroadPhaseCastCollector@@8"
// hkpBroadPhaseCastCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpBroadPhaseCastCollector@@8"
// hkpBroadPhaseCastCollector::`RTTI Base Class Array'; // "??_R2hkpBroadPhaseCastCollector@@8"
// const hkpBroadPhaseCastCollector::`RTTI Complete Object Locator'; // "??_R4hkpBroadPhaseCastCollector@@6B@"
// const hkpSimpleWorldRayCaster::`RTTI Complete Object Locator'; // "??_R4hkpSimpleWorldRayCaster@@6B@"
// hkpSimpleWorldRayCaster::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpSimpleWorldRayCaster@@8"
// hkpSimpleWorldRayCaster::`RTTI Base Class Array'; // "??_R2hkpSimpleWorldRayCaster@@8"
// hkpSimpleWorldRayCaster::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpSimpleWorldRayCaster@@8"
// const hkpWorldLinearCaster::`RTTI Complete Object Locator'; // "??_R4hkpWorldLinearCaster@@6B@"
// hkpWorldLinearCaster::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpWorldLinearCaster@@8"
// hkpWorldLinearCaster::`RTTI Base Class Array'; // "??_R2hkpWorldLinearCaster@@8"
// hkpWorldLinearCaster::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpWorldLinearCaster@@8"
// class hkpWorld::`RTTI Type Descriptor'; // "??_R0?AVhkpWorld@@@8"
// class hkpPhantomBroadPhaseListener::`RTTI Type Descriptor'; // "??_R0?AVhkpPhantomBroadPhaseListener@@@8"
// class hkpBroadPhaseListener::`RTTI Type Descriptor'; // "??_R0?AVhkpBroadPhaseListener@@@8"
// class hkpBroadPhaseBorderListener::`RTTI Type Descriptor'; // "??_R0?AVhkpBroadPhaseBorderListener@@@8"
// class hkpNullContactMgrFactory::`RTTI Type Descriptor'; // "??_R0?AVhkpNullContactMgrFactory@@@8"
// class hkpContactMgrFactory::`RTTI Type Descriptor'; // "??_R0?AVhkpContactMgrFactory@@@8"
// class hkpNullContactMgr::`RTTI Type Descriptor'; // "??_R0?AVhkpNullContactMgr@@@8"
// class hkpWorldRayCaster::`RTTI Type Descriptor'; // "??_R0?AVhkpWorldRayCaster@@@8"
// class hkpBroadPhaseCastCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpBroadPhaseCastCollector@@@8"
// class hkpSimpleWorldRayCaster::`RTTI Type Descriptor'; // "??_R0?AVhkpSimpleWorldRayCaster@@@8"
// class hkpWorldLinearCaster::`RTTI Type Descriptor'; // "??_R0?AVhkpWorldLinearCaster@@@8"
// public: static class hkBool hkpWorld::m_forceMultithreadedSimulation; // "?m_forceMultithreadedSimulation@hkpWorld@@2VhkBool@@A"

// public: hkpMultithreadConfig::hkpMultithreadConfig(void);
// public: hkpWorld::hkpWorld(class hkFinishLoadedObjectFlag);
// public: void hkpWorld::removeAll(void);
// public: virtual hkpWorld::~hkpWorld(void);
// public: void hkpWorld::updateCollisionFilterOnWorld(enum hkpUpdateCollisionFilterOnWorldMode, enum hkpUpdateCollectionFilterMode);
// public: void hkpWorld::updateCollisionFilterOnPhantom(class hkpPhantom *, enum hkpUpdateCollectionFilterMode);
// void hkWorld_updateFilterOnSinglePhantom(class hkpPhantom *, class hkpCollidable *, class hkpCollisionFilter *);
// public: void hkpWorld::reenableCollisionBetweenEntityPair(class hkpEntity *, class hkpEntity *);
// public: void hkpWorld::updateCollisionFilterOnEntity(class hkpEntity *, enum hkpUpdateCollisionFilterOnEntityMode, enum hkpUpdateCollectionFilterMode);
// public: void hkpWorld::reintegrateAndRecollideEntities(class hkpEntity **, int, enum hkpWorld::ReintegrationRecollideMode);
// public: class hkpEntity * hkpWorld::addEntity(class hkpEntity *, enum hkpEntityActivation);
// public: void hkpWorld::addEntityBatch(class hkpEntity *const *, int, enum hkpEntityActivation);
// public: class hkBool hkpWorld::removeEntity(class hkpEntity *);
// public: void hkpWorld::removeEntityBatch(class hkpEntity *const *, int);
// public: void hkpWorld::activateRegion(class hkAabb const &);
// public: class hkpConstraintInstance * hkpWorld::addConstraint(class hkpConstraintInstance *);
// void warnIfConstrainedDynamicBodiesCanCollide(class hkpConstraintInstance const *, class hkBool, class hkBool);
// bool constrainedDynamicBodiesCanCollide(class hkpWorld const *, class hkpConstraintInstance const *);
// public: class hkpConstraintInstance * hkpWorld::createAndAddConstraintInstance(class hkpRigidBody *, class hkpRigidBody *, class hkpConstraintData *);
// public: class hkBool hkpWorld::removeConstraint(class hkpConstraintInstance *);
// public: class hkpAction * hkpWorld::addAction(class hkpAction *);
// public: void hkpWorld::removeAction(class hkpAction *);
// public: void hkpWorld::removeActionImmediately(class hkpAction *);
// public: void hkpWorld::attachActionToEntity(class hkpAction *, class hkpEntity *);
// public: void hkpWorld::detachActionFromEntity(class hkpAction *, class hkpEntity *);
// public: class hkpPhantom * hkpWorld::addPhantom(class hkpPhantom *);
// public: void hkpWorld::addPhantomBatch(class hkpPhantom *const *, int);
// public: void hkpWorld::removePhantom(class hkpPhantom *);
// public: void hkpWorld::removePhantomBatch(class hkpPhantom *const *, int);
// public: void hkpWorld::addPhysicsSystem(class hkpPhysicsSystem const *);
// public: void hkpWorld::removePhysicsSystem(class hkpPhysicsSystem const *);
// public: void hkpWorld::setGravity(class hkVector4const &);
// public: void hkpWorld::addActionListener(class hkpActionListener *);
// public: void hkpWorld::removeActionListener(class hkpActionListener *);
// public: void hkpWorld::addConstraintListener(class hkpConstraintListener *);
// public: void hkpWorld::removeConstraintListener(class hkpConstraintListener *);
// public: void hkpWorld::addEntityListener(class hkpEntityListener *);
// public: void hkpWorld::removeEntityListener(class hkpEntityListener *);
// public: void hkpWorld::addPhantomListener(class hkpPhantomListener *);
// public: void hkpWorld::removePhantomListener(class hkpPhantomListener *);
// public: void hkpWorld::addIslandActivationListener(class hkpIslandActivationListener *);
// public: void hkpWorld::removeIslandActivationListener(class hkpIslandActivationListener *);
// public: void hkpWorld::addWorldPostCollideListener(class hkpWorldPostCollideListener *);
// public: void hkpWorld::removeWorldPostCollideListener(class hkpWorldPostCollideListener *);
// public: void hkpWorld::addWorldPostSimulationListener(class hkpWorldPostSimulationListener *);
// public: void hkpWorld::removeWorldPostSimulationListener(class hkpWorldPostSimulationListener *);
// public: void hkpWorld::addWorldPostIntegrateListener(class hkpWorldPostIntegrateListener *);
// public: void hkpWorld::removeWorldPostIntegrateListener(class hkpWorldPostIntegrateListener *);
// public: void hkpWorld::addIslandPostCollideListener(class hkpIslandPostCollideListener *);
// public: void hkpWorld::removeIslandPostCollideListener(class hkpIslandPostCollideListener *);
// public: void hkpWorld::addIslandPostIntegrateListener(class hkpIslandPostIntegrateListener *);
// public: void hkpWorld::removeIslandPostIntegrateListener(class hkpIslandPostIntegrateListener *);
// public: void hkpWorld::addContactListener(class hkpContactListener *);
// public: void hkpWorld::removeContactListener(class hkpContactListener *);
// public: void hkpWorld::addWorldDeletionListener(class hkpWorldDeletionListener *);
// public: void hkpWorld::removeWorldDeletionListener(class hkpWorldDeletionListener *);
// public: void hkpWorld::addContactImpulseLimitBreachedListener(class hkpContactImpulseLimitBreachedListener *);
// public: void hkpWorld::removeContactImpulseLimitBreachedListener(class hkpContactImpulseLimitBreachedListener *);
// public: float hkpWorld::getCurrentTime(void) const;
// public: float hkpWorld::getCurrentPsiTime(void) const;
// public: enum hkpStepResult hkpWorld::stepDeltaTime(float);
// public: enum hkpStepResult hkpWorld::integrate(float);
// public: enum hkpStepResult hkpWorld::collide(void);
// public: enum hkpStepResult hkpWorld::advanceTime(void);
// public: void hkpWorld::setFrameTimeMarker(float);
// public: bool hkpWorld::isSimulationAtMarker(void) const;
// public: bool hkpWorld::isSimulationAtPsi(void) const;
// public: static void hkpWorld::registerWithJobQueue(class hkJobQueue *);
// public: enum hkpStepResult hkpWorld::stepMultithreaded(class hkJobQueue *, class hkJobThreadPool *, float);
// public: enum hkpStepResult hkpWorld::initMtStep(class hkJobQueue *, float);
// public: enum hkpStepResult hkpWorld::finishMtStep(class hkJobQueue *, class hkJobThreadPool *);
// public: void hkpWorld::getMultithreadConfig(struct hkpMultithreadConfig &);
// public: void hkpWorld::setMultithreadConfig(struct hkpMultithreadConfig const &, class hkJobQueue *);
// public: void hkpWorld::setCompressedMeshShapeOnSpu(class hkJobQueue *, class hkBool);
// public: virtual void hkpWorld::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: void hkpWorld::checkDeterminismOfIslandBroadPhase(class hkpSimulationIsland const *);
// public: void hkpWorld::checkDeterminism(void);
// public: void hkpWorld::getCinfo(class hkpWorldCinfo &) const;
// public: class hkWorldMemoryAvailableWatchDog * hkpWorld::getMemoryWatchDog(void) const;
// public: void hkpWorld::setMemoryWatchDog(class hkWorldMemoryAvailableWatchDog *);
// public: hkpWorld::hkpWorld(class hkpWorldCinfo const &, unsigned int);
// void hkWorld_setupContactMgrFactories(class hkpWorld *, class hkpCollisionDispatcher *);
// public: void hkpWorld::shiftBroadPhase(class hkVector4const &, class hkVector4&, enum hkpWorld::CachedAabbUpdate);
// public: void hkpWorld::setCollisionFilter(class hkpCollisionFilter *, class hkBool, enum hkpUpdateCollisionFilterOnWorldMode, enum hkpUpdateCollectionFilterMode);
// public: void hkpWorld::checkAccessGetActiveSimulationIslands(void) const;
// public: void hkpWorld::setBroadPhaseBorder(class hkpBroadPhaseBorder *);
// public: class hkpBroadPhaseBorder * hkpWorld::getBroadPhaseBorder(void) const;
// public: void hkpWorld::castRay(struct hkpWorldRayCastInput const &, class hkpRayHitCollector &) const;
// public: void hkpWorld::castRay(struct hkpWorldRayCastInput const &, struct hkpWorldRayCastOutput &) const;
// public: void hkpWorld::castRayMt(struct hkpWorldRayCastCommand *, int, class hkJobQueue *, class hkJobThreadPool *, class hkSemaphore *, int) const;
// public: void hkpWorld::getClosestPoints(class hkpCollidable const *, struct hkpCollisionInput const &, class hkpCdPointCollector &) const;
// public: void hkpWorld::getPenetrations(class hkpCollidable const *, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &) const;
// public: void hkpWorld::linearCast(class hkpCollidable const *, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *) const;
// public: void hkpWorld::linearCastMt(struct hkpWorldLinearCastCommand *, int, class hkJobQueue *, class hkJobThreadPool *, class hkSemaphore *, int) const;
// public: class hkpPhysicsSystem * hkpWorld::getWorldAsOneSystem(void) const;
// void enumerateAllEntitiesInWorld(class hkpWorld const *, class hkpPhysicsSystem *);
// class hkBool enumerateAllInactiveEntitiesInWorld(class hkpWorld const *, class hkpPhysicsSystem *);
// class hkBool enumerateAllActiveEntitiesInWorld(class hkpWorld const *, class hkpPhysicsSystem *);
// void enumerateAllConstraintsInWorld(class hkpWorld const *, class hkpPhysicsSystem *);
// void enumerateAllConstraintsInIsland(class hkpSimulationIsland *, class hkpPhysicsSystem *);
// void enumerateAllActionsInWorld(class hkpWorld const *, class hkpPhysicsSystem *);
// void enumerateAllPhantomsInWorld(class hkpWorld const *, class hkpPhysicsSystem *);
// public: void hkpWorld::getWorldAsSystems(class hkArray<class hkpPhysicsSystem *, struct hkContainerHeapAllocator> &) const;
// private: void hkpWorld::internal_executePendingOperations(void);
// private: void hkpWorld::internal_executePendingBodyOperations(void);
// public: void hkpWorld::queueOperation(struct hkWorldOperation::BaseOperation const &);
// public: void hkpWorld::addBodyOperation(class hkpRigidBody *, class hkpBodyOperation *, int, int);
// public: class hkWorldOperation::UserCallback * hkpWorld::queueCallback(class hkWorldOperation::UserCallback *, unsigned long);
// public: void hkpWorld::findInitialContactPoints(class hkpEntity **, int);
// public: void hkpWorld::findInitialContactPointsOfAllEntities(void);
// public: void hkpWorld::getMemUsageForIntegration(struct hkpWorld::MemUsageInfo &);
// public: void hkpWorld::lock(void);
// public: void hkpWorld::unlock(void);
// public: void hkpWorld::lockReadOnly(void);
// public: void hkpWorld::unlockReadOnly(void);
// public: bool hkpWorld::checkUnmarked(void);
// public: void hkpWorld::lockIslandForConstraintUpdate(class hkpSimulationIsland *);
// public: void hkpWorld::lockForIslandSplit(class hkpSimulationIsland *);
// public: void hkpWorld::unlockIslandForConstraintUpdate(class hkpSimulationIsland *);
// public: void hkpWorld::unlockForIslandSplit(class hkpSimulationIsland *);
// public: void hkpWorld::markTreeDirty(void);
// public: void hkpWorld::updateKdTree(class hkJobQueue *, class hkJobThreadPool *);
// public: void hkpWorld::setMultithreadedAccessChecking(enum hkpWorld::MtAccessChecking);
// public: enum hkpWorld::MtAccessChecking hkpWorld::getMultithreadedAccessChecking(void) const;
// public: void hkpWorld::markForRead(void) const;
// public: void hkpWorld::markForWrite(void);
// public: void hkpWorld::unmarkForRead(void) const;
// public: void hkpWorld::unmarkForWrite(void);
// merged_84027800;
// public: static void hkpWorld::operator delete(void *);
// public: hkpWorldDynamicsStepInfo::hkpWorldDynamicsStepInfo(void);
// public: hkpSolverInfo::hkpSolverInfo(void);
// public: hkpSolverInfo::DeactivationInfo::DeactivationInfo(void);
// public: static void hkpCollisionAgentConfig::operator delete(void *);
// public: void * hkpMtThreadStructure::`scalar deleting destructor'(unsigned int);
// public: static void hkpMtThreadStructure::operator delete(void *);
// public: void * hkpTypedBroadPhaseDispatcher::`scalar deleting destructor'(unsigned int);
// public: static void hkpTypedBroadPhaseDispatcher::operator delete(void *);
// public: void * hkpProcessCollisionInput::`scalar deleting destructor'(unsigned int);
// public: static void hkpProcessCollisionInput::operator delete(void *);
// public: void * hkpWorldOperationQueue::`scalar deleting destructor'(unsigned int);
// public: static void hkpWorldOperationQueue::operator delete(void *);
// public: hkpMtThreadStructure::~hkpMtThreadStructure(void);
// public: hkWorldOperation::UpdateFilterOnWorld::UpdateFilterOnWorld(void);
// public: hkWorldOperation::UpdateFilterOnPhantom::UpdateFilterOnPhantom(void);
// public: hkWorldOperation::UpdateFilterOnEntityPair::UpdateFilterOnEntityPair(void);
// class hkpPhantom * hkGetPhantom(class hkpCollidable const *);
// public: hkWorldOperation::UpdateFilterOnEntity::UpdateFilterOnEntity(void);
// public: hkWorldOperation::ReintegrateAndRecollideEntityBatch::ReintegrateAndRecollideEntityBatch(void);
// public: void hkpCdBody::setMotionState(class hkMotionState const *);
// public: void hkpWorld::allowCriticalOperations(class hkBool);
// public: hkWorldOperation::AddEntity::AddEntity(void);
// protected: void hkpWorldObject::setWorld(class hkpWorld *);
// public: static void * hkpSimulationIsland::operator new(unsigned int);
// public: hkWorldOperation::AddEntityBatch::AddEntityBatch(void);
// public: hkWorldOperation::RemoveEntity::RemoveEntity(void);
// public: hkWorldOperation::RemoveEntityBatch::RemoveEntityBatch(void);
// public: hkWorldOperation::ActivateRegion::ActivateRegion(void);
// public: hkWorldOperation::AddConstraint::AddConstraint(void);
// public: unsigned long hkpConstraintData::getUserData(void) const;
// public: void hkpConstraintInstance::setUserData(unsigned long);
// public: class hkpWorld * hkpSimulationIsland::getWorld(void);
// public: hkWorldOperation::RemoveConstraint::RemoveConstraint(void);
// public: void hkpAction::setWorld(class hkpWorld *);
// public: class hkBool hkpSimulationIsland::isFixed(void) const;
// public: hkWorldOperation::AddAction::AddAction(void);
// public: hkWorldOperation::RemoveAction::RemoveAction(void);
// public: class hkpSimulationIsland * hkpAction::getSimulationIsland(void);
// public: static void hkpWorldOperationUtil::putIslandOnDirtyList(class hkpWorld *, class hkpSimulationIsland *);
// public: int hkpWorld::areCriticalOperationsLockedForPhantoms(void) const;
// public: hkWorldOperation::AddPhantom::AddPhantom(void);
// public: hkWorldOperation::AddPhantomBatch::AddPhantomBatch(void);
// public: hkWorldOperation::RemovePhantom::RemovePhantom(void);
// public: hkWorldOperation::RemovePhantomBatch::RemovePhantomBatch(void);
// public: float hkpSimulation::getCurrentTime(void);
// public: float hkpSimulation::getCurrentPsiTime(void);
// public: void hkJobQueue::hkJobHandlerFuncs::initProcessJobFuncs(enum hkJobQueue::JobStatus (**)(class hkJobQueue &, struct hkJobQueue::JobQueueEntry &), int);
// public: void hkJobQueue::hkJobHandlerFuncs::registerProcessJobFunc(unsigned char, enum hkJobQueue::JobStatus (*)(class hkJobQueue &, struct hkJobQueue::JobQueueEntry &));
// public: class hkpBroadPhase const * hkpWorld::getBroadPhase(void) const;
// public: hkHalf::hkHalf(float const &);
// public: void hkpSolverInfo::setTauAndDamping(float, float);
// public: void hkStepInfo::set(float, float);
// public: static void * hkpCollisionDispatcher::operator new(unsigned int);
// public: static void * hkpContactMgrFactory::operator new(unsigned int);
// public: static void * hkpTypedBroadPhaseDispatcher::operator new(unsigned int);
// public: void hkpTypedBroadPhaseDispatcher::setBroadPhaseListener(class hkpBroadPhaseListener *, int, int);
// public: static void * hkpCollisionFilter::operator new(unsigned int);
// public: hkpNullCollisionFilter::hkpNullCollisionFilter(void);
// public: static void * hkpConvexListFilter::operator new(unsigned int);
// public: hkpDefaultConvexListFilter::hkpDefaultConvexListFilter(void);
// protected: hkpConvexListFilter::hkpConvexListFilter(void);
// public: static void * hkpProcessCollisionInput::operator new(unsigned int);
// public: hkpProcessCollisionInput::hkpProcessCollisionInput(void);
// public: hkpCollisionInput::hkpCollisionInput(void);
// public: static void * hkpCollisionAgentConfig::operator new(unsigned int);
// public: hkpCollisionAgentConfig::hkpCollisionAgentConfig(void);
// public: static void * hkpPhantomBroadPhaseListener::operator new(unsigned int);
// public: hkpPhantomBroadPhaseListener::hkpPhantomBroadPhaseListener(void);
// public: hkpBroadPhaseListener::hkpBroadPhaseListener(void);
// merged_84028FF8;
// public: virtual hkpBroadPhaseListener::~hkpBroadPhaseListener(void);
// merged_84029058;
// public: static void hkpPhantomBroadPhaseListener::operator delete(void *);
// public: virtual hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener(void);
// public: static void * hkpEntityEntityBroadPhaseListener::operator new(unsigned int);
// public: static void * hkpBroadPhaseBorderListener::operator new(unsigned int);
// public: hkpBroadPhaseBorderListener::hkpBroadPhaseBorderListener(void);
// merged_84029258;
// public: static void hkpBroadPhaseBorderListener::operator delete(void *);
// public: virtual hkpBroadPhaseBorderListener::~hkpBroadPhaseBorderListener(void);
// public: static void * hkpKdTreeWorldManager::operator new(unsigned int);
// public: static void * hkpAabbTreeWorldManager::operator new(unsigned int);
// public: static void * hkpMtThreadStructure::operator new(unsigned int);
// public: static void * hkpWorldOperationQueue::operator new(unsigned int);
// public: static void * hkpNullContactMgrFactory::operator new(unsigned int);
// public: hkpNullContactMgrFactory::hkpNullContactMgrFactory(void);
// public: virtual void hkpContactMgrFactory::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: hkpNullContactMgr::hkpNullContactMgr(void);
// public: virtual unsigned short hkpNullContactMgr::addContactPointImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, class hkpGskCache const *, class hkContactPoint &);
// public: virtual void hkpNullContactMgr::removeContactPointImpl(unsigned short, class hkpConstraintOwner &);
// public: virtual void hkpNullContactMgr::processContactImpl(class hkpCollidable const &, class hkpCollidable const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionData &);
// public: virtual enum hkpContactMgr::ToiAccept hkpNullContactMgr::addToiImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, float, class hkContactPoint &, class hkpGskCache const *, float &, class hkpContactPointProperties &);
// public: virtual void hkpNullContactMgr::removeToiImpl(class hkpConstraintOwner &, class hkpContactPointProperties &);
// public: virtual enum hkResult hkpNullContactMgr::reserveContactPointsImpl(int);
// public: virtual void hkpNullContactMgr::cleanup(void);
// merged_84029740;
// public: virtual hkpNullContactMgr::~hkpNullContactMgr(void);
// public: virtual class hkpContactMgr * hkpNullContactMgrFactory::createContactMgr(class hkpCollidable const &, class hkpCollidable const &, struct hkpCollisionInput const &);
// merged_840297D0;
// public: static void hkpNullContactMgrFactory::operator delete(void *);
// public: hkpContactMgrFactory::hkpContactMgrFactory(void);
// public: virtual hkpNullContactMgrFactory::~hkpNullContactMgrFactory(void);
// public: virtual hkpContactMgrFactory::~hkpContactMgrFactory(void);
// merged_84029910;
// public: static void hkpContactMgrFactory::operator delete(void *);
// public: hkpCollisionDispatcher::InitCollisionQualityInfo::InitCollisionQualityInfo(void);
// public: hkpMtThreadStructure::hkpMtThreadStructure(void);
// public: hkpConstraintQueryIn::hkpConstraintQueryIn(void);
// public: hkpConstraintQueryStepInfo::hkpConstraintQueryStepInfo(void);
// public: bool hkMultiThreadCheck::isMarkedForWrite(void);
// public: bool hkMultiThreadCheck::isMarkedForReadRecursive(void);
// public: hkpWorldRayCaster::hkpWorldRayCaster(void);
// public: hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector(void);
// merged_84029C78;
// public: virtual hkpBroadPhaseCastCollector::~hkpBroadPhaseCastCollector(void);
// public: virtual hkpWorldRayCaster::~hkpWorldRayCaster(void);
// merged_84029D10;
// public: hkpSimpleWorldRayCaster::hkpSimpleWorldRayCaster(void);
// public: virtual hkpSimpleWorldRayCaster::~hkpSimpleWorldRayCaster(void);
// merged_84029DD8;
// public: hkpWorldRayCastJob::hkpWorldRayCastJob(struct hkpProcessCollisionInput const *, struct hkpCollisionQueryJobHeader *, struct hkpWorldRayCastCommand const *, int, class hkpBroadPhase const *, class hkSemaphore *, int);
// protected: hkpRayCastQueryJob::hkpRayCastQueryJob(enum hkpRayCastQueryJob::JobSubType, unsigned short);
// public: hkJob::hkJob(enum hkJobType, unsigned int, unsigned short, enum hkJobSpuType);
// public: class hkKdTree const * hkpTreeWorldManager::getKdTree(void) const;
// public: class hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short> const * hkpTreeWorldManager::getAabbTree(void) const;
// public: hkpWorldLinearCaster::hkpWorldLinearCaster(void);
// public: hkpLinearCastCollisionInput::hkpLinearCastCollisionInput(void);
// public: virtual hkpWorldLinearCaster::~hkpWorldLinearCaster(void);
// merged_8402A640;
// public: hkpWorldLinearCastJob::hkpWorldLinearCastJob(struct hkpProcessCollisionInput const *, struct hkpCollisionQueryJobHeader *, struct hkpWorldLinearCastCommand const *, int, class hkpBroadPhase const *, class hkSemaphore *, int);
// protected: hkpCollisionQueryJob::hkpCollisionQueryJob(enum hkpCollisionQueryJob::JobSubType, unsigned short);
// public: enum hkpConstraintAtom::AtomType hkpConstraintAtom::getType(void) const;
// public: static struct hkpConstraintAtom * hkpWorldConstraintUtil::getTerminalAtom(struct hkConstraintInternal const *);
// public: int hkpConstraintAtom::isModifierType(void) const;
// public: class hkArray<class hkpAction *, struct hkContainerHeapAllocator> const & hkpSimulationIsland::getActions(void) const;
// public: hkWorldOperation::UserCallbackOperation::UserCallbackOperation(void);
// public: hkStepInfo::hkStepInfo(float, float);
// public: void hkpSimulationIsland::unmarkForWrite(void);
// public: class hkMultiThreadCheck & hkpBroadPhase::getMultiThreadCheck(void);
// public: void hkpBroadPhase::markForRead(void) const;
// public: void hkpBroadPhase::unmarkForRead(void) const;
// public: hkEnum<enum hkJobType, unsigned char>::hkEnum<enum hkJobType, unsigned char>(enum hkJobType);
// public: hkEnum<enum hkJobSpuType, unsigned char>::hkEnum<enum hkJobSpuType, unsigned char>(enum hkJobSpuType);
// public: void hkEnum<enum hkJobSpuType, unsigned char>::operator=(enum hkJobSpuType);
// public: hkPadSpu<class hkpCollisionDispatcher *>::hkPadSpu<class hkpCollisionDispatcher *>(void);
// public: void hkPadSpu<class hkpCollisionDispatcher *>::operator=(class hkpCollisionDispatcher *);
// public: hkPadSpu<class hkBool>::hkPadSpu<class hkBool>(void);
// public: void hkPadSpu<class hkBool>::operator=(class hkBool);
// public: hkPadSpu<class hkpCollisionFilter const *>::hkPadSpu<class hkpCollisionFilter const *>(void);
// public: void hkPadSpu<class hkpCollisionFilter const *>::operator=(class hkpCollisionFilter const *);
// public: hkPadSpu<class hkpConvexListFilter const *>::hkPadSpu<class hkpConvexListFilter const *>(void);
// public: void hkPadSpu<class hkpConvexListFilter const *>::operator=(class hkpConvexListFilter const *);
// public: enum hkpConstraintAtom::AtomType hkEnum<enum hkpConstraintAtom::AtomType, unsigned short>::operator enum hkpConstraintAtom::AtomType(void) const;
// public: enum hkpWorldCinfo::BroadPhaseBorderBehaviour hkEnum<enum hkpWorldCinfo::BroadPhaseBorderBehaviour, signed char>::operator enum hkpWorldCinfo::BroadPhaseBorderBehaviour(void) const;
// public: class hkBool hkEnum<enum hkpWorldCinfo::BroadPhaseBorderBehaviour, signed char>::operator!=(enum hkpWorldCinfo::BroadPhaseBorderBehaviour) const;
// public: enum hkpWorldCinfo::TreeUpdateType hkEnum<enum hkpWorldCinfo::TreeUpdateType, signed char>::operator enum hkpWorldCinfo::TreeUpdateType(void) const;
// public: hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>(void);
// public: enum hkpWorldCinfo::ContactPointGeneration hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::operator enum hkpWorldCinfo::ContactPointGeneration(void) const;
// public: class hkBool hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::operator==(enum hkpWorldCinfo::ContactPointGeneration) const;
// public: enum hkpWorldCinfo::SimulationType hkEnum<enum hkpWorldCinfo::SimulationType, signed char>::operator enum hkpWorldCinfo::SimulationType(void) const;
// public: class hkBool hkEnum<enum hkpWorldCinfo::SimulationType, signed char>::operator!=(enum hkpWorldCinfo::SimulationType) const;
// public: void hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator>::pushBack(class hkpSimulationIsland *const &);
// public: hkEnum<enum hkpWorldCinfo::SimulationType, int>::hkEnum<enum hkpWorldCinfo::SimulationType, int>(void);
// public: enum hkpWorldCinfo::SimulationType hkEnum<enum hkpWorldCinfo::SimulationType, int>::operator enum hkpWorldCinfo::SimulationType(void) const;
// public: void hkEnum<enum hkpWorldCinfo::SimulationType, int>::operator=(enum hkpWorldCinfo::SimulationType);
// public: class hkBool hkEnum<enum hkpWorldCinfo::SimulationType, int>::operator==(enum hkpWorldCinfo::SimulationType) const;
// public: hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::pushBack(class hkpPhantom *const &);
// public: hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::pushBack(class hkpActionListener *const &);
// public: hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::pushBack(class hkpEntityListener *const &);
// public: void hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::pushBack(class hkpPhantomListener *const &);
// public: hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintListener *const &);
// public: hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldDeletionListener *const &);
// public: hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::pushBack(class hkpIslandActivationListener *const &);
// public: hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldPostSimulationListener *const &);
// public: hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldPostIntegrateListener *const &);
// public: hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldPostCollideListener *const &);
// public: hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::pushBack(class hkpIslandPostIntegrateListener *const &);
// public: hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::pushBack(class hkpIslandPostCollideListener *const &);
// public: hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::pushBack(class hkpContactListener *const &);
// public: hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::pushBack(class hkpContactImpulseLimitBreachedListener *const &);
// public: hkPadSpu<class hkpVelocityAccumulator const *>::hkPadSpu<class hkpVelocityAccumulator const *>(void);
// public: hkPadSpu<class hkpConstraintInstance *>::hkPadSpu<class hkpConstraintInstance *>(void);
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::reserve(int);
// public: hkPadSpu<class hkpMultiThreadedSimulation *>::hkPadSpu<class hkpMultiThreadedSimulation *>(void);
// public: hkPadSpu<struct hkpWorldDynamicsStepInfo *>::hkPadSpu<struct hkpWorldDynamicsStepInfo *>(void);
// public: hkEnum<enum hkpEntityActivation, unsigned char>::hkEnum<enum hkpEntityActivation, unsigned char>(void);
// public: void hkEnum<enum hkpEntityActivation, unsigned char>::operator=(enum hkpEntityActivation);
// public: hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>::hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>(void);
// public: void hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>::operator=(enum hkpUpdateCollisionFilterOnEntityMode);
// public: hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>::hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>(void);
// public: void hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>::operator=(enum hkpUpdateCollectionFilterMode);
// public: hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>::hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>(void);
// public: void hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>::operator=(enum hkpUpdateCollisionFilterOnWorldMode);
// public: hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::pushBack(struct hkpAgentNnEntry *const &);
// public: hkLocalArray<class hkpBroadPhaseHandlePair>::hkLocalArray<class hkpBroadPhaseHandlePair>(int);
// public: hkLocalArray<class hkpBroadPhaseHandlePair>::~hkLocalArray<class hkpBroadPhaseHandlePair>(void);
// public: hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>(void);
// public: hkLocalArray<class hkpBroadPhaseHandle *>::hkLocalArray<class hkpBroadPhaseHandle *>(int);
// public: hkLocalArray<class hkpBroadPhaseHandle *>::~hkLocalArray<class hkpBroadPhaseHandle *>(void);
// public: hkLocalArray<class hkAabb>::hkLocalArray<class hkAabb>(int);
// public: hkLocalArray<class hkAabb>::~hkLocalArray<class hkAabb>(void);
// public: hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<class hkpBroadPhaseHandlePair>::wasReallocated(void) const;
// public: class hkBool hkLocalArray<class hkpBroadPhaseHandle *>::wasReallocated(void) const;
// public: hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>::hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<class hkAabb>::wasReallocated(void) const;
// public: hkArray<class hkAabb, struct hkContainerHeapAllocator>::hkArray<class hkAabb, struct hkContainerHeapAllocator>(void);
// public: void hkRefPtr<class hkpCollisionFilter>::operator=(class hkpCollisionFilter *);
// public: void hkRefPtr<class hkpConvexListFilter>::operator=(class hkpConvexListFilter *);
// public: class hkpConvexListFilter * hkRefPtr<class hkpConvexListFilter>::operator class hkpConvexListFilter *(void) const;
// public: hkRefPtr<class hkWorldMemoryAvailableWatchDog>::hkRefPtr<class hkWorldMemoryAvailableWatchDog>(void);
// public: void hkRefPtr<class hkWorldMemoryAvailableWatchDog>::operator=(class hkWorldMemoryAvailableWatchDog *);
// public: void hkRefPtr<class hkWorldMemoryAvailableWatchDog>::operator=(class hkRefPtr<class hkWorldMemoryAvailableWatchDog> const &);
// public: class hkWorldMemoryAvailableWatchDog * hkRefPtr<class hkWorldMemoryAvailableWatchDog>::operator class hkWorldMemoryAvailableWatchDog *(void) const;
// public: class hkpSimulationIsland *const & hkArrayBase<class hkpSimulationIsland *>::back(void) const;
// public: class hkpSimulationIsland *& hkArrayBase<class hkpSimulationIsland *>::back(void);
// public: void hkArrayBase<class hkpSimulationIsland *>::popBack(int);
// public: void hkArrayBase<class hkpSimulationIsland *>::_pushBack(class hkMemoryAllocator &, class hkpSimulationIsland *const &);
// public: class hkpSimulationIsland *const * hkArrayBase<class hkpSimulationIsland *>::end(void) const;
// public: hkArrayBase<class hkpPhantom *>::hkArrayBase<class hkpPhantom *>(void);
// public: class hkpPhantom *& hkArrayBase<class hkpPhantom *>::operator[](int);
// public: void hkArrayBase<class hkpPhantom *>::removeAt(int);
// public: int hkArrayBase<class hkpPhantom *>::indexOf(class hkpPhantom *const &, int, int) const;
// public: void hkArrayBase<class hkpPhantom *>::_pushBack(class hkMemoryAllocator &, class hkpPhantom *const &);
// public: class hkpPhantom *const * hkArrayBase<class hkpPhantom *>::begin(void) const;
// public: hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::~hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpPhantom *>::~hkArrayBase<class hkpPhantom *>(void);
// public: hkArrayBase<class hkpActionListener *>::hkArrayBase<class hkpActionListener *>(void);
// public: class hkpActionListener *& hkArrayBase<class hkpActionListener *>::operator[](int);
// public: int hkArrayBase<class hkpActionListener *>::indexOf(class hkpActionListener *const &, int, int) const;
// public: void hkArrayBase<class hkpActionListener *>::_pushBack(class hkMemoryAllocator &, class hkpActionListener *const &);
// public: hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpActionListener *>::~hkArrayBase<class hkpActionListener *>(void);
// public: hkArrayBase<class hkpEntityListener *>::hkArrayBase<class hkpEntityListener *>(void);
// public: class hkpEntityListener *& hkArrayBase<class hkpEntityListener *>::operator[](int);
// public: int hkArrayBase<class hkpEntityListener *>::indexOf(class hkpEntityListener *const &, int, int) const;
// public: void hkArrayBase<class hkpEntityListener *>::_pushBack(class hkMemoryAllocator &, class hkpEntityListener *const &);
// public: hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpEntityListener *>::~hkArrayBase<class hkpEntityListener *>(void);
// public: class hkpPhantomListener *& hkArrayBase<class hkpPhantomListener *>::operator[](int);
// public: int hkArrayBase<class hkpPhantomListener *>::indexOf(class hkpPhantomListener *const &, int, int) const;
// public: void hkArrayBase<class hkpPhantomListener *>::_pushBack(class hkMemoryAllocator &, class hkpPhantomListener *const &);
// public: hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpPhantomListener *>::~hkArrayBase<class hkpPhantomListener *>(void);
// public: hkArrayBase<class hkpConstraintListener *>::hkArrayBase<class hkpConstraintListener *>(void);
// public: class hkpConstraintListener *& hkArrayBase<class hkpConstraintListener *>::operator[](int);
// public: int hkArrayBase<class hkpConstraintListener *>::indexOf(class hkpConstraintListener *const &, int, int) const;
// public: void hkArrayBase<class hkpConstraintListener *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintListener *const &);
// public: hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpConstraintListener *>::~hkArrayBase<class hkpConstraintListener *>(void);
// public: hkArrayBase<class hkpWorldDeletionListener *>::hkArrayBase<class hkpWorldDeletionListener *>(void);
// public: class hkpWorldDeletionListener *& hkArrayBase<class hkpWorldDeletionListener *>::operator[](int);
// public: int hkArrayBase<class hkpWorldDeletionListener *>::indexOf(class hkpWorldDeletionListener *const &, int, int) const;
// public: void hkArrayBase<class hkpWorldDeletionListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldDeletionListener *const &);
// public: hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpWorldDeletionListener *>::~hkArrayBase<class hkpWorldDeletionListener *>(void);
// public: hkArrayBase<class hkpIslandActivationListener *>::hkArrayBase<class hkpIslandActivationListener *>(void);
// public: class hkpIslandActivationListener *& hkArrayBase<class hkpIslandActivationListener *>::operator[](int);
// public: int hkArrayBase<class hkpIslandActivationListener *>::indexOf(class hkpIslandActivationListener *const &, int, int) const;
// public: void hkArrayBase<class hkpIslandActivationListener *>::_pushBack(class hkMemoryAllocator &, class hkpIslandActivationListener *const &);
// public: hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpIslandActivationListener *>::~hkArrayBase<class hkpIslandActivationListener *>(void);
// public: hkArrayBase<class hkpWorldPostSimulationListener *>::hkArrayBase<class hkpWorldPostSimulationListener *>(void);
// public: class hkpWorldPostSimulationListener *& hkArrayBase<class hkpWorldPostSimulationListener *>::operator[](int);
// public: int hkArrayBase<class hkpWorldPostSimulationListener *>::indexOf(class hkpWorldPostSimulationListener *const &, int, int) const;
// public: void hkArrayBase<class hkpWorldPostSimulationListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldPostSimulationListener *const &);
// public: hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpWorldPostSimulationListener *>::~hkArrayBase<class hkpWorldPostSimulationListener *>(void);
// public: hkArrayBase<class hkpWorldPostIntegrateListener *>::hkArrayBase<class hkpWorldPostIntegrateListener *>(void);
// public: class hkpWorldPostIntegrateListener *& hkArrayBase<class hkpWorldPostIntegrateListener *>::operator[](int);
// public: int hkArrayBase<class hkpWorldPostIntegrateListener *>::indexOf(class hkpWorldPostIntegrateListener *const &, int, int) const;
// public: void hkArrayBase<class hkpWorldPostIntegrateListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldPostIntegrateListener *const &);
// public: hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpWorldPostIntegrateListener *>::~hkArrayBase<class hkpWorldPostIntegrateListener *>(void);
// public: hkArrayBase<class hkpWorldPostCollideListener *>::hkArrayBase<class hkpWorldPostCollideListener *>(void);
// public: class hkpWorldPostCollideListener *& hkArrayBase<class hkpWorldPostCollideListener *>::operator[](int);
// public: int hkArrayBase<class hkpWorldPostCollideListener *>::indexOf(class hkpWorldPostCollideListener *const &, int, int) const;
// public: void hkArrayBase<class hkpWorldPostCollideListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldPostCollideListener *const &);
// public: hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpWorldPostCollideListener *>::~hkArrayBase<class hkpWorldPostCollideListener *>(void);
// public: hkArrayBase<class hkpIslandPostIntegrateListener *>::hkArrayBase<class hkpIslandPostIntegrateListener *>(void);
// public: class hkpIslandPostIntegrateListener *& hkArrayBase<class hkpIslandPostIntegrateListener *>::operator[](int);
// public: int hkArrayBase<class hkpIslandPostIntegrateListener *>::indexOf(class hkpIslandPostIntegrateListener *const &, int, int) const;
// public: void hkArrayBase<class hkpIslandPostIntegrateListener *>::_pushBack(class hkMemoryAllocator &, class hkpIslandPostIntegrateListener *const &);
// public: hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpIslandPostIntegrateListener *>::~hkArrayBase<class hkpIslandPostIntegrateListener *>(void);
// public: hkArrayBase<class hkpIslandPostCollideListener *>::hkArrayBase<class hkpIslandPostCollideListener *>(void);
// public: class hkpIslandPostCollideListener *& hkArrayBase<class hkpIslandPostCollideListener *>::operator[](int);
// public: int hkArrayBase<class hkpIslandPostCollideListener *>::indexOf(class hkpIslandPostCollideListener *const &, int, int) const;
// public: void hkArrayBase<class hkpIslandPostCollideListener *>::_pushBack(class hkMemoryAllocator &, class hkpIslandPostCollideListener *const &);
// public: hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpIslandPostCollideListener *>::~hkArrayBase<class hkpIslandPostCollideListener *>(void);
// public: hkArrayBase<class hkpContactListener *>::hkArrayBase<class hkpContactListener *>(void);
// public: class hkpContactListener *& hkArrayBase<class hkpContactListener *>::operator[](int);
// public: int hkArrayBase<class hkpContactListener *>::indexOf(class hkpContactListener *const &, int, int) const;
// public: void hkArrayBase<class hkpContactListener *>::_pushBack(class hkMemoryAllocator &, class hkpContactListener *const &);
// public: hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpContactListener *>::~hkArrayBase<class hkpContactListener *>(void);
// public: hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::hkArrayBase<class hkpContactImpulseLimitBreachedListener *>(void);
// public: class hkpContactImpulseLimitBreachedListener *& hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::operator[](int);
// public: int hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::indexOf(class hkpContactImpulseLimitBreachedListener *const &, int, int) const;
// public: void hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::_pushBack(class hkMemoryAllocator &, class hkpContactImpulseLimitBreachedListener *const &);
// public: hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::~hkArrayBase<class hkpContactImpulseLimitBreachedListener *>(void);
// public: int hkArrayBase<class hkpEntity *>::indexOf(class hkpEntity *const &, int, int) const;
// public: class hkpEntity ** hkArrayBase<class hkpEntity *>::begin(void);
// public: class hkpRigidBody *const * hkArrayBase<class hkpRigidBody *>::begin(void) const;
// public: void hkArrayBase<class hkpBroadPhaseHandlePair>::removeAt(int);
// public: class hkpBroadPhaseHandlePair * hkArrayBase<class hkpBroadPhaseHandlePair>::begin(void);
// public: struct hkpAgentNnEntry *& hkArrayBase<struct hkpAgentNnEntry *>::back(void);
// public: int hkArrayBase<struct hkpAgentNnEntry *>::getSize(void) const;
// public: void hkArrayBase<struct hkpAgentNnEntry *>::clear(void);
// public: void hkArrayBase<struct hkpAgentNnEntry *>::popBack(int);
// public: void hkArrayBase<struct hkpAgentNnEntry *>::_pushBack(class hkMemoryAllocator &, struct hkpAgentNnEntry *const &);
// public: hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::~hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>(int);
// public: void hkSmallArray<class hkpAction *>::removeAt(int);
// public: int hkSmallArray<class hkpAction *>::indexOf(class hkpAction *const &) const;
// public: void hkSmallArray<class hkpAction *>::pushBack(class hkpAction *const &);
// public: hkArrayBase<class hkpBroadPhaseHandle *>::hkArrayBase<class hkpBroadPhaseHandle *>(void);
// public: void hkArrayBase<class hkpBroadPhaseHandle *>::clear(void);
// public: void hkArrayBase<class hkpBroadPhaseHandle *>::pushBackUnchecked(class hkpBroadPhaseHandle *const &);
// public: void hkArrayBase<class hkpBroadPhaseHandle *>::setSizeUnchecked(int);
// public: hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>::~hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpBroadPhaseHandle *>::~hkArrayBase<class hkpBroadPhaseHandle *>(void);
// public: class hkAabb * hkArrayBase<class hkAabb>::expandByUnchecked(int);
// class hkAabb * hkAllocateChunk<class hkAabb>(int, int);
// public: hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>(int);
// public: void hkStatisticsCollector::addArray<class hkpSimulationIsland *>(char const *, class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpPhantom *>(char const *, class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<struct hkWorldOperation::BiggestOperation>(char const *, class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<struct hkWorldOperation::MergeIslands>(char const *, class hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<struct hkpBodyOperationEntry>(char const *, class hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpEntityListener *>(char const *, class hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpPhantomListener *>(char const *, class hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpConstraintListener *>(char const *, class hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpWorldDeletionListener *>(char const *, class hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpIslandActivationListener *>(char const *, class hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpWorldPostSimulationListener *>(char const *, class hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpWorldPostIntegrateListener *>(char const *, class hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpWorldPostCollideListener *>(char const *, class hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpIslandPostIntegrateListener *>(char const *, class hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpContactListener *>(char const *, class hkArray<class hkpContactListener *, struct hkContainerHeapAllocator> const &);
// public: class hkpSimulationIsland const *& hkArrayBase<class hkpSimulationIsland const *>::operator[](int);
// public: int hkArrayBase<class hkpSimulationIsland const *>::getSize(void) const;
// public: class hkpSimulationIsland const ** hkArrayBase<class hkpSimulationIsland const *>::begin(void);
// public: static void hkArrayBase<class hkpSimulationIsland const *>::copy(class hkpSimulationIsland const **, class hkpSimulationIsland const *const *, int);
// public: hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>::hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>(int);
// public: hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>::~hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>(void);
// struct hkpCollisionQueryJobHeader * hkAllocateChunk<struct hkpCollisionQueryJobHeader>(int, int);
// void hkDeallocateChunk<struct hkpCollisionQueryJobHeader>(struct hkpCollisionQueryJobHeader *, int, int);
// class hkpBroadPhaseHandlePair * hkAllocateStack<class hkpBroadPhaseHandlePair>(int, char const *);
// void hkDeallocateStack<class hkpBroadPhaseHandlePair>(class hkpBroadPhaseHandlePair *);
// class hkpBroadPhaseHandle ** hkAllocateStack<class hkpBroadPhaseHandle *>(int, char const *);
// void hkDeallocateStack<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **);
// class hkAabb * hkAllocateStack<class hkAabb>(int, char const *);
// void hkDeallocateStack<class hkAabb>(class hkAabb *);
// public: void hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>(struct hkpAgentNnEntry **, int, int);
// public: void hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: class hkpConvexListFilter * hkRefPtr<class hkpConvexListFilter>::val(void) const;
// public: class hkWorldMemoryAvailableWatchDog * hkRefPtr<class hkWorldMemoryAvailableWatchDog>::val(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpSimulationIsland *>(class hkpSimulationIsland **, int, class hkpSimulationIsland *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpPhantom *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpPhantom *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpPhantom *>(class hkpPhantom **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpPhantom *>(class hkpPhantom **, int, class hkpPhantom *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpActionListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpActionListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpActionListener *>(class hkpActionListener **, int, class hkpActionListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpEntityListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpEntityListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpEntityListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpEntityListener *const * hkArrayBase<class hkpEntityListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpEntityListener *>(class hkpEntityListener **, int, class hkpEntityListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpPhantomListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpPhantomListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpPhantomListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpPhantomListener *const * hkArrayBase<class hkpPhantomListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpPhantomListener *>(class hkpPhantomListener **, int, class hkpPhantomListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpConstraintListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpConstraintListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpConstraintListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpConstraintListener *const * hkArrayBase<class hkpConstraintListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpConstraintListener *>(class hkpConstraintListener **, int, class hkpConstraintListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpWorldDeletionListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpWorldDeletionListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpWorldDeletionListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpWorldDeletionListener *const * hkArrayBase<class hkpWorldDeletionListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpWorldDeletionListener *>(class hkpWorldDeletionListener **, int, class hkpWorldDeletionListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpIslandActivationListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpIslandActivationListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpIslandActivationListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpIslandActivationListener *const * hkArrayBase<class hkpIslandActivationListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpIslandActivationListener *>(class hkpIslandActivationListener **, int, class hkpIslandActivationListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpWorldPostSimulationListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpWorldPostSimulationListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpWorldPostSimulationListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpWorldPostSimulationListener *const * hkArrayBase<class hkpWorldPostSimulationListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpWorldPostSimulationListener *>(class hkpWorldPostSimulationListener **, int, class hkpWorldPostSimulationListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpWorldPostIntegrateListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpWorldPostIntegrateListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpWorldPostIntegrateListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpWorldPostIntegrateListener *const * hkArrayBase<class hkpWorldPostIntegrateListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpWorldPostIntegrateListener *>(class hkpWorldPostIntegrateListener **, int, class hkpWorldPostIntegrateListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpWorldPostCollideListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpWorldPostCollideListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpWorldPostCollideListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpWorldPostCollideListener *const * hkArrayBase<class hkpWorldPostCollideListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpWorldPostCollideListener *>(class hkpWorldPostCollideListener **, int, class hkpWorldPostCollideListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpIslandPostIntegrateListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpIslandPostIntegrateListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpIslandPostIntegrateListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpIslandPostIntegrateListener *const * hkArrayBase<class hkpIslandPostIntegrateListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpIslandPostIntegrateListener *>(class hkpIslandPostIntegrateListener **, int, class hkpIslandPostIntegrateListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpIslandPostCollideListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpIslandPostCollideListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpIslandPostCollideListener *>(class hkpIslandPostCollideListener **, int, class hkpIslandPostCollideListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpContactListener *>::getSize(void) const;
// public: int hkArrayBase<class hkpContactListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpContactListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkpContactListener *const * hkArrayBase<class hkpContactListener *>::begin(void) const;
// public: static void hkArrayUtil::constructWithCopy<class hkpContactListener *>(class hkpContactListener **, int, class hkpContactListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpContactImpulseLimitBreachedListener *>(class hkpContactImpulseLimitBreachedListener **, int, class hkpContactImpulseLimitBreachedListener *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkWorldOperation::BiggestOperation>::getSize(void) const;
// public: struct hkWorldOperation::BiggestOperation const * hkArrayBase<struct hkWorldOperation::BiggestOperation>::begin(void) const;
// public: int hkArrayBase<struct hkWorldOperation::MergeIslands>::getSize(void) const;
// public: struct hkWorldOperation::MergeIslands const * hkArrayBase<struct hkWorldOperation::MergeIslands>::begin(void) const;
// public: int hkArrayBase<struct hkpBodyOperationEntry>::getSize(void) const;
// public: struct hkpBodyOperationEntry const * hkArrayBase<struct hkpBodyOperationEntry>::begin(void) const;
// public: hkArrayBase<struct hkpAgentNnEntry *>::hkArrayBase<struct hkpAgentNnEntry *>(struct hkpAgentNnEntry **, int, int);
// public: hkArrayBase<struct hkpAgentNnEntry *>::~hkArrayBase<struct hkpAgentNnEntry *>(void);
// public: int hkArrayBase<struct hkpAgentNnEntry *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpAgentNnEntry *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkpAgentNnEntry *>(struct hkpAgentNnEntry **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkpAgentNnEntry *>(struct hkpAgentNnEntry **, int, struct hkpAgentNnEntry *const &, struct hkTraitBool<1>);
// public: class hkBool hkSmallArray<class hkpAction *>::isLocked(void);
// public: int hkArrayBase<class hkpBroadPhaseHandle *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpBroadPhaseHandle *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **, int, class hkpBroadPhaseHandle *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **, int, struct hkTraitBool<1>);
// public: hkArrayBase<class hkpSimulationIsland const *>::hkArrayBase<class hkpSimulationIsland const *>(void);
// public: hkArrayBase<class hkpSimulationIsland const *>::~hkArrayBase<class hkpSimulationIsland const *>(void);
// public: void hkArrayBase<class hkpSimulationIsland const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkpSimulationIsland const *>::setOwnedData(class hkpSimulationIsland const **, int, int);
// public: static void hkArrayUtil::construct<class hkpSimulationIsland const *>(class hkpSimulationIsland const **, int, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkpPhantom *>::clear(void);
// public: void hkArrayBase<class hkpActionListener *>::clear(void);
// public: void hkArrayBase<class hkpEntityListener *>::clear(void);
// public: void hkArrayBase<class hkpPhantomListener *>::clear(void);
// public: void hkArrayBase<class hkpConstraintListener *>::clear(void);
// public: void hkArrayBase<class hkpWorldDeletionListener *>::clear(void);
// public: void hkArrayBase<class hkpIslandActivationListener *>::clear(void);
// public: void hkArrayBase<class hkpWorldPostSimulationListener *>::clear(void);
// public: void hkArrayBase<class hkpWorldPostIntegrateListener *>::clear(void);
// public: void hkArrayBase<class hkpWorldPostCollideListener *>::clear(void);
// public: void hkArrayBase<class hkpIslandPostIntegrateListener *>::clear(void);
// public: void hkArrayBase<class hkpIslandPostCollideListener *>::clear(void);
// public: void hkArrayBase<class hkpContactListener *>::clear(void);
// public: void hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::clear(void);
// public: int hkArrayBase<class hkpSimulationIsland const *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpSimulationIsland const *>::clear(void);
// public: static void hkArrayUtil::destruct<class hkpActionListener *>(class hkpActionListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpEntityListener *>(class hkpEntityListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpPhantomListener *>(class hkpPhantomListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpConstraintListener *>(class hkpConstraintListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpWorldDeletionListener *>(class hkpWorldDeletionListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpIslandActivationListener *>(class hkpIslandActivationListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpWorldPostSimulationListener *>(class hkpWorldPostSimulationListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpWorldPostIntegrateListener *>(class hkpWorldPostIntegrateListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpWorldPostCollideListener *>(class hkpWorldPostCollideListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpIslandPostIntegrateListener *>(class hkpIslandPostIntegrateListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpIslandPostCollideListener *>(class hkpIslandPostCollideListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpContactListener *>(class hkpContactListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpContactImpulseLimitBreachedListener *>(class hkpContactImpulseLimitBreachedListener **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpSimulationIsland const *>(class hkpSimulationIsland const **, int, struct hkTraitBool<1>);
// [thunk]: public: virtual void * hkpPhantomBroadPhaseListener::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpBroadPhaseBorderListener::`vector deleting destructor'(unsigned int);

//public: hkpMultithreadConfig::hkpMultithreadConfig(void)
//{
//    mangled_ppc("??0hkpMultithreadConfig@@QAA@XZ");
//};

//public: hkpWorld::hkpWorld(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpWorld@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkpWorld::removeAll(void)
//{
//    mangled_ppc("?removeAll@hkpWorld@@QAAXXZ");
//};

//public: virtual hkpWorld::~hkpWorld(void)
//{
//    mangled_ppc("??1hkpWorld@@UAA@XZ");
//};

//public: void hkpWorld::updateCollisionFilterOnWorld(enum hkpUpdateCollisionFilterOnWorldMode, enum hkpUpdateCollectionFilterMode)
//{
//    mangled_ppc("?updateCollisionFilterOnWorld@hkpWorld@@QAAXW4hkpUpdateCollisionFilterOnWorldMode@@W4hkpUpdateCollectionFilterMode@@@Z");
//};

//public: void hkpWorld::updateCollisionFilterOnPhantom(class hkpPhantom *, enum hkpUpdateCollectionFilterMode)
//{
//    mangled_ppc("?updateCollisionFilterOnPhantom@hkpWorld@@QAAXPAVhkpPhantom@@W4hkpUpdateCollectionFilterMode@@@Z");
//};

//void hkWorld_updateFilterOnSinglePhantom(class hkpPhantom *, class hkpCollidable *, class hkpCollisionFilter *)
//{
//    mangled_ppc("?hkWorld_updateFilterOnSinglePhantom@@YAXPAVhkpPhantom@@PAVhkpCollidable@@PAVhkpCollisionFilter@@@Z");
//};

//public: void hkpWorld::reenableCollisionBetweenEntityPair(class hkpEntity *, class hkpEntity *)
//{
//    mangled_ppc("?reenableCollisionBetweenEntityPair@hkpWorld@@QAAXPAVhkpEntity@@0@Z");
//};

//public: void hkpWorld::updateCollisionFilterOnEntity(class hkpEntity *, enum hkpUpdateCollisionFilterOnEntityMode, enum hkpUpdateCollectionFilterMode)
//{
//    mangled_ppc("?updateCollisionFilterOnEntity@hkpWorld@@QAAXPAVhkpEntity@@W4hkpUpdateCollisionFilterOnEntityMode@@W4hkpUpdateCollectionFilterMode@@@Z");
//};

//public: void hkpWorld::reintegrateAndRecollideEntities(class hkpEntity **, int, enum hkpWorld::ReintegrationRecollideMode)
//{
//    mangled_ppc("?reintegrateAndRecollideEntities@hkpWorld@@QAAXPAPAVhkpEntity@@HW4ReintegrationRecollideMode@1@@Z");
//};

//public: class hkpEntity * hkpWorld::addEntity(class hkpEntity *, enum hkpEntityActivation)
//{
//    mangled_ppc("?addEntity@hkpWorld@@QAAPAVhkpEntity@@PAV2@W4hkpEntityActivation@@@Z");
//};

//public: void hkpWorld::addEntityBatch(class hkpEntity *const *, int, enum hkpEntityActivation)
//{
//    mangled_ppc("?addEntityBatch@hkpWorld@@QAAXPBQAVhkpEntity@@HW4hkpEntityActivation@@@Z");
//};

//public: class hkBool hkpWorld::removeEntity(class hkpEntity *)
//{
//    mangled_ppc("?removeEntity@hkpWorld@@QAA?AVhkBool@@PAVhkpEntity@@@Z");
//};

//public: void hkpWorld::removeEntityBatch(class hkpEntity *const *, int)
//{
//    mangled_ppc("?removeEntityBatch@hkpWorld@@QAAXPBQAVhkpEntity@@H@Z");
//};

//public: void hkpWorld::activateRegion(class hkAabb const &)
//{
//    mangled_ppc("?activateRegion@hkpWorld@@QAAXABVhkAabb@@@Z");
//};

//public: class hkpConstraintInstance * hkpWorld::addConstraint(class hkpConstraintInstance *)
//{
//    mangled_ppc("?addConstraint@hkpWorld@@QAAPAVhkpConstraintInstance@@PAV2@@Z");
//};

//void warnIfConstrainedDynamicBodiesCanCollide(class hkpConstraintInstance const *, class hkBool, class hkBool)
//{
//    mangled_ppc("?warnIfConstrainedDynamicBodiesCanCollide@@YAXPBVhkpConstraintInstance@@VhkBool@@1@Z");
//};

//bool constrainedDynamicBodiesCanCollide(class hkpWorld const *, class hkpConstraintInstance const *)
//{
//    mangled_ppc("?constrainedDynamicBodiesCanCollide@@YA_NPBVhkpWorld@@PBVhkpConstraintInstance@@@Z");
//};

//public: class hkpConstraintInstance * hkpWorld::createAndAddConstraintInstance(class hkpRigidBody *, class hkpRigidBody *, class hkpConstraintData *)
//{
//    mangled_ppc("?createAndAddConstraintInstance@hkpWorld@@QAAPAVhkpConstraintInstance@@PAVhkpRigidBody@@0PAVhkpConstraintData@@@Z");
//};

//public: class hkBool hkpWorld::removeConstraint(class hkpConstraintInstance *)
//{
//    mangled_ppc("?removeConstraint@hkpWorld@@QAA?AVhkBool@@PAVhkpConstraintInstance@@@Z");
//};

//public: class hkpAction * hkpWorld::addAction(class hkpAction *)
//{
//    mangled_ppc("?addAction@hkpWorld@@QAAPAVhkpAction@@PAV2@@Z");
//};

//public: void hkpWorld::removeAction(class hkpAction *)
//{
//    mangled_ppc("?removeAction@hkpWorld@@QAAXPAVhkpAction@@@Z");
//};

//public: void hkpWorld::removeActionImmediately(class hkpAction *)
//{
//    mangled_ppc("?removeActionImmediately@hkpWorld@@QAAXPAVhkpAction@@@Z");
//};

//public: void hkpWorld::attachActionToEntity(class hkpAction *, class hkpEntity *)
//{
//    mangled_ppc("?attachActionToEntity@hkpWorld@@QAAXPAVhkpAction@@PAVhkpEntity@@@Z");
//};

//public: void hkpWorld::detachActionFromEntity(class hkpAction *, class hkpEntity *)
//{
//    mangled_ppc("?detachActionFromEntity@hkpWorld@@QAAXPAVhkpAction@@PAVhkpEntity@@@Z");
//};

//public: class hkpPhantom * hkpWorld::addPhantom(class hkpPhantom *)
//{
//    mangled_ppc("?addPhantom@hkpWorld@@QAAPAVhkpPhantom@@PAV2@@Z");
//};

//public: void hkpWorld::addPhantomBatch(class hkpPhantom *const *, int)
//{
//    mangled_ppc("?addPhantomBatch@hkpWorld@@QAAXPBQAVhkpPhantom@@H@Z");
//};

//public: void hkpWorld::removePhantom(class hkpPhantom *)
//{
//    mangled_ppc("?removePhantom@hkpWorld@@QAAXPAVhkpPhantom@@@Z");
//};

//public: void hkpWorld::removePhantomBatch(class hkpPhantom *const *, int)
//{
//    mangled_ppc("?removePhantomBatch@hkpWorld@@QAAXPBQAVhkpPhantom@@H@Z");
//};

//public: void hkpWorld::addPhysicsSystem(class hkpPhysicsSystem const *)
//{
//    mangled_ppc("?addPhysicsSystem@hkpWorld@@QAAXPBVhkpPhysicsSystem@@@Z");
//};

//public: void hkpWorld::removePhysicsSystem(class hkpPhysicsSystem const *)
//{
//    mangled_ppc("?removePhysicsSystem@hkpWorld@@QAAXPBVhkpPhysicsSystem@@@Z");
//};

//public: void hkpWorld::setGravity(class hkVector4const &)
//{
//    mangled_ppc("?setGravity@hkpWorld@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpWorld::addActionListener(class hkpActionListener *)
//{
//    mangled_ppc("?addActionListener@hkpWorld@@QAAXPAVhkpActionListener@@@Z");
//};

//public: void hkpWorld::removeActionListener(class hkpActionListener *)
//{
//    mangled_ppc("?removeActionListener@hkpWorld@@QAAXPAVhkpActionListener@@@Z");
//};

//public: void hkpWorld::addConstraintListener(class hkpConstraintListener *)
//{
//    mangled_ppc("?addConstraintListener@hkpWorld@@QAAXPAVhkpConstraintListener@@@Z");
//};

//public: void hkpWorld::removeConstraintListener(class hkpConstraintListener *)
//{
//    mangled_ppc("?removeConstraintListener@hkpWorld@@QAAXPAVhkpConstraintListener@@@Z");
//};

//public: void hkpWorld::addEntityListener(class hkpEntityListener *)
//{
//    mangled_ppc("?addEntityListener@hkpWorld@@QAAXPAVhkpEntityListener@@@Z");
//};

//public: void hkpWorld::removeEntityListener(class hkpEntityListener *)
//{
//    mangled_ppc("?removeEntityListener@hkpWorld@@QAAXPAVhkpEntityListener@@@Z");
//};

//public: void hkpWorld::addPhantomListener(class hkpPhantomListener *)
//{
//    mangled_ppc("?addPhantomListener@hkpWorld@@QAAXPAVhkpPhantomListener@@@Z");
//};

//public: void hkpWorld::removePhantomListener(class hkpPhantomListener *)
//{
//    mangled_ppc("?removePhantomListener@hkpWorld@@QAAXPAVhkpPhantomListener@@@Z");
//};

//public: void hkpWorld::addIslandActivationListener(class hkpIslandActivationListener *)
//{
//    mangled_ppc("?addIslandActivationListener@hkpWorld@@QAAXPAVhkpIslandActivationListener@@@Z");
//};

//public: void hkpWorld::removeIslandActivationListener(class hkpIslandActivationListener *)
//{
//    mangled_ppc("?removeIslandActivationListener@hkpWorld@@QAAXPAVhkpIslandActivationListener@@@Z");
//};

//public: void hkpWorld::addWorldPostCollideListener(class hkpWorldPostCollideListener *)
//{
//    mangled_ppc("?addWorldPostCollideListener@hkpWorld@@QAAXPAVhkpWorldPostCollideListener@@@Z");
//};

//public: void hkpWorld::removeWorldPostCollideListener(class hkpWorldPostCollideListener *)
//{
//    mangled_ppc("?removeWorldPostCollideListener@hkpWorld@@QAAXPAVhkpWorldPostCollideListener@@@Z");
//};

//public: void hkpWorld::addWorldPostSimulationListener(class hkpWorldPostSimulationListener *)
//{
//    mangled_ppc("?addWorldPostSimulationListener@hkpWorld@@QAAXPAVhkpWorldPostSimulationListener@@@Z");
//};

//public: void hkpWorld::removeWorldPostSimulationListener(class hkpWorldPostSimulationListener *)
//{
//    mangled_ppc("?removeWorldPostSimulationListener@hkpWorld@@QAAXPAVhkpWorldPostSimulationListener@@@Z");
//};

//public: void hkpWorld::addWorldPostIntegrateListener(class hkpWorldPostIntegrateListener *)
//{
//    mangled_ppc("?addWorldPostIntegrateListener@hkpWorld@@QAAXPAVhkpWorldPostIntegrateListener@@@Z");
//};

//public: void hkpWorld::removeWorldPostIntegrateListener(class hkpWorldPostIntegrateListener *)
//{
//    mangled_ppc("?removeWorldPostIntegrateListener@hkpWorld@@QAAXPAVhkpWorldPostIntegrateListener@@@Z");
//};

//public: void hkpWorld::addIslandPostCollideListener(class hkpIslandPostCollideListener *)
//{
//    mangled_ppc("?addIslandPostCollideListener@hkpWorld@@QAAXPAVhkpIslandPostCollideListener@@@Z");
//};

//public: void hkpWorld::removeIslandPostCollideListener(class hkpIslandPostCollideListener *)
//{
//    mangled_ppc("?removeIslandPostCollideListener@hkpWorld@@QAAXPAVhkpIslandPostCollideListener@@@Z");
//};

//public: void hkpWorld::addIslandPostIntegrateListener(class hkpIslandPostIntegrateListener *)
//{
//    mangled_ppc("?addIslandPostIntegrateListener@hkpWorld@@QAAXPAVhkpIslandPostIntegrateListener@@@Z");
//};

//public: void hkpWorld::removeIslandPostIntegrateListener(class hkpIslandPostIntegrateListener *)
//{
//    mangled_ppc("?removeIslandPostIntegrateListener@hkpWorld@@QAAXPAVhkpIslandPostIntegrateListener@@@Z");
//};

//public: void hkpWorld::addContactListener(class hkpContactListener *)
//{
//    mangled_ppc("?addContactListener@hkpWorld@@QAAXPAVhkpContactListener@@@Z");
//};

//public: void hkpWorld::removeContactListener(class hkpContactListener *)
//{
//    mangled_ppc("?removeContactListener@hkpWorld@@QAAXPAVhkpContactListener@@@Z");
//};

//public: void hkpWorld::addWorldDeletionListener(class hkpWorldDeletionListener *)
//{
//    mangled_ppc("?addWorldDeletionListener@hkpWorld@@QAAXPAVhkpWorldDeletionListener@@@Z");
//};

//public: void hkpWorld::removeWorldDeletionListener(class hkpWorldDeletionListener *)
//{
//    mangled_ppc("?removeWorldDeletionListener@hkpWorld@@QAAXPAVhkpWorldDeletionListener@@@Z");
//};

//public: void hkpWorld::addContactImpulseLimitBreachedListener(class hkpContactImpulseLimitBreachedListener *)
//{
//    mangled_ppc("?addContactImpulseLimitBreachedListener@hkpWorld@@QAAXPAVhkpContactImpulseLimitBreachedListener@@@Z");
//};

//public: void hkpWorld::removeContactImpulseLimitBreachedListener(class hkpContactImpulseLimitBreachedListener *)
//{
//    mangled_ppc("?removeContactImpulseLimitBreachedListener@hkpWorld@@QAAXPAVhkpContactImpulseLimitBreachedListener@@@Z");
//};

//public: float hkpWorld::getCurrentTime(void) const
//{
//    mangled_ppc("?getCurrentTime@hkpWorld@@QBAMXZ");
//};

//public: float hkpWorld::getCurrentPsiTime(void) const
//{
//    mangled_ppc("?getCurrentPsiTime@hkpWorld@@QBAMXZ");
//};

//public: enum hkpStepResult hkpWorld::stepDeltaTime(float)
//{
//    mangled_ppc("?stepDeltaTime@hkpWorld@@QAA?AW4hkpStepResult@@M@Z");
//};

//public: enum hkpStepResult hkpWorld::integrate(float)
//{
//    mangled_ppc("?integrate@hkpWorld@@QAA?AW4hkpStepResult@@M@Z");
//};

//public: enum hkpStepResult hkpWorld::collide(void)
//{
//    mangled_ppc("?collide@hkpWorld@@QAA?AW4hkpStepResult@@XZ");
//};

//public: enum hkpStepResult hkpWorld::advanceTime(void)
//{
//    mangled_ppc("?advanceTime@hkpWorld@@QAA?AW4hkpStepResult@@XZ");
//};

//public: void hkpWorld::setFrameTimeMarker(float)
//{
//    mangled_ppc("?setFrameTimeMarker@hkpWorld@@QAAXM@Z");
//};

//public: bool hkpWorld::isSimulationAtMarker(void) const
//{
//    mangled_ppc("?isSimulationAtMarker@hkpWorld@@QBA_NXZ");
//};

//public: bool hkpWorld::isSimulationAtPsi(void) const
//{
//    mangled_ppc("?isSimulationAtPsi@hkpWorld@@QBA_NXZ");
//};

//public: static void hkpWorld::registerWithJobQueue(class hkJobQueue *)
//{
//    mangled_ppc("?registerWithJobQueue@hkpWorld@@SAXPAVhkJobQueue@@@Z");
//};

//public: enum hkpStepResult hkpWorld::stepMultithreaded(class hkJobQueue *, class hkJobThreadPool *, float)
//{
//    mangled_ppc("?stepMultithreaded@hkpWorld@@QAA?AW4hkpStepResult@@PAVhkJobQueue@@PAVhkJobThreadPool@@M@Z");
//};

//public: enum hkpStepResult hkpWorld::initMtStep(class hkJobQueue *, float)
//{
//    mangled_ppc("?initMtStep@hkpWorld@@QAA?AW4hkpStepResult@@PAVhkJobQueue@@M@Z");
//};

//public: enum hkpStepResult hkpWorld::finishMtStep(class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?finishMtStep@hkpWorld@@QAA?AW4hkpStepResult@@PAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//public: void hkpWorld::getMultithreadConfig(struct hkpMultithreadConfig &)
//{
//    mangled_ppc("?getMultithreadConfig@hkpWorld@@QAAXAAUhkpMultithreadConfig@@@Z");
//};

//public: void hkpWorld::setMultithreadConfig(struct hkpMultithreadConfig const &, class hkJobQueue *)
//{
//    mangled_ppc("?setMultithreadConfig@hkpWorld@@QAAXABUhkpMultithreadConfig@@PAVhkJobQueue@@@Z");
//};

//public: void hkpWorld::setCompressedMeshShapeOnSpu(class hkJobQueue *, class hkBool)
//{
//    mangled_ppc("?setCompressedMeshShapeOnSpu@hkpWorld@@QAAXPAVhkJobQueue@@VhkBool@@@Z");
//};

//public: virtual void hkpWorld::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpWorld@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: void hkpWorld::checkDeterminismOfIslandBroadPhase(class hkpSimulationIsland const *)
//{
//    mangled_ppc("?checkDeterminismOfIslandBroadPhase@hkpWorld@@QAAXPBVhkpSimulationIsland@@@Z");
//};

//public: void hkpWorld::checkDeterminism(void)
//{
//    mangled_ppc("?checkDeterminism@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::getCinfo(class hkpWorldCinfo &) const
//{
//    mangled_ppc("?getCinfo@hkpWorld@@QBAXAAVhkpWorldCinfo@@@Z");
//};

//public: class hkWorldMemoryAvailableWatchDog * hkpWorld::getMemoryWatchDog(void) const
//{
//    mangled_ppc("?getMemoryWatchDog@hkpWorld@@QBAPAVhkWorldMemoryAvailableWatchDog@@XZ");
//};

//public: void hkpWorld::setMemoryWatchDog(class hkWorldMemoryAvailableWatchDog *)
//{
//    mangled_ppc("?setMemoryWatchDog@hkpWorld@@QAAXPAVhkWorldMemoryAvailableWatchDog@@@Z");
//};

//public: hkpWorld::hkpWorld(class hkpWorldCinfo const &, unsigned int)
//{
//    mangled_ppc("??0hkpWorld@@QAA@ABVhkpWorldCinfo@@I@Z");
//};

//void hkWorld_setupContactMgrFactories(class hkpWorld *, class hkpCollisionDispatcher *)
//{
//    mangled_ppc("?hkWorld_setupContactMgrFactories@@YAXPAVhkpWorld@@PAVhkpCollisionDispatcher@@@Z");
//};

//public: void hkpWorld::shiftBroadPhase(class hkVector4const &, class hkVector4&, enum hkpWorld::CachedAabbUpdate)
//{
//    mangled_ppc("?shiftBroadPhase@hkpWorld@@QAAXABVhkVector4@@AAV2@W4CachedAabbUpdate@1@@Z");
//};

//public: void hkpWorld::setCollisionFilter(class hkpCollisionFilter *, class hkBool, enum hkpUpdateCollisionFilterOnWorldMode, enum hkpUpdateCollectionFilterMode)
//{
//    mangled_ppc("?setCollisionFilter@hkpWorld@@QAAXPAVhkpCollisionFilter@@VhkBool@@W4hkpUpdateCollisionFilterOnWorldMode@@W4hkpUpdateCollectionFilterMode@@@Z");
//};

//public: void hkpWorld::checkAccessGetActiveSimulationIslands(void) const
//{
//    mangled_ppc("?checkAccessGetActiveSimulationIslands@hkpWorld@@QBAXXZ");
//};

//public: void hkpWorld::setBroadPhaseBorder(class hkpBroadPhaseBorder *)
//{
//    mangled_ppc("?setBroadPhaseBorder@hkpWorld@@QAAXPAVhkpBroadPhaseBorder@@@Z");
//};

//public: class hkpBroadPhaseBorder * hkpWorld::getBroadPhaseBorder(void) const
//{
//    mangled_ppc("?getBroadPhaseBorder@hkpWorld@@QBAPAVhkpBroadPhaseBorder@@XZ");
//};

//public: void hkpWorld::castRay(struct hkpWorldRayCastInput const &, class hkpRayHitCollector &) const
//{
//    mangled_ppc("?castRay@hkpWorld@@QBAXABUhkpWorldRayCastInput@@AAVhkpRayHitCollector@@@Z");
//};

//public: void hkpWorld::castRay(struct hkpWorldRayCastInput const &, struct hkpWorldRayCastOutput &) const
//{
//    mangled_ppc("?castRay@hkpWorld@@QBAXABUhkpWorldRayCastInput@@AAUhkpWorldRayCastOutput@@@Z");
//};

//public: void hkpWorld::castRayMt(struct hkpWorldRayCastCommand *, int, class hkJobQueue *, class hkJobThreadPool *, class hkSemaphore *, int) const
//{
//    mangled_ppc("?castRayMt@hkpWorld@@QBAXPAUhkpWorldRayCastCommand@@HPAVhkJobQueue@@PAVhkJobThreadPool@@PAVhkSemaphore@@H@Z");
//};

//public: void hkpWorld::getClosestPoints(class hkpCollidable const *, struct hkpCollisionInput const &, class hkpCdPointCollector &) const
//{
//    mangled_ppc("?getClosestPoints@hkpWorld@@QBAXPBVhkpCollidable@@ABUhkpCollisionInput@@AAVhkpCdPointCollector@@@Z");
//};

//public: void hkpWorld::getPenetrations(class hkpCollidable const *, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &) const
//{
//    mangled_ppc("?getPenetrations@hkpWorld@@QBAXPBVhkpCollidable@@ABUhkpCollisionInput@@AAVhkpCdBodyPairCollector@@@Z");
//};

//public: void hkpWorld::linearCast(class hkpCollidable const *, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *) const
//{
//    mangled_ppc("?linearCast@hkpWorld@@QBAXPBVhkpCollidable@@ABUhkpLinearCastInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: void hkpWorld::linearCastMt(struct hkpWorldLinearCastCommand *, int, class hkJobQueue *, class hkJobThreadPool *, class hkSemaphore *, int) const
//{
//    mangled_ppc("?linearCastMt@hkpWorld@@QBAXPAUhkpWorldLinearCastCommand@@HPAVhkJobQueue@@PAVhkJobThreadPool@@PAVhkSemaphore@@H@Z");
//};

//public: class hkpPhysicsSystem * hkpWorld::getWorldAsOneSystem(void) const
//{
//    mangled_ppc("?getWorldAsOneSystem@hkpWorld@@QBAPAVhkpPhysicsSystem@@XZ");
//};

//void enumerateAllEntitiesInWorld(class hkpWorld const *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllEntitiesInWorld@@YAXPBVhkpWorld@@PAVhkpPhysicsSystem@@@Z");
//};

//class hkBool enumerateAllInactiveEntitiesInWorld(class hkpWorld const *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllInactiveEntitiesInWorld@@YA?AVhkBool@@PBVhkpWorld@@PAVhkpPhysicsSystem@@@Z");
//};

//class hkBool enumerateAllActiveEntitiesInWorld(class hkpWorld const *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllActiveEntitiesInWorld@@YA?AVhkBool@@PBVhkpWorld@@PAVhkpPhysicsSystem@@@Z");
//};

//void enumerateAllConstraintsInWorld(class hkpWorld const *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllConstraintsInWorld@@YAXPBVhkpWorld@@PAVhkpPhysicsSystem@@@Z");
//};

//void enumerateAllConstraintsInIsland(class hkpSimulationIsland *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllConstraintsInIsland@@YAXPAVhkpSimulationIsland@@PAVhkpPhysicsSystem@@@Z");
//};

//void enumerateAllActionsInWorld(class hkpWorld const *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllActionsInWorld@@YAXPBVhkpWorld@@PAVhkpPhysicsSystem@@@Z");
//};

//void enumerateAllPhantomsInWorld(class hkpWorld const *, class hkpPhysicsSystem *)
//{
//    mangled_ppc("?enumerateAllPhantomsInWorld@@YAXPBVhkpWorld@@PAVhkpPhysicsSystem@@@Z");
//};

//public: void hkpWorld::getWorldAsSystems(class hkArray<class hkpPhysicsSystem *, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getWorldAsSystems@hkpWorld@@QBAXAAV?$hkArray@PAVhkpPhysicsSystem@@UhkContainerHeapAllocator@@@@@Z");
//};

//private: void hkpWorld::internal_executePendingOperations(void)
//{
//    mangled_ppc("?internal_executePendingOperations@hkpWorld@@AAAXXZ");
//};

//private: void hkpWorld::internal_executePendingBodyOperations(void)
//{
//    mangled_ppc("?internal_executePendingBodyOperations@hkpWorld@@AAAXXZ");
//};

//public: void hkpWorld::queueOperation(struct hkWorldOperation::BaseOperation const &)
//{
//    mangled_ppc("?queueOperation@hkpWorld@@QAAXABUBaseOperation@hkWorldOperation@@@Z");
//};

//public: void hkpWorld::addBodyOperation(class hkpRigidBody *, class hkpBodyOperation *, int, int)
//{
//    mangled_ppc("?addBodyOperation@hkpWorld@@QAAXPAVhkpRigidBody@@PAVhkpBodyOperation@@HH@Z");
//};

//public: class hkWorldOperation::UserCallback * hkpWorld::queueCallback(class hkWorldOperation::UserCallback *, unsigned long)
//{
//    mangled_ppc("?queueCallback@hkpWorld@@QAAPAVUserCallback@hkWorldOperation@@PAV23@K@Z");
//};

//public: void hkpWorld::findInitialContactPoints(class hkpEntity **, int)
//{
//    mangled_ppc("?findInitialContactPoints@hkpWorld@@QAAXPAPAVhkpEntity@@H@Z");
//};

//public: void hkpWorld::findInitialContactPointsOfAllEntities(void)
//{
//    mangled_ppc("?findInitialContactPointsOfAllEntities@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::getMemUsageForIntegration(struct hkpWorld::MemUsageInfo &)
//{
//    mangled_ppc("?getMemUsageForIntegration@hkpWorld@@QAAXAAUMemUsageInfo@1@@Z");
//};

//public: void hkpWorld::lock(void)
//{
//    mangled_ppc("?lock@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::unlock(void)
//{
//    mangled_ppc("?unlock@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::lockReadOnly(void)
//{
//    mangled_ppc("?lockReadOnly@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::unlockReadOnly(void)
//{
//    mangled_ppc("?unlockReadOnly@hkpWorld@@QAAXXZ");
//};

//public: bool hkpWorld::checkUnmarked(void)
//{
//    mangled_ppc("?checkUnmarked@hkpWorld@@QAA_NXZ");
//};

//public: void hkpWorld::lockIslandForConstraintUpdate(class hkpSimulationIsland *)
//{
//    mangled_ppc("?lockIslandForConstraintUpdate@hkpWorld@@QAAXPAVhkpSimulationIsland@@@Z");
//};

//public: void hkpWorld::lockForIslandSplit(class hkpSimulationIsland *)
//{
//    mangled_ppc("?lockForIslandSplit@hkpWorld@@QAAXPAVhkpSimulationIsland@@@Z");
//};

//public: void hkpWorld::unlockIslandForConstraintUpdate(class hkpSimulationIsland *)
//{
//    mangled_ppc("?unlockIslandForConstraintUpdate@hkpWorld@@QAAXPAVhkpSimulationIsland@@@Z");
//};

//public: void hkpWorld::unlockForIslandSplit(class hkpSimulationIsland *)
//{
//    mangled_ppc("?unlockForIslandSplit@hkpWorld@@QAAXPAVhkpSimulationIsland@@@Z");
//};

//public: void hkpWorld::markTreeDirty(void)
//{
//    mangled_ppc("?markTreeDirty@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::updateKdTree(class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?updateKdTree@hkpWorld@@QAAXPAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//public: void hkpWorld::setMultithreadedAccessChecking(enum hkpWorld::MtAccessChecking)
//{
//    mangled_ppc("?setMultithreadedAccessChecking@hkpWorld@@QAAXW4MtAccessChecking@1@@Z");
//};

//public: enum hkpWorld::MtAccessChecking hkpWorld::getMultithreadedAccessChecking(void) const
//{
//    mangled_ppc("?getMultithreadedAccessChecking@hkpWorld@@QBA?AW4MtAccessChecking@1@XZ");
//};

//public: void hkpWorld::markForRead(void) const
//{
//    mangled_ppc("?markForRead@hkpWorld@@QBAXXZ");
//};

//public: void hkpWorld::markForWrite(void)
//{
//    mangled_ppc("?markForWrite@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::unmarkForRead(void) const
//{
//    mangled_ppc("?unmarkForRead@hkpWorld@@QBAXXZ");
//};

//public: void hkpWorld::unmarkForWrite(void)
//{
//    mangled_ppc("?unmarkForWrite@hkpWorld@@QAAXXZ");
//};

//merged_84027800
//{
//    mangled_ppc("merged_84027800");
//};

//public: static void hkpWorld::operator delete(void *)
//{
//    mangled_ppc("??3hkpWorld@@SAXPAX@Z");
//};

//public: hkpWorldDynamicsStepInfo::hkpWorldDynamicsStepInfo(void)
//{
//    mangled_ppc("??0hkpWorldDynamicsStepInfo@@QAA@XZ");
//};

//public: hkpSolverInfo::hkpSolverInfo(void)
//{
//    mangled_ppc("??0hkpSolverInfo@@QAA@XZ");
//};

//public: hkpSolverInfo::DeactivationInfo::DeactivationInfo(void)
//{
//    mangled_ppc("??0DeactivationInfo@hkpSolverInfo@@QAA@XZ");
//};

//public: static void hkpCollisionAgentConfig::operator delete(void *)
//{
//    mangled_ppc("??3hkpCollisionAgentConfig@@SAXPAX@Z");
//};

//public: void * hkpMtThreadStructure::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkpMtThreadStructure@@QAAPAXI@Z");
//};

//public: static void hkpMtThreadStructure::operator delete(void *)
//{
//    mangled_ppc("??3hkpMtThreadStructure@@SAXPAX@Z");
//};

//public: void * hkpTypedBroadPhaseDispatcher::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkpTypedBroadPhaseDispatcher@@QAAPAXI@Z");
//};

//public: static void hkpTypedBroadPhaseDispatcher::operator delete(void *)
//{
//    mangled_ppc("??3hkpTypedBroadPhaseDispatcher@@SAXPAX@Z");
//};

//public: void * hkpProcessCollisionInput::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkpProcessCollisionInput@@QAAPAXI@Z");
//};

//public: static void hkpProcessCollisionInput::operator delete(void *)
//{
//    mangled_ppc("??3hkpProcessCollisionInput@@SAXPAX@Z");
//};

//public: void * hkpWorldOperationQueue::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkpWorldOperationQueue@@QAAPAXI@Z");
//};

//public: static void hkpWorldOperationQueue::operator delete(void *)
//{
//    mangled_ppc("??3hkpWorldOperationQueue@@SAXPAX@Z");
//};

//public: hkpMtThreadStructure::~hkpMtThreadStructure(void)
//{
//    mangled_ppc("??1hkpMtThreadStructure@@QAA@XZ");
//};

//public: hkWorldOperation::UpdateFilterOnWorld::UpdateFilterOnWorld(void)
//{
//    mangled_ppc("??0UpdateFilterOnWorld@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::UpdateFilterOnPhantom::UpdateFilterOnPhantom(void)
//{
//    mangled_ppc("??0UpdateFilterOnPhantom@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::UpdateFilterOnEntityPair::UpdateFilterOnEntityPair(void)
//{
//    mangled_ppc("??0UpdateFilterOnEntityPair@hkWorldOperation@@QAA@XZ");
//};

//class hkpPhantom * hkGetPhantom(class hkpCollidable const *)
//{
//    mangled_ppc("?hkGetPhantom@@YAPAVhkpPhantom@@PBVhkpCollidable@@@Z");
//};

//public: hkWorldOperation::UpdateFilterOnEntity::UpdateFilterOnEntity(void)
//{
//    mangled_ppc("??0UpdateFilterOnEntity@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::ReintegrateAndRecollideEntityBatch::ReintegrateAndRecollideEntityBatch(void)
//{
//    mangled_ppc("??0ReintegrateAndRecollideEntityBatch@hkWorldOperation@@QAA@XZ");
//};

//public: void hkpCdBody::setMotionState(class hkMotionState const *)
//{
//    mangled_ppc("?setMotionState@hkpCdBody@@QAAXPBVhkMotionState@@@Z");
//};

//public: void hkpWorld::allowCriticalOperations(class hkBool)
//{
//    mangled_ppc("?allowCriticalOperations@hkpWorld@@QAAXVhkBool@@@Z");
//};

//public: hkWorldOperation::AddEntity::AddEntity(void)
//{
//    mangled_ppc("??0AddEntity@hkWorldOperation@@QAA@XZ");
//};

//protected: void hkpWorldObject::setWorld(class hkpWorld *)
//{
//    mangled_ppc("?setWorld@hkpWorldObject@@IAAXPAVhkpWorld@@@Z");
//};

//public: static void * hkpSimulationIsland::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpSimulationIsland@@SAPAXI@Z");
//};

//public: hkWorldOperation::AddEntityBatch::AddEntityBatch(void)
//{
//    mangled_ppc("??0AddEntityBatch@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::RemoveEntity::RemoveEntity(void)
//{
//    mangled_ppc("??0RemoveEntity@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::RemoveEntityBatch::RemoveEntityBatch(void)
//{
//    mangled_ppc("??0RemoveEntityBatch@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::ActivateRegion::ActivateRegion(void)
//{
//    mangled_ppc("??0ActivateRegion@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::AddConstraint::AddConstraint(void)
//{
//    mangled_ppc("??0AddConstraint@hkWorldOperation@@QAA@XZ");
//};

//public: unsigned long hkpConstraintData::getUserData(void) const
//{
//    mangled_ppc("?getUserData@hkpConstraintData@@QBAKXZ");
//};

//public: void hkpConstraintInstance::setUserData(unsigned long)
//{
//    mangled_ppc("?setUserData@hkpConstraintInstance@@QAAXK@Z");
//};

//public: class hkpWorld * hkpSimulationIsland::getWorld(void)
//{
//    mangled_ppc("?getWorld@hkpSimulationIsland@@QAAPAVhkpWorld@@XZ");
//};

//public: hkWorldOperation::RemoveConstraint::RemoveConstraint(void)
//{
//    mangled_ppc("??0RemoveConstraint@hkWorldOperation@@QAA@XZ");
//};

//public: void hkpAction::setWorld(class hkpWorld *)
//{
//    mangled_ppc("?setWorld@hkpAction@@QAAXPAVhkpWorld@@@Z");
//};

//public: class hkBool hkpSimulationIsland::isFixed(void) const
//{
//    mangled_ppc("?isFixed@hkpSimulationIsland@@QBA?AVhkBool@@XZ");
//};

//public: hkWorldOperation::AddAction::AddAction(void)
//{
//    mangled_ppc("??0AddAction@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::RemoveAction::RemoveAction(void)
//{
//    mangled_ppc("??0RemoveAction@hkWorldOperation@@QAA@XZ");
//};

//public: class hkpSimulationIsland * hkpAction::getSimulationIsland(void)
//{
//    mangled_ppc("?getSimulationIsland@hkpAction@@QAAPAVhkpSimulationIsland@@XZ");
//};

//public: static void hkpWorldOperationUtil::putIslandOnDirtyList(class hkpWorld *, class hkpSimulationIsland *)
//{
//    mangled_ppc("?putIslandOnDirtyList@hkpWorldOperationUtil@@SAXPAVhkpWorld@@PAVhkpSimulationIsland@@@Z");
//};

//public: int hkpWorld::areCriticalOperationsLockedForPhantoms(void) const
//{
//    mangled_ppc("?areCriticalOperationsLockedForPhantoms@hkpWorld@@QBAHXZ");
//};

//public: hkWorldOperation::AddPhantom::AddPhantom(void)
//{
//    mangled_ppc("??0AddPhantom@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::AddPhantomBatch::AddPhantomBatch(void)
//{
//    mangled_ppc("??0AddPhantomBatch@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::RemovePhantom::RemovePhantom(void)
//{
//    mangled_ppc("??0RemovePhantom@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::RemovePhantomBatch::RemovePhantomBatch(void)
//{
//    mangled_ppc("??0RemovePhantomBatch@hkWorldOperation@@QAA@XZ");
//};

//public: float hkpSimulation::getCurrentTime(void)
//{
//    mangled_ppc("?getCurrentTime@hkpSimulation@@QAAMXZ");
//};

//public: float hkpSimulation::getCurrentPsiTime(void)
//{
//    mangled_ppc("?getCurrentPsiTime@hkpSimulation@@QAAMXZ");
//};

//public: void hkJobQueue::hkJobHandlerFuncs::initProcessJobFuncs(enum hkJobQueue::JobStatus (**)(class hkJobQueue &, struct hkJobQueue::JobQueueEntry &), int)
//{
//    mangled_ppc("?initProcessJobFuncs@hkJobHandlerFuncs@hkJobQueue@@QAAXPAP6A?AW4JobStatus@2@AAV2@AAUJobQueueEntry@2@@ZH@Z");
//};

//public: void hkJobQueue::hkJobHandlerFuncs::registerProcessJobFunc(unsigned char, enum hkJobQueue::JobStatus (*)(class hkJobQueue &, struct hkJobQueue::JobQueueEntry &))
//{
//    mangled_ppc("?registerProcessJobFunc@hkJobHandlerFuncs@hkJobQueue@@QAAXEP6A?AW4JobStatus@2@AAV2@AAUJobQueueEntry@2@@Z@Z");
//};

//public: class hkpBroadPhase const * hkpWorld::getBroadPhase(void) const
//{
//    mangled_ppc("?getBroadPhase@hkpWorld@@QBAPBVhkpBroadPhase@@XZ");
//};

//public: hkHalf::hkHalf(float const &)
//{
//    mangled_ppc("??0hkHalf@@QAA@ABM@Z");
//};

//public: void hkpSolverInfo::setTauAndDamping(float, float)
//{
//    mangled_ppc("?setTauAndDamping@hkpSolverInfo@@QAAXMM@Z");
//};

//public: void hkStepInfo::set(float, float)
//{
//    mangled_ppc("?set@hkStepInfo@@QAAXMM@Z");
//};

//public: static void * hkpCollisionDispatcher::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpCollisionDispatcher@@SAPAXI@Z");
//};

//public: static void * hkpContactMgrFactory::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpContactMgrFactory@@SAPAXI@Z");
//};

//public: static void * hkpTypedBroadPhaseDispatcher::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpTypedBroadPhaseDispatcher@@SAPAXI@Z");
//};

//public: void hkpTypedBroadPhaseDispatcher::setBroadPhaseListener(class hkpBroadPhaseListener *, int, int)
//{
//    mangled_ppc("?setBroadPhaseListener@hkpTypedBroadPhaseDispatcher@@QAAXPAVhkpBroadPhaseListener@@HH@Z");
//};

//public: static void * hkpCollisionFilter::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpCollisionFilter@@SAPAXI@Z");
//};

//public: hkpNullCollisionFilter::hkpNullCollisionFilter(void)
//{
//    mangled_ppc("??0hkpNullCollisionFilter@@QAA@XZ");
//};

//public: static void * hkpConvexListFilter::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpConvexListFilter@@SAPAXI@Z");
//};

//public: hkpDefaultConvexListFilter::hkpDefaultConvexListFilter(void)
//{
//    mangled_ppc("??0hkpDefaultConvexListFilter@@QAA@XZ");
//};

//protected: hkpConvexListFilter::hkpConvexListFilter(void)
//{
//    mangled_ppc("??0hkpConvexListFilter@@IAA@XZ");
//};

//public: static void * hkpProcessCollisionInput::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpProcessCollisionInput@@SAPAXI@Z");
//};

//public: hkpProcessCollisionInput::hkpProcessCollisionInput(void)
//{
//    mangled_ppc("??0hkpProcessCollisionInput@@QAA@XZ");
//};

//public: hkpCollisionInput::hkpCollisionInput(void)
//{
//    mangled_ppc("??0hkpCollisionInput@@QAA@XZ");
//};

//public: static void * hkpCollisionAgentConfig::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpCollisionAgentConfig@@SAPAXI@Z");
//};

//public: hkpCollisionAgentConfig::hkpCollisionAgentConfig(void)
//{
//    mangled_ppc("??0hkpCollisionAgentConfig@@QAA@XZ");
//};

//public: static void * hkpPhantomBroadPhaseListener::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpPhantomBroadPhaseListener@@SAPAXI@Z");
//};

//public: hkpPhantomBroadPhaseListener::hkpPhantomBroadPhaseListener(void)
//{
//    mangled_ppc("??0hkpPhantomBroadPhaseListener@@QAA@XZ");
//};

//public: hkpBroadPhaseListener::hkpBroadPhaseListener(void)
//{
//    mangled_ppc("??0hkpBroadPhaseListener@@QAA@XZ");
//};

//merged_84028FF8
//{
//    mangled_ppc("merged_84028FF8");
//};

//public: virtual hkpBroadPhaseListener::~hkpBroadPhaseListener(void)
//{
//    mangled_ppc("??1hkpBroadPhaseListener@@UAA@XZ");
//};

//merged_84029058
//{
//    mangled_ppc("merged_84029058");
//};

//public: static void hkpPhantomBroadPhaseListener::operator delete(void *)
//{
//    mangled_ppc("??3hkpPhantomBroadPhaseListener@@SAXPAX@Z");
//};

//public: virtual hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener(void)
//{
//    mangled_ppc("??1hkpPhantomBroadPhaseListener@@UAA@XZ");
//};

//public: static void * hkpEntityEntityBroadPhaseListener::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpEntityEntityBroadPhaseListener@@SAPAXI@Z");
//};

//public: static void * hkpBroadPhaseBorderListener::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpBroadPhaseBorderListener@@SAPAXI@Z");
//};

//public: hkpBroadPhaseBorderListener::hkpBroadPhaseBorderListener(void)
//{
//    mangled_ppc("??0hkpBroadPhaseBorderListener@@QAA@XZ");
//};

//merged_84029258
//{
//    mangled_ppc("merged_84029258");
//};

//public: static void hkpBroadPhaseBorderListener::operator delete(void *)
//{
//    mangled_ppc("??3hkpBroadPhaseBorderListener@@SAXPAX@Z");
//};

//public: virtual hkpBroadPhaseBorderListener::~hkpBroadPhaseBorderListener(void)
//{
//    mangled_ppc("??1hkpBroadPhaseBorderListener@@UAA@XZ");
//};

//public: static void * hkpKdTreeWorldManager::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpKdTreeWorldManager@@SAPAXI@Z");
//};

//public: static void * hkpAabbTreeWorldManager::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpAabbTreeWorldManager@@SAPAXI@Z");
//};

//public: static void * hkpMtThreadStructure::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpMtThreadStructure@@SAPAXI@Z");
//};

//public: static void * hkpWorldOperationQueue::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpWorldOperationQueue@@SAPAXI@Z");
//};

//public: static void * hkpNullContactMgrFactory::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpNullContactMgrFactory@@SAPAXI@Z");
//};

//public: hkpNullContactMgrFactory::hkpNullContactMgrFactory(void)
//{
//    mangled_ppc("??0hkpNullContactMgrFactory@@QAA@XZ");
//};

//public: virtual void hkpContactMgrFactory::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpContactMgrFactory@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: hkpNullContactMgr::hkpNullContactMgr(void)
//{
//    mangled_ppc("??0hkpNullContactMgr@@QAA@XZ");
//};

//public: virtual unsigned short hkpNullContactMgr::addContactPointImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, class hkpGskCache const *, class hkContactPoint &)
//{
//    mangled_ppc("?addContactPointImpl@hkpNullContactMgr@@UAAGABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@PBVhkpGskCache@@AAVhkContactPoint@@@Z");
//};

//public: virtual void hkpNullContactMgr::removeContactPointImpl(unsigned short, class hkpConstraintOwner &)
//{
//    mangled_ppc("?removeContactPointImpl@hkpNullContactMgr@@UAAXGAAVhkpConstraintOwner@@@Z");
//};

//public: virtual void hkpNullContactMgr::processContactImpl(class hkpCollidable const &, class hkpCollidable const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionData &)
//{
//    mangled_ppc("?processContactImpl@hkpNullContactMgr@@UAAXABVhkpCollidable@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionData@@@Z");
//};

//public: virtual enum hkpContactMgr::ToiAccept hkpNullContactMgr::addToiImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, float, class hkContactPoint &, class hkpGskCache const *, float &, class hkpContactPointProperties &)
//{
//    mangled_ppc("?addToiImpl@hkpNullContactMgr@@UAA?AW4ToiAccept@hkpContactMgr@@ABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@MAAVhkContactPoint@@PBVhkpGskCache@@AAMAAVhkpContactPointProperties@@@Z");
//};

//public: virtual void hkpNullContactMgr::removeToiImpl(class hkpConstraintOwner &, class hkpContactPointProperties &)
//{
//    mangled_ppc("?removeToiImpl@hkpNullContactMgr@@UAAXAAVhkpConstraintOwner@@AAVhkpContactPointProperties@@@Z");
//};

//public: virtual enum hkResult hkpNullContactMgr::reserveContactPointsImpl(int)
//{
//    mangled_ppc("?reserveContactPointsImpl@hkpNullContactMgr@@UAA?AW4hkResult@@H@Z");
//};

//public: virtual void hkpNullContactMgr::cleanup(void)
//{
//    mangled_ppc("?cleanup@hkpNullContactMgr@@UAAXXZ");
//};

//merged_84029740
//{
//    mangled_ppc("merged_84029740");
//};

//public: virtual hkpNullContactMgr::~hkpNullContactMgr(void)
//{
//    mangled_ppc("??1hkpNullContactMgr@@UAA@XZ");
//};

//public: virtual class hkpContactMgr * hkpNullContactMgrFactory::createContactMgr(class hkpCollidable const &, class hkpCollidable const &, struct hkpCollisionInput const &)
//{
//    mangled_ppc("?createContactMgr@hkpNullContactMgrFactory@@UAAPAVhkpContactMgr@@ABVhkpCollidable@@0ABUhkpCollisionInput@@@Z");
//};

//merged_840297D0
//{
//    mangled_ppc("merged_840297D0");
//};

//public: static void hkpNullContactMgrFactory::operator delete(void *)
//{
//    mangled_ppc("??3hkpNullContactMgrFactory@@SAXPAX@Z");
//};

//public: hkpContactMgrFactory::hkpContactMgrFactory(void)
//{
//    mangled_ppc("??0hkpContactMgrFactory@@QAA@XZ");
//};

//public: virtual hkpNullContactMgrFactory::~hkpNullContactMgrFactory(void)
//{
//    mangled_ppc("??1hkpNullContactMgrFactory@@UAA@XZ");
//};

//public: virtual hkpContactMgrFactory::~hkpContactMgrFactory(void)
//{
//    mangled_ppc("??1hkpContactMgrFactory@@UAA@XZ");
//};

//merged_84029910
//{
//    mangled_ppc("merged_84029910");
//};

//public: static void hkpContactMgrFactory::operator delete(void *)
//{
//    mangled_ppc("??3hkpContactMgrFactory@@SAXPAX@Z");
//};

//public: hkpCollisionDispatcher::InitCollisionQualityInfo::InitCollisionQualityInfo(void)
//{
//    mangled_ppc("??0InitCollisionQualityInfo@hkpCollisionDispatcher@@QAA@XZ");
//};

//public: hkpMtThreadStructure::hkpMtThreadStructure(void)
//{
//    mangled_ppc("??0hkpMtThreadStructure@@QAA@XZ");
//};

//public: hkpConstraintQueryIn::hkpConstraintQueryIn(void)
//{
//    mangled_ppc("??0hkpConstraintQueryIn@@QAA@XZ");
//};

//public: hkpConstraintQueryStepInfo::hkpConstraintQueryStepInfo(void)
//{
//    mangled_ppc("??0hkpConstraintQueryStepInfo@@QAA@XZ");
//};

//public: bool hkMultiThreadCheck::isMarkedForWrite(void)
//{
//    mangled_ppc("?isMarkedForWrite@hkMultiThreadCheck@@QAA_NXZ");
//};

//public: bool hkMultiThreadCheck::isMarkedForReadRecursive(void)
//{
//    mangled_ppc("?isMarkedForReadRecursive@hkMultiThreadCheck@@QAA_NXZ");
//};

//public: hkpWorldRayCaster::hkpWorldRayCaster(void)
//{
//    mangled_ppc("??0hkpWorldRayCaster@@QAA@XZ");
//};

//public: hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector(void)
//{
//    mangled_ppc("??0hkpBroadPhaseCastCollector@@QAA@XZ");
//};

//merged_84029C78
//{
//    mangled_ppc("merged_84029C78");
//};

//public: virtual hkpBroadPhaseCastCollector::~hkpBroadPhaseCastCollector(void)
//{
//    mangled_ppc("??1hkpBroadPhaseCastCollector@@UAA@XZ");
//};

//public: virtual hkpWorldRayCaster::~hkpWorldRayCaster(void)
//{
//    mangled_ppc("??1hkpWorldRayCaster@@UAA@XZ");
//};

//merged_84029D10
//{
//    mangled_ppc("merged_84029D10");
//};

//public: hkpSimpleWorldRayCaster::hkpSimpleWorldRayCaster(void)
//{
//    mangled_ppc("??0hkpSimpleWorldRayCaster@@QAA@XZ");
//};

//public: virtual hkpSimpleWorldRayCaster::~hkpSimpleWorldRayCaster(void)
//{
//    mangled_ppc("??1hkpSimpleWorldRayCaster@@UAA@XZ");
//};

//merged_84029DD8
//{
//    mangled_ppc("merged_84029DD8");
//};

//public: hkpWorldRayCastJob::hkpWorldRayCastJob(struct hkpProcessCollisionInput const *, struct hkpCollisionQueryJobHeader *, struct hkpWorldRayCastCommand const *, int, class hkpBroadPhase const *, class hkSemaphore *, int)
//{
//    mangled_ppc("??0hkpWorldRayCastJob@@QAA@PBUhkpProcessCollisionInput@@PAUhkpCollisionQueryJobHeader@@PBUhkpWorldRayCastCommand@@HPBVhkpBroadPhase@@PAVhkSemaphore@@H@Z");
//};

//protected: hkpRayCastQueryJob::hkpRayCastQueryJob(enum hkpRayCastQueryJob::JobSubType, unsigned short)
//{
//    mangled_ppc("??0hkpRayCastQueryJob@@IAA@W4JobSubType@0@G@Z");
//};

//public: hkJob::hkJob(enum hkJobType, unsigned int, unsigned short, enum hkJobSpuType)
//{
//    mangled_ppc("??0hkJob@@QAA@W4hkJobType@@IGW4hkJobSpuType@@@Z");
//};

//public: class hkKdTree const * hkpTreeWorldManager::getKdTree(void) const
//{
//    mangled_ppc("?getKdTree@hkpTreeWorldManager@@QBAPBVhkKdTree@@XZ");
//};

//public: class hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short> const * hkpTreeWorldManager::getAabbTree(void) const
//{
//    mangled_ppc("?getAabbTree@hkpTreeWorldManager@@QBAPBV?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@XZ");
//};

//public: hkpWorldLinearCaster::hkpWorldLinearCaster(void)
//{
//    mangled_ppc("??0hkpWorldLinearCaster@@QAA@XZ");
//};

//public: hkpLinearCastCollisionInput::hkpLinearCastCollisionInput(void)
//{
//    mangled_ppc("??0hkpLinearCastCollisionInput@@QAA@XZ");
//};

//public: virtual hkpWorldLinearCaster::~hkpWorldLinearCaster(void)
//{
//    mangled_ppc("??1hkpWorldLinearCaster@@UAA@XZ");
//};

//merged_8402A640
//{
//    mangled_ppc("merged_8402A640");
//};

//public: hkpWorldLinearCastJob::hkpWorldLinearCastJob(struct hkpProcessCollisionInput const *, struct hkpCollisionQueryJobHeader *, struct hkpWorldLinearCastCommand const *, int, class hkpBroadPhase const *, class hkSemaphore *, int)
//{
//    mangled_ppc("??0hkpWorldLinearCastJob@@QAA@PBUhkpProcessCollisionInput@@PAUhkpCollisionQueryJobHeader@@PBUhkpWorldLinearCastCommand@@HPBVhkpBroadPhase@@PAVhkSemaphore@@H@Z");
//};

//protected: hkpCollisionQueryJob::hkpCollisionQueryJob(enum hkpCollisionQueryJob::JobSubType, unsigned short)
//{
//    mangled_ppc("??0hkpCollisionQueryJob@@IAA@W4JobSubType@0@G@Z");
//};

//public: enum hkpConstraintAtom::AtomType hkpConstraintAtom::getType(void) const
//{
//    mangled_ppc("?getType@hkpConstraintAtom@@QBA?AW4AtomType@1@XZ");
//};

//public: static struct hkpConstraintAtom * hkpWorldConstraintUtil::getTerminalAtom(struct hkConstraintInternal const *)
//{
//    mangled_ppc("?getTerminalAtom@hkpWorldConstraintUtil@@SAPAUhkpConstraintAtom@@PBUhkConstraintInternal@@@Z");
//};

//public: int hkpConstraintAtom::isModifierType(void) const
//{
//    mangled_ppc("?isModifierType@hkpConstraintAtom@@QBAHXZ");
//};

//public: class hkArray<class hkpAction *, struct hkContainerHeapAllocator> const & hkpSimulationIsland::getActions(void) const
//{
//    mangled_ppc("?getActions@hkpSimulationIsland@@QBAABV?$hkArray@PAVhkpAction@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: hkWorldOperation::UserCallbackOperation::UserCallbackOperation(void)
//{
//    mangled_ppc("??0UserCallbackOperation@hkWorldOperation@@QAA@XZ");
//};

//public: hkStepInfo::hkStepInfo(float, float)
//{
//    mangled_ppc("??0hkStepInfo@@QAA@MM@Z");
//};

//public: void hkpSimulationIsland::unmarkForWrite(void)
//{
//    mangled_ppc("?unmarkForWrite@hkpSimulationIsland@@QAAXXZ");
//};

//public: class hkMultiThreadCheck & hkpBroadPhase::getMultiThreadCheck(void)
//{
//    mangled_ppc("?getMultiThreadCheck@hkpBroadPhase@@QAAAAVhkMultiThreadCheck@@XZ");
//};

//public: void hkpBroadPhase::markForRead(void) const
//{
//    mangled_ppc("?markForRead@hkpBroadPhase@@QBAXXZ");
//};

//public: void hkpBroadPhase::unmarkForRead(void) const
//{
//    mangled_ppc("?unmarkForRead@hkpBroadPhase@@QBAXXZ");
//};

//public: hkEnum<enum hkJobType, unsigned char>::hkEnum<enum hkJobType, unsigned char>(enum hkJobType)
//{
//    mangled_ppc("??0?$hkEnum@W4hkJobType@@E@@QAA@W4hkJobType@@@Z");
//};

//public: hkEnum<enum hkJobSpuType, unsigned char>::hkEnum<enum hkJobSpuType, unsigned char>(enum hkJobSpuType)
//{
//    mangled_ppc("??0?$hkEnum@W4hkJobSpuType@@E@@QAA@W4hkJobSpuType@@@Z");
//};

//public: void hkEnum<enum hkJobSpuType, unsigned char>::operator=(enum hkJobSpuType)
//{
//    mangled_ppc("??4?$hkEnum@W4hkJobSpuType@@E@@QAAXW4hkJobSpuType@@@Z");
//};

//public: hkPadSpu<class hkpCollisionDispatcher *>::hkPadSpu<class hkpCollisionDispatcher *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpCollisionDispatcher@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpCollisionDispatcher *>::operator=(class hkpCollisionDispatcher *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpCollisionDispatcher@@@@QAAXPAVhkpCollisionDispatcher@@@Z");
//};

//public: hkPadSpu<class hkBool>::hkPadSpu<class hkBool>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@VhkBool@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkBool>::operator=(class hkBool)
//{
//    mangled_ppc("??4?$hkPadSpu@VhkBool@@@@QAAXVhkBool@@@Z");
//};

//public: hkPadSpu<class hkpCollisionFilter const *>::hkPadSpu<class hkpCollisionFilter const *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PBVhkpCollisionFilter@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpCollisionFilter const *>::operator=(class hkpCollisionFilter const *)
//{
//    mangled_ppc("??4?$hkPadSpu@PBVhkpCollisionFilter@@@@QAAXPBVhkpCollisionFilter@@@Z");
//};

//public: hkPadSpu<class hkpConvexListFilter const *>::hkPadSpu<class hkpConvexListFilter const *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PBVhkpConvexListFilter@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpConvexListFilter const *>::operator=(class hkpConvexListFilter const *)
//{
//    mangled_ppc("??4?$hkPadSpu@PBVhkpConvexListFilter@@@@QAAXPBVhkpConvexListFilter@@@Z");
//};

//public: enum hkpConstraintAtom::AtomType hkEnum<enum hkpConstraintAtom::AtomType, unsigned short>::operator enum hkpConstraintAtom::AtomType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4AtomType@hkpConstraintAtom@@G@@QBA?AW4AtomType@hkpConstraintAtom@@XZ");
//};

//public: enum hkpWorldCinfo::BroadPhaseBorderBehaviour hkEnum<enum hkpWorldCinfo::BroadPhaseBorderBehaviour, signed char>::operator enum hkpWorldCinfo::BroadPhaseBorderBehaviour(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4BroadPhaseBorderBehaviour@hkpWorldCinfo@@C@@QBA?AW4BroadPhaseBorderBehaviour@hkpWorldCinfo@@XZ");
//};

//public: class hkBool hkEnum<enum hkpWorldCinfo::BroadPhaseBorderBehaviour, signed char>::operator!=(enum hkpWorldCinfo::BroadPhaseBorderBehaviour) const
//{
//    mangled_ppc("??9?$hkEnum@W4BroadPhaseBorderBehaviour@hkpWorldCinfo@@C@@QBA?AVhkBool@@W4BroadPhaseBorderBehaviour@hkpWorldCinfo@@@Z");
//};

//public: enum hkpWorldCinfo::TreeUpdateType hkEnum<enum hkpWorldCinfo::TreeUpdateType, signed char>::operator enum hkpWorldCinfo::TreeUpdateType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4TreeUpdateType@hkpWorldCinfo@@C@@QBA?AW4TreeUpdateType@hkpWorldCinfo@@XZ");
//};

//public: hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4ContactPointGeneration@hkpWorldCinfo@@C@@QAA@XZ");
//};

//public: enum hkpWorldCinfo::ContactPointGeneration hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::operator enum hkpWorldCinfo::ContactPointGeneration(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4ContactPointGeneration@hkpWorldCinfo@@C@@QBA?AW4ContactPointGeneration@hkpWorldCinfo@@XZ");
//};

//public: class hkBool hkEnum<enum hkpWorldCinfo::ContactPointGeneration, signed char>::operator==(enum hkpWorldCinfo::ContactPointGeneration) const
//{
//    mangled_ppc("??8?$hkEnum@W4ContactPointGeneration@hkpWorldCinfo@@C@@QBA?AVhkBool@@W4ContactPointGeneration@hkpWorldCinfo@@@Z");
//};

//public: enum hkpWorldCinfo::SimulationType hkEnum<enum hkpWorldCinfo::SimulationType, signed char>::operator enum hkpWorldCinfo::SimulationType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4SimulationType@hkpWorldCinfo@@C@@QBA?AW4SimulationType@hkpWorldCinfo@@XZ");
//};

//public: class hkBool hkEnum<enum hkpWorldCinfo::SimulationType, signed char>::operator!=(enum hkpWorldCinfo::SimulationType) const
//{
//    mangled_ppc("??9?$hkEnum@W4SimulationType@hkpWorldCinfo@@C@@QBA?AVhkBool@@W4SimulationType@hkpWorldCinfo@@@Z");
//};

//public: void hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator>::pushBack(class hkpSimulationIsland *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpSimulationIsland@@@Z");
//};

//public: hkEnum<enum hkpWorldCinfo::SimulationType, int>::hkEnum<enum hkpWorldCinfo::SimulationType, int>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4SimulationType@hkpWorldCinfo@@H@@QAA@XZ");
//};

//public: enum hkpWorldCinfo::SimulationType hkEnum<enum hkpWorldCinfo::SimulationType, int>::operator enum hkpWorldCinfo::SimulationType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4SimulationType@hkpWorldCinfo@@H@@QBA?AW4SimulationType@hkpWorldCinfo@@XZ");
//};

//public: void hkEnum<enum hkpWorldCinfo::SimulationType, int>::operator=(enum hkpWorldCinfo::SimulationType)
//{
//    mangled_ppc("??4?$hkEnum@W4SimulationType@hkpWorldCinfo@@H@@QAAXW4SimulationType@hkpWorldCinfo@@@Z");
//};

//public: class hkBool hkEnum<enum hkpWorldCinfo::SimulationType, int>::operator==(enum hkpWorldCinfo::SimulationType) const
//{
//    mangled_ppc("??8?$hkEnum@W4SimulationType@hkpWorldCinfo@@H@@QBA?AVhkBool@@W4SimulationType@hkpWorldCinfo@@@Z");
//};

//public: hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::pushBack(class hkpPhantom *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpPhantom@@@Z");
//};

//public: hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpActionListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::pushBack(class hkpActionListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpActionListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpActionListener@@@Z");
//};

//public: hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpEntityListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::pushBack(class hkpEntityListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpEntityListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpEntityListener@@@Z");
//};

//public: void hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::pushBack(class hkpPhantomListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpPhantomListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpPhantomListener@@@Z");
//};

//public: hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpConstraintListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpConstraintListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpConstraintListener@@@Z");
//};

//public: hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpWorldDeletionListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldDeletionListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpWorldDeletionListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpWorldDeletionListener@@@Z");
//};

//public: hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpIslandActivationListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::pushBack(class hkpIslandActivationListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpIslandActivationListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpIslandActivationListener@@@Z");
//};

//public: hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpWorldPostSimulationListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldPostSimulationListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpWorldPostSimulationListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpWorldPostSimulationListener@@@Z");
//};

//public: hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpWorldPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldPostIntegrateListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpWorldPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpWorldPostIntegrateListener@@@Z");
//};

//public: hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpWorldPostCollideListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::pushBack(class hkpWorldPostCollideListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpWorldPostCollideListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpWorldPostCollideListener@@@Z");
//};

//public: hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpIslandPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::pushBack(class hkpIslandPostIntegrateListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpIslandPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpIslandPostIntegrateListener@@@Z");
//};

//public: hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpIslandPostCollideListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::pushBack(class hkpIslandPostCollideListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpIslandPostCollideListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpIslandPostCollideListener@@@Z");
//};

//public: hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpContactListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::pushBack(class hkpContactListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpContactListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpContactListener@@@Z");
//};

//public: hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpContactImpulseLimitBreachedListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::pushBack(class hkpContactImpulseLimitBreachedListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpContactImpulseLimitBreachedListener@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpContactImpulseLimitBreachedListener@@@Z");
//};

//public: hkPadSpu<class hkpVelocityAccumulator const *>::hkPadSpu<class hkpVelocityAccumulator const *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PBVhkpVelocityAccumulator@@@@QAA@XZ");
//};

//public: hkPadSpu<class hkpConstraintInstance *>::hkPadSpu<class hkpConstraintInstance *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpConstraintInstance@@@@QAA@XZ");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPadSpu<class hkpMultiThreadedSimulation *>::hkPadSpu<class hkpMultiThreadedSimulation *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpMultiThreadedSimulation@@@@QAA@XZ");
//};

//public: hkPadSpu<struct hkpWorldDynamicsStepInfo *>::hkPadSpu<struct hkpWorldDynamicsStepInfo *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAUhkpWorldDynamicsStepInfo@@@@QAA@XZ");
//};

//public: hkEnum<enum hkpEntityActivation, unsigned char>::hkEnum<enum hkpEntityActivation, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpEntityActivation@@E@@QAA@XZ");
//};

//public: void hkEnum<enum hkpEntityActivation, unsigned char>::operator=(enum hkpEntityActivation)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpEntityActivation@@E@@QAAXW4hkpEntityActivation@@@Z");
//};

//public: hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>::hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpUpdateCollisionFilterOnEntityMode@@E@@QAA@XZ");
//};

//public: void hkEnum<enum hkpUpdateCollisionFilterOnEntityMode, unsigned char>::operator=(enum hkpUpdateCollisionFilterOnEntityMode)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpUpdateCollisionFilterOnEntityMode@@E@@QAAXW4hkpUpdateCollisionFilterOnEntityMode@@@Z");
//};

//public: hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>::hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpUpdateCollectionFilterMode@@E@@QAA@XZ");
//};

//public: void hkEnum<enum hkpUpdateCollectionFilterMode, unsigned char>::operator=(enum hkpUpdateCollectionFilterMode)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpUpdateCollectionFilterMode@@E@@QAAXW4hkpUpdateCollectionFilterMode@@@Z");
//};

//public: hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>::hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpUpdateCollisionFilterOnWorldMode@@E@@QAA@XZ");
//};

//public: void hkEnum<enum hkpUpdateCollisionFilterOnWorldMode, unsigned char>::operator=(enum hkpUpdateCollisionFilterOnWorldMode)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpUpdateCollisionFilterOnWorldMode@@E@@QAAXW4hkpUpdateCollisionFilterOnWorldMode@@@Z");
//};

//public: hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAUhkpAgentNnEntry@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::pushBack(struct hkpAgentNnEntry *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUhkpAgentNnEntry@@UhkContainerHeapAllocator@@@@QAAXABQAUhkpAgentNnEntry@@@Z");
//};

//public: hkLocalArray<class hkpBroadPhaseHandlePair>::hkLocalArray<class hkpBroadPhaseHandlePair>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@VhkpBroadPhaseHandlePair@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkpBroadPhaseHandlePair>::~hkLocalArray<class hkpBroadPhaseHandlePair>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@VhkpBroadPhaseHandlePair@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@VhkpBroadPhaseHandlePair@@$0IA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkLocalArray<class hkpBroadPhaseHandle *>::hkLocalArray<class hkpBroadPhaseHandle *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PAVhkpBroadPhaseHandle@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkpBroadPhaseHandle *>::~hkLocalArray<class hkpBroadPhaseHandle *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PAVhkpBroadPhaseHandle@@@@QAA@XZ");
//};

//public: hkLocalArray<class hkAabb>::hkLocalArray<class hkAabb>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@VhkAabb@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkAabb>::~hkLocalArray<class hkAabb>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@VhkAabb@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpEntity@@$03UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<class hkpBroadPhaseHandlePair>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@VhkpBroadPhaseHandlePair@@@@QBA?AVhkBool@@XZ");
//};

//public: class hkBool hkLocalArray<class hkpBroadPhaseHandle *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PAVhkpBroadPhaseHandle@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>::hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpBroadPhaseHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<class hkAabb>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@VhkAabb@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<class hkAabb, struct hkContainerHeapAllocator>::hkArray<class hkAabb, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkAabb@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkRefPtr<class hkpCollisionFilter>::operator=(class hkpCollisionFilter *)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkpCollisionFilter@@@@QAAXPAVhkpCollisionFilter@@@Z");
//};

//public: void hkRefPtr<class hkpConvexListFilter>::operator=(class hkpConvexListFilter *)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkpConvexListFilter@@@@QAAXPAVhkpConvexListFilter@@@Z");
//};

//public: class hkpConvexListFilter * hkRefPtr<class hkpConvexListFilter>::operator class hkpConvexListFilter *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkpConvexListFilter@@@@QBAPAVhkpConvexListFilter@@XZ");
//};

//public: hkRefPtr<class hkWorldMemoryAvailableWatchDog>::hkRefPtr<class hkWorldMemoryAvailableWatchDog>(void)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkWorldMemoryAvailableWatchDog@@@@QAA@XZ");
//};

//public: void hkRefPtr<class hkWorldMemoryAvailableWatchDog>::operator=(class hkWorldMemoryAvailableWatchDog *)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkWorldMemoryAvailableWatchDog@@@@QAAXPAVhkWorldMemoryAvailableWatchDog@@@Z");
//};

//public: void hkRefPtr<class hkWorldMemoryAvailableWatchDog>::operator=(class hkRefPtr<class hkWorldMemoryAvailableWatchDog> const &)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkWorldMemoryAvailableWatchDog@@@@QAAXABV0@@Z");
//};

//public: class hkWorldMemoryAvailableWatchDog * hkRefPtr<class hkWorldMemoryAvailableWatchDog>::operator class hkWorldMemoryAvailableWatchDog *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkWorldMemoryAvailableWatchDog@@@@QBAPAVhkWorldMemoryAvailableWatchDog@@XZ");
//};

//public: class hkpSimulationIsland *const & hkArrayBase<class hkpSimulationIsland *>::back(void) const
//{
//    mangled_ppc("?back@?$hkArrayBase@PAVhkpSimulationIsland@@@@QBAABQAVhkpSimulationIsland@@XZ");
//};

//public: class hkpSimulationIsland *& hkArrayBase<class hkpSimulationIsland *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAVhkpSimulationIsland@@@@QAAAAPAVhkpSimulationIsland@@XZ");
//};

//public: void hkArrayBase<class hkpSimulationIsland *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PAVhkpSimulationIsland@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkpSimulationIsland *>::_pushBack(class hkMemoryAllocator &, class hkpSimulationIsland *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpSimulationIsland@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpSimulationIsland@@@Z");
//};

//public: class hkpSimulationIsland *const * hkArrayBase<class hkpSimulationIsland *>::end(void) const
//{
//    mangled_ppc("?end@?$hkArrayBase@PAVhkpSimulationIsland@@@@QBAPBQAVhkpSimulationIsland@@XZ");
//};

//public: hkArrayBase<class hkpPhantom *>::hkArrayBase<class hkpPhantom *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpPhantom@@@@QAA@XZ");
//};

//public: class hkpPhantom *& hkArrayBase<class hkpPhantom *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpPhantom@@@@QAAAAPAVhkpPhantom@@H@Z");
//};

//public: void hkArrayBase<class hkpPhantom *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAVhkpPhantom@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkpPhantom *>::indexOf(class hkpPhantom *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpPhantom@@@@QBAHABQAVhkpPhantom@@HH@Z");
//};

//public: void hkArrayBase<class hkpPhantom *>::_pushBack(class hkMemoryAllocator &, class hkpPhantom *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpPhantom@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpPhantom@@@Z");
//};

//public: class hkpPhantom *const * hkArrayBase<class hkpPhantom *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpPhantom@@@@QBAPBQAVhkpPhantom@@XZ");
//};

//public: hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::~hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpPhantom *>::~hkArrayBase<class hkpPhantom *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpPhantom@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpActionListener *>::hkArrayBase<class hkpActionListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpActionListener@@@@QAA@XZ");
//};

//public: class hkpActionListener *& hkArrayBase<class hkpActionListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpActionListener@@@@QAAAAPAVhkpActionListener@@H@Z");
//};

//public: int hkArrayBase<class hkpActionListener *>::indexOf(class hkpActionListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpActionListener@@@@QBAHABQAVhkpActionListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpActionListener *>::_pushBack(class hkMemoryAllocator &, class hkpActionListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpActionListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpActionListener@@@Z");
//};

//public: hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpActionListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpActionListener *>::~hkArrayBase<class hkpActionListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpActionListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpEntityListener *>::hkArrayBase<class hkpEntityListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpEntityListener@@@@QAA@XZ");
//};

//public: class hkpEntityListener *& hkArrayBase<class hkpEntityListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpEntityListener@@@@QAAAAPAVhkpEntityListener@@H@Z");
//};

//public: int hkArrayBase<class hkpEntityListener *>::indexOf(class hkpEntityListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpEntityListener@@@@QBAHABQAVhkpEntityListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpEntityListener *>::_pushBack(class hkMemoryAllocator &, class hkpEntityListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpEntityListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpEntityListener@@@Z");
//};

//public: hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpEntityListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpEntityListener *>::~hkArrayBase<class hkpEntityListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpEntityListener@@@@QAA@XZ");
//};

//public: class hkpPhantomListener *& hkArrayBase<class hkpPhantomListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpPhantomListener@@@@QAAAAPAVhkpPhantomListener@@H@Z");
//};

//public: int hkArrayBase<class hkpPhantomListener *>::indexOf(class hkpPhantomListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpPhantomListener@@@@QBAHABQAVhkpPhantomListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpPhantomListener *>::_pushBack(class hkMemoryAllocator &, class hkpPhantomListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpPhantomListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpPhantomListener@@@Z");
//};

//public: hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpPhantomListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpPhantomListener *>::~hkArrayBase<class hkpPhantomListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpPhantomListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintListener *>::hkArrayBase<class hkpConstraintListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpConstraintListener@@@@QAA@XZ");
//};

//public: class hkpConstraintListener *& hkArrayBase<class hkpConstraintListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpConstraintListener@@@@QAAAAPAVhkpConstraintListener@@H@Z");
//};

//public: int hkArrayBase<class hkpConstraintListener *>::indexOf(class hkpConstraintListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpConstraintListener@@@@QBAHABQAVhkpConstraintListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpConstraintListener *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpConstraintListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpConstraintListener@@@Z");
//};

//public: hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpConstraintListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintListener *>::~hkArrayBase<class hkpConstraintListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpConstraintListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldDeletionListener *>::hkArrayBase<class hkpWorldDeletionListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QAA@XZ");
//};

//public: class hkpWorldDeletionListener *& hkArrayBase<class hkpWorldDeletionListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QAAAAPAVhkpWorldDeletionListener@@H@Z");
//};

//public: int hkArrayBase<class hkpWorldDeletionListener *>::indexOf(class hkpWorldDeletionListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QBAHABQAVhkpWorldDeletionListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpWorldDeletionListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldDeletionListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpWorldDeletionListener@@@Z");
//};

//public: hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpWorldDeletionListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldDeletionListener *>::~hkArrayBase<class hkpWorldDeletionListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpIslandActivationListener *>::hkArrayBase<class hkpIslandActivationListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpIslandActivationListener@@@@QAA@XZ");
//};

//public: class hkpIslandActivationListener *& hkArrayBase<class hkpIslandActivationListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpIslandActivationListener@@@@QAAAAPAVhkpIslandActivationListener@@H@Z");
//};

//public: int hkArrayBase<class hkpIslandActivationListener *>::indexOf(class hkpIslandActivationListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QBAHABQAVhkpIslandActivationListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpIslandActivationListener *>::_pushBack(class hkMemoryAllocator &, class hkpIslandActivationListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpIslandActivationListener@@@Z");
//};

//public: hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpIslandActivationListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpIslandActivationListener *>::~hkArrayBase<class hkpIslandActivationListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpIslandActivationListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldPostSimulationListener *>::hkArrayBase<class hkpWorldPostSimulationListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QAA@XZ");
//};

//public: class hkpWorldPostSimulationListener *& hkArrayBase<class hkpWorldPostSimulationListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QAAAAPAVhkpWorldPostSimulationListener@@H@Z");
//};

//public: int hkArrayBase<class hkpWorldPostSimulationListener *>::indexOf(class hkpWorldPostSimulationListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QBAHABQAVhkpWorldPostSimulationListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpWorldPostSimulationListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldPostSimulationListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpWorldPostSimulationListener@@@Z");
//};

//public: hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpWorldPostSimulationListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldPostSimulationListener *>::~hkArrayBase<class hkpWorldPostSimulationListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldPostIntegrateListener *>::hkArrayBase<class hkpWorldPostIntegrateListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QAA@XZ");
//};

//public: class hkpWorldPostIntegrateListener *& hkArrayBase<class hkpWorldPostIntegrateListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QAAAAPAVhkpWorldPostIntegrateListener@@H@Z");
//};

//public: int hkArrayBase<class hkpWorldPostIntegrateListener *>::indexOf(class hkpWorldPostIntegrateListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QBAHABQAVhkpWorldPostIntegrateListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpWorldPostIntegrateListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldPostIntegrateListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpWorldPostIntegrateListener@@@Z");
//};

//public: hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpWorldPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldPostIntegrateListener *>::~hkArrayBase<class hkpWorldPostIntegrateListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldPostCollideListener *>::hkArrayBase<class hkpWorldPostCollideListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QAA@XZ");
//};

//public: class hkpWorldPostCollideListener *& hkArrayBase<class hkpWorldPostCollideListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QAAAAPAVhkpWorldPostCollideListener@@H@Z");
//};

//public: int hkArrayBase<class hkpWorldPostCollideListener *>::indexOf(class hkpWorldPostCollideListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QBAHABQAVhkpWorldPostCollideListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpWorldPostCollideListener *>::_pushBack(class hkMemoryAllocator &, class hkpWorldPostCollideListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpWorldPostCollideListener@@@Z");
//};

//public: hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpWorldPostCollideListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpWorldPostCollideListener *>::~hkArrayBase<class hkpWorldPostCollideListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpIslandPostIntegrateListener *>::hkArrayBase<class hkpIslandPostIntegrateListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QAA@XZ");
//};

//public: class hkpIslandPostIntegrateListener *& hkArrayBase<class hkpIslandPostIntegrateListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QAAAAPAVhkpIslandPostIntegrateListener@@H@Z");
//};

//public: int hkArrayBase<class hkpIslandPostIntegrateListener *>::indexOf(class hkpIslandPostIntegrateListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QBAHABQAVhkpIslandPostIntegrateListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpIslandPostIntegrateListener *>::_pushBack(class hkMemoryAllocator &, class hkpIslandPostIntegrateListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpIslandPostIntegrateListener@@@Z");
//};

//public: hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpIslandPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpIslandPostIntegrateListener *>::~hkArrayBase<class hkpIslandPostIntegrateListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpIslandPostCollideListener *>::hkArrayBase<class hkpIslandPostCollideListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QAA@XZ");
//};

//public: class hkpIslandPostCollideListener *& hkArrayBase<class hkpIslandPostCollideListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QAAAAPAVhkpIslandPostCollideListener@@H@Z");
//};

//public: int hkArrayBase<class hkpIslandPostCollideListener *>::indexOf(class hkpIslandPostCollideListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QBAHABQAVhkpIslandPostCollideListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpIslandPostCollideListener *>::_pushBack(class hkMemoryAllocator &, class hkpIslandPostCollideListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpIslandPostCollideListener@@@Z");
//};

//public: hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpIslandPostCollideListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpIslandPostCollideListener *>::~hkArrayBase<class hkpIslandPostCollideListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpContactListener *>::hkArrayBase<class hkpContactListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpContactListener@@@@QAA@XZ");
//};

//public: class hkpContactListener *& hkArrayBase<class hkpContactListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpContactListener@@@@QAAAAPAVhkpContactListener@@H@Z");
//};

//public: int hkArrayBase<class hkpContactListener *>::indexOf(class hkpContactListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpContactListener@@@@QBAHABQAVhkpContactListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpContactListener *>::_pushBack(class hkMemoryAllocator &, class hkpContactListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpContactListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpContactListener@@@Z");
//};

//public: hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpContactListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpContactListener *>::~hkArrayBase<class hkpContactListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpContactListener@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::hkArrayBase<class hkpContactImpulseLimitBreachedListener *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QAA@XZ");
//};

//public: class hkpContactImpulseLimitBreachedListener *& hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QAAAAPAVhkpContactImpulseLimitBreachedListener@@H@Z");
//};

//public: int hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::indexOf(class hkpContactImpulseLimitBreachedListener *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QBAHABQAVhkpContactImpulseLimitBreachedListener@@HH@Z");
//};

//public: void hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::_pushBack(class hkMemoryAllocator &, class hkpContactImpulseLimitBreachedListener *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpContactImpulseLimitBreachedListener@@@Z");
//};

//public: hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::~hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpContactImpulseLimitBreachedListener@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::~hkArrayBase<class hkpContactImpulseLimitBreachedListener *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QAA@XZ");
//};

//public: int hkArrayBase<class hkpEntity *>::indexOf(class hkpEntity *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpEntity@@@@QBAHABQAVhkpEntity@@HH@Z");
//};

//public: class hkpEntity ** hkArrayBase<class hkpEntity *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpEntity@@@@QAAPAPAVhkpEntity@@XZ");
//};

//public: class hkpRigidBody *const * hkArrayBase<class hkpRigidBody *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpRigidBody@@@@QBAPBQAVhkpRigidBody@@XZ");
//};

//public: void hkArrayBase<class hkpBroadPhaseHandlePair>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@VhkpBroadPhaseHandlePair@@@@QAAXH@Z");
//};

//public: class hkpBroadPhaseHandlePair * hkArrayBase<class hkpBroadPhaseHandlePair>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkpBroadPhaseHandlePair@@@@QAAPAVhkpBroadPhaseHandlePair@@XZ");
//};

//public: struct hkpAgentNnEntry *& hkArrayBase<struct hkpAgentNnEntry *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAAAAPAUhkpAgentNnEntry@@XZ");
//};

//public: int hkArrayBase<struct hkpAgentNnEntry *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpAgentNnEntry *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpAgentNnEntry *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkpAgentNnEntry *>::_pushBack(class hkMemoryAllocator &, struct hkpAgentNnEntry *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAAXAAVhkMemoryAllocator@@ABQAUhkpAgentNnEntry@@@Z");
//};

//public: hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::~hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUhkpAgentNnEntry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpAgentNnEntry *, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAUhkpAgentNnEntry@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpBroadPhaseHandlePair, 128, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@VhkpBroadPhaseHandlePair@@$0IA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: void hkSmallArray<class hkpAction *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkSmallArray@PAVhkpAction@@@@QAAXH@Z");
//};

//public: int hkSmallArray<class hkpAction *>::indexOf(class hkpAction *const &) const
//{
//    mangled_ppc("?indexOf@?$hkSmallArray@PAVhkpAction@@@@QBAHABQAVhkpAction@@@Z");
//};

//public: void hkSmallArray<class hkpAction *>::pushBack(class hkpAction *const &)
//{
//    mangled_ppc("?pushBack@?$hkSmallArray@PAVhkpAction@@@@QAAXABQAVhkpAction@@@Z");
//};

//public: hkArrayBase<class hkpBroadPhaseHandle *>::hkArrayBase<class hkpBroadPhaseHandle *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkpBroadPhaseHandle *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpBroadPhaseHandle *>::pushBackUnchecked(class hkpBroadPhaseHandle *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAAXABQAVhkpBroadPhaseHandle@@@Z");
//};

//public: void hkArrayBase<class hkpBroadPhaseHandle *>::setSizeUnchecked(int)
//{
//    mangled_ppc("?setSizeUnchecked@?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAAXH@Z");
//};

//public: hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>::~hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpBroadPhaseHandle@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpBroadPhaseHandle *>::~hkArrayBase<class hkpBroadPhaseHandle *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAA@XZ");
//};

//public: class hkAabb * hkArrayBase<class hkAabb>::expandByUnchecked(int)
//{
//    mangled_ppc("?expandByUnchecked@?$hkArrayBase@VhkAabb@@@@QAAPAVhkAabb@@H@Z");
//};

//class hkAabb * hkAllocateChunk<class hkAabb>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@VhkAabb@@@@YAPAVhkAabb@@HH@Z");
//};

//public: hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 4, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpEntity@@$03UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpSimulationIsland *>(char const *, class hkArray<class hkpSimulationIsland *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpSimulationIsland@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpPhantom *>(char const *, class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpPhantom@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkWorldOperation::BiggestOperation>(char const *, class hkArray<struct hkWorldOperation::BiggestOperation, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UBiggestOperation@hkWorldOperation@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UBiggestOperation@hkWorldOperation@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkWorldOperation::MergeIslands>(char const *, class hkArray<struct hkWorldOperation::MergeIslands, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UMergeIslands@hkWorldOperation@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UMergeIslands@hkWorldOperation@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkpBodyOperationEntry>(char const *, class hkArray<struct hkpBodyOperationEntry, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UhkpBodyOperationEntry@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UhkpBodyOperationEntry@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpEntityListener *>(char const *, class hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpEntityListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpEntityListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpPhantomListener *>(char const *, class hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpPhantomListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpPhantomListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpConstraintListener *>(char const *, class hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpConstraintListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpConstraintListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpWorldDeletionListener *>(char const *, class hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpWorldDeletionListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpWorldDeletionListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpIslandActivationListener *>(char const *, class hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpIslandActivationListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpIslandActivationListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpWorldPostSimulationListener *>(char const *, class hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpWorldPostSimulationListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpWorldPostSimulationListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpWorldPostIntegrateListener *>(char const *, class hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpWorldPostIntegrateListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpWorldPostIntegrateListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpWorldPostCollideListener *>(char const *, class hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpWorldPostCollideListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpWorldPostCollideListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpIslandPostIntegrateListener *>(char const *, class hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpIslandPostIntegrateListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpIslandPostIntegrateListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpContactListener *>(char const *, class hkArray<class hkpContactListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpContactListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpContactListener@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkpSimulationIsland const *& hkArrayBase<class hkpSimulationIsland const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBVhkpSimulationIsland@@@@QAAAAPBVhkpSimulationIsland@@H@Z");
//};

//public: int hkArrayBase<class hkpSimulationIsland const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBVhkpSimulationIsland@@@@QBAHXZ");
//};

//public: class hkpSimulationIsland const ** hkArrayBase<class hkpSimulationIsland const *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PBVhkpSimulationIsland@@@@QAAPAPBVhkpSimulationIsland@@XZ");
//};

//public: static void hkArrayBase<class hkpSimulationIsland const *>::copy(class hkpSimulationIsland const **, class hkpSimulationIsland const *const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@PBVhkpSimulationIsland@@@@SAXPAPBVhkpSimulationIsland@@PBQBV2@H@Z");
//};

//public: hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>::hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@PBVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>::~hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//struct hkpCollisionQueryJobHeader * hkAllocateChunk<struct hkpCollisionQueryJobHeader>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@UhkpCollisionQueryJobHeader@@@@YAPAUhkpCollisionQueryJobHeader@@HH@Z");
//};

//void hkDeallocateChunk<struct hkpCollisionQueryJobHeader>(struct hkpCollisionQueryJobHeader *, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@UhkpCollisionQueryJobHeader@@@@YAXPAUhkpCollisionQueryJobHeader@@HH@Z");
//};

//class hkpBroadPhaseHandlePair * hkAllocateStack<class hkpBroadPhaseHandlePair>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@VhkpBroadPhaseHandlePair@@@@YAPAVhkpBroadPhaseHandlePair@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpBroadPhaseHandlePair>(class hkpBroadPhaseHandlePair *)
//{
//    mangled_ppc("??$hkDeallocateStack@VhkpBroadPhaseHandlePair@@@@YAXPAVhkpBroadPhaseHandlePair@@@Z");
//};

//class hkpBroadPhaseHandle ** hkAllocateStack<class hkpBroadPhaseHandle *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PAVhkpBroadPhaseHandle@@@@YAPAPAVhkpBroadPhaseHandle@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **)
//{
//    mangled_ppc("??$hkDeallocateStack@PAVhkpBroadPhaseHandle@@@@YAXPAPAVhkpBroadPhaseHandle@@@Z");
//};

//class hkAabb * hkAllocateStack<class hkAabb>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@VhkAabb@@@@YAPAVhkAabb@@HPBD@Z");
//};

//void hkDeallocateStack<class hkAabb>(class hkAabb *)
//{
//    mangled_ppc("??$hkDeallocateStack@VhkAabb@@@@YAXPAVhkAabb@@@Z");
//};

//public: void hkArray<class hkpPhantom *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpActionListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpActionListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpEntityListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpEntityListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpPhantomListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpConstraintListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpConstraintListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpWorldDeletionListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpWorldDeletionListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpIslandActivationListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpIslandActivationListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpWorldPostSimulationListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpWorldPostSimulationListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpWorldPostIntegrateListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpWorldPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpWorldPostCollideListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpWorldPostCollideListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpIslandPostIntegrateListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpIslandPostIntegrateListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpIslandPostCollideListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpIslandPostCollideListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpContactListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpContactListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpContactImpulseLimitBreachedListener *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpContactImpulseLimitBreachedListener@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>(struct hkpAgentNnEntry **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAUhkpAgentNnEntry@@UhkContainerHeapAllocator@@@@QAA@PAPAUhkpAgentNnEntry@@HH@Z");
//};

//public: void hkArray<struct hkpAgentNnEntry *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUhkpAgentNnEntry@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpBroadPhaseHandle@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpSimulationIsland const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBVhkpSimulationIsland@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: class hkpConvexListFilter * hkRefPtr<class hkpConvexListFilter>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkpConvexListFilter@@@@QBAPAVhkpConvexListFilter@@XZ");
//};

//public: class hkWorldMemoryAvailableWatchDog * hkRefPtr<class hkWorldMemoryAvailableWatchDog>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkWorldMemoryAvailableWatchDog@@@@QBAPAVhkWorldMemoryAvailableWatchDog@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpSimulationIsland *>(class hkpSimulationIsland **, int, class hkpSimulationIsland *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpSimulationIsland@@@hkArrayUtil@@SAXPAPAVhkpSimulationIsland@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpPhantom *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpPhantom@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpPhantom *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpPhantom@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpPhantom *>(class hkpPhantom **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpPhantom@@@hkArrayUtil@@SAXPAPAVhkpPhantom@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpPhantom *>(class hkpPhantom **, int, class hkpPhantom *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpPhantom@@@hkArrayUtil@@SAXPAPAVhkpPhantom@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpActionListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpActionListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpActionListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpActionListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpActionListener *>(class hkpActionListener **, int, class hkpActionListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpActionListener@@@hkArrayUtil@@SAXPAPAVhkpActionListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpEntityListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpEntityListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpEntityListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpEntityListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpEntityListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpEntityListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpEntityListener *const * hkArrayBase<class hkpEntityListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpEntityListener@@@@QBAPBQAVhkpEntityListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpEntityListener *>(class hkpEntityListener **, int, class hkpEntityListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpEntityListener@@@hkArrayUtil@@SAXPAPAVhkpEntityListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpPhantomListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpPhantomListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpPhantomListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpPhantomListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpPhantomListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpPhantomListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpPhantomListener *const * hkArrayBase<class hkpPhantomListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpPhantomListener@@@@QBAPBQAVhkpPhantomListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpPhantomListener *>(class hkpPhantomListener **, int, class hkpPhantomListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpPhantomListener@@@hkArrayUtil@@SAXPAPAVhkpPhantomListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpConstraintListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpConstraintListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpConstraintListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpConstraintListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpConstraintListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpConstraintListener *const * hkArrayBase<class hkpConstraintListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpConstraintListener@@@@QBAPBQAVhkpConstraintListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpConstraintListener *>(class hkpConstraintListener **, int, class hkpConstraintListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpConstraintListener@@@hkArrayUtil@@SAXPAPAVhkpConstraintListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpWorldDeletionListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpWorldDeletionListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpWorldDeletionListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpWorldDeletionListener *const * hkArrayBase<class hkpWorldDeletionListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QBAPBQAVhkpWorldDeletionListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpWorldDeletionListener *>(class hkpWorldDeletionListener **, int, class hkpWorldDeletionListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpWorldDeletionListener@@@hkArrayUtil@@SAXPAPAVhkpWorldDeletionListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpIslandActivationListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpIslandActivationListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpIslandActivationListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpIslandActivationListener *const * hkArrayBase<class hkpIslandActivationListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QBAPBQAVhkpIslandActivationListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpIslandActivationListener *>(class hkpIslandActivationListener **, int, class hkpIslandActivationListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpIslandActivationListener@@@hkArrayUtil@@SAXPAPAVhkpIslandActivationListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpWorldPostSimulationListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpWorldPostSimulationListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpWorldPostSimulationListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpWorldPostSimulationListener *const * hkArrayBase<class hkpWorldPostSimulationListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QBAPBQAVhkpWorldPostSimulationListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpWorldPostSimulationListener *>(class hkpWorldPostSimulationListener **, int, class hkpWorldPostSimulationListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpWorldPostSimulationListener@@@hkArrayUtil@@SAXPAPAVhkpWorldPostSimulationListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpWorldPostIntegrateListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpWorldPostIntegrateListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpWorldPostIntegrateListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpWorldPostIntegrateListener *const * hkArrayBase<class hkpWorldPostIntegrateListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QBAPBQAVhkpWorldPostIntegrateListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpWorldPostIntegrateListener *>(class hkpWorldPostIntegrateListener **, int, class hkpWorldPostIntegrateListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpWorldPostIntegrateListener@@@hkArrayUtil@@SAXPAPAVhkpWorldPostIntegrateListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpWorldPostCollideListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpWorldPostCollideListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpWorldPostCollideListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpWorldPostCollideListener *const * hkArrayBase<class hkpWorldPostCollideListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QBAPBQAVhkpWorldPostCollideListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpWorldPostCollideListener *>(class hkpWorldPostCollideListener **, int, class hkpWorldPostCollideListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpWorldPostCollideListener@@@hkArrayUtil@@SAXPAPAVhkpWorldPostCollideListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpIslandPostIntegrateListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpIslandPostIntegrateListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpIslandPostIntegrateListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpIslandPostIntegrateListener *const * hkArrayBase<class hkpIslandPostIntegrateListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QBAPBQAVhkpIslandPostIntegrateListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpIslandPostIntegrateListener *>(class hkpIslandPostIntegrateListener **, int, class hkpIslandPostIntegrateListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpIslandPostIntegrateListener@@@hkArrayUtil@@SAXPAPAVhkpIslandPostIntegrateListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpIslandPostCollideListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpIslandPostCollideListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpIslandPostCollideListener *>(class hkpIslandPostCollideListener **, int, class hkpIslandPostCollideListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpIslandPostCollideListener@@@hkArrayUtil@@SAXPAPAVhkpIslandPostCollideListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpContactListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpContactListener@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpContactListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpContactListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpContactListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpContactListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkpContactListener *const * hkArrayBase<class hkpContactListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpContactListener@@@@QBAPBQAVhkpContactListener@@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpContactListener *>(class hkpContactListener **, int, class hkpContactListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpContactListener@@@hkArrayUtil@@SAXPAPAVhkpContactListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpContactImpulseLimitBreachedListener *>(class hkpContactImpulseLimitBreachedListener **, int, class hkpContactImpulseLimitBreachedListener *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpContactImpulseLimitBreachedListener@@@hkArrayUtil@@SAXPAPAVhkpContactImpulseLimitBreachedListener@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkWorldOperation::BiggestOperation>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QBAHXZ");
//};

//public: struct hkWorldOperation::BiggestOperation const * hkArrayBase<struct hkWorldOperation::BiggestOperation>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UBiggestOperation@hkWorldOperation@@@@QBAPBUBiggestOperation@hkWorldOperation@@XZ");
//};

//public: int hkArrayBase<struct hkWorldOperation::MergeIslands>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QBAHXZ");
//};

//public: struct hkWorldOperation::MergeIslands const * hkArrayBase<struct hkWorldOperation::MergeIslands>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UMergeIslands@hkWorldOperation@@@@QBAPBUMergeIslands@hkWorldOperation@@XZ");
//};

//public: int hkArrayBase<struct hkpBodyOperationEntry>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkpBodyOperationEntry@@@@QBAHXZ");
//};

//public: struct hkpBodyOperationEntry const * hkArrayBase<struct hkpBodyOperationEntry>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpBodyOperationEntry@@@@QBAPBUhkpBodyOperationEntry@@XZ");
//};

//public: hkArrayBase<struct hkpAgentNnEntry *>::hkArrayBase<struct hkpAgentNnEntry *>(struct hkpAgentNnEntry **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAA@PAPAUhkpAgentNnEntry@@HH@Z");
//};

//public: hkArrayBase<struct hkpAgentNnEntry *>::~hkArrayBase<struct hkpAgentNnEntry *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkpAgentNnEntry *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpAgentNnEntry *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUhkpAgentNnEntry@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpAgentNnEntry *>(struct hkpAgentNnEntry **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUhkpAgentNnEntry@@@hkArrayUtil@@SAXPAPAUhkpAgentNnEntry@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkpAgentNnEntry *>(struct hkpAgentNnEntry **, int, struct hkpAgentNnEntry *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUhkpAgentNnEntry@@@hkArrayUtil@@SAXPAPAUhkpAgentNnEntry@@HABQAU1@U?$hkTraitBool@$00@@@Z");
//};

//public: class hkBool hkSmallArray<class hkpAction *>::isLocked(void)
//{
//    mangled_ppc("?isLocked@?$hkSmallArray@PAVhkpAction@@@@QAA?AVhkBool@@XZ");
//};

//public: int hkArrayBase<class hkpBroadPhaseHandle *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpBroadPhaseHandle *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpBroadPhaseHandle@@@hkArrayUtil@@SAXPAPAVhkpBroadPhaseHandle@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **, int, class hkpBroadPhaseHandle *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpBroadPhaseHandle@@@hkArrayUtil@@SAXPAPAVhkpBroadPhaseHandle@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkpBroadPhaseHandle *>(class hkpBroadPhaseHandle **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAVhkpBroadPhaseHandle@@@hkArrayUtil@@SAXPAPAVhkpBroadPhaseHandle@@HU?$hkTraitBool@$00@@@Z");
//};

//public: hkArrayBase<class hkpSimulationIsland const *>::hkArrayBase<class hkpSimulationIsland const *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PBVhkpSimulationIsland@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpSimulationIsland const *>::~hkArrayBase<class hkpSimulationIsland const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBVhkpSimulationIsland@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkpSimulationIsland const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBVhkpSimulationIsland@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkpSimulationIsland const *>::setOwnedData(class hkpSimulationIsland const **, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@PBVhkpSimulationIsland@@@@QAAXPAPBVhkpSimulationIsland@@HH@Z");
//};

//public: static void hkArrayUtil::construct<class hkpSimulationIsland const *>(class hkpSimulationIsland const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PBVhkpSimulationIsland@@@hkArrayUtil@@SAXPAPBVhkpSimulationIsland@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkpPhantom *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpPhantom@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpActionListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpActionListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpEntityListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpEntityListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpPhantomListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpPhantomListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpConstraintListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpConstraintListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpWorldDeletionListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpWorldDeletionListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpIslandActivationListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpIslandActivationListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpWorldPostSimulationListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpWorldPostSimulationListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpWorldPostIntegrateListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpWorldPostIntegrateListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpWorldPostCollideListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpWorldPostCollideListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpIslandPostIntegrateListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpIslandPostIntegrateListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpIslandPostCollideListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpIslandPostCollideListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpContactListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpContactListener@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpContactImpulseLimitBreachedListener *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpContactImpulseLimitBreachedListener@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkpSimulationIsland const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBVhkpSimulationIsland@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpSimulationIsland const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBVhkpSimulationIsland@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkpActionListener *>(class hkpActionListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpActionListener@@@hkArrayUtil@@SAXPAPAVhkpActionListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpEntityListener *>(class hkpEntityListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpEntityListener@@@hkArrayUtil@@SAXPAPAVhkpEntityListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpPhantomListener *>(class hkpPhantomListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpPhantomListener@@@hkArrayUtil@@SAXPAPAVhkpPhantomListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpConstraintListener *>(class hkpConstraintListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpConstraintListener@@@hkArrayUtil@@SAXPAPAVhkpConstraintListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpWorldDeletionListener *>(class hkpWorldDeletionListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpWorldDeletionListener@@@hkArrayUtil@@SAXPAPAVhkpWorldDeletionListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpIslandActivationListener *>(class hkpIslandActivationListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpIslandActivationListener@@@hkArrayUtil@@SAXPAPAVhkpIslandActivationListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpWorldPostSimulationListener *>(class hkpWorldPostSimulationListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpWorldPostSimulationListener@@@hkArrayUtil@@SAXPAPAVhkpWorldPostSimulationListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpWorldPostIntegrateListener *>(class hkpWorldPostIntegrateListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpWorldPostIntegrateListener@@@hkArrayUtil@@SAXPAPAVhkpWorldPostIntegrateListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpWorldPostCollideListener *>(class hkpWorldPostCollideListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpWorldPostCollideListener@@@hkArrayUtil@@SAXPAPAVhkpWorldPostCollideListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpIslandPostIntegrateListener *>(class hkpIslandPostIntegrateListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpIslandPostIntegrateListener@@@hkArrayUtil@@SAXPAPAVhkpIslandPostIntegrateListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpIslandPostCollideListener *>(class hkpIslandPostCollideListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpIslandPostCollideListener@@@hkArrayUtil@@SAXPAPAVhkpIslandPostCollideListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpContactListener *>(class hkpContactListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpContactListener@@@hkArrayUtil@@SAXPAPAVhkpContactListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpContactImpulseLimitBreachedListener *>(class hkpContactImpulseLimitBreachedListener **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpContactImpulseLimitBreachedListener@@@hkArrayUtil@@SAXPAPAVhkpContactImpulseLimitBreachedListener@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpSimulationIsland const *>(class hkpSimulationIsland const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBVhkpSimulationIsland@@@hkArrayUtil@@SAXPAPBVhkpSimulationIsland@@HU?$hkTraitBool@$00@@@Z");
//};

//[thunk]: public: virtual void * hkpPhantomBroadPhaseListener::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpPhantomBroadPhaseListener@@W7AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpBroadPhaseBorderListener::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpBroadPhaseBorderListener@@W7AAPAXI@Z");
//};

