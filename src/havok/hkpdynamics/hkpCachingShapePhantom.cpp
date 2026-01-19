/* ---------- headers */

#include "havok\hkpdynamics\hkpCachingShapePhantom.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpConstraintOwner::`RTTI Complete Object Locator'; // "??_R4hkpConstraintOwner@@6B@"
// hkpConstraintOwner::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpConstraintOwner@@8"
// hkpConstraintOwner::`RTTI Base Class Array'; // "??_R2hkpConstraintOwner@@8"
// hkpConstraintOwner::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpConstraintOwner@@8"
// class hkpConstraintOwner::`RTTI Type Descriptor'; // "??_R0?AVhkpConstraintOwner@@@8"

// public: hkpCachingShapePhantom::hkpCachingShapePhantom(class hkpShape const *, class hkTransform const &, unsigned int);
// public: virtual hkpCachingShapePhantom::~hkpCachingShapePhantom(void);
// public: virtual class hkpPhantom * hkpCachingShapePhantom::clone(void) const;
// public: virtual enum hkpPhantomType hkpCachingShapePhantom::getType(void) const;
// public: virtual void hkpCachingShapePhantom::setPositionAndLinearCast(class hkVector4const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual void hkpCachingShapePhantom::setTransformAndLinearCast(class hkTransform const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual void hkpCachingShapePhantom::getClosestPoints(class hkpCdPointCollector &, struct hkpCollisionInput const *);
// public: virtual void hkpCachingShapePhantom::getPenetrations(class hkpCdBodyPairCollector &, struct hkpCollisionInput const *);
// public: virtual class hkBool hkpCachingShapePhantom::isOverlappingCollidableAdded(class hkpCollidable const *);
// public: virtual void hkpCachingShapePhantom::addOverlappingCollidable(class hkpCollidable *);
// public: virtual void hkpCachingShapePhantom::removeOverlappingCollidable(class hkpCollidable *);
// public: virtual void hkpCachingShapePhantom::updateShapeCollectionFilter(void);
// public: virtual void hkpCachingShapePhantom::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual void hkpCachingShapePhantom::deallocateInternalArrays(void);
// public: virtual void hkpCachingShapePhantom::ensureDeterministicOrder(void);
// public: hkpConstraintOwner::hkpConstraintOwner(void);
// public: virtual void hkpConstraintOwner::addConstraintToCriticalLockedIsland(class hkpConstraintInstance *);
// public: virtual void hkpConstraintOwner::removeConstraintFromCriticalLockedIsland(class hkpConstraintInstance *);
// public: virtual void hkpConstraintOwner::addCallbackRequest(class hkpConstraintInstance *, int);
// public: virtual void hkpConstraintOwner::checkAccessRw(void);
// public: virtual hkpConstraintOwner::~hkpConstraintOwner(void);
// merged_8467A2B8;
// public: static void hkpConstraintOwner::operator delete(void *);
// public: void hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkpCachingShapePhantom::hkpCollisionDetail & hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkpCachingShapePhantom::hkpCollisionDetail const & hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::operator[](int) const;
// public: struct hkpCachingShapePhantom::hkpCollisionDetail & hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::operator[](int);
// public: int hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::getSize(void) const;
// public: void hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::clear(void);
// public: void hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::removeAt(int);
// public: struct hkpCachingShapePhantom::hkpCollisionDetail & hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::_expandOne(class hkMemoryAllocator &);
// public: struct hkpCachingShapePhantom::hkpCollisionDetail * hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::begin(void);
// public: hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>::~hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::~hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>(void);
// public: void hkStatisticsCollector::addArray<struct hkpCachingShapePhantom::hkpCollisionDetail>(char const *, class hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator> const &);
// void hkAlgorithm::quickSort<struct hkpCachingShapePhantom::hkpCollisionDetail, class hkpCachingShapePhantom::OrderByUid>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, class hkpCachingShapePhantom::OrderByUid);
// public: int hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::getCapacity(void) const;
// public: struct hkpCachingShapePhantom::hkpCollisionDetail const * hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::begin(void) const;
// public: static void hkArrayUtil::destruct<struct hkpCachingShapePhantom::hkpCollisionDetail>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpCachingShapePhantom::hkpCollisionDetail>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSortRecursive<struct hkpCachingShapePhantom::hkpCollisionDetail, class hkpCachingShapePhantom::OrderByUid>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, int, class hkpCachingShapePhantom::OrderByUid);
// public: class hkBool hkpCachingShapePhantom::OrderByUid::operator()(struct hkpCachingShapePhantom::hkpCollisionDetail const &, struct hkpCachingShapePhantom::hkpCollisionDetail const &);

//public: hkpCachingShapePhantom::hkpCachingShapePhantom(class hkpShape const *, class hkTransform const &, unsigned int)
//{
//    mangled_ppc("??0hkpCachingShapePhantom@@QAA@PBVhkpShape@@ABVhkTransform@@I@Z");
//};

//public: virtual hkpCachingShapePhantom::~hkpCachingShapePhantom(void)
//{
//    mangled_ppc("??1hkpCachingShapePhantom@@UAA@XZ");
//};

//public: virtual class hkpPhantom * hkpCachingShapePhantom::clone(void) const
//{
//    mangled_ppc("?clone@hkpCachingShapePhantom@@UBAPAVhkpPhantom@@XZ");
//};

//public: virtual enum hkpPhantomType hkpCachingShapePhantom::getType(void) const
//{
//    mangled_ppc("?getType@hkpCachingShapePhantom@@UBA?AW4hkpPhantomType@@XZ");
//};

//public: virtual void hkpCachingShapePhantom::setPositionAndLinearCast(class hkVector4const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?setPositionAndLinearCast@hkpCachingShapePhantom@@UAAXABVhkVector4@@ABUhkpLinearCastInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual void hkpCachingShapePhantom::setTransformAndLinearCast(class hkTransform const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?setTransformAndLinearCast@hkpCachingShapePhantom@@UAAXABVhkTransform@@ABUhkpLinearCastInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual void hkpCachingShapePhantom::getClosestPoints(class hkpCdPointCollector &, struct hkpCollisionInput const *)
//{
//    mangled_ppc("?getClosestPoints@hkpCachingShapePhantom@@UAAXAAVhkpCdPointCollector@@PBUhkpCollisionInput@@@Z");
//};

//public: virtual void hkpCachingShapePhantom::getPenetrations(class hkpCdBodyPairCollector &, struct hkpCollisionInput const *)
//{
//    mangled_ppc("?getPenetrations@hkpCachingShapePhantom@@UAAXAAVhkpCdBodyPairCollector@@PBUhkpCollisionInput@@@Z");
//};

//public: virtual class hkBool hkpCachingShapePhantom::isOverlappingCollidableAdded(class hkpCollidable const *)
//{
//    mangled_ppc("?isOverlappingCollidableAdded@hkpCachingShapePhantom@@UAA?AVhkBool@@PBVhkpCollidable@@@Z");
//};

//public: virtual void hkpCachingShapePhantom::addOverlappingCollidable(class hkpCollidable *)
//{
//    mangled_ppc("?addOverlappingCollidable@hkpCachingShapePhantom@@UAAXPAVhkpCollidable@@@Z");
//};

//public: virtual void hkpCachingShapePhantom::removeOverlappingCollidable(class hkpCollidable *)
//{
//    mangled_ppc("?removeOverlappingCollidable@hkpCachingShapePhantom@@UAAXPAVhkpCollidable@@@Z");
//};

//public: virtual void hkpCachingShapePhantom::updateShapeCollectionFilter(void)
//{
//    mangled_ppc("?updateShapeCollectionFilter@hkpCachingShapePhantom@@UAAXXZ");
//};

//public: virtual void hkpCachingShapePhantom::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpCachingShapePhantom@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual void hkpCachingShapePhantom::deallocateInternalArrays(void)
//{
//    mangled_ppc("?deallocateInternalArrays@hkpCachingShapePhantom@@UAAXXZ");
//};

//public: virtual void hkpCachingShapePhantom::ensureDeterministicOrder(void)
//{
//    mangled_ppc("?ensureDeterministicOrder@hkpCachingShapePhantom@@UAAXXZ");
//};

//public: hkpConstraintOwner::hkpConstraintOwner(void)
//{
//    mangled_ppc("??0hkpConstraintOwner@@QAA@XZ");
//};

//public: virtual void hkpConstraintOwner::addConstraintToCriticalLockedIsland(class hkpConstraintInstance *)
//{
//    mangled_ppc("?addConstraintToCriticalLockedIsland@hkpConstraintOwner@@UAAXPAVhkpConstraintInstance@@@Z");
//};

//public: virtual void hkpConstraintOwner::removeConstraintFromCriticalLockedIsland(class hkpConstraintInstance *)
//{
//    mangled_ppc("?removeConstraintFromCriticalLockedIsland@hkpConstraintOwner@@UAAXPAVhkpConstraintInstance@@@Z");
//};

//public: virtual void hkpConstraintOwner::addCallbackRequest(class hkpConstraintInstance *, int)
//{
//    mangled_ppc("?addCallbackRequest@hkpConstraintOwner@@UAAXPAVhkpConstraintInstance@@H@Z");
//};

//public: virtual void hkpConstraintOwner::checkAccessRw(void)
//{
//    mangled_ppc("?checkAccessRw@hkpConstraintOwner@@UAAXXZ");
//};

//public: virtual hkpConstraintOwner::~hkpConstraintOwner(void)
//{
//    mangled_ppc("??1hkpConstraintOwner@@UAA@XZ");
//};

//merged_8467A2B8
//{
//    mangled_ppc("merged_8467A2B8");
//};

//public: static void hkpConstraintOwner::operator delete(void *)
//{
//    mangled_ppc("??3hkpConstraintOwner@@SAXPAX@Z");
//};

//public: void hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpCollisionDetail@hkpCachingShapePhantom@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkpCachingShapePhantom::hkpCollisionDetail & hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkpCollisionDetail@hkpCachingShapePhantom@@UhkContainerHeapAllocator@@@@QAAAAUhkpCollisionDetail@hkpCachingShapePhantom@@XZ");
//};

//public: struct hkpCachingShapePhantom::hkpCollisionDetail const & hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QBAABUhkpCollisionDetail@hkpCachingShapePhantom@@H@Z");
//};

//public: struct hkpCachingShapePhantom::hkpCollisionDetail & hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAAAAUhkpCollisionDetail@hkpCachingShapePhantom@@H@Z");
//};

//public: int hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAAXH@Z");
//};

//public: struct hkpCachingShapePhantom::hkpCollisionDetail & hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAAAAUhkpCollisionDetail@hkpCachingShapePhantom@@AAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpCachingShapePhantom::hkpCollisionDetail * hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAAPAUhkpCollisionDetail@hkpCachingShapePhantom@@XZ");
//};

//public: hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>::~hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpCollisionDetail@hkpCachingShapePhantom@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::~hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QAA@XZ");
//};

//public: void hkStatisticsCollector::addArray<struct hkpCachingShapePhantom::hkpCollisionDetail>(char const *, class hkArray<struct hkpCachingShapePhantom::hkpCollisionDetail, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UhkpCollisionDetail@hkpCachingShapePhantom@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UhkpCollisionDetail@hkpCachingShapePhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkpCachingShapePhantom::hkpCollisionDetail, class hkpCachingShapePhantom::OrderByUid>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, class hkpCachingShapePhantom::OrderByUid)
//{
//    mangled_ppc("??$quickSort@UhkpCollisionDetail@hkpCachingShapePhantom@@VOrderByUid@2@@hkAlgorithm@@YAXPAUhkpCollisionDetail@hkpCachingShapePhantom@@HVOrderByUid@2@@Z");
//};

//public: int hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QBAHXZ");
//};

//public: struct hkpCachingShapePhantom::hkpCollisionDetail const * hkArrayBase<struct hkpCachingShapePhantom::hkpCollisionDetail>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkpCollisionDetail@hkpCachingShapePhantom@@@@QBAPBUhkpCollisionDetail@hkpCachingShapePhantom@@XZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpCachingShapePhantom::hkpCollisionDetail>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpCollisionDetail@hkpCachingShapePhantom@@@hkArrayUtil@@SAXPAUhkpCollisionDetail@hkpCachingShapePhantom@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpCachingShapePhantom::hkpCollisionDetail>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpCollisionDetail@hkpCachingShapePhantom@@@hkArrayUtil@@SAXPAUhkpCollisionDetail@hkpCachingShapePhantom@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkpCachingShapePhantom::hkpCollisionDetail, class hkpCachingShapePhantom::OrderByUid>(struct hkpCachingShapePhantom::hkpCollisionDetail *, int, int, class hkpCachingShapePhantom::OrderByUid)
//{
//    mangled_ppc("??$quickSortRecursive@UhkpCollisionDetail@hkpCachingShapePhantom@@VOrderByUid@2@@hkAlgorithm@@YAXPAUhkpCollisionDetail@hkpCachingShapePhantom@@HHVOrderByUid@2@@Z");
//};

//public: class hkBool hkpCachingShapePhantom::OrderByUid::operator()(struct hkpCachingShapePhantom::hkpCollisionDetail const &, struct hkpCachingShapePhantom::hkpCollisionDetail const &)
//{
//    mangled_ppc("??ROrderByUid@hkpCachingShapePhantom@@QAA?AVhkBool@@ABUhkpCollisionDetail@1@0@Z");
//};

