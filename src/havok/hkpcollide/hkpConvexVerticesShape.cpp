/* ---------- headers */

#include "havok\hkpcollide\hkpConvexVerticesShape.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpConvexVerticesShape::`RTTI Complete Object Locator'; // "??_R4hkpConvexVerticesShape@@6B@"
// hkpConvexVerticesShape::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpConvexVerticesShape@@8"
// hkpConvexVerticesShape::`RTTI Base Class Array'; // "??_R2hkpConvexVerticesShape@@8"
// hkpConvexVerticesShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpConvexVerticesShape@@8"
// class hkpConvexVerticesShape::`RTTI Type Descriptor'; // "??_R0?AVhkpConvexVerticesShape@@@8"

// public: hkpConvexVerticesShape::hkpConvexVerticesShape(float);
// public: hkpConvexVerticesShape::hkpConvexVerticesShape(struct hkStridedVertices const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, float);
// public: hkpConvexVerticesShape::hkpConvexVerticesShape(struct hkpConvexVerticesShape::FourVectors *, int, class hkVector4*, int, class hkAabb const &, float);
// public: hkpConvexVerticesShape::hkpConvexVerticesShape(class hkFinishLoadedObjectFlag);
// public: virtual hkpConvexVerticesShape::~hkpConvexVerticesShape(void);
// public: void hkpConvexVerticesShape::setConnectivity(class hkpConvexVerticesConnectivity const *, bool);
// public: void hkpConvexVerticesShape::getOriginalVertices(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: void hkpConvexVerticesShape::copyVertexData(float const *, int, int);
// public: virtual void hkpConvexVerticesShape::getFirstVertex(class hkVector4&) const;
// public: virtual int hkpConvexVerticesShape::getNumCollisionSpheresImpl(void) const;
// public: virtual class hkSphere const * hkpConvexVerticesShape::getCollisionSpheresImpl(class hkSphere *) const;
// public: virtual void hkpConvexVerticesShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: virtual void hkpConvexVerticesShape::getSupportingVertexImpl(class hkVector4const &, class hkpCdVertex &) const;
// public: virtual void hkpConvexVerticesShape::convertVertexIdsToVerticesImpl(unsigned short const *, int, class hkpCdVertex *) const;
// public: virtual void hkpConvexVerticesShape::getCentreImpl(class hkVector4&) const;
// public: virtual class hkBool hkpConvexVerticesShape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const;
// class hkVector4const & ConvexVerticesShape_FetchVectorFromPpuArray(class hkVector4const *, int);
// public: class hkArray<class hkVector4, struct hkContainerHeapAllocator> const & hkpConvexVerticesShape::getPlaneEquations(void) const;
// public: void hkpConvexVerticesShape::setPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &);
// public: void hkpConvexVerticesShape::transformVerticesAndPlaneEquations(class hkTransform const &);
// protected: void hkpConvexVerticesShape::sortPlanes(void);
// merged_83F6DCE8;
// class hkSimdReal const operator+(class hkSimdReal, class hkSimdReal);
// public: class hkSimdReal hkVector4::dot4xyz1(class hkVector4const &) const;
// public: static class hkVector4 hkGeometryProcessing::planeEquation(class hkVector4const &, class hkVector4const &, class hkVector4const &, bool);
// public: static class hkVector4 hkGeometryProcessing::crossOffset(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: int hkpConvexVerticesConnectivity::getNumFaces(void) const;
// void hkVector4Util::transformPlaneEquations(class hkTransform const &, class hkVector4const *, int, class hkVector4*);
// public: enum hkResult hkVector4::normalize3IfNotZero(void);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::pushBack(class hkVector4const &);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::insertAt(int, class hkVector4const *, int);
// public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(struct hkpConvexVerticesShape::FourVectors *, int, int);
// public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: void hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::setSize(int);
// public: hkLocalArray<class hkVector4>::hkLocalArray<class hkVector4>(int);
// public: hkLocalArray<class hkVector4>::~hkLocalArray<class hkVector4>(void);
// public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(class hkFinishLoadedObjectFlag);
// public: class hkBool hkLocalArray<class hkVector4>::wasReallocated(void) const;
// public: unsigned short const & hkArrayBase<unsigned short>::operator[](int) const;
// public: unsigned short const * hkArrayBase<unsigned short>::begin(void) const;
// public: class hkBool hkArrayBase<class hkVector4>::isEmpty(void) const;
// public: void hkArrayBase<class hkVector4>::removeAt(int);
// public: void hkArrayBase<class hkVector4>::_pushBack(class hkMemoryAllocator &, class hkVector4const &);
// public: void hkArrayBase<class hkVector4>::pushBackUnchecked(class hkVector4const &);
// public: void hkArrayBase<class hkVector4>::_insertAt(class hkMemoryAllocator &, int, class hkVector4const *, int);
// public: class hkVector4* hkArrayBase<class hkVector4>::begin(void);
// public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(struct hkpConvexVerticesShape::FourVectors *, int, int);
// public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(void);
// public: struct hkpConvexVerticesShape::FourVectors & hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::operator[](int);
// public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkpConvexVerticesShape::FourVectors const * hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::begin(void) const;
// public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::~hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::~hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(void);
// public: void hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<class hkVector4>::_spliceInto(class hkMemoryAllocator &, int, int, class hkVector4const *, int);
// void hkMemUtil::memCpyOneAligned<16, 16>(void *, void const *);
// public: static void hkArrayUtil::constructWithCopy<class hkVector4>(class hkVector4*, int, class hkVector4const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkpConvexVerticesShape::FourVectors>(struct hkpConvexVerticesShape::FourVectors *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpConvexVerticesShape::FourVectors>(struct hkpConvexVerticesShape::FourVectors *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithArray<class hkVector4>(class hkVector4*, int, class hkVector4const *, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::clear(void);

//public: hkpConvexVerticesShape::hkpConvexVerticesShape(float)
//{
//    mangled_ppc("??0hkpConvexVerticesShape@@QAA@M@Z");
//};

//public: hkpConvexVerticesShape::hkpConvexVerticesShape(struct hkStridedVertices const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, float)
//{
//    mangled_ppc("??0hkpConvexVerticesShape@@QAA@ABUhkStridedVertices@@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: hkpConvexVerticesShape::hkpConvexVerticesShape(struct hkpConvexVerticesShape::FourVectors *, int, class hkVector4*, int, class hkAabb const &, float)
//{
//    mangled_ppc("??0hkpConvexVerticesShape@@QAA@PAUFourVectors@0@HPAVhkVector4@@HABVhkAabb@@M@Z");
//};

//public: hkpConvexVerticesShape::hkpConvexVerticesShape(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpConvexVerticesShape@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual hkpConvexVerticesShape::~hkpConvexVerticesShape(void)
//{
//    mangled_ppc("??1hkpConvexVerticesShape@@UAA@XZ");
//};

//public: void hkpConvexVerticesShape::setConnectivity(class hkpConvexVerticesConnectivity const *, bool)
//{
//    mangled_ppc("?setConnectivity@hkpConvexVerticesShape@@QAAXPBVhkpConvexVerticesConnectivity@@_N@Z");
//};

//public: void hkpConvexVerticesShape::getOriginalVertices(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getOriginalVertices@hkpConvexVerticesShape@@QBAXAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkpConvexVerticesShape::copyVertexData(float const *, int, int)
//{
//    mangled_ppc("?copyVertexData@hkpConvexVerticesShape@@QAAXPBMHH@Z");
//};

//public: virtual void hkpConvexVerticesShape::getFirstVertex(class hkVector4&) const
//{
//    mangled_ppc("?getFirstVertex@hkpConvexVerticesShape@@UBAXAAVhkVector4@@@Z");
//};

//public: virtual int hkpConvexVerticesShape::getNumCollisionSpheresImpl(void) const
//{
//    mangled_ppc("?getNumCollisionSpheresImpl@hkpConvexVerticesShape@@UBAHXZ");
//};

//public: virtual class hkSphere const * hkpConvexVerticesShape::getCollisionSpheresImpl(class hkSphere *) const
//{
//    mangled_ppc("?getCollisionSpheresImpl@hkpConvexVerticesShape@@UBAPBVhkSphere@@PAV2@@Z");
//};

//public: virtual void hkpConvexVerticesShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@hkpConvexVerticesShape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual void hkpConvexVerticesShape::getSupportingVertexImpl(class hkVector4const &, class hkpCdVertex &) const
//{
//    mangled_ppc("?getSupportingVertexImpl@hkpConvexVerticesShape@@UBAXABVhkVector4@@AAVhkpCdVertex@@@Z");
//};

//public: virtual void hkpConvexVerticesShape::convertVertexIdsToVerticesImpl(unsigned short const *, int, class hkpCdVertex *) const
//{
//    mangled_ppc("?convertVertexIdsToVerticesImpl@hkpConvexVerticesShape@@UBAXPBGHPAVhkpCdVertex@@@Z");
//};

//public: virtual void hkpConvexVerticesShape::getCentreImpl(class hkVector4&) const
//{
//    mangled_ppc("?getCentreImpl@hkpConvexVerticesShape@@UBAXAAVhkVector4@@@Z");
//};

//public: virtual class hkBool hkpConvexVerticesShape::castRayImpl(struct hkpShapeRayCastInput const &, struct hkpShapeRayCastOutput &) const
//{
//    mangled_ppc("?castRayImpl@hkpConvexVerticesShape@@UBA?AVhkBool@@ABUhkpShapeRayCastInput@@AAUhkpShapeRayCastOutput@@@Z");
//};

//class hkVector4const & ConvexVerticesShape_FetchVectorFromPpuArray(class hkVector4const *, int)
//{
//    mangled_ppc("?ConvexVerticesShape_FetchVectorFromPpuArray@@YAABVhkVector4@@PBV1@H@Z");
//};

//public: class hkArray<class hkVector4, struct hkContainerHeapAllocator> const & hkpConvexVerticesShape::getPlaneEquations(void) const
//{
//    mangled_ppc("?getPlaneEquations@hkpConvexVerticesShape@@QBAABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: void hkpConvexVerticesShape::setPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?setPlaneEquations@hkpConvexVerticesShape@@QAAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkpConvexVerticesShape::transformVerticesAndPlaneEquations(class hkTransform const &)
//{
//    mangled_ppc("?transformVerticesAndPlaneEquations@hkpConvexVerticesShape@@QAAXABVhkTransform@@@Z");
//};

//protected: void hkpConvexVerticesShape::sortPlanes(void)
//{
//    mangled_ppc("?sortPlanes@hkpConvexVerticesShape@@IAAXXZ");
//};

//merged_83F6DCE8
//{
//    mangled_ppc("merged_83F6DCE8");
//};

//class hkSimdReal const operator+(class hkSimdReal, class hkSimdReal)
//{
//    mangled_ppc("??H@YA?BVhkSimdReal@@V0@0@Z");
//};

//public: class hkSimdReal hkVector4::dot4xyz1(class hkVector4const &) const
//{
//    mangled_ppc("?dot4xyz1@hkVector4@@QBA?AVhkSimdReal@@ABV1@@Z");
//};

//public: static class hkVector4 hkGeometryProcessing::planeEquation(class hkVector4const &, class hkVector4const &, class hkVector4const &, bool)
//{
//    mangled_ppc("?planeEquation@hkGeometryProcessing@@SA?AVhkVector4@@ABV2@00_N@Z");
//};

//public: static class hkVector4 hkGeometryProcessing::crossOffset(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?crossOffset@hkGeometryProcessing@@SA?AVhkVector4@@ABV2@00@Z");
//};

//public: int hkpConvexVerticesConnectivity::getNumFaces(void) const
//{
//    mangled_ppc("?getNumFaces@hkpConvexVerticesConnectivity@@QBAHXZ");
//};

//void hkVector4Util::transformPlaneEquations(class hkTransform const &, class hkVector4const *, int, class hkVector4*)
//{
//    mangled_ppc("?transformPlaneEquations@hkVector4Util@@YAXABVhkTransform@@PBVhkVector4@@HPAV3@@Z");
//};

//public: enum hkResult hkVector4::normalize3IfNotZero(void)
//{
//    mangled_ppc("?normalize3IfNotZero@hkVector4@@QAA?AW4hkResult@@XZ");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::pushBack(class hkVector4const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXABVhkVector4@@@Z");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::insertAt(int, class hkVector4const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXHPBVhkVector4@@H@Z");
//};

//public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UFourVectors@hkpConvexVerticesShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(struct hkpConvexVerticesShape::FourVectors *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UFourVectors@hkpConvexVerticesShape@@UhkContainerHeapAllocator@@@@QAA@PAUFourVectors@hkpConvexVerticesShape@@HH@Z");
//};

//public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UFourVectors@hkpConvexVerticesShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UFourVectors@hkpConvexVerticesShape@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<class hkVector4>::hkLocalArray<class hkVector4>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@VhkVector4@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkVector4>::~hkLocalArray<class hkVector4>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@VhkVector4@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: class hkBool hkLocalArray<class hkVector4>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@VhkVector4@@@@QBA?AVhkBool@@XZ");
//};

//public: unsigned short const & hkArrayBase<unsigned short>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@G@@QBAABGH@Z");
//};

//public: unsigned short const * hkArrayBase<unsigned short>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@G@@QBAPBGXZ");
//};

//public: class hkBool hkArrayBase<class hkVector4>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkArrayBase@VhkVector4@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkArrayBase<class hkVector4>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@VhkVector4@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkVector4>::_pushBack(class hkMemoryAllocator &, class hkVector4const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@ABVhkVector4@@@Z");
//};

//public: void hkArrayBase<class hkVector4>::pushBackUnchecked(class hkVector4const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@VhkVector4@@@@QAAXABVhkVector4@@@Z");
//};

//public: void hkArrayBase<class hkVector4>::_insertAt(class hkMemoryAllocator &, int, class hkVector4const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@HPBVhkVector4@@H@Z");
//};

//public: class hkVector4* hkArrayBase<class hkVector4>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkVector4@@@@QAAPAVhkVector4@@XZ");
//};

//public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(struct hkpConvexVerticesShape::FourVectors *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAA@PAUFourVectors@hkpConvexVerticesShape@@HH@Z");
//};

//public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAA@XZ");
//};

//public: struct hkpConvexVerticesShape::FourVectors & hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAAAAUFourVectors@hkpConvexVerticesShape@@H@Z");
//};

//public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpConvexVerticesShape::FourVectors const * hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QBAPBUFourVectors@hkpConvexVerticesShape@@XZ");
//};

//public: hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::~hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UFourVectors@hkpConvexVerticesShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::~hkArrayBase<struct hkpConvexVerticesShape::FourVectors>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpConvexVerticesShape::FourVectors, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UFourVectors@hkpConvexVerticesShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkVector4>::_spliceInto(class hkMemoryAllocator &, int, int, class hkVector4const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@HHPBVhkVector4@@H@Z");
//};

//void hkMemUtil::memCpyOneAligned<16, 16>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$0BA@$0BA@@hkMemUtil@@YAXPAXPBX@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkVector4>(class hkVector4*, int, class hkVector4const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@VhkVector4@@@hkArrayUtil@@SAXPAVhkVector4@@HABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpConvexVerticesShape::FourVectors>(struct hkpConvexVerticesShape::FourVectors *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UFourVectors@hkpConvexVerticesShape@@@hkArrayUtil@@SAXPAUFourVectors@hkpConvexVerticesShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpConvexVerticesShape::FourVectors>(struct hkpConvexVerticesShape::FourVectors *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UFourVectors@hkpConvexVerticesShape@@@hkArrayUtil@@SAXPAUFourVectors@hkpConvexVerticesShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<class hkVector4>(class hkVector4*, int, class hkVector4const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@VhkVector4@@@hkArrayUtil@@SAXPAVhkVector4@@HPBV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAAXXZ");
//};

