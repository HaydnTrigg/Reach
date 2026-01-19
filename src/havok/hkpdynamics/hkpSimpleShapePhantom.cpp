/* ---------- headers */

#include "havok\hkpdynamics\hkpSimpleShapePhantom.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpSimpleShapePhantom::hkpSimpleShapePhantom(class hkpShape const *, class hkTransform const &, unsigned int);
// public: virtual hkpSimpleShapePhantom::~hkpSimpleShapePhantom(void);
// public: virtual enum hkpPhantomType hkpSimpleShapePhantom::getType(void) const;
// public: virtual class hkpPhantom * hkpSimpleShapePhantom::clone(void) const;
// public: virtual void hkpSimpleShapePhantom::setPositionAndLinearCast(class hkVector4const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual void hkpSimpleShapePhantom::setTransformAndLinearCast(class hkTransform const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *);
// public: virtual void hkpSimpleShapePhantom::getClosestPoints(class hkpCdPointCollector &, struct hkpCollisionInput const *);
// public: virtual void hkpSimpleShapePhantom::getPenetrations(class hkpCdBodyPairCollector &, struct hkpCollisionInput const *);
// public: virtual class hkBool hkpSimpleShapePhantom::isOverlappingCollidableAdded(class hkpCollidable const *);
// public: virtual void hkpSimpleShapePhantom::addOverlappingCollidable(class hkpCollidable *);
// public: virtual void hkpSimpleShapePhantom::removeOverlappingCollidable(class hkpCollidable *);
// public: virtual void hkpSimpleShapePhantom::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual void hkpSimpleShapePhantom::deallocateInternalArrays(void);
// public: virtual void hkpSimpleShapePhantom::ensureDeterministicOrder(void);
// public: void hkpLinearCastCollisionInput::setPathAndTolerance(class hkVector4const &, float);
// public: void hkpLinearCastCollisionInput::set(struct hkpProcessCollisionInput const &);
// protected: enum hkpCollidableAccept hkpPhantom::fireCollidableAdded(class hkpCollidable const *);
// protected: void hkpPhantom::fireCollidableRemoved(class hkpCollidable const *, class hkBool);
// public: hkpCollidableRemovedEvent::hkpCollidableRemovedEvent(void);
// public: void hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkpSimpleShapePhantom::CollisionDetail & hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>::expandOne(void);
// public: class hkpPhantomOverlapListener *& hkArrayBase<class hkpPhantomOverlapListener *>::operator[](int);
// public: int hkArrayBase<class hkpPhantomOverlapListener *>::getSize(void) const;
// public: class hkArray<class hkpPhantomOverlapListener *, struct hkContainerHeapAllocator> & hkArray<class hkpPhantomOverlapListener *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpPhantomOverlapListener *, struct hkContainerHeapAllocator> const &);
// public: class hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator> & hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator> const &);
// public: struct hkpSimpleShapePhantom::CollisionDetail & hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::operator[](int);
// public: int hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::getSize(void) const;
// public: void hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::removeAt(int);
// public: struct hkpSimpleShapePhantom::CollisionDetail & hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::_expandOne(class hkMemoryAllocator &);
// public: struct hkpSimpleShapePhantom::CollisionDetail * hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::begin(void);
// public: hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>::~hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::~hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>(void);
// public: void hkStatisticsCollector::addArray<struct hkpSimpleShapePhantom::CollisionDetail>(char const *, class hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator> const &);
// void hkAlgorithm::quickSort<struct hkpSimpleShapePhantom::CollisionDetail, class hkpSimpleShapePhantom::OrderByUid>(struct hkpSimpleShapePhantom::CollisionDetail *, int, class hkpSimpleShapePhantom::OrderByUid);
// protected: class hkArrayBase<class hkpPhantomOverlapListener *> & hkArrayBase<class hkpPhantomOverlapListener *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpPhantomOverlapListener *> const &, struct hkTraitBool<1>);
// protected: class hkArrayBase<class hkpPhantomListener *> & hkArrayBase<class hkpPhantomListener *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpPhantomListener *> const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::clear(void);
// public: struct hkpSimpleShapePhantom::CollisionDetail const * hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::begin(void) const;
// public: static void hkArrayUtil::destruct<struct hkpSimpleShapePhantom::CollisionDetail>(struct hkpSimpleShapePhantom::CollisionDetail *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpSimpleShapePhantom::CollisionDetail>(struct hkpSimpleShapePhantom::CollisionDetail *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSortRecursive<struct hkpSimpleShapePhantom::CollisionDetail, class hkpSimpleShapePhantom::OrderByUid>(struct hkpSimpleShapePhantom::CollisionDetail *, int, int, class hkpSimpleShapePhantom::OrderByUid);
// public: class hkBool hkpSimpleShapePhantom::OrderByUid::operator()(struct hkpSimpleShapePhantom::CollisionDetail const &, struct hkpSimpleShapePhantom::CollisionDetail const &);
// public: void hkTransform::setRotation(class hkRotation const &);
// public: int hkArrayBase<class hkpPhantomOverlapListener *>::getCapacity(void) const;
// public: static void hkArrayBase<class hkpPhantomOverlapListener *>::copy(class hkpPhantomOverlapListener **, class hkpPhantomOverlapListener *const *, int);
// public: static void hkArrayBase<class hkpPhantomListener *>::copy(class hkpPhantomListener **, class hkpPhantomListener *const *, int);

//public: hkpSimpleShapePhantom::hkpSimpleShapePhantom(class hkpShape const *, class hkTransform const &, unsigned int)
//{
//    mangled_ppc("??0hkpSimpleShapePhantom@@QAA@PBVhkpShape@@ABVhkTransform@@I@Z");
//};

//public: virtual hkpSimpleShapePhantom::~hkpSimpleShapePhantom(void)
//{
//    mangled_ppc("??1hkpSimpleShapePhantom@@UAA@XZ");
//};

//public: virtual enum hkpPhantomType hkpSimpleShapePhantom::getType(void) const
//{
//    mangled_ppc("?getType@hkpSimpleShapePhantom@@UBA?AW4hkpPhantomType@@XZ");
//};

//public: virtual class hkpPhantom * hkpSimpleShapePhantom::clone(void) const
//{
//    mangled_ppc("?clone@hkpSimpleShapePhantom@@UBAPAVhkpPhantom@@XZ");
//};

//public: virtual void hkpSimpleShapePhantom::setPositionAndLinearCast(class hkVector4const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?setPositionAndLinearCast@hkpSimpleShapePhantom@@UAAXABVhkVector4@@ABUhkpLinearCastInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::setTransformAndLinearCast(class hkTransform const &, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *)
//{
//    mangled_ppc("?setTransformAndLinearCast@hkpSimpleShapePhantom@@UAAXABVhkTransform@@ABUhkpLinearCastInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::getClosestPoints(class hkpCdPointCollector &, struct hkpCollisionInput const *)
//{
//    mangled_ppc("?getClosestPoints@hkpSimpleShapePhantom@@UAAXAAVhkpCdPointCollector@@PBUhkpCollisionInput@@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::getPenetrations(class hkpCdBodyPairCollector &, struct hkpCollisionInput const *)
//{
//    mangled_ppc("?getPenetrations@hkpSimpleShapePhantom@@UAAXAAVhkpCdBodyPairCollector@@PBUhkpCollisionInput@@@Z");
//};

//public: virtual class hkBool hkpSimpleShapePhantom::isOverlappingCollidableAdded(class hkpCollidable const *)
//{
//    mangled_ppc("?isOverlappingCollidableAdded@hkpSimpleShapePhantom@@UAA?AVhkBool@@PBVhkpCollidable@@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::addOverlappingCollidable(class hkpCollidable *)
//{
//    mangled_ppc("?addOverlappingCollidable@hkpSimpleShapePhantom@@UAAXPAVhkpCollidable@@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::removeOverlappingCollidable(class hkpCollidable *)
//{
//    mangled_ppc("?removeOverlappingCollidable@hkpSimpleShapePhantom@@UAAXPAVhkpCollidable@@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpSimpleShapePhantom@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual void hkpSimpleShapePhantom::deallocateInternalArrays(void)
//{
//    mangled_ppc("?deallocateInternalArrays@hkpSimpleShapePhantom@@UAAXXZ");
//};

//public: virtual void hkpSimpleShapePhantom::ensureDeterministicOrder(void)
//{
//    mangled_ppc("?ensureDeterministicOrder@hkpSimpleShapePhantom@@UAAXXZ");
//};

//public: void hkpLinearCastCollisionInput::setPathAndTolerance(class hkVector4const &, float)
//{
//    mangled_ppc("?setPathAndTolerance@hkpLinearCastCollisionInput@@QAAXABVhkVector4@@M@Z");
//};

//public: void hkpLinearCastCollisionInput::set(struct hkpProcessCollisionInput const &)
//{
//    mangled_ppc("?set@hkpLinearCastCollisionInput@@QAAXABUhkpProcessCollisionInput@@@Z");
//};

//protected: enum hkpCollidableAccept hkpPhantom::fireCollidableAdded(class hkpCollidable const *)
//{
//    mangled_ppc("?fireCollidableAdded@hkpPhantom@@IAA?AW4hkpCollidableAccept@@PBVhkpCollidable@@@Z");
//};

//protected: void hkpPhantom::fireCollidableRemoved(class hkpCollidable const *, class hkBool)
//{
//    mangled_ppc("?fireCollidableRemoved@hkpPhantom@@IAAXPBVhkpCollidable@@VhkBool@@@Z");
//};

//public: hkpCollidableRemovedEvent::hkpCollidableRemovedEvent(void)
//{
//    mangled_ppc("??0hkpCollidableRemovedEvent@@QAA@XZ");
//};

//public: void hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UCollisionDetail@hkpSimpleShapePhantom@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkpSimpleShapePhantom::CollisionDetail & hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UCollisionDetail@hkpSimpleShapePhantom@@UhkContainerHeapAllocator@@@@QAAAAUCollisionDetail@hkpSimpleShapePhantom@@XZ");
//};

//public: class hkpPhantomOverlapListener *& hkArrayBase<class hkpPhantomOverlapListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpPhantomOverlapListener@@@@QAAAAPAVhkpPhantomOverlapListener@@H@Z");
//};

//public: int hkArrayBase<class hkpPhantomOverlapListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpPhantomOverlapListener@@@@QBAHXZ");
//};

//public: class hkArray<class hkpPhantomOverlapListener *, struct hkContainerHeapAllocator> & hkArray<class hkpPhantomOverlapListener *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpPhantomOverlapListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@PAVhkpPhantomOverlapListener@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: class hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator> & hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpPhantomListener *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@PAVhkpPhantomListener@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: struct hkpSimpleShapePhantom::CollisionDetail & hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAAAAUCollisionDetail@hkpSimpleShapePhantom@@H@Z");
//};

//public: int hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAAXH@Z");
//};

//public: struct hkpSimpleShapePhantom::CollisionDetail & hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAAAAUCollisionDetail@hkpSimpleShapePhantom@@AAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpSimpleShapePhantom::CollisionDetail * hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAAPAUCollisionDetail@hkpSimpleShapePhantom@@XZ");
//};

//public: hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>::~hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UCollisionDetail@hkpSimpleShapePhantom@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::~hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAA@XZ");
//};

//public: void hkStatisticsCollector::addArray<struct hkpSimpleShapePhantom::CollisionDetail>(char const *, class hkArray<struct hkpSimpleShapePhantom::CollisionDetail, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UCollisionDetail@hkpSimpleShapePhantom@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UCollisionDetail@hkpSimpleShapePhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkpSimpleShapePhantom::CollisionDetail, class hkpSimpleShapePhantom::OrderByUid>(struct hkpSimpleShapePhantom::CollisionDetail *, int, class hkpSimpleShapePhantom::OrderByUid)
//{
//    mangled_ppc("??$quickSort@UCollisionDetail@hkpSimpleShapePhantom@@VOrderByUid@2@@hkAlgorithm@@YAXPAUCollisionDetail@hkpSimpleShapePhantom@@HVOrderByUid@2@@Z");
//};

//protected: class hkArrayBase<class hkpPhantomOverlapListener *> & hkArrayBase<class hkpPhantomOverlapListener *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpPhantomOverlapListener *> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@PAVhkpPhantomOverlapListener@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//protected: class hkArrayBase<class hkpPhantomListener *> & hkArrayBase<class hkpPhantomListener *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpPhantomListener *> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@PAVhkpPhantomListener@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QAAXXZ");
//};

//public: struct hkpSimpleShapePhantom::CollisionDetail const * hkArrayBase<struct hkpSimpleShapePhantom::CollisionDetail>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UCollisionDetail@hkpSimpleShapePhantom@@@@QBAPBUCollisionDetail@hkpSimpleShapePhantom@@XZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpSimpleShapePhantom::CollisionDetail>(struct hkpSimpleShapePhantom::CollisionDetail *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UCollisionDetail@hkpSimpleShapePhantom@@@hkArrayUtil@@SAXPAUCollisionDetail@hkpSimpleShapePhantom@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpSimpleShapePhantom::CollisionDetail>(struct hkpSimpleShapePhantom::CollisionDetail *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UCollisionDetail@hkpSimpleShapePhantom@@@hkArrayUtil@@SAXPAUCollisionDetail@hkpSimpleShapePhantom@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkpSimpleShapePhantom::CollisionDetail, class hkpSimpleShapePhantom::OrderByUid>(struct hkpSimpleShapePhantom::CollisionDetail *, int, int, class hkpSimpleShapePhantom::OrderByUid)
//{
//    mangled_ppc("??$quickSortRecursive@UCollisionDetail@hkpSimpleShapePhantom@@VOrderByUid@2@@hkAlgorithm@@YAXPAUCollisionDetail@hkpSimpleShapePhantom@@HHVOrderByUid@2@@Z");
//};

//public: class hkBool hkpSimpleShapePhantom::OrderByUid::operator()(struct hkpSimpleShapePhantom::CollisionDetail const &, struct hkpSimpleShapePhantom::CollisionDetail const &)
//{
//    mangled_ppc("??ROrderByUid@hkpSimpleShapePhantom@@QAA?AVhkBool@@ABUCollisionDetail@1@0@Z");
//};

//public: void hkTransform::setRotation(class hkRotation const &)
//{
//    mangled_ppc("?setRotation@hkTransform@@QAAXABVhkRotation@@@Z");
//};

//public: int hkArrayBase<class hkpPhantomOverlapListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpPhantomOverlapListener@@@@QBAHXZ");
//};

//public: static void hkArrayBase<class hkpPhantomOverlapListener *>::copy(class hkpPhantomOverlapListener **, class hkpPhantomOverlapListener *const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@PAVhkpPhantomOverlapListener@@@@SAXPAPAVhkpPhantomOverlapListener@@PBQAV2@H@Z");
//};

//public: static void hkArrayBase<class hkpPhantomListener *>::copy(class hkpPhantomListener **, class hkpPhantomListener *const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@PAVhkpPhantomListener@@@@SAXPAPAVhkpPhantomListener@@PBQAV2@H@Z");
//};

