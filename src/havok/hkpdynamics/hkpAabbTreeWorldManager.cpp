/* ---------- headers */

#include "havok\hkpdynamics\hkpAabbTreeWorldManager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned short const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::s_invalidIdx; // "?s_invalidIdx@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@G@@2GB"
// public: static unsigned int const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::s_invalidIdx; // "?s_invalidIdx@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@2IB"
// public: static unsigned int const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::s_invalidIdx; // "?s_invalidIdx@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@I@@2IB"
// public: static unsigned short const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Node::s_leafMask; // "?s_leafMask@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@G@@2GB"
// public: static unsigned short const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Node::s_leafFlag; // "?s_leafFlag@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@G@@2GB"
// public: static unsigned int const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::s_leafMask; // "?s_leafMask@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@2IB"
// public: static unsigned int const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::s_leafFlag; // "?s_leafFlag@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@2IB"
// public: static unsigned int const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Node::s_leafMask; // "?s_leafMask@Node@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@I@@2IB"
// public: static unsigned int const hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Node::s_leafFlag; // "?s_leafFlag@Node@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@I@@2IB"
// const hkpAabbTreeWorldManager::`vftable'{for `hkpWorldPostSimulationListener'}; // "??_7hkpAabbTreeWorldManager@@6BhkpWorldPostSimulationListener@@@"
// const hkpAabbTreeWorldManager::`vftable'{for `hkpIslandActivationListener'}; // "??_7hkpAabbTreeWorldManager@@6BhkpIslandActivationListener@@@"
// const hkpAabbTreeWorldManager::`vftable'{for `hkpPhantomListener'}; // "??_7hkpAabbTreeWorldManager@@6BhkpPhantomListener@@@"
// const hkpAabbTreeWorldManager::`vftable'{for `hkpEntityListener'}; // "??_7hkpAabbTreeWorldManager@@6BhkpEntityListener@@@"
// const hkpAabbTreeWorldManager::`vftable'{for `hkpTreeWorldManager'}; // "??_7hkpAabbTreeWorldManager@@6BhkpTreeWorldManager@@@"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vftable'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector'}; // "??_7?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@@"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vftable'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector'}; // "??_7?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@@"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vftable'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector'}; // "??_7?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@@"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vftable'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector'}; // "??_7?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@@"
// const hkpAabbTreeWorldManager::`RTTI Complete Object Locator'{for `hkpTreeWorldManager'}; // "??_R4hkpAabbTreeWorldManager@@6BhkpTreeWorldManager@@@"
// hkpAabbTreeWorldManager::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpAabbTreeWorldManager@@8"
// hkpAabbTreeWorldManager::`RTTI Base Class Array'; // "??_R2hkpAabbTreeWorldManager@@8"
// hkpAabbTreeWorldManager::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpAabbTreeWorldManager@@8"
// hkpTreeWorldManager::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpTreeWorldManager@@8"
// hkpTreeWorldManager::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpTreeWorldManager@@8"
// hkpTreeWorldManager::`RTTI Base Class Array'; // "??_R2hkpTreeWorldManager@@8"
// hkpEntityListener::`RTTI Base Class Descriptor at (20, -1, 0, 64)'; // "??_R1BE@?0A@EA@hkpEntityListener@@8"
// hkpPhantomListener::`RTTI Base Class Descriptor at (24, -1, 0, 64)'; // "??_R1BI@?0A@EA@hkpPhantomListener@@8"
// hkpIslandActivationListener::`RTTI Base Class Descriptor at (28, -1, 0, 64)'; // "??_R1BM@?0A@EA@hkpIslandActivationListener@@8"
// hkpIslandActivationListener::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpIslandActivationListener@@8"
// hkpIslandActivationListener::`RTTI Base Class Array'; // "??_R2hkpIslandActivationListener@@8"
// hkpIslandActivationListener::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpIslandActivationListener@@8"
// hkpWorldPostSimulationListener::`RTTI Base Class Descriptor at (32, -1, 0, 64)'; // "??_R1CA@?0A@EA@hkpWorldPostSimulationListener@@8"
// const hkpAabbTreeWorldManager::`RTTI Complete Object Locator'{for `hkpEntityListener'}; // "??_R4hkpAabbTreeWorldManager@@6BhkpEntityListener@@@"
// const hkpAabbTreeWorldManager::`RTTI Complete Object Locator'{for `hkpPhantomListener'}; // "??_R4hkpAabbTreeWorldManager@@6BhkpPhantomListener@@@"
// const hkpAabbTreeWorldManager::`RTTI Complete Object Locator'{for `hkpIslandActivationListener'}; // "??_R4hkpAabbTreeWorldManager@@6BhkpIslandActivationListener@@@"
// const hkpAabbTreeWorldManager::`RTTI Complete Object Locator'{for `hkpWorldPostSimulationListener'}; // "??_R4hkpAabbTreeWorldManager@@6BhkpWorldPostSimulationListener@@@"
// const hkpTreeWorldManager::`RTTI Complete Object Locator'; // "??_R4hkpTreeWorldManager@@6B@"
// const hkpIslandActivationListener::`RTTI Complete Object Locator'; // "??_R4hkpIslandActivationListener@@6B@"
// const hkpKdTreeCollidableRaycaster::`RTTI Complete Object Locator'; // "??_R4hkpKdTreeCollidableRaycaster@@6B@"
// hkpKdTreeCollidableRaycaster::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpKdTreeCollidableRaycaster@@8"
// hkpKdTreeCollidableRaycaster::`RTTI Base Class Array'; // "??_R2hkpKdTreeCollidableRaycaster@@8"
// hkpKdTreeCollidableRaycaster::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpKdTreeCollidableRaycaster@@8"
// hkKdTreeCastCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkKdTreeCastCollector@@8"
// hkKdTreeCastCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkKdTreeCastCollector@@8"
// hkKdTreeCastCollector::`RTTI Base Class Array'; // "??_R2hkKdTreeCastCollector@@8"
// const hkKdTreeCastCollector::`RTTI Complete Object Locator'; // "??_R4hkKdTreeCastCollector@@6B@"
// const hkpKdTreeWorldLinearCaster::`RTTI Complete Object Locator'; // "??_R4hkpKdTreeWorldLinearCaster@@6B@"
// hkpKdTreeWorldLinearCaster::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpKdTreeWorldLinearCaster@@8"
// hkpKdTreeWorldLinearCaster::`RTTI Base Class Array'; // "??_R2hkpKdTreeWorldLinearCaster@@8"
// hkpKdTreeWorldLinearCaster::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpKdTreeWorldLinearCaster@@8"
// const hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::`RTTI Complete Object Locator'; // "??_R4Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@6B@"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::`RTTI Class Hierarchy Descriptor'; // "??_R3Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::`RTTI Base Class Array'; // "??_R2Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@8"
// const hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::`RTTI Complete Object Locator'; // "??_R4Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@6B@"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::`RTTI Class Hierarchy Descriptor'; // "??_R3Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::`RTTI Base Class Array'; // "??_R2Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@8"
// const hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::`RTTI Complete Object Locator'; // "??_R4Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@6B@"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::`RTTI Class Hierarchy Descriptor'; // "??_R3Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::`RTTI Base Class Array'; // "??_R2Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@8"
// const hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::`RTTI Complete Object Locator'; // "??_R4Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@6B@"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::`RTTI Class Hierarchy Descriptor'; // "??_R3Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::`RTTI Base Class Array'; // "??_R2Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@8"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Complete Object Locator'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector'}; // "??_R4?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@@"
// hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@8"
// hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Base Class Array'; // "??_R2?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@8"
// hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::`RTTI Base Class Descriptor at (4, -1, 0, 64)'; // "??_R13?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@8"
// hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::`RTTI Base Class Descriptor at (12, -1, 0, 64)'; // "??_R1M@?0A@EA@Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@8"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Complete Object Locator'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector'}; // "??_R4?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@@"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Complete Object Locator'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector'}; // "??_R4?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@@"
// const hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Complete Object Locator'{for `hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector'}; // "??_R4?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@6BCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@@"
// class hkpAabbTreeWorldManager::`RTTI Type Descriptor'; // "??_R0?AVhkpAabbTreeWorldManager@@@8"
// class hkpTreeWorldManager::`RTTI Type Descriptor'; // "??_R0?AVhkpTreeWorldManager@@@8"
// class hkpIslandActivationListener::`RTTI Type Descriptor'; // "??_R0?AVhkpIslandActivationListener@@@8"
// class hkpKdTreeCollidableRaycaster::`RTTI Type Descriptor'; // "??_R0?AVhkpKdTreeCollidableRaycaster@@@8"
// class hkKdTreeCastCollector::`RTTI Type Descriptor'; // "??_R0?AVhkKdTreeCastCollector@@@8"
// class hkpKdTreeWorldLinearCaster::`RTTI Type Descriptor'; // "??_R0?AVhkpKdTreeWorldLinearCaster@@@8"
// struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::`RTTI Type Descriptor'; // "??_R0?AUCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@@8"
// struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::`RTTI Type Descriptor'; // "??_R0?AUCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@@8"
// struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::`RTTI Type Descriptor'; // "??_R0?AUCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@@8"
// struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::`RTTI Type Descriptor'; // "??_R0?AUCollector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@@8"
// class hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`RTTI Type Descriptor'; // "??_R0?AV?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@@8"

// public: hkpAabbTreeWorldManager::hkpAabbTreeWorldManager(class hkpWorld *, enum hkpWorldCinfo::TreeUpdateType, float);
// public: virtual hkpAabbTreeWorldManager::~hkpAabbTreeWorldManager(void);
// public: void hkpAabbTreeWorldManager::reset(void);
// public: virtual void hkpAabbTreeWorldManager::entityAddedCallback(class hkpEntity *);
// public: virtual void hkpAabbTreeWorldManager::entityRemovedCallback(class hkpEntity *);
// public: virtual void hkpAabbTreeWorldManager::entitySetMotionTypeCallback(class hkpEntity *);
// public: virtual void hkpAabbTreeWorldManager::entityDeletedCallback(class hkpEntity *);
// public: virtual void hkpAabbTreeWorldManager::phantomAddedCallback(class hkpPhantom *);
// public: virtual void hkpAabbTreeWorldManager::phantomRemovedCallback(class hkpPhantom *);
// public: virtual void hkpAabbTreeWorldManager::islandDeactivatedCallback(class hkpSimulationIsland *);
// public: virtual void hkpAabbTreeWorldManager::islandActivatedCallback(class hkpSimulationIsland *);
// public: virtual void hkpAabbTreeWorldManager::postSimulationCallback(class hkpWorld *);
// public: virtual void hkpAabbTreeWorldManager::inactiveEntityMovedCallback(class hkpEntity *);
// public: virtual void hkpAabbTreeWorldManager::updateFromWorld(class hkJobQueue *, class hkJobThreadPool *);
// protected: void hkpAabbTreeWorldManager::removeObjectFromTree(class hkpWorldObject const *);
// public: virtual void hkpAabbTreeWorldManager::castRay(struct hkpWorldRayCastInput const &, class hkpCollisionFilter const *, struct hkpWorldRayCastOutput &) const;
// public: virtual void hkpAabbTreeWorldManager::castRay(struct hkpWorldRayCastInput const &, class hkpCollisionFilter const *, class hkpRayHitCollector &) const;
// public: virtual void hkpAabbTreeWorldManager::linearCast(class hkpCollidable const *, struct hkpLinearCastInput const &, class hkpCollidableCollidableFilter const *, struct hkpCollisionInput const &, struct hkpCollisionAgentConfig *, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual int hkpAabbTreeWorldManager::calcWorkingBufferSize(int);
// public: virtual void hkpAabbTreeWorldManager::setWorkingBuffer(void *);
// protected: void hkpAabbTreeWorldManager::buildActiveTree(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkJobQueue *, class hkJobThreadPool *);
// protected: void hkpAabbTreeWorldManager::buildInactiveTree(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkJobQueue *, class hkJobThreadPool *);
// protected: void hkpAabbTreeWorldManager::buildKdTree(class hkKdTree *&, class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld *, class hkJobQueue *, class hkJobThreadPool *);
// public: static void hkpAabbTreeWorldManager::gatherCollidablesFromWorld(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld const *);
// public: static void hkpAabbTreeWorldManager::gatherActiveCollidablesFromWorld(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld const *);
// public: static void hkpAabbTreeWorldManager::gatherInactiveCollidablesFromWorld(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld const *);
// protected: void hkpAabbTreeWorldManager::setTreeIsClean(void);
// protected: void hkpAabbTreeWorldManager::clearActiveTree(void);
// public: void hkpAabbTreeWorldManager::checkConsistency(void);
// protected: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node * hkpAabbTreeWorldManager::getNode(class hkpCollidable const *);
// protected: unsigned short hkpAabbTreeWorldManager::getNodeIdx(class hkpCollidable const *) const;
// protected: static void hkpAabbTreeWorldManager::setNode(class hkpCollidable const *, unsigned short);
// protected: void hkpAabbTreeWorldManager::incrementalBuild(class hkJobQueue *, class hkJobThreadPool *);
// protected: void hkpAabbTreeWorldManager::fullBuild(class hkJobQueue *, class hkJobThreadPool *);
// protected: bool hkpAabbTreeWorldManager::scanActiveListAndGetInactivated(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &);
// protected: void hkpAabbTreeWorldManager::pushBackToActiveList(class hkpCollidable const *);
// protected: void hkpAabbTreeWorldManager::queueActivated(class hkpCollidable const *);
// protected: void hkpAabbTreeWorldManager::queueInactivated(class hkpCollidable const *);
// public: hkpTreeWorldManager::hkpTreeWorldManager(void);
// public: virtual int hkpTreeWorldManager::calcWorkingBufferSize(int);
// public: virtual void hkpTreeWorldManager::setWorkingBuffer(void *);
// merged_84693790;
// public: virtual hkpTreeWorldManager::~hkpTreeWorldManager(void);
// public: static void * hkSemaphore::operator new(unsigned int);
// public: virtual bool hkpAabbTreeWorldManager::isUpToDate(void) const;
// public: virtual void hkpAabbTreeWorldManager::setUpToDate(bool);
// merged_846938D0;
// public: static void hkpAabbTreeWorldManager::operator delete(void *);
// public: hkpIslandActivationListener::hkpIslandActivationListener(void);
// merged_84693990;
// public: virtual hkpIslandActivationListener::~hkpIslandActivationListener(void);
// public: hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::~hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>(void);
// public: void * hkKdTree::`scalar deleting destructor'(unsigned int);
// public: static void hkKdTree::operator delete(void *);
// public: void * hkSemaphore::`scalar deleting destructor'(unsigned int);
// public: static void hkSemaphore::operator delete(void *);
// public: hkpKdTreeCollidableRaycaster::hkpKdTreeCollidableRaycaster(void);
// merged_84693BD0;
// public: static void hkpKdTreeCollidableRaycaster::operator delete(void *);
// public: hkKdTreeCastCollector::hkKdTreeCastCollector(void);
// merged_84693C90;
// public: virtual hkKdTreeCastCollector::~hkKdTreeCastCollector(void);
// public: virtual hkpKdTreeCollidableRaycaster::~hkpKdTreeCollidableRaycaster(void);
// public: virtual hkpAabbTreeCollidableRaycaster::~hkpAabbTreeCollidableRaycaster(void);
// public: hkpKdTreeWorldLinearCaster::hkpKdTreeWorldLinearCaster(void);
// public: virtual hkpKdTreeWorldLinearCaster::~hkpKdTreeWorldLinearCaster(void);
// merged_84693DF8;
// public: static void * hkKdTree::operator new(unsigned int);
// public: class hkKdTreeNode * hkKdTree::getRoot(void);
// public: int hkKdTree::getNumPrimitives(void) const;
// public: int hkKdTree::getNumReservedEmptyNodes(void) const;
// public: int hkKdTree::getTotalNumNodes(void) const;
// public: struct hkKdTreeProjectedEntry * hkKdTree::getProjectedEntries(void);
// public: hkpKdTreeBuildCoordinatorJob::hkpKdTreeBuildCoordinatorJob(struct hkpCollisionQueryJobHeader *, class hkpWorld const *);
// public: hkpKdTreeBuildDistributedJob::hkpKdTreeBuildDistributedJob(struct hkpCollisionQueryJobHeader *);
// public: virtual hkpCollidableMediator::~hkpCollidableMediator(void);
// public: virtual hkKdTreeBuildInput::Mediator::~Mediator(void);
// public: class hkpRigidBody const * hkpWorld::getFixedRigidBody(void) const;
// protected: bool hkpAabbTreeWorldManager::objIsActive(int &, class hkpCollidable const *) const;
// protected: void hkpAabbTreeWorldManager::objActivated(int &) const;
// protected: void hkpAabbTreeWorldManager::objInactivated(int &) const;
// public: static void * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::operator new(unsigned int);
// public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::getRootNode(void) const;
// public: unsigned short hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::getRootNodeIdx(void) const;
// public: hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::pushBack(class hkpCollidable const *const &);
// public: hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::insert(class hkpCollidable const *, int);
// public: enum hkResult hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::get(class hkpCollidable const *, int *) const;
// public: class Dummy * hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: class hkpCollidable const * hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const;
// public: int hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getValue(class Dummy *) const;
// public: class Dummy * hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: void hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::clear(void);
// public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::~Collector(void);
// public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::~Collector(void);
// public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::~Collector(void);
// public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::~Collector(void);
// public: hkEnum<enum hkpShapeType, int>::hkEnum<enum hkpShapeType, int>(void);
// public: hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>(void);
// public: virtual hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::~hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>(void);
// public: void hkArray<class hkAabb, struct hkContainerHeapAllocator>::setSize(int);
// public: hkLocalArray<void *>::hkLocalArray<void *>(int);
// public: hkLocalArray<void *>::~hkLocalArray<void *>(void);
// public: void hkArray<void *, struct hkContainerHeapAllocator>::setSize(int);
// public: hkLocalArray<class hkpCollidable const *>::hkLocalArray<class hkpCollidable const *>(int);
// public: hkLocalArray<class hkpCollidable const *>::~hkLocalArray<class hkpCollidable const *>(void);
// merged_84694890;
// merged_846948D8;
// merged_84694920;
// merged_84694968;
// merged_846949B0;
// public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::Collector(void);
// public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::Collector(void);
// public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::Collector(void);
// public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::Collector(void);
// public: class hkBool hkLocalArray<void *>::wasReallocated(void) const;
// public: class hkBool hkLocalArray<class hkpCollidable const *>::wasReallocated(void) const;
// public: class hkKdTreeNode * hkArrayBase<class hkKdTreeNode>::begin(void);
// public: struct hkKdTreeProjectedEntry * hkArrayBase<struct hkKdTreeProjectedEntry>::begin(void);
// public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::getNode(unsigned short) const;
// public: hkArrayBase<class hkpCollidable const *>::hkArrayBase<class hkpCollidable const *>(void);
// public: class hkpCollidable const *& hkArrayBase<class hkpCollidable const *>::operator[](int);
// public: int hkArrayBase<class hkpCollidable const *>::getSize(void) const;
// public: void hkArrayBase<class hkpCollidable const *>::clear(void);
// public: void hkArrayBase<class hkpCollidable const *>::removeAt(int);
// public: int hkArrayBase<class hkpCollidable const *>::indexOf(class hkpCollidable const *const &, int, int) const;
// public: void hkArrayBase<class hkpCollidable const *>::_pushBack(class hkMemoryAllocator &, class hkpCollidable const *const &);
// public: void hkArrayBase<class hkpCollidable const *>::pushBackUnchecked(class hkpCollidable const *const &);
// public: class hkpCollidable const ** hkArrayBase<class hkpCollidable const *>::begin(void);
// public: hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::~hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpCollidable const *>::~hkArrayBase<class hkpCollidable const *>(void);
// public: class hkAabb * hkArrayBase<class hkAabb>::begin(void);
// public: void hkArrayBase<void *>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(int);
// public: class hkpCollidable const * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node::getLeafData<class hkpCollidable const *>(void) const;
// void ** hkAllocateStack<void *>(int, char const *);
// void hkDeallocateStack<void *>(void **);
// class hkpCollidable const ** hkAllocateStack<class hkpCollidable const *>(int, char const *);
// void hkDeallocateStack<class hkpCollidable const *>(class hkpCollidable const **);
// public: void hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node::isLeaf(void) const;
// public: int hkArrayBase<class hkpCollidable const *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpCollidable const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpCollidable const *>(class hkpCollidable const **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpCollidable const *>(class hkpCollidable const **, int, class hkpCollidable const *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<void *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<void *>(void **, int, struct hkTraitBool<1>);
// public: void hkArrayBase<int>::setOwnedData(int *, int, int);
// public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node const * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::NodeManager::getNode(unsigned short) const;
// public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node const & hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node>::operator[](int) const;
// public: int hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node>::getSize(void) const;
// [thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vector deleting destructor'(unsigned int);

//public: hkpAabbTreeWorldManager::hkpAabbTreeWorldManager(class hkpWorld *, enum hkpWorldCinfo::TreeUpdateType, float)
//{
//    mangled_ppc("??0hkpAabbTreeWorldManager@@QAA@PAVhkpWorld@@W4TreeUpdateType@hkpWorldCinfo@@M@Z");
//};

//public: virtual hkpAabbTreeWorldManager::~hkpAabbTreeWorldManager(void)
//{
//    mangled_ppc("??1hkpAabbTreeWorldManager@@UAA@XZ");
//};

//public: void hkpAabbTreeWorldManager::reset(void)
//{
//    mangled_ppc("?reset@hkpAabbTreeWorldManager@@QAAXXZ");
//};

//public: virtual void hkpAabbTreeWorldManager::entityAddedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityAddedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::entityRemovedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityRemovedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::entitySetMotionTypeCallback(class hkpEntity *)
//{
//    mangled_ppc("?entitySetMotionTypeCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::entityDeletedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityDeletedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::phantomAddedCallback(class hkpPhantom *)
//{
//    mangled_ppc("?phantomAddedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpPhantom@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::phantomRemovedCallback(class hkpPhantom *)
//{
//    mangled_ppc("?phantomRemovedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpPhantom@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::islandDeactivatedCallback(class hkpSimulationIsland *)
//{
//    mangled_ppc("?islandDeactivatedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpSimulationIsland@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::islandActivatedCallback(class hkpSimulationIsland *)
//{
//    mangled_ppc("?islandActivatedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpSimulationIsland@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::postSimulationCallback(class hkpWorld *)
//{
//    mangled_ppc("?postSimulationCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::inactiveEntityMovedCallback(class hkpEntity *)
//{
//    mangled_ppc("?inactiveEntityMovedCallback@hkpAabbTreeWorldManager@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::updateFromWorld(class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?updateFromWorld@hkpAabbTreeWorldManager@@UAAXPAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::removeObjectFromTree(class hkpWorldObject const *)
//{
//    mangled_ppc("?removeObjectFromTree@hkpAabbTreeWorldManager@@IAAXPBVhkpWorldObject@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::castRay(struct hkpWorldRayCastInput const &, class hkpCollisionFilter const *, struct hkpWorldRayCastOutput &) const
//{
//    mangled_ppc("?castRay@hkpAabbTreeWorldManager@@UBAXABUhkpWorldRayCastInput@@PBVhkpCollisionFilter@@AAUhkpWorldRayCastOutput@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::castRay(struct hkpWorldRayCastInput const &, class hkpCollisionFilter const *, class hkpRayHitCollector &) const
//{
//    mangled_ppc("?castRay@hkpAabbTreeWorldManager@@UBAXABUhkpWorldRayCastInput@@PBVhkpCollisionFilter@@AAVhkpRayHitCollector@@@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::linearCast(class hkpCollidable const *, struct hkpLinearCastInput const &, class hkpCollidableCollidableFilter const *, struct hkpCollisionInput const &, struct hkpCollisionAgentConfig *, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?linearCast@hkpAabbTreeWorldManager@@UAAXPBVhkpCollidable@@ABUhkpLinearCastInput@@PBVhkpCollidableCollidableFilter@@ABUhkpCollisionInput@@PAUhkpCollisionAgentConfig@@AAVhkpCdPointCollector@@PAV7@@Z");
//};

//public: virtual int hkpAabbTreeWorldManager::calcWorkingBufferSize(int)
//{
//    mangled_ppc("?calcWorkingBufferSize@hkpAabbTreeWorldManager@@UAAHH@Z");
//};

//public: virtual void hkpAabbTreeWorldManager::setWorkingBuffer(void *)
//{
//    mangled_ppc("?setWorkingBuffer@hkpAabbTreeWorldManager@@UAAXPAX@Z");
//};

//protected: void hkpAabbTreeWorldManager::buildActiveTree(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?buildActiveTree@hkpAabbTreeWorldManager@@IAAXAAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@PAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::buildInactiveTree(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?buildInactiveTree@hkpAabbTreeWorldManager@@IAAXAAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@PAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::buildKdTree(class hkKdTree *&, class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld *, class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?buildKdTree@hkpAabbTreeWorldManager@@IAAXAAPAVhkKdTree@@AAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@PAVhkpWorld@@PAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//public: static void hkpAabbTreeWorldManager::gatherCollidablesFromWorld(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld const *)
//{
//    mangled_ppc("?gatherCollidablesFromWorld@hkpAabbTreeWorldManager@@SAXAAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@PBVhkpWorld@@@Z");
//};

//public: static void hkpAabbTreeWorldManager::gatherActiveCollidablesFromWorld(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld const *)
//{
//    mangled_ppc("?gatherActiveCollidablesFromWorld@hkpAabbTreeWorldManager@@SAXAAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@PBVhkpWorld@@@Z");
//};

//public: static void hkpAabbTreeWorldManager::gatherInactiveCollidablesFromWorld(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &, class hkpWorld const *)
//{
//    mangled_ppc("?gatherInactiveCollidablesFromWorld@hkpAabbTreeWorldManager@@SAXAAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@PBVhkpWorld@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::setTreeIsClean(void)
//{
//    mangled_ppc("?setTreeIsClean@hkpAabbTreeWorldManager@@IAAXXZ");
//};

//protected: void hkpAabbTreeWorldManager::clearActiveTree(void)
//{
//    mangled_ppc("?clearActiveTree@hkpAabbTreeWorldManager@@IAAXXZ");
//};

//public: void hkpAabbTreeWorldManager::checkConsistency(void)
//{
//    mangled_ppc("?checkConsistency@hkpAabbTreeWorldManager@@QAAXXZ");
//};

//protected: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node * hkpAabbTreeWorldManager::getNode(class hkpCollidable const *)
//{
//    mangled_ppc("?getNode@hkpAabbTreeWorldManager@@IAAPAUNode@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@PBVhkpCollidable@@@Z");
//};

//protected: unsigned short hkpAabbTreeWorldManager::getNodeIdx(class hkpCollidable const *) const
//{
//    mangled_ppc("?getNodeIdx@hkpAabbTreeWorldManager@@IBAGPBVhkpCollidable@@@Z");
//};

//protected: static void hkpAabbTreeWorldManager::setNode(class hkpCollidable const *, unsigned short)
//{
//    mangled_ppc("?setNode@hkpAabbTreeWorldManager@@KAXPBVhkpCollidable@@G@Z");
//};

//protected: void hkpAabbTreeWorldManager::incrementalBuild(class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?incrementalBuild@hkpAabbTreeWorldManager@@IAAXPAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::fullBuild(class hkJobQueue *, class hkJobThreadPool *)
//{
//    mangled_ppc("?fullBuild@hkpAabbTreeWorldManager@@IAAXPAVhkJobQueue@@PAVhkJobThreadPool@@@Z");
//};

//protected: bool hkpAabbTreeWorldManager::scanActiveListAndGetInactivated(class hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?scanActiveListAndGetInactivated@hkpAabbTreeWorldManager@@IAA_NAAV?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::pushBackToActiveList(class hkpCollidable const *)
//{
//    mangled_ppc("?pushBackToActiveList@hkpAabbTreeWorldManager@@IAAXPBVhkpCollidable@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::queueActivated(class hkpCollidable const *)
//{
//    mangled_ppc("?queueActivated@hkpAabbTreeWorldManager@@IAAXPBVhkpCollidable@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::queueInactivated(class hkpCollidable const *)
//{
//    mangled_ppc("?queueInactivated@hkpAabbTreeWorldManager@@IAAXPBVhkpCollidable@@@Z");
//};

//public: hkpTreeWorldManager::hkpTreeWorldManager(void)
//{
//    mangled_ppc("??0hkpTreeWorldManager@@QAA@XZ");
//};

//public: virtual int hkpTreeWorldManager::calcWorkingBufferSize(int)
//{
//    mangled_ppc("?calcWorkingBufferSize@hkpTreeWorldManager@@UAAHH@Z");
//};

//public: virtual void hkpTreeWorldManager::setWorkingBuffer(void *)
//{
//    mangled_ppc("?setWorkingBuffer@hkpTreeWorldManager@@UAAXPAX@Z");
//};

//merged_84693790
//{
//    mangled_ppc("merged_84693790");
//};

//public: virtual hkpTreeWorldManager::~hkpTreeWorldManager(void)
//{
//    mangled_ppc("??1hkpTreeWorldManager@@UAA@XZ");
//};

//public: static void * hkSemaphore::operator new(unsigned int)
//{
//    mangled_ppc("??2hkSemaphore@@SAPAXI@Z");
//};

//public: virtual bool hkpAabbTreeWorldManager::isUpToDate(void) const
//{
//    mangled_ppc("?isUpToDate@hkpAabbTreeWorldManager@@UBA_NXZ");
//};

//public: virtual void hkpAabbTreeWorldManager::setUpToDate(bool)
//{
//    mangled_ppc("?setUpToDate@hkpAabbTreeWorldManager@@UAAX_N@Z");
//};

//merged_846938D0
//{
//    mangled_ppc("merged_846938D0");
//};

//public: static void hkpAabbTreeWorldManager::operator delete(void *)
//{
//    mangled_ppc("??3hkpAabbTreeWorldManager@@SAXPAX@Z");
//};

//public: hkpIslandActivationListener::hkpIslandActivationListener(void)
//{
//    mangled_ppc("??0hkpIslandActivationListener@@QAA@XZ");
//};

//merged_84693990
//{
//    mangled_ppc("merged_84693990");
//};

//public: virtual hkpIslandActivationListener::~hkpIslandActivationListener(void)
//{
//    mangled_ppc("??1hkpIslandActivationListener@@UAA@XZ");
//};

//public: hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::~hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void * hkKdTree::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkKdTree@@QAAPAXI@Z");
//};

//public: static void hkKdTree::operator delete(void *)
//{
//    mangled_ppc("??3hkKdTree@@SAXPAX@Z");
//};

//public: void * hkSemaphore::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkSemaphore@@QAAPAXI@Z");
//};

//public: static void hkSemaphore::operator delete(void *)
//{
//    mangled_ppc("??3hkSemaphore@@SAXPAX@Z");
//};

//public: hkpKdTreeCollidableRaycaster::hkpKdTreeCollidableRaycaster(void)
//{
//    mangled_ppc("??0hkpKdTreeCollidableRaycaster@@QAA@XZ");
//};

//merged_84693BD0
//{
//    mangled_ppc("merged_84693BD0");
//};

//public: static void hkpKdTreeCollidableRaycaster::operator delete(void *)
//{
//    mangled_ppc("??3hkpKdTreeCollidableRaycaster@@SAXPAX@Z");
//};

//public: hkKdTreeCastCollector::hkKdTreeCastCollector(void)
//{
//    mangled_ppc("??0hkKdTreeCastCollector@@QAA@XZ");
//};

//merged_84693C90
//{
//    mangled_ppc("merged_84693C90");
//};

//public: virtual hkKdTreeCastCollector::~hkKdTreeCastCollector(void)
//{
//    mangled_ppc("??1hkKdTreeCastCollector@@UAA@XZ");
//};

//public: virtual hkpKdTreeCollidableRaycaster::~hkpKdTreeCollidableRaycaster(void)
//{
//    mangled_ppc("??1hkpKdTreeCollidableRaycaster@@UAA@XZ");
//};

//public: virtual hkpAabbTreeCollidableRaycaster::~hkpAabbTreeCollidableRaycaster(void)
//{
//    mangled_ppc("??1hkpAabbTreeCollidableRaycaster@@UAA@XZ");
//};

//public: hkpKdTreeWorldLinearCaster::hkpKdTreeWorldLinearCaster(void)
//{
//    mangled_ppc("??0hkpKdTreeWorldLinearCaster@@QAA@XZ");
//};

//public: virtual hkpKdTreeWorldLinearCaster::~hkpKdTreeWorldLinearCaster(void)
//{
//    mangled_ppc("??1hkpKdTreeWorldLinearCaster@@UAA@XZ");
//};

//merged_84693DF8
//{
//    mangled_ppc("merged_84693DF8");
//};

//public: static void * hkKdTree::operator new(unsigned int)
//{
//    mangled_ppc("??2hkKdTree@@SAPAXI@Z");
//};

//public: class hkKdTreeNode * hkKdTree::getRoot(void)
//{
//    mangled_ppc("?getRoot@hkKdTree@@QAAPAVhkKdTreeNode@@XZ");
//};

//public: int hkKdTree::getNumPrimitives(void) const
//{
//    mangled_ppc("?getNumPrimitives@hkKdTree@@QBAHXZ");
//};

//public: int hkKdTree::getNumReservedEmptyNodes(void) const
//{
//    mangled_ppc("?getNumReservedEmptyNodes@hkKdTree@@QBAHXZ");
//};

//public: int hkKdTree::getTotalNumNodes(void) const
//{
//    mangled_ppc("?getTotalNumNodes@hkKdTree@@QBAHXZ");
//};

//public: struct hkKdTreeProjectedEntry * hkKdTree::getProjectedEntries(void)
//{
//    mangled_ppc("?getProjectedEntries@hkKdTree@@QAAPAUhkKdTreeProjectedEntry@@XZ");
//};

//public: hkpKdTreeBuildCoordinatorJob::hkpKdTreeBuildCoordinatorJob(struct hkpCollisionQueryJobHeader *, class hkpWorld const *)
//{
//    mangled_ppc("??0hkpKdTreeBuildCoordinatorJob@@QAA@PAUhkpCollisionQueryJobHeader@@PBVhkpWorld@@@Z");
//};

//public: hkpKdTreeBuildDistributedJob::hkpKdTreeBuildDistributedJob(struct hkpCollisionQueryJobHeader *)
//{
//    mangled_ppc("??0hkpKdTreeBuildDistributedJob@@QAA@PAUhkpCollisionQueryJobHeader@@@Z");
//};

//public: virtual hkpCollidableMediator::~hkpCollidableMediator(void)
//{
//    mangled_ppc("??1hkpCollidableMediator@@UAA@XZ");
//};

//public: virtual hkKdTreeBuildInput::Mediator::~Mediator(void)
//{
//    mangled_ppc("??1Mediator@hkKdTreeBuildInput@@UAA@XZ");
//};

//public: class hkpRigidBody const * hkpWorld::getFixedRigidBody(void) const
//{
//    mangled_ppc("?getFixedRigidBody@hkpWorld@@QBAPBVhkpRigidBody@@XZ");
//};

//protected: bool hkpAabbTreeWorldManager::objIsActive(int &, class hkpCollidable const *) const
//{
//    mangled_ppc("?objIsActive@hkpAabbTreeWorldManager@@IBA_NAAHPBVhkpCollidable@@@Z");
//};

//protected: void hkpAabbTreeWorldManager::objActivated(int &) const
//{
//    mangled_ppc("?objActivated@hkpAabbTreeWorldManager@@IBAXAAH@Z");
//};

//protected: void hkpAabbTreeWorldManager::objInactivated(int &) const
//{
//    mangled_ppc("?objInactivated@hkpAabbTreeWorldManager@@IBAXAAH@Z");
//};

//public: static void * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@SAPAXI@Z");
//};

//public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::getRootNode(void) const
//{
//    mangled_ppc("?getRootNode@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QBAPAUNode@1@XZ");
//};

//public: unsigned short hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::getRootNodeIdx(void) const
//{
//    mangled_ppc("?getRootNodeIdx@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QBAGXZ");
//};

//public: hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::pushBack(class hkpCollidable const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@QAAXABQBVhkpCollidable@@@Z");
//};

//public: hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::insert(class hkpCollidable const *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QAAHPBVhkpCollidable@@H@Z");
//};

//public: enum hkResult hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::get(class hkpCollidable const *, int *) const
//{
//    mangled_ppc("?get@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QBA?AW4hkResult@@PBVhkpCollidable@@PAH@Z");
//};

//public: class Dummy * hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: class hkpCollidable const * hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QBAPBVhkpCollidable@@PAVDummy@@@Z");
//};

//public: int hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QBAHPAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: void hkPointerMap<class hkpCollidable const *, int, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$hkPointerMap@PBVhkpCollidable@@HUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::~Collector(void)
//{
//    mangled_ppc("??1Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@UAA@XZ");
//};

//public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::~Collector(void)
//{
//    mangled_ppc("??1Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@UAA@XZ");
//};

//public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::~Collector(void)
//{
//    mangled_ppc("??1Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@UAA@XZ");
//};

//public: virtual hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::~Collector(void)
//{
//    mangled_ppc("??1Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@UAA@XZ");
//};

//public: hkEnum<enum hkpShapeType, int>::hkEnum<enum hkpShapeType, int>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpShapeType@@H@@QAA@XZ");
//};

//public: hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>(void)
//{
//    mangled_ppc("??0?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@QAA@XZ");
//};

//public: virtual hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::~hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>(void)
//{
//    mangled_ppc("??1?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@UAA@XZ");
//};

//public: void hkArray<class hkAabb, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkAabb@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<void *>::hkLocalArray<void *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PAX@@QAA@H@Z");
//};

//public: hkLocalArray<void *>::~hkLocalArray<void *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PAX@@QAA@XZ");
//};

//public: void hkArray<void *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PAXUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<class hkpCollidable const *>::hkLocalArray<class hkpCollidable const *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PBVhkpCollidable@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkpCollidable const *>::~hkLocalArray<class hkpCollidable const *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PBVhkpCollidable@@@@QAA@XZ");
//};

//merged_84694890
//{
//    mangled_ppc("merged_84694890");
//};

//merged_846948D8
//{
//    mangled_ppc("merged_846948D8");
//};

//merged_84694920
//{
//    mangled_ppc("merged_84694920");
//};

//merged_84694968
//{
//    mangled_ppc("merged_84694968");
//};

//merged_846949B0
//{
//    mangled_ppc("merged_846949B0");
//};

//public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector::Collector(void)
//{
//    mangled_ppc("??0Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@G@@QAA@XZ");
//};

//public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::Collector(void)
//{
//    mangled_ppc("??0Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QAA@XZ");
//};

//public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::Collector(void)
//{
//    mangled_ppc("??0Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@QAA@XZ");
//};

//public: hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector::Collector(void)
//{
//    mangled_ppc("??0Collector@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb16@hkAabbTreeData@@I@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<void *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PAX@@QBA?AVhkBool@@XZ");
//};

//public: class hkBool hkLocalArray<class hkpCollidable const *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PBVhkpCollidable@@@@QBA?AVhkBool@@XZ");
//};

//public: class hkKdTreeNode * hkArrayBase<class hkKdTreeNode>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkKdTreeNode@@@@QAAPAVhkKdTreeNode@@XZ");
//};

//public: struct hkKdTreeProjectedEntry * hkArrayBase<struct hkKdTreeProjectedEntry>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkKdTreeProjectedEntry@@@@QAAPAUhkKdTreeProjectedEntry@@XZ");
//};

//public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::getNode(unsigned short) const
//{
//    mangled_ppc("?getNode@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QBAPAUNode@1@G@Z");
//};

//public: hkArrayBase<class hkpCollidable const *>::hkArrayBase<class hkpCollidable const *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PBVhkpCollidable@@@@QAA@XZ");
//};

//public: class hkpCollidable const *& hkArrayBase<class hkpCollidable const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBVhkpCollidable@@@@QAAAAPBVhkpCollidable@@H@Z");
//};

//public: int hkArrayBase<class hkpCollidable const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBVhkpCollidable@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpCollidable const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBVhkpCollidable@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpCollidable const *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PBVhkpCollidable@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkpCollidable const *>::indexOf(class hkpCollidable const *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PBVhkpCollidable@@@@QBAHABQBVhkpCollidable@@HH@Z");
//};

//public: void hkArrayBase<class hkpCollidable const *>::_pushBack(class hkMemoryAllocator &, class hkpCollidable const *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PBVhkpCollidable@@@@QAAXAAVhkMemoryAllocator@@ABQBVhkpCollidable@@@Z");
//};

//public: void hkArrayBase<class hkpCollidable const *>::pushBackUnchecked(class hkpCollidable const *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PBVhkpCollidable@@@@QAAXABQBVhkpCollidable@@@Z");
//};

//public: class hkpCollidable const ** hkArrayBase<class hkpCollidable const *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PBVhkpCollidable@@@@QAAPAPBVhkpCollidable@@XZ");
//};

//public: hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::~hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpCollidable const *>::~hkArrayBase<class hkpCollidable const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBVhkpCollidable@@@@QAA@XZ");
//};

//public: class hkAabb * hkArrayBase<class hkAabb>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkAabb@@@@QAAPAVhkAabb@@XZ");
//};

//public: void hkArrayBase<void *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAX@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@HUhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: class hkpCollidable const * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node::getLeafData<class hkpCollidable const *>(void) const
//{
//    mangled_ppc("??$getLeafData@PBVhkpCollidable@@@Node@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QBAPBVhkpCollidable@@XZ");
//};

//void ** hkAllocateStack<void *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PAX@@YAPAPAXHPBD@Z");
//};

//void hkDeallocateStack<void *>(void **)
//{
//    mangled_ppc("??$hkDeallocateStack@PAX@@YAXPAPAX@Z");
//};

//class hkpCollidable const ** hkAllocateStack<class hkpCollidable const *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PBVhkpCollidable@@@@YAPAPBVhkpCollidable@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpCollidable const *>(class hkpCollidable const **)
//{
//    mangled_ppc("??$hkDeallocateStack@PBVhkpCollidable@@@@YAXPAPBVhkpCollidable@@@Z");
//};

//public: void hkArray<class hkpCollidable const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBVhkpCollidable@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node::isLeaf(void) const
//{
//    mangled_ppc("?isLeaf@Node@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QBAHXZ");
//};

//public: int hkArrayBase<class hkpCollidable const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBVhkpCollidable@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpCollidable const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBVhkpCollidable@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpCollidable const *>(class hkpCollidable const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBVhkpCollidable@@@hkArrayUtil@@SAXPAPBVhkpCollidable@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpCollidable const *>(class hkpCollidable const **, int, class hkpCollidable const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBVhkpCollidable@@@hkArrayUtil@@SAXPAPBVhkpCollidable@@HABQBV1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<void *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAX@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<void *>(void **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAX@hkArrayUtil@@SAXPAPAXHU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<int>::setOwnedData(int *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@H@@QAAXPAHHH@Z");
//};

//public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node const * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::NodeManager::getNode(unsigned short) const
//{
//    mangled_ppc("?getNode@NodeManager@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@QBAPBUNode@2@G@Z");
//};

//public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node const & hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UNode@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@@@QBAABUNode@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@H@Z");
//};

//public: int hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Node>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UNode@?$hkAabbTree@UhkAabbTreeAabb16@hkAabbTreeData@@G@@@@QBAHXZ");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpAabbTreeWorldManager@@WBE@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpAabbTreeWorldManager@@WBI@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpAabbTreeWorldManager@@WBM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_E?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@W3AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldManager::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpAabbTreeWorldManager@@WCA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_E?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@W7AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkpAabbTreeWorldLinearCaster<struct hkAabbTreeData::hkAabbTreeAabb16>::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_E?$hkpAabbTreeWorldLinearCaster@UhkAabbTreeAabb16@hkAabbTreeData@@@@WM@AAPAXI@Z");
//};

