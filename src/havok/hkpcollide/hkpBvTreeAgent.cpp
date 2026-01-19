/* ---------- headers */

#include "havok\hkpcollide\hkpBvTreeAgent.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpBvTreeAgent::`RTTI Complete Object Locator'; // "??_R4hkpBvTreeAgent@@6B@"
// hkpBvTreeAgent::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpBvTreeAgent@@8"
// hkpBvTreeAgent::`RTTI Base Class Array'; // "??_R2hkpBvTreeAgent@@8"
// hkpBvTreeAgent::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpBvTreeAgent@@8"
// hkpCollisionAgent::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpCollisionAgent@@8"
// hkpCollisionAgent::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpCollisionAgent@@8"
// hkpCollisionAgent::`RTTI Base Class Array'; // "??_R2hkpCollisionAgent@@8"
// const hkpSymmetricAgent<class hkpBvTreeAgent>::`RTTI Complete Object Locator'; // "??_R4?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@6B@"
// hkpSymmetricAgent<class hkpBvTreeAgent>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@8"
// hkpSymmetricAgent<class hkpBvTreeAgent>::`RTTI Base Class Array'; // "??_R2?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@8"
// hkpSymmetricAgent<class hkpBvTreeAgent>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@8"
// hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@8"
// hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@8"
// hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::`RTTI Base Class Array'; // "??_R2?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@8"
// const hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::`RTTI Complete Object Locator'; // "??_R4?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@6B@"
// const hkpCollisionAgent::`RTTI Complete Object Locator'; // "??_R4hkpCollisionAgent@@6B@"
// const hkpSymmetricAgentFlipCollector::`RTTI Complete Object Locator'; // "??_R4hkpSymmetricAgentFlipCollector@@6B@"
// hkpSymmetricAgentFlipCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpSymmetricAgentFlipCollector@@8"
// hkpSymmetricAgentFlipCollector::`RTTI Base Class Array'; // "??_R2hkpSymmetricAgentFlipCollector@@8"
// hkpSymmetricAgentFlipCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpSymmetricAgentFlipCollector@@8"
// const hkpSymmetricAgentFlipCastCollector::`RTTI Complete Object Locator'; // "??_R4hkpSymmetricAgentFlipCastCollector@@6B@"
// hkpSymmetricAgentFlipCastCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpSymmetricAgentFlipCastCollector@@8"
// hkpSymmetricAgentFlipCastCollector::`RTTI Base Class Array'; // "??_R2hkpSymmetricAgentFlipCastCollector@@8"
// hkpSymmetricAgentFlipCastCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpSymmetricAgentFlipCastCollector@@8"
// const hkpSymmetricAgentFlipBodyCollector::`RTTI Complete Object Locator'; // "??_R4hkpSymmetricAgentFlipBodyCollector@@6B@"
// hkpSymmetricAgentFlipBodyCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpSymmetricAgentFlipBodyCollector@@8"
// hkpSymmetricAgentFlipBodyCollector::`RTTI Base Class Array'; // "??_R2hkpSymmetricAgentFlipBodyCollector@@8"
// hkpSymmetricAgentFlipBodyCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpSymmetricAgentFlipBodyCollector@@8"
// hkpCdBodyPairCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpCdBodyPairCollector@@8"
// hkpCdBodyPairCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpCdBodyPairCollector@@8"
// hkpCdBodyPairCollector::`RTTI Base Class Array'; // "??_R2hkpCdBodyPairCollector@@8"
// const hkpCdBodyPairCollector::`RTTI Complete Object Locator'; // "??_R4hkpCdBodyPairCollector@@6B@"
// class hkpBvTreeAgent::`RTTI Type Descriptor'; // "??_R0?AVhkpBvTreeAgent@@@8"
// class hkpCollisionAgent::`RTTI Type Descriptor'; // "??_R0?AVhkpCollisionAgent@@@8"
// class hkpSymmetricAgent<class hkpBvTreeAgent>::`RTTI Type Descriptor'; // "??_R0?AV?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@@8"
// class hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::`RTTI Type Descriptor'; // "??_R0?AV?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@@8"
// class hkpSymmetricAgentFlipCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpSymmetricAgentFlipCollector@@@8"
// class hkpSymmetricAgentFlipCastCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpSymmetricAgentFlipCastCollector@@@8"
// class hkpSymmetricAgentFlipBodyCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpSymmetricAgentFlipBodyCollector@@@8"
// class hkpCdBodyPairCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpCdBodyPairCollector@@@8"
// public: static class hkBool hkpBvTreeAgent::m_useFastUpdate; // "?m_useFastUpdate@hkpBvTreeAgent@@2VhkBool@@A"
// protected: static class hkBool hkpBvTreeAgent::m_useAabbCaching; // "?m_useAabbCaching@hkpBvTreeAgent@@1VhkBool@@A"

// public: hkpBvTreeAgent::hkpBvTreeAgent(class hkpContactMgr *);
// public: static class hkBool hkpBvTreeAgent::getUseAabbCaching(void);
// public: static void hkpBvTreeAgent::setUseAabbCaching(class hkBool);
// public: static void hkpBvTreeAgent::registerAgent(class hkpCollisionDispatcher *);
// protected: static class hkpCollisionAgent * hkpBvTreeAgent::createBvTreeShapeAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *);
// protected: static class hkpCollisionAgent * hkpBvTreeAgent::createShapeBvAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *);
// protected: static class hkpCollisionAgent * hkpBvTreeAgent::createBvBvAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *);
// public: virtual void hkpBvTreeAgent::cleanup(class hkpConstraintOwner &);
// public: virtual void hkpBvTreeAgent::invalidateTim(struct hkpCollisionInput const &);
// public: virtual void hkpBvTreeAgent::warpTime(float, float, struct hkpCollisionInput const &);
// protected: static class hkpCollisionAgent * hkpBvTreeAgent::defaultAgentCreate(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *);
// protected: void hkpBvTreeAgent::prepareCollisionPartners(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &);
// public: virtual void hkpBvTreeAgent::updateShapeCollectionFilter(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &);
// public: virtual void hkpBvTreeAgent::processCollision(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &);
// public: virtual void hkpBvTreeAgent::linearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: static void hkpBvTreeAgent::staticLinearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual void hkpBvTreeAgent::getClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &);
// public: static void hkpBvTreeAgent::staticGetClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &);
// public: virtual void hkpBvTreeAgent::getPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &);
// public: static void hkpBvTreeAgent::staticGetPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &);
// protected: virtual void hkpBvTreeAgent::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// merged_83F7ABF0;
// protected: virtual hkpBvTreeAgent::~hkpBvTreeAgent(void);
// public: unsigned int & hkpBvTreeAgent::hkpBvAgentEntryInfo::getKey(void);
// public: hkAgentDispatchUtilHelper::hkAgentDispatchUtilHelper(class hkpCdBody const &);
// protected: void hkpBvTreeAgent::prepareCollisionPartnersProcess(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, class hkpConstraintOwner &);
// void hkSweptTransformUtil::calcTimInfo(class hkMotionState const &, class hkMotionState const &, float, class hkVector4&);
// public: static enum hkResult hkpBvTreeAgent::calcAabbAndQueryTree(class hkpCdBody const &, class hkpCdBody const &, class hkTransform const &, class hkVector4const &, struct hkpProcessCollisionInput const &, class hkAabb *, class hkArray<unsigned int, struct hkContainerHeapAllocator> &);
// protected: static void hkpBvTreeAgent::calcAabbLinearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkAabb &);
// protected: static void hkpBvTreeAgent::staticCalcAabb(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkAabb &);
// public: class hkpCollisionFilter const * hkPadSpu<class hkpCollisionFilter const *>::operator->(void) const;
// public: struct hkpCollisionQualityInfo * hkPadSpu<struct hkpCollisionQualityInfo *>::operator->(void) const;
// public: class hkpConstraintOwner * hkPadSpu<class hkpConstraintOwner *>::val(void) const;
// public: hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>(void);
// public: hkpSymmetricAgent<class hkpBvTreeAgent>::hkpSymmetricAgent<class hkpBvTreeAgent>(class hkpContactMgr *);
// merged_83F7B8D8;
// public: virtual hkpSymmetricAgent<class hkpBvTreeAgent>::~hkpSymmetricAgent<class hkpBvTreeAgent>(void);
// public: virtual hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>(void);
// public: hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>(class hkpContactMgr *);
// merged_83F7B9B8;
// public: hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(void);
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo & hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::operator[](int);
// public: int hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::getSize(void) const;
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo const * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::begin(void) const;
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::begin(void);
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo const * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::end(void) const;
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::end(void);
// public: hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::~hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(void);
// public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::getPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &);
// public: static void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::staticGetPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &);
// public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::getClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &);
// public: static void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::staticGetClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &);
// public: static void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::staticLinearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::processCollision(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &);
// public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::updateShapeCollectionFilter(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &);
// public: virtual void hkpSymmetricAgent<class hkpBvTreeAgent>::linearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: unsigned int * hkArrayBase<unsigned int>::begin(void);
// public: unsigned int * hkArrayBase<unsigned int>::end(void);
// public: static void hkpAgentDispatchUtil<unsigned int, struct hkpBvTreeAgent::hkpBvAgentEntryInfo, class hkAgentDispatchUtilHelper>::update(class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &, class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *, class hkpConstraintOwner &, class hkAgentDispatchUtilHelper &);
// public: void hkpBvTreeAgent::hkpBvAgentEntryInfo::setKey(unsigned int &);
// public: class hkpCdBody const * hkAgentDispatchUtilHelper::getBodyB(class hkpCdBody const &, struct hkpCollisionInput const &, unsigned int);
// public: class hkpShapeContainer const * hkAgentDispatchUtilHelper::getShapeContainerB(void);
// public: static void hkpAgentDispatchUtil<unsigned int, struct hkpBvTreeAgent::hkpBvAgentEntryInfo, class hkAgentDispatchUtilHelper>::fastUpdate(class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &, class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *, class hkpConstraintOwner &, class hkAgentDispatchUtilHelper &);
// void hkAlgorithm::quickSort<unsigned int>(unsigned int *, int);
// public: void hkStatisticsCollector::addArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(char const *, class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> const &);
// public: void hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::setSize(int);
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::expandAt(int, int);
// public: hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(int);
// public: hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::~hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(void);
// public: class hkBool hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::wasReallocated(void) const;
// public: int hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::clear(void);
// public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::removeAtAndCopy(int);
// public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_expandAt(class hkMemoryAllocator &, int, int);
// public: class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> & hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> const &);
// void hkAlgorithm::quickSort<unsigned int, class hkAlgorithm::less<unsigned int> >(unsigned int *, int, class hkAlgorithm::less<unsigned int>);
// struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkAllocateStack<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(int, char const *);
// void hkDeallocateStack<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *);
// public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_reserve(class hkMemoryAllocator &, int);
// protected: class hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo> & hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo> const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSortRecursive<unsigned int, class hkAlgorithm::less<unsigned int> >(unsigned int *, int, int, class hkAlgorithm::less<unsigned int>);
// public: int hkAlgorithm::less<unsigned int>::operator()(unsigned int const &, unsigned int const &);
// public: static void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::copy(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, struct hkpBvTreeAgent::hkpBvAgentEntryInfo const *, int);
// public: static void hkArrayUtil::constructWithArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, int, struct hkpBvTreeAgent::hkpBvAgentEntryInfo const *, struct hkTraitBool<0>);
// public: void hkContactPoint::setFlipped(class hkContactPoint const &);
// public: class hkMotionState const * hkpCdBody::getMotionState(void) const;
// public: hkpCollisionDispatcher::AgentFuncs::AgentFuncs(void);
// public: void (* hkpCollisionDispatcher::getGetPenetrationsFunc(enum hkpShapeType, enum hkpShapeType) const)(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &);
// public: void (* hkpCollisionDispatcher::getLinearCastFunc(enum hkpShapeType, enum hkpShapeType) const)(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: class hkpCollisionAgent * hkpCollisionDispatcher::getNewCollisionAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *) const;
// public: class hkpCollisionAgent * (* hkpCollisionDispatcher::getCollisionAgentCreationFunction(enum hkpShapeType, enum hkpShapeType, enum hkpCollisionDispatcher::IsAgentPredictive) const)(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *);
// public: static void * hkpCollisionAgent::operator new(unsigned int);
// public: static void hkpCollisionAgent::operator delete(void *);
// protected: virtual hkpCollisionAgent::~hkpCollisionAgent(void);
// public: virtual void hkpCollisionAgent::updateShapeCollectionFilter(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &);
// merged_83F7E228;
// protected: hkpCollisionAgent::hkpCollisionAgent(class hkpContactMgr *);
// public: void hkpProcessCollisionData::ToiInfo::flip(void);
// public: class hkVector4& hkContactPoint::getSeparatingNormal(void);
// public: void hkpGskCache::flip(void);
// public: hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector(class hkpCdPointCollector &);
// public: virtual void hkpSymmetricAgentFlipCollector::add_phantom_callback_shape(class hkpCdBody const &);
// merged_83F7E4D8;
// public: static void hkpSymmetricAgentFlipCollector::operator delete(void *);
// public: virtual hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector(void);
// public: hkpSymmetricAgentFlipCastCollector::hkpSymmetricAgentFlipCastCollector(class hkVector4const &, class hkpCdPointCollector &);
// merged_83F7E608;
// public: static void hkpSymmetricAgentFlipCastCollector::operator delete(void *);
// public: virtual hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector(void);
// public: hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector(class hkpCdBodyPairCollector &);
// merged_83F7E720;
// public: static void hkpSymmetricAgentFlipBodyCollector::operator delete(void *);
// public: virtual hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector(void);

//public: hkpBvTreeAgent::hkpBvTreeAgent(class hkpContactMgr *)
//{
//    mangled_ppc("??0hkpBvTreeAgent@@QAA@PAVhkpContactMgr@@@Z");
//};

//public: static class hkBool hkpBvTreeAgent::getUseAabbCaching(void)
//{
//    mangled_ppc("?getUseAabbCaching@hkpBvTreeAgent@@SA?AVhkBool@@XZ");
//};

//public: static void hkpBvTreeAgent::setUseAabbCaching(class hkBool)
//{
//    mangled_ppc("?setUseAabbCaching@hkpBvTreeAgent@@SAXVhkBool@@@Z");
//};

//public: static void hkpBvTreeAgent::registerAgent(class hkpCollisionDispatcher *)
//{
//    mangled_ppc("?registerAgent@hkpBvTreeAgent@@SAXPAVhkpCollisionDispatcher@@@Z");
//};

//protected: static class hkpCollisionAgent * hkpBvTreeAgent::createBvTreeShapeAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *)
//{
//    mangled_ppc("?createBvTreeShapeAgent@hkpBvTreeAgent@@KAPAVhkpCollisionAgent@@ABVhkpCdBody@@0ABUhkpCollisionInput@@PAVhkpContactMgr@@@Z");
//};

//protected: static class hkpCollisionAgent * hkpBvTreeAgent::createShapeBvAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *)
//{
//    mangled_ppc("?createShapeBvAgent@hkpBvTreeAgent@@KAPAVhkpCollisionAgent@@ABVhkpCdBody@@0ABUhkpCollisionInput@@PAVhkpContactMgr@@@Z");
//};

//protected: static class hkpCollisionAgent * hkpBvTreeAgent::createBvBvAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *)
//{
//    mangled_ppc("?createBvBvAgent@hkpBvTreeAgent@@KAPAVhkpCollisionAgent@@ABVhkpCdBody@@0ABUhkpCollisionInput@@PAVhkpContactMgr@@@Z");
//};

//public: virtual void hkpBvTreeAgent::cleanup(class hkpConstraintOwner &)
//{
//    mangled_ppc("?cleanup@hkpBvTreeAgent@@UAAXAAVhkpConstraintOwner@@@Z");
//};

//public: virtual void hkpBvTreeAgent::invalidateTim(struct hkpCollisionInput const &)
//{
//    mangled_ppc("?invalidateTim@hkpBvTreeAgent@@UAAXABUhkpCollisionInput@@@Z");
//};

//public: virtual void hkpBvTreeAgent::warpTime(float, float, struct hkpCollisionInput const &)
//{
//    mangled_ppc("?warpTime@hkpBvTreeAgent@@UAAXMMABUhkpCollisionInput@@@Z");
//};

//protected: static class hkpCollisionAgent * hkpBvTreeAgent::defaultAgentCreate(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *)
//{
//    mangled_ppc("?defaultAgentCreate@hkpBvTreeAgent@@KAPAVhkpCollisionAgent@@ABVhkpCdBody@@0ABUhkpCollisionInput@@PAVhkpContactMgr@@@Z");
//};

//protected: void hkpBvTreeAgent::prepareCollisionPartners(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &)
//{
//    mangled_ppc("?prepareCollisionPartners@hkpBvTreeAgent@@IAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpConstraintOwner@@@Z");
//};

//public: virtual void hkpBvTreeAgent::updateShapeCollectionFilter(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &)
//{
//    mangled_ppc("?updateShapeCollectionFilter@hkpBvTreeAgent@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpConstraintOwner@@@Z");
//};

//public: virtual void hkpBvTreeAgent::processCollision(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &)
//{
//    mangled_ppc("?processCollision@hkpBvTreeAgent@@UAAXABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@@Z");
//};

//public: virtual void hkpBvTreeAgent::linearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?linearCast@hkpBvTreeAgent@@UAAXABVhkpCdBody@@0ABUhkpLinearCastCollisionInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: static void hkpBvTreeAgent::staticLinearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?staticLinearCast@hkpBvTreeAgent@@SAXABVhkpCdBody@@0ABUhkpLinearCastCollisionInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual void hkpBvTreeAgent::getClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &)
//{
//    mangled_ppc("?getClosestPoints@hkpBvTreeAgent@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdPointCollector@@@Z");
//};

//public: static void hkpBvTreeAgent::staticGetClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &)
//{
//    mangled_ppc("?staticGetClosestPoints@hkpBvTreeAgent@@SAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdPointCollector@@@Z");
//};

//public: virtual void hkpBvTreeAgent::getPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &)
//{
//    mangled_ppc("?getPenetrations@hkpBvTreeAgent@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdBodyPairCollector@@@Z");
//};

//public: static void hkpBvTreeAgent::staticGetPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &)
//{
//    mangled_ppc("?staticGetPenetrations@hkpBvTreeAgent@@SAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdBodyPairCollector@@@Z");
//};

//protected: virtual void hkpBvTreeAgent::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpBvTreeAgent@@MBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//merged_83F7ABF0
//{
//    mangled_ppc("merged_83F7ABF0");
//};

//protected: virtual hkpBvTreeAgent::~hkpBvTreeAgent(void)
//{
//    mangled_ppc("??1hkpBvTreeAgent@@MAA@XZ");
//};

//public: unsigned int & hkpBvTreeAgent::hkpBvAgentEntryInfo::getKey(void)
//{
//    mangled_ppc("?getKey@hkpBvAgentEntryInfo@hkpBvTreeAgent@@QAAAAIXZ");
//};

//public: hkAgentDispatchUtilHelper::hkAgentDispatchUtilHelper(class hkpCdBody const &)
//{
//    mangled_ppc("??0hkAgentDispatchUtilHelper@@QAA@ABVhkpCdBody@@@Z");
//};

//protected: void hkpBvTreeAgent::prepareCollisionPartnersProcess(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, class hkpConstraintOwner &)
//{
//    mangled_ppc("?prepareCollisionPartnersProcess@hkpBvTreeAgent@@IAAXABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAVhkpConstraintOwner@@@Z");
//};

//void hkSweptTransformUtil::calcTimInfo(class hkMotionState const &, class hkMotionState const &, float, class hkVector4&)
//{
//    mangled_ppc("?calcTimInfo@hkSweptTransformUtil@@YAXABVhkMotionState@@0MAAVhkVector4@@@Z");
//};

//public: static enum hkResult hkpBvTreeAgent::calcAabbAndQueryTree(class hkpCdBody const &, class hkpCdBody const &, class hkTransform const &, class hkVector4const &, struct hkpProcessCollisionInput const &, class hkAabb *, class hkArray<unsigned int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?calcAabbAndQueryTree@hkpBvTreeAgent@@SA?AW4hkResult@@ABVhkpCdBody@@0ABVhkTransform@@ABVhkVector4@@ABUhkpProcessCollisionInput@@PAVhkAabb@@AAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z");
//};

//protected: static void hkpBvTreeAgent::calcAabbLinearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkAabb &)
//{
//    mangled_ppc("?calcAabbLinearCast@hkpBvTreeAgent@@KAXABVhkpCdBody@@0ABUhkpLinearCastCollisionInput@@AAVhkAabb@@@Z");
//};

//protected: static void hkpBvTreeAgent::staticCalcAabb(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkAabb &)
//{
//    mangled_ppc("?staticCalcAabb@hkpBvTreeAgent@@KAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkAabb@@@Z");
//};

//public: class hkpCollisionFilter const * hkPadSpu<class hkpCollisionFilter const *>::operator->(void) const
//{
//    mangled_ppc("??C?$hkPadSpu@PBVhkpCollisionFilter@@@@QBAPBVhkpCollisionFilter@@XZ");
//};

//public: struct hkpCollisionQualityInfo * hkPadSpu<struct hkpCollisionQualityInfo *>::operator->(void) const
//{
//    mangled_ppc("??C?$hkPadSpu@PAUhkpCollisionQualityInfo@@@@QBAPAUhkpCollisionQualityInfo@@XZ");
//};

//public: class hkpConstraintOwner * hkPadSpu<class hkpConstraintOwner *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpConstraintOwner@@@@QBAPAVhkpConstraintOwner@@XZ");
//};

//public: hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkpSymmetricAgent<class hkpBvTreeAgent>::hkpSymmetricAgent<class hkpBvTreeAgent>(class hkpContactMgr *)
//{
//    mangled_ppc("??0?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@QAA@PAVhkpContactMgr@@@Z");
//};

//merged_83F7B8D8
//{
//    mangled_ppc("merged_83F7B8D8");
//};

//public: virtual hkpSymmetricAgent<class hkpBvTreeAgent>::~hkpSymmetricAgent<class hkpBvTreeAgent>(void)
//{
//    mangled_ppc("??1?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@UAA@XZ");
//};

//public: virtual hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>(void)
//{
//    mangled_ppc("??1?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@UAA@XZ");
//};

//public: hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>(class hkpContactMgr *)
//{
//    mangled_ppc("??0?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@QAA@PAVhkpContactMgr@@@Z");
//};

//merged_83F7B9B8
//{
//    mangled_ppc("merged_83F7B9B8");
//};

//public: hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAA@XZ");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo & hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAAAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@H@Z");
//};

//public: int hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QBAHXZ");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo const * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QBAPBUhkpBvAgentEntryInfo@hkpBvTreeAgent@@XZ");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@XZ");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo const * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::end(void) const
//{
//    mangled_ppc("?end@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QBAPBUhkpBvAgentEntryInfo@hkpBvTreeAgent@@XZ");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::end(void)
//{
//    mangled_ppc("?end@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@XZ");
//};

//public: hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::~hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAA@XZ");
//};

//public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::getPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &)
//{
//    mangled_ppc("?getPenetrations@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdBodyPairCollector@@@Z");
//};

//public: static void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::staticGetPenetrations(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &)
//{
//    mangled_ppc("?staticGetPenetrations@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@SAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdBodyPairCollector@@@Z");
//};

//public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::getClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &)
//{
//    mangled_ppc("?getClosestPoints@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdPointCollector@@@Z");
//};

//public: static void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::staticGetClosestPoints(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdPointCollector &)
//{
//    mangled_ppc("?staticGetClosestPoints@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@SAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdPointCollector@@@Z");
//};

//public: static void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::staticLinearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?staticLinearCast@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@SAXABVhkpCdBody@@0ABUhkpLinearCastCollisionInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::processCollision(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &)
//{
//    mangled_ppc("?processCollision@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@UAAXABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@@Z");
//};

//public: virtual void hkpSymmetricAgentLinearCast<class hkpBvTreeAgent>::updateShapeCollectionFilter(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &)
//{
//    mangled_ppc("?updateShapeCollectionFilter@?$hkpSymmetricAgentLinearCast@VhkpBvTreeAgent@@@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpConstraintOwner@@@Z");
//};

//public: virtual void hkpSymmetricAgent<class hkpBvTreeAgent>::linearCast(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?linearCast@?$hkpSymmetricAgent@VhkpBvTreeAgent@@@@UAAXABVhkpCdBody@@0ABUhkpLinearCastCollisionInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: unsigned int * hkArrayBase<unsigned int>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@I@@QAAPAIXZ");
//};

//public: unsigned int * hkArrayBase<unsigned int>::end(void)
//{
//    mangled_ppc("?end@?$hkArrayBase@I@@QAAPAIXZ");
//};

//public: static void hkpAgentDispatchUtil<unsigned int, struct hkpBvTreeAgent::hkpBvAgentEntryInfo, class hkAgentDispatchUtilHelper>::update(class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &, class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *, class hkpConstraintOwner &, class hkAgentDispatchUtilHelper &)
//{
//    mangled_ppc("?update@?$hkpAgentDispatchUtil@IUhkpBvAgentEntryInfo@hkpBvTreeAgent@@VhkAgentDispatchUtilHelper@@@@SAXAAV?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@AAV?$hkArray@IUhkContainerHeapAllocator@@@@ABVhkpCdBody@@2ABUhkpCollisionInput@@PAVhkpContactMgr@@AAVhkpConstraintOwner@@AAVhkAgentDispatchUtilHelper@@@Z");
//};

//public: void hkpBvTreeAgent::hkpBvAgentEntryInfo::setKey(unsigned int &)
//{
//    mangled_ppc("?setKey@hkpBvAgentEntryInfo@hkpBvTreeAgent@@QAAXAAI@Z");
//};

//public: class hkpCdBody const * hkAgentDispatchUtilHelper::getBodyB(class hkpCdBody const &, struct hkpCollisionInput const &, unsigned int)
//{
//    mangled_ppc("?getBodyB@hkAgentDispatchUtilHelper@@QAAPBVhkpCdBody@@ABV2@ABUhkpCollisionInput@@I@Z");
//};

//public: class hkpShapeContainer const * hkAgentDispatchUtilHelper::getShapeContainerB(void)
//{
//    mangled_ppc("?getShapeContainerB@hkAgentDispatchUtilHelper@@QAAPBVhkpShapeContainer@@XZ");
//};

//public: static void hkpAgentDispatchUtil<unsigned int, struct hkpBvTreeAgent::hkpBvAgentEntryInfo, class hkAgentDispatchUtilHelper>::fastUpdate(class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &, class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *, class hkpConstraintOwner &, class hkAgentDispatchUtilHelper &)
//{
//    mangled_ppc("?fastUpdate@?$hkpAgentDispatchUtil@IUhkpBvAgentEntryInfo@hkpBvTreeAgent@@VhkAgentDispatchUtilHelper@@@@SAXAAV?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@AAV?$hkArray@IUhkContainerHeapAllocator@@@@ABVhkpCdBody@@2ABUhkpCollisionInput@@PAVhkpContactMgr@@AAVhkpConstraintOwner@@AAVhkAgentDispatchUtilHelper@@@Z");
//};

//void hkAlgorithm::quickSort<unsigned int>(unsigned int *, int)
//{
//    mangled_ppc("??$quickSort@I@hkAlgorithm@@YAXPAIH@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(char const *, class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::expandAt(int, int)
//{
//    mangled_ppc("?expandAt@?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@QAAPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@HH@Z");
//};

//public: hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::~hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QBA?AVhkBool@@XZ");
//};

//public: int hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_expandAt(class hkMemoryAllocator &, int, int)
//{
//    mangled_ppc("?_expandAt@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@AAVhkMemoryAllocator@@HH@Z");
//};

//public: class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> & hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//void hkAlgorithm::quickSort<unsigned int, class hkAlgorithm::less<unsigned int> >(unsigned int *, int, class hkAlgorithm::less<unsigned int>)
//{
//    mangled_ppc("??$quickSort@IV?$less@I@hkAlgorithm@@@hkAlgorithm@@YAXPAIHV?$less@I@0@@Z");
//};

//struct hkpBvTreeAgent::hkpBvAgentEntryInfo * hkAllocateStack<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@YAPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *)
//{
//    mangled_ppc("??$hkDeallocateStack@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@YAXPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@@Z");
//};

//public: void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//protected: class hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo> & hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@hkArrayUtil@@SAXPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@hkArrayUtil@@SAXPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<unsigned int, class hkAlgorithm::less<unsigned int> >(unsigned int *, int, int, class hkAlgorithm::less<unsigned int>)
//{
//    mangled_ppc("??$quickSortRecursive@IV?$less@I@hkAlgorithm@@@hkAlgorithm@@YAXPAIHHV?$less@I@0@@Z");
//};

//public: int hkAlgorithm::less<unsigned int>::operator()(unsigned int const &, unsigned int const &)
//{
//    mangled_ppc("??R?$less@I@hkAlgorithm@@QAAHABI0@Z");
//};

//public: static void hkArrayBase<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>::copy(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, struct hkpBvTreeAgent::hkpBvAgentEntryInfo const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@@SAXPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@PBU23@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkpBvTreeAgent::hkpBvAgentEntryInfo>(struct hkpBvTreeAgent::hkpBvAgentEntryInfo *, int, struct hkpBvTreeAgent::hkpBvAgentEntryInfo const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UhkpBvAgentEntryInfo@hkpBvTreeAgent@@@hkArrayUtil@@SAXPAUhkpBvAgentEntryInfo@hkpBvTreeAgent@@HPBU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkContactPoint::setFlipped(class hkContactPoint const &)
//{
//    mangled_ppc("?setFlipped@hkContactPoint@@QAAXABV1@@Z");
//};

//public: class hkMotionState const * hkpCdBody::getMotionState(void) const
//{
//    mangled_ppc("?getMotionState@hkpCdBody@@QBAPBVhkMotionState@@XZ");
//};

//public: hkpCollisionDispatcher::AgentFuncs::AgentFuncs(void)
//{
//    mangled_ppc("??0AgentFuncs@hkpCollisionDispatcher@@QAA@XZ");
//};

//public: void (* hkpCollisionDispatcher::getGetPenetrationsFunc(enum hkpShapeType, enum hkpShapeType) const)(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpCdBodyPairCollector &)
//{
//    mangled_ppc("?getGetPenetrationsFunc@hkpCollisionDispatcher@@QBAP6AXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpCdBodyPairCollector@@@ZW4hkpShapeType@@3@Z");
//};

//public: void (* hkpCollisionDispatcher::getLinearCastFunc(enum hkpShapeType, enum hkpShapeType) const)(class hkpCdBody const &, class hkpCdBody const &, struct hkpLinearCastCollisionInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?getLinearCastFunc@hkpCollisionDispatcher@@QBAP6AXABVhkpCdBody@@0ABUhkpLinearCastCollisionInput@@AAVhkpCdPointCollector@@PAV4@@ZW4hkpShapeType@@4@Z");
//};

//public: class hkpCollisionAgent * hkpCollisionDispatcher::getNewCollisionAgent(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *) const
//{
//    mangled_ppc("?getNewCollisionAgent@hkpCollisionDispatcher@@QBAPAVhkpCollisionAgent@@ABVhkpCdBody@@0ABUhkpCollisionInput@@PAVhkpContactMgr@@@Z");
//};

//public: class hkpCollisionAgent * (* hkpCollisionDispatcher::getCollisionAgentCreationFunction(enum hkpShapeType, enum hkpShapeType, enum hkpCollisionDispatcher::IsAgentPredictive) const)(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *)
//{
//    mangled_ppc("?getCollisionAgentCreationFunction@hkpCollisionDispatcher@@QBAP6APAVhkpCollisionAgent@@ABVhkpCdBody@@0ABUhkpCollisionInput@@PAVhkpContactMgr@@@ZW4hkpShapeType@@3W4IsAgentPredictive@1@@Z");
//};

//public: static void * hkpCollisionAgent::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpCollisionAgent@@SAPAXI@Z");
//};

//public: static void hkpCollisionAgent::operator delete(void *)
//{
//    mangled_ppc("??3hkpCollisionAgent@@SAXPAX@Z");
//};

//protected: virtual hkpCollisionAgent::~hkpCollisionAgent(void)
//{
//    mangled_ppc("??1hkpCollisionAgent@@MAA@XZ");
//};

//public: virtual void hkpCollisionAgent::updateShapeCollectionFilter(class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpConstraintOwner &)
//{
//    mangled_ppc("?updateShapeCollectionFilter@hkpCollisionAgent@@UAAXABVhkpCdBody@@0ABUhkpCollisionInput@@AAVhkpConstraintOwner@@@Z");
//};

//merged_83F7E228
//{
//    mangled_ppc("merged_83F7E228");
//};

//protected: hkpCollisionAgent::hkpCollisionAgent(class hkpContactMgr *)
//{
//    mangled_ppc("??0hkpCollisionAgent@@IAA@PAVhkpContactMgr@@@Z");
//};

//public: void hkpProcessCollisionData::ToiInfo::flip(void)
//{
//    mangled_ppc("?flip@ToiInfo@hkpProcessCollisionData@@QAAXXZ");
//};

//public: class hkVector4& hkContactPoint::getSeparatingNormal(void)
//{
//    mangled_ppc("?getSeparatingNormal@hkContactPoint@@QAAAAVhkVector4@@XZ");
//};

//public: void hkpGskCache::flip(void)
//{
//    mangled_ppc("?flip@hkpGskCache@@QAAXXZ");
//};

//public: hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector(class hkpCdPointCollector &)
//{
//    mangled_ppc("??0hkpSymmetricAgentFlipCollector@@QAA@AAVhkpCdPointCollector@@@Z");
//};

//public: virtual void hkpSymmetricAgentFlipCollector::add_phantom_callback_shape(class hkpCdBody const &)
//{
//    mangled_ppc("?add_phantom_callback_shape@hkpSymmetricAgentFlipCollector@@UAAXABVhkpCdBody@@@Z");
//};

//merged_83F7E4D8
//{
//    mangled_ppc("merged_83F7E4D8");
//};

//public: static void hkpSymmetricAgentFlipCollector::operator delete(void *)
//{
//    mangled_ppc("??3hkpSymmetricAgentFlipCollector@@SAXPAX@Z");
//};

//public: virtual hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector(void)
//{
//    mangled_ppc("??1hkpSymmetricAgentFlipCollector@@UAA@XZ");
//};

//public: hkpSymmetricAgentFlipCastCollector::hkpSymmetricAgentFlipCastCollector(class hkVector4const &, class hkpCdPointCollector &)
//{
//    mangled_ppc("??0hkpSymmetricAgentFlipCastCollector@@QAA@ABVhkVector4@@AAVhkpCdPointCollector@@@Z");
//};

//merged_83F7E608
//{
//    mangled_ppc("merged_83F7E608");
//};

//public: static void hkpSymmetricAgentFlipCastCollector::operator delete(void *)
//{
//    mangled_ppc("??3hkpSymmetricAgentFlipCastCollector@@SAXPAX@Z");
//};

//public: virtual hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector(void)
//{
//    mangled_ppc("??1hkpSymmetricAgentFlipCastCollector@@UAA@XZ");
//};

//public: hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector(class hkpCdBodyPairCollector &)
//{
//    mangled_ppc("??0hkpSymmetricAgentFlipBodyCollector@@QAA@AAVhkpCdBodyPairCollector@@@Z");
//};

//merged_83F7E720
//{
//    mangled_ppc("merged_83F7E720");
//};

//public: static void hkpSymmetricAgentFlipBodyCollector::operator delete(void *)
//{
//    mangled_ppc("??3hkpSymmetricAgentFlipBodyCollector@@SAXPAX@Z");
//};

//public: virtual hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector(void)
//{
//    mangled_ppc("??1hkpSymmetricAgentFlipBodyCollector@@UAA@XZ");
//};

