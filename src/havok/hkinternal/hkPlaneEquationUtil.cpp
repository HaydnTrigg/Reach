/* ---------- headers */

#include "havok\hkinternal\hkPlaneEquationUtil.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum hkResult hkPlaneEquationUtil::findTriPlaneIntersectionPoint(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, int, struct hkPlaneEquationUtil::IntersectionPoint &);
// public: static enum hkResult hkPlaneEquationUtil::findPlanarIntersections(class hkVector4const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, struct hkPlaneEquationUtil::IntersectionPoint &, struct hkPlaneEquationUtil::IntersectionPoint &);
// public: static class hkBool hkPlaneEquationUtil::isNextIntersectionPoint(class hkVector4const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, class hkVector4&, class hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator> &);
// public: static enum hkResult hkPlaneEquationUtil::getStartingPoint(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int &, int &, struct hkPlaneEquationUtil::IntersectionPoint &, struct hkPlaneEquationUtil::IntersectionPoint &);
// public: static enum hkResult hkPlaneEquationUtil::getConvexVerticesFromPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &);
// public: static void hkPlaneEquationUtil::calculateIntersectionLine(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, int, class hkVector4&);
// public: static void hkPlaneEquationUtil::walkAlongEdge(struct hkPlaneEquationUtil::VisitedEdge &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<struct hkPlaneEquationUtil::VisitedEdge, struct hkContainerHeapAllocator> &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &);
// private: static void hkPlaneEquationUtil::weldXsortedVertices(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, int &);
// public: void hkPlaneEquationUtil::IntersectionPoint::sort(void);
// public: struct hkPlaneEquationUtil::IntersectionPoint & hkPlaneEquationUtil::IntersectionPoint::operator=(struct hkPlaneEquationUtil::IntersectionPoint const &);
// public: hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::pushBack(struct hkPlaneEquationUtil::IntersectionPoint const &);
// public: hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::pushBack(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &);
// public: void hkArray<struct hkPlaneEquationUtil::VisitedEdge, struct hkContainerHeapAllocator>::pushBack(struct hkPlaneEquationUtil::VisitedEdge const &);
// public: hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>(void);
// public: struct hkPlaneEquationUtil::IntersectionPoint & hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::operator[](int);
// public: int hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::getSize(void) const;
// public: void hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::clear(void);
// public: void hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::_pushBack(class hkMemoryAllocator &, struct hkPlaneEquationUtil::IntersectionPoint const &);
// public: hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::~hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::~hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>(void);
// public: int hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::indexOf(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &, int, int) const;
// public: class hkBool hkPlaneEquationUtil::hkpPlaneEqnIndexPair::operator==(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &);
// public: void hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::_pushBack(class hkMemoryAllocator &, struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &);
// public: hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::~hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>(int);
// public: int hkArrayBase<struct hkPlaneEquationUtil::VisitedEdge>::indexOf(struct hkPlaneEquationUtil::VisitedEdge const &, int, int) const;
// public: class hkBool hkPlaneEquationUtil::VisitedEdge::operator==(struct hkPlaneEquationUtil::VisitedEdge const &);
// public: void hkArrayBase<struct hkPlaneEquationUtil::VisitedEdge>::_pushBack(class hkMemoryAllocator &, struct hkPlaneEquationUtil::VisitedEdge const &);
// public: void hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, int);
// public: void hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::getCapacity(void) const;
// public: void hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkPlaneEquationUtil::IntersectionPoint>(struct hkPlaneEquationUtil::IntersectionPoint *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkPlaneEquationUtil::IntersectionPoint>(struct hkPlaneEquationUtil::IntersectionPoint *, int, struct hkPlaneEquationUtil::IntersectionPoint const &, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, int);
// public: hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::~hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(void);
// public: int hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::getCapacity(void) const;
// public: void hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkPlaneEquationUtil::VisitedEdge>::getCapacity(void) const;
// public: static void hkArrayUtil::constructWithCopy<struct hkPlaneEquationUtil::VisitedEdge>(struct hkPlaneEquationUtil::VisitedEdge *, int, struct hkPlaneEquationUtil::VisitedEdge const &, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, struct hkTraitBool<0>);

//public: static enum hkResult hkPlaneEquationUtil::findTriPlaneIntersectionPoint(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, int, struct hkPlaneEquationUtil::IntersectionPoint &)
//{
//    mangled_ppc("?findTriPlaneIntersectionPoint@hkPlaneEquationUtil@@SA?AW4hkResult@@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@HHHAAUIntersectionPoint@1@@Z");
//};

//public: static enum hkResult hkPlaneEquationUtil::findPlanarIntersections(class hkVector4const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, struct hkPlaneEquationUtil::IntersectionPoint &, struct hkPlaneEquationUtil::IntersectionPoint &)
//{
//    mangled_ppc("?findPlanarIntersections@hkPlaneEquationUtil@@SA?AW4hkResult@@ABVhkVector4@@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@HHAAUIntersectionPoint@1@2@Z");
//};

//public: static class hkBool hkPlaneEquationUtil::isNextIntersectionPoint(class hkVector4const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, class hkVector4&, class hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?isNextIntersectionPoint@hkPlaneEquationUtil@@SA?AVhkBool@@ABVhkVector4@@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@HHAAV3@AAV?$hkArray@UIntersectionPoint@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static enum hkResult hkPlaneEquationUtil::getStartingPoint(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int &, int &, struct hkPlaneEquationUtil::IntersectionPoint &, struct hkPlaneEquationUtil::IntersectionPoint &)
//{
//    mangled_ppc("?getStartingPoint@hkPlaneEquationUtil@@SA?AW4hkResult@@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAH1AAUIntersectionPoint@1@2@Z");
//};

//public: static enum hkResult hkPlaneEquationUtil::getConvexVerticesFromPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getConvexVerticesFromPlaneEquations@hkPlaneEquationUtil@@SA?AW4hkResult@@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV3@@Z");
//};

//public: static void hkPlaneEquationUtil::calculateIntersectionLine(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, int, int, int, class hkVector4&)
//{
//    mangled_ppc("?calculateIntersectionLine@hkPlaneEquationUtil@@SAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@HHHAAVhkVector4@@@Z");
//};

//public: static void hkPlaneEquationUtil::walkAlongEdge(struct hkPlaneEquationUtil::VisitedEdge &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<struct hkPlaneEquationUtil::VisitedEdge, struct hkContainerHeapAllocator> &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?walkAlongEdge@hkPlaneEquationUtil@@SAXAAUVisitedEdge@1@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV?$hkArray@UVisitedEdge@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@AAV3@@Z");
//};

//private: static void hkPlaneEquationUtil::weldXsortedVertices(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, int &)
//{
//    mangled_ppc("?weldXsortedVertices@hkPlaneEquationUtil@@CAXMAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAH@Z");
//};

//public: void hkPlaneEquationUtil::IntersectionPoint::sort(void)
//{
//    mangled_ppc("?sort@IntersectionPoint@hkPlaneEquationUtil@@QAAXXZ");
//};

//public: struct hkPlaneEquationUtil::IntersectionPoint & hkPlaneEquationUtil::IntersectionPoint::operator=(struct hkPlaneEquationUtil::IntersectionPoint const &)
//{
//    mangled_ppc("??4IntersectionPoint@hkPlaneEquationUtil@@QAAAAU01@ABU01@@Z");
//};

//public: hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UIntersectionPoint@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::pushBack(struct hkPlaneEquationUtil::IntersectionPoint const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UIntersectionPoint@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAAXABUIntersectionPoint@hkPlaneEquationUtil@@@Z");
//};

//public: hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::pushBack(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAAXABUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@Z");
//};

//public: void hkArray<struct hkPlaneEquationUtil::VisitedEdge, struct hkContainerHeapAllocator>::pushBack(struct hkPlaneEquationUtil::VisitedEdge const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UVisitedEdge@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAAXABUVisitedEdge@hkPlaneEquationUtil@@@Z");
//};

//public: hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QAA@XZ");
//};

//public: struct hkPlaneEquationUtil::IntersectionPoint & hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QAAAAUIntersectionPoint@hkPlaneEquationUtil@@H@Z");
//};

//public: int hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::_pushBack(class hkMemoryAllocator &, struct hkPlaneEquationUtil::IntersectionPoint const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QAAXAAVhkMemoryAllocator@@ABUIntersectionPoint@hkPlaneEquationUtil@@@Z");
//};

//public: hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::~hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UIntersectionPoint@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::~hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::indexOf(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QBAHABUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@HH@Z");
//};

//public: class hkBool hkPlaneEquationUtil::hkpPlaneEqnIndexPair::operator==(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &)
//{
//    mangled_ppc("??8hkpPlaneEqnIndexPair@hkPlaneEquationUtil@@QAA?AVhkBool@@ABU01@@Z");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::_pushBack(class hkMemoryAllocator &, struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QAAXAAVhkMemoryAllocator@@ABUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@Z");
//};

//public: hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::~hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: int hkArrayBase<struct hkPlaneEquationUtil::VisitedEdge>::indexOf(struct hkPlaneEquationUtil::VisitedEdge const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@UVisitedEdge@hkPlaneEquationUtil@@@@QBAHABUVisitedEdge@hkPlaneEquationUtil@@HH@Z");
//};

//public: class hkBool hkPlaneEquationUtil::VisitedEdge::operator==(struct hkPlaneEquationUtil::VisitedEdge const &)
//{
//    mangled_ppc("??8VisitedEdge@hkPlaneEquationUtil@@QAA?AVhkBool@@ABU01@@Z");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::VisitedEdge>::_pushBack(class hkMemoryAllocator &, struct hkPlaneEquationUtil::VisitedEdge const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UVisitedEdge@hkPlaneEquationUtil@@@@QAAXAAVhkMemoryAllocator@@ABUVisitedEdge@hkPlaneEquationUtil@@@Z");
//};

//public: void hkArray<struct hkPlaneEquationUtil::IntersectionPoint, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UIntersectionPoint@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAA@PAUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@HH@Z");
//};

//public: void hkArray<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::IntersectionPoint>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UIntersectionPoint@hkPlaneEquationUtil@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkPlaneEquationUtil::IntersectionPoint>(struct hkPlaneEquationUtil::IntersectionPoint *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UIntersectionPoint@hkPlaneEquationUtil@@@hkArrayUtil@@SAXPAUIntersectionPoint@hkPlaneEquationUtil@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkPlaneEquationUtil::IntersectionPoint>(struct hkPlaneEquationUtil::IntersectionPoint *, int, struct hkPlaneEquationUtil::IntersectionPoint const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UIntersectionPoint@hkPlaneEquationUtil@@@hkArrayUtil@@SAXPAUIntersectionPoint@hkPlaneEquationUtil@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QAA@PAUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@HH@Z");
//};

//public: hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::~hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@hkArrayUtil@@SAXPAUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkPlaneEquationUtil::VisitedEdge>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UVisitedEdge@hkPlaneEquationUtil@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkPlaneEquationUtil::VisitedEdge>(struct hkPlaneEquationUtil::VisitedEdge *, int, struct hkPlaneEquationUtil::VisitedEdge const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UVisitedEdge@hkPlaneEquationUtil@@@hkArrayUtil@@SAXPAUVisitedEdge@hkPlaneEquationUtil@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair>(struct hkPlaneEquationUtil::hkpPlaneEqnIndexPair *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@@hkArrayUtil@@SAXPAUhkpPlaneEqnIndexPair@hkPlaneEquationUtil@@HU?$hkTraitBool@$0A@@@@Z");
//};

