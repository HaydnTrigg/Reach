/* ---------- headers */

#include "havok\hkpcollide\hkpListShape.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpListShape::`vftable'{for `hkpShapeContainer'}; // "??_7hkpListShape@@6BhkpShapeContainer@@@"
// const hkpListShape::`vftable'{for `hkpShape'}; // "??_7hkpListShape@@6BhkpShape@@@"
// const hkpListShape::`RTTI Complete Object Locator'{for `hkpShape'}; // "??_R4hkpListShape@@6BhkpShape@@@"
// hkpListShape::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpListShape@@8"
// hkpListShape::`RTTI Base Class Array'; // "??_R2hkpListShape@@8"
// hkpListShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpListShape@@8"
// const hkpListShape::`RTTI Complete Object Locator'{for `hkpShapeContainer'}; // "??_R4hkpListShape@@6BhkpShapeContainer@@@"
// class hkpListShape::`RTTI Type Descriptor'; // "??_R0?AVhkpListShape@@@8"

// public: hkpListShape::hkpListShape(class hkpShape const *const *, int, enum hkpShapeContainer::ReferencePolicy);
// public: hkpListShape::hkpListShape(class hkFinishLoadedObjectFlag);
// public: virtual hkpListShape::~hkpListShape(void);
// protected: void hkpListShape::setShapes(class hkpShape const *const *, int, unsigned int const *, enum hkpShapeContainer::ReferencePolicy);
// public: void hkpListShape::disableChild(unsigned int);
// public: void hkpListShape::enableChild(unsigned int);
// public: void hkpListShape::setEnabledChildren(class hkBitField const &);
// public: virtual class hkBool hkpListShape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// public: virtual void hkpListShape::castRayWithCollectorImpl(struct hkpShapeRayCastInput const &, class hkpCdBody const &, class hkpRayHitCollector &) const;
// public: virtual void hkpListShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: void hkpListShape::recalcAabbExtents(void);
// public: void hkpListShape::recalcAabbExtents(class hkAabb &);
// public: virtual class hkpShape const * hkpListShape::getChildShape(unsigned int, char (&)[512]) const;
// public: virtual unsigned int hkpListShape::getCollisionFilterInfo(unsigned int) const;
// public: void hkpListShape::setCollisionFilterInfo(unsigned int, unsigned int);
// public: virtual void hkpListShape::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual int hkpListShape::calcSizeForSpu(struct hkpShape::CalcSizeForSpuInput const &, int) const;
// merged_83F9D4E0;
// public: int hkBitField::getNumWords(void) const;
// public: unsigned int hkBitField::getWord(int) const;
// public: unsigned int const * hkBitField::getWords(void) const;
// public: int hkBitField::getSize(void) const;
// public: int hkVector4Comparison::allAreSet(void) const;
// public: hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: void hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArrayBase<struct hkpListShape::ChildInfo>::hkArrayBase<struct hkpListShape::ChildInfo>(class hkFinishLoadedObjectFlag);
// public: unsigned int const & hkArrayBase<unsigned int>::operator[](int) const;
// public: unsigned int const * hkArrayBase<unsigned int>::begin(void) const;
// public: hkArrayBase<struct hkpListShape::ChildInfo>::hkArrayBase<struct hkpListShape::ChildInfo>(void);
// public: void hkArrayBase<struct hkpListShape::ChildInfo>::_reserve(class hkMemoryAllocator &, int);
// public: void hkArrayBase<struct hkpListShape::ChildInfo>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpListShape::ChildInfo>::~hkArrayBase<struct hkpListShape::ChildInfo>(void);
// public: static void hkReferencedObject::addReferences<class hkpShape>(class hkpShape const *const *, int, int);
// public: void hkStatisticsCollector::addArray<struct hkpListShape::ChildInfo>(char const *, class hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator> const &);
// public: void hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkpListShape::ChildInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpListShape::ChildInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: struct hkpListShape::ChildInfo const * hkArrayBase<struct hkpListShape::ChildInfo>::begin(void) const;
// public: static void hkArrayUtil::destruct<struct hkpListShape::ChildInfo>(struct hkpListShape::ChildInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpListShape::ChildInfo>(struct hkpListShape::ChildInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkpListShape::ChildInfo>::clear(void);
// [thunk]: public: virtual void * hkpListShape::`vector deleting destructor'(unsigned int);
// public: class hkReferencedObject const * hkpShape::iMustBeDerivedFromReferencedObject(void) const;

//public: hkpListShape::hkpListShape(class hkpShape const *const *, int, enum hkpShapeContainer::ReferencePolicy)
//{
//    mangled_ppc("??0hkpListShape@@QAA@PBQBVhkpShape@@HW4ReferencePolicy@hkpShapeContainer@@@Z");
//};

//public: hkpListShape::hkpListShape(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpListShape@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual hkpListShape::~hkpListShape(void)
//{
//    mangled_ppc("??1hkpListShape@@UAA@XZ");
//};

//protected: void hkpListShape::setShapes(class hkpShape const *const *, int, unsigned int const *, enum hkpShapeContainer::ReferencePolicy)
//{
//    mangled_ppc("?setShapes@hkpListShape@@IAAXPBQBVhkpShape@@HPBIW4ReferencePolicy@hkpShapeContainer@@@Z");
//};

//public: void hkpListShape::disableChild(unsigned int)
//{
//    mangled_ppc("?disableChild@hkpListShape@@QAAXI@Z");
//};

//public: void hkpListShape::enableChild(unsigned int)
//{
//    mangled_ppc("?enableChild@hkpListShape@@QAAXI@Z");
//};

//public: void hkpListShape::setEnabledChildren(class hkBitField const &)
//{
//    mangled_ppc("?setEnabledChildren@hkpListShape@@QAAXABVhkBitField@@@Z");
//};

//public: virtual class hkBool hkpListShape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRayImpl@hkpListShape@@UBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//public: virtual void hkpListShape::castRayWithCollectorImpl(struct hkpShapeRayCastInput const &, class hkpCdBody const &, class hkpRayHitCollector &) const
//{
//    mangled_ppc("?castRayWithCollectorImpl@hkpListShape@@UBAXABUhkpShapeRayCastInput@@ABVhkpCdBody@@AAVhkpRayHitCollector@@@Z");
//};

//public: virtual void hkpListShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@hkpListShape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: void hkpListShape::recalcAabbExtents(void)
//{
//    mangled_ppc("?recalcAabbExtents@hkpListShape@@QAAXXZ");
//};

//public: void hkpListShape::recalcAabbExtents(class hkAabb &)
//{
//    mangled_ppc("?recalcAabbExtents@hkpListShape@@QAAXAAVhkAabb@@@Z");
//};

//public: virtual class hkpShape const * hkpListShape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@hkpListShape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//public: virtual unsigned int hkpListShape::getCollisionFilterInfo(unsigned int) const
//{
//    mangled_ppc("?getCollisionFilterInfo@hkpListShape@@UBAII@Z");
//};

//public: void hkpListShape::setCollisionFilterInfo(unsigned int, unsigned int)
//{
//    mangled_ppc("?setCollisionFilterInfo@hkpListShape@@QAAXII@Z");
//};

//public: virtual void hkpListShape::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpListShape@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual int hkpListShape::calcSizeForSpu(struct hkpShape::CalcSizeForSpuInput const &, int) const
//{
//    mangled_ppc("?calcSizeForSpu@hkpListShape@@UBAHABUCalcSizeForSpuInput@hkpShape@@H@Z");
//};

//merged_83F9D4E0
//{
//    mangled_ppc("merged_83F9D4E0");
//};

//public: int hkBitField::getNumWords(void) const
//{
//    mangled_ppc("?getNumWords@hkBitField@@QBAHXZ");
//};

//public: unsigned int hkBitField::getWord(int) const
//{
//    mangled_ppc("?getWord@hkBitField@@QBAIH@Z");
//};

//public: unsigned int const * hkBitField::getWords(void) const
//{
//    mangled_ppc("?getWords@hkBitField@@QBAPBIXZ");
//};

//public: int hkBitField::getSize(void) const
//{
//    mangled_ppc("?getSize@hkBitField@@QBAHXZ");
//};

//public: int hkVector4Comparison::allAreSet(void) const
//{
//    mangled_ppc("?allAreSet@hkVector4Comparison@@QBAHXZ");
//};

//public: hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArrayBase<struct hkpListShape::ChildInfo>::hkArrayBase<struct hkpListShape::ChildInfo>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UChildInfo@hkpListShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: unsigned int const & hkArrayBase<unsigned int>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@I@@QBAABIH@Z");
//};

//public: unsigned int const * hkArrayBase<unsigned int>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@I@@QBAPBIXZ");
//};

//public: hkArrayBase<struct hkpListShape::ChildInfo>::hkArrayBase<struct hkpListShape::ChildInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UChildInfo@hkpListShape@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpListShape::ChildInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UChildInfo@hkpListShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<struct hkpListShape::ChildInfo>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UChildInfo@hkpListShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpListShape::ChildInfo>::~hkArrayBase<struct hkpListShape::ChildInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UChildInfo@hkpListShape@@@@QAA@XZ");
//};

//public: static void hkReferencedObject::addReferences<class hkpShape>(class hkpShape const *const *, int, int)
//{
//    mangled_ppc("??$addReferences@VhkpShape@@@hkReferencedObject@@SAXPBQBVhkpShape@@HH@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkpListShape::ChildInfo>(char const *, class hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UChildInfo@hkpListShape@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkArray<struct hkpListShape::ChildInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UChildInfo@hkpListShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkpListShape::ChildInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UChildInfo@hkpListShape@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpListShape::ChildInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UChildInfo@hkpListShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpListShape::ChildInfo const * hkArrayBase<struct hkpListShape::ChildInfo>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UChildInfo@hkpListShape@@@@QBAPBUChildInfo@hkpListShape@@XZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpListShape::ChildInfo>(struct hkpListShape::ChildInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UChildInfo@hkpListShape@@@hkArrayUtil@@SAXPAUChildInfo@hkpListShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpListShape::ChildInfo>(struct hkpListShape::ChildInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UChildInfo@hkpListShape@@@hkArrayUtil@@SAXPAUChildInfo@hkpListShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkpListShape::ChildInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UChildInfo@hkpListShape@@@@QAAXXZ");
//};

//[thunk]: public: virtual void * hkpListShape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpListShape@@WBA@AAPAXI@Z");
//};

//public: class hkReferencedObject const * hkpShape::iMustBeDerivedFromReferencedObject(void) const
//{
//    mangled_ppc("?iMustBeDerivedFromReferencedObject@hkpShape@@QBAPBVhkReferencedObject@@XZ");
//};

