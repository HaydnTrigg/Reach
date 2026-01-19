/* ---------- headers */

#include "havok\hkpcollide\hkpMeshWeldingUtility.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class hkBool operator<(struct hkEntry const &, struct hkEntry const &);
// class hkBool operator!=(struct hkEntry const &, struct hkEntry const &);
// class hkBool hkAreTrianglesEqual(class hkpTriangleShape const *, class hkpTriangleShape const *);
// class hkBool hkTrianglesShareEdge(class hkVector4const &, class hkVector4const &, class hkpTriangleShape const *);
// class hkBool hkIsEdgeInTrianglePlane(class hkVector4const &, class hkVector4const &);
// void hkBuildClipPlanesForTriangle(class hkVector4*const, class hkpTriangleShape const *, float);
// class hkBool hkClipEdgeAgainstPlanes(class hkVector4const &, class hkVector4const &, int, class hkVector4const *, float &, float &);
// public: static void hkpMeshWeldingUtility::computeWeldingInfo(class hkpShapeCollection *, class hkpBvTreeShape const *, enum hkpWeldingUtility::WeldingType, bool);
// public: static void hkpMeshWeldingUtility::computeWeldingInfoMultiShape(class hkTransform const &, class hkpShapeCollection *, enum hkpWeldingUtility::WeldingType, class hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator> &, bool);
// public: static enum hkResult hkpMeshWeldingUtility::testWindingConsistency(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkpTriangleShape const *, class hkVector4const &);
// public: static float hkpMeshWeldingUtility::calcAngleForEdge(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: static void hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&);
// public: static unsigned short hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(unsigned short, int, int);
// public: static int hkpMeshWeldingUtility::calcSingleEdgeBitcode(unsigned short, int);
// public: static int hkpMeshWeldingUtility::calcEdgeAngleBitcode(float);
// public: static enum hkResult hkpMeshWeldingUtility::calcWeldingInfoForTriangle(unsigned int, class hkpBvTreeShape const *, enum hkpMeshWeldingUtility::WindingConsistency, unsigned short &);
// public: static class hkBool hkpMeshWeldingUtility::isTriangleWindingValid(unsigned int, class hkpBvTreeShape const *);
// public: static enum hkResult hkpMeshWeldingUtility::calcBitcodeForTriangleEdge(class hkpBvTreeShape const *, class hkpTriangleShape const *, unsigned int, int, enum hkpMeshWeldingUtility::WindingConsistency, short &);
// public: static int hkpMeshWeldingUtility::createSingularVertexArray(class hkVector4const *, class hkVector4const *, int, class hkVector4*, int *const);
// public: static int hkpMeshWeldingUtility::calcEdgeAngleBitcode(class hkVector4const *);
// public: static float hkpMeshWeldingUtility::calcAngleFromVertices(class hkVector4const *, float &, float &);
// public: hkpMeshWeldingUtility::ShapeInfo::ShapeInfo(void);
// public: hkHistogram::hkHistogram(bool);
// public: void hkHistogram::addEntry(float, float, float);
// public: float hkHistogram::evaluate(void);
// float hkMath::clamp(float, float, float);
// public: hkHistogram::~hkHistogram(void);
// float hkMath::atan2fApproximation(float, float);
// public: class hkBool hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>::operator!=(enum hkpShapeCollection::CollectionType) const;
// public: hkArray<struct hkEntry, struct hkContainerHeapAllocator>::hkArray<struct hkEntry, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkEntry, struct hkContainerHeapAllocator>::pushBack(struct hkEntry const &);
// public: void hkArray<struct hkEntry, struct hkContainerHeapAllocator>::insertAt(int, struct hkEntry const &);
// public: hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>::hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>(int);
// public: hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>::~hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>(void);
// public: void hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::pushBack(struct hkpMeshWeldingUtility::ShapeInfo const &);
// public: class hkBool hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>::wasReallocated(void) const;
// public: hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkEntry>::hkArrayBase<struct hkEntry>(void);
// public: struct hkEntry & hkArrayBase<struct hkEntry>::operator[](int);
// public: int hkArrayBase<struct hkEntry>::getSize(void) const;
// public: void hkArrayBase<struct hkEntry>::_pushBack(class hkMemoryAllocator &, struct hkEntry const &);
// public: void hkArrayBase<struct hkEntry>::_insertAt(class hkMemoryAllocator &, int, struct hkEntry const &);
// public: hkArray<struct hkEntry, struct hkContainerHeapAllocator>::~hkArray<struct hkEntry, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkEntry>::~hkArrayBase<struct hkEntry>(void);
// void hkAlgorithm::quickSort<struct hkEntry>(struct hkEntry *, int);
// public: hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>(void);
// public: struct hkpMeshWeldingUtility::ShapeInfo & hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::operator[](int);
// public: int hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::getSize(void) const;
// public: void hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::clear(void);
// public: void hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::_pushBack(class hkMemoryAllocator &, struct hkpMeshWeldingUtility::ShapeInfo const &);
// public: hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::~hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>(void);
// struct hkpMeshWeldingUtility::ShapeInfo * hkAllocateStack<struct hkpMeshWeldingUtility::ShapeInfo>(int, char const *);
// void hkDeallocateStack<struct hkpMeshWeldingUtility::ShapeInfo>(struct hkpMeshWeldingUtility::ShapeInfo *);
// public: void hkArray<struct hkEntry, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkEntry>::getCapacity(void) const;
// public: void hkArrayBase<struct hkEntry>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkEntry>::_insertAt(class hkMemoryAllocator &, int, struct hkEntry const *, int);
// public: static void hkArrayUtil::constructWithCopy<struct hkEntry>(struct hkEntry *, int, struct hkEntry const &, struct hkTraitBool<0>);
// void hkAlgorithm::quickSort<struct hkEntry, class hkAlgorithm::less<struct hkEntry> >(struct hkEntry *, int, class hkAlgorithm::less<struct hkEntry>);
// public: int hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkpMeshWeldingUtility::ShapeInfo>(struct hkpMeshWeldingUtility::ShapeInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkpMeshWeldingUtility::ShapeInfo>(struct hkpMeshWeldingUtility::ShapeInfo *, int, struct hkpMeshWeldingUtility::ShapeInfo const &, struct hkTraitBool<0>);
// public: hkpMeshWeldingUtility::ShapeInfo::ShapeInfo(struct hkpMeshWeldingUtility::ShapeInfo const &);
// public: void hkArrayBase<struct hkEntry>::clear(void);
// public: void hkArrayBase<struct hkEntry>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkEntry const *, int);
// void hkAlgorithm::quickSortRecursive<struct hkEntry, class hkAlgorithm::less<struct hkEntry> >(struct hkEntry *, int, int, class hkAlgorithm::less<struct hkEntry>);
// public: int hkAlgorithm::less<struct hkEntry>::operator()(struct hkEntry const &, struct hkEntry const &);
// public: void hkArrayBase<struct hkEntry>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkEntry>(struct hkEntry *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithArray<struct hkEntry>(struct hkEntry *, int, struct hkEntry const *, struct hkTraitBool<0>);
// public: void hkAabb::includePoint(class hkVector4const &);

//class hkBool operator<(struct hkEntry const &, struct hkEntry const &)
//{
//    mangled_ppc("??M@YA?AVhkBool@@ABUhkEntry@@0@Z");
//};

//class hkBool operator!=(struct hkEntry const &, struct hkEntry const &)
//{
//    mangled_ppc("??9@YA?AVhkBool@@ABUhkEntry@@0@Z");
//};

//class hkBool hkAreTrianglesEqual(class hkpTriangleShape const *, class hkpTriangleShape const *)
//{
//    mangled_ppc("?hkAreTrianglesEqual@@YA?AVhkBool@@PBVhkpTriangleShape@@0@Z");
//};

//class hkBool hkTrianglesShareEdge(class hkVector4const &, class hkVector4const &, class hkpTriangleShape const *)
//{
//    mangled_ppc("?hkTrianglesShareEdge@@YA?AVhkBool@@ABVhkVector4@@0PBVhkpTriangleShape@@@Z");
//};

//class hkBool hkIsEdgeInTrianglePlane(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?hkIsEdgeInTrianglePlane@@YA?AVhkBool@@ABVhkVector4@@0@Z");
//};

//void hkBuildClipPlanesForTriangle(class hkVector4*const, class hkpTriangleShape const *, float)
//{
//    mangled_ppc("?hkBuildClipPlanesForTriangle@@YAXQAVhkVector4@@PBVhkpTriangleShape@@M@Z");
//};

//class hkBool hkClipEdgeAgainstPlanes(class hkVector4const &, class hkVector4const &, int, class hkVector4const *, float &, float &)
//{
//    mangled_ppc("?hkClipEdgeAgainstPlanes@@YA?AVhkBool@@ABVhkVector4@@0HPBV2@AAM2@Z");
//};

//public: static void hkpMeshWeldingUtility::computeWeldingInfo(class hkpShapeCollection *, class hkpBvTreeShape const *, enum hkpWeldingUtility::WeldingType, bool)
//{
//    mangled_ppc("?computeWeldingInfo@hkpMeshWeldingUtility@@SAXPAVhkpShapeCollection@@PBVhkpBvTreeShape@@W4WeldingType@hkpWeldingUtility@@_N@Z");
//};

//public: static void hkpMeshWeldingUtility::computeWeldingInfoMultiShape(class hkTransform const &, class hkpShapeCollection *, enum hkpWeldingUtility::WeldingType, class hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator> &, bool)
//{
//    mangled_ppc("?computeWeldingInfoMultiShape@hkpMeshWeldingUtility@@SAXABVhkTransform@@PAVhkpShapeCollection@@W4WeldingType@hkpWeldingUtility@@AAV?$hkArray@UShapeInfo@hkpMeshWeldingUtility@@UhkContainerHeapAllocator@@@@_N@Z");
//};

//public: static enum hkResult hkpMeshWeldingUtility::testWindingConsistency(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkpTriangleShape const *, class hkVector4const &)
//{
//    mangled_ppc("?testWindingConsistency@hkpMeshWeldingUtility@@SA?AW4hkResult@@ABVhkVector4@@00PBVhkpTriangleShape@@0@Z");
//};

//public: static float hkpMeshWeldingUtility::calcAngleForEdge(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?calcAngleForEdge@hkpMeshWeldingUtility@@SAMABVhkVector4@@00@Z");
//};

//public: static void hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&)
//{
//    mangled_ppc("?calcAntiClockwiseTriangleNormal@hkpMeshWeldingUtility@@SAXABVhkVector4@@00AAV2@@Z");
//};

//public: static unsigned short hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(unsigned short, int, int)
//{
//    mangled_ppc("?modifyCombinedEdgesBitcode@hkpMeshWeldingUtility@@SAGGHH@Z");
//};

//public: static int hkpMeshWeldingUtility::calcSingleEdgeBitcode(unsigned short, int)
//{
//    mangled_ppc("?calcSingleEdgeBitcode@hkpMeshWeldingUtility@@SAHGH@Z");
//};

//public: static int hkpMeshWeldingUtility::calcEdgeAngleBitcode(float)
//{
//    mangled_ppc("?calcEdgeAngleBitcode@hkpMeshWeldingUtility@@SAHM@Z");
//};

//public: static enum hkResult hkpMeshWeldingUtility::calcWeldingInfoForTriangle(unsigned int, class hkpBvTreeShape const *, enum hkpMeshWeldingUtility::WindingConsistency, unsigned short &)
//{
//    mangled_ppc("?calcWeldingInfoForTriangle@hkpMeshWeldingUtility@@SA?AW4hkResult@@IPBVhkpBvTreeShape@@W4WindingConsistency@1@AAG@Z");
//};

//public: static class hkBool hkpMeshWeldingUtility::isTriangleWindingValid(unsigned int, class hkpBvTreeShape const *)
//{
//    mangled_ppc("?isTriangleWindingValid@hkpMeshWeldingUtility@@SA?AVhkBool@@IPBVhkpBvTreeShape@@@Z");
//};

//public: static enum hkResult hkpMeshWeldingUtility::calcBitcodeForTriangleEdge(class hkpBvTreeShape const *, class hkpTriangleShape const *, unsigned int, int, enum hkpMeshWeldingUtility::WindingConsistency, short &)
//{
//    mangled_ppc("?calcBitcodeForTriangleEdge@hkpMeshWeldingUtility@@SA?AW4hkResult@@PBVhkpBvTreeShape@@PBVhkpTriangleShape@@IHW4WindingConsistency@1@AAF@Z");
//};

//public: static int hkpMeshWeldingUtility::createSingularVertexArray(class hkVector4const *, class hkVector4const *, int, class hkVector4*, int *const)
//{
//    mangled_ppc("?createSingularVertexArray@hkpMeshWeldingUtility@@SAHPBVhkVector4@@0HPAV2@QAH@Z");
//};

//public: static int hkpMeshWeldingUtility::calcEdgeAngleBitcode(class hkVector4const *)
//{
//    mangled_ppc("?calcEdgeAngleBitcode@hkpMeshWeldingUtility@@SAHPBVhkVector4@@@Z");
//};

//public: static float hkpMeshWeldingUtility::calcAngleFromVertices(class hkVector4const *, float &, float &)
//{
//    mangled_ppc("?calcAngleFromVertices@hkpMeshWeldingUtility@@SAMPBVhkVector4@@AAM1@Z");
//};

//public: hkpMeshWeldingUtility::ShapeInfo::ShapeInfo(void)
//{
//    mangled_ppc("??0ShapeInfo@hkpMeshWeldingUtility@@QAA@XZ");
//};

//public: hkHistogram::hkHistogram(bool)
//{
//    mangled_ppc("??0hkHistogram@@QAA@_N@Z");
//};

//public: void hkHistogram::addEntry(float, float, float)
//{
//    mangled_ppc("?addEntry@hkHistogram@@QAAXMMM@Z");
//};

//public: float hkHistogram::evaluate(void)
//{
//    mangled_ppc("?evaluate@hkHistogram@@QAAMXZ");
//};

//float hkMath::clamp(float, float, float)
//{
//    mangled_ppc("?clamp@hkMath@@YAMMMM@Z");
//};

//public: hkHistogram::~hkHistogram(void)
//{
//    mangled_ppc("??1hkHistogram@@QAA@XZ");
//};

//float hkMath::atan2fApproximation(float, float)
//{
//    mangled_ppc("?atan2fApproximation@hkMath@@YAMMM@Z");
//};

//public: class hkBool hkEnum<enum hkpShapeCollection::CollectionType, unsigned char>::operator!=(enum hkpShapeCollection::CollectionType) const
//{
//    mangled_ppc("??9?$hkEnum@W4CollectionType@hkpShapeCollection@@E@@QBA?AVhkBool@@W4CollectionType@hkpShapeCollection@@@Z");
//};

//public: hkArray<struct hkEntry, struct hkContainerHeapAllocator>::hkArray<struct hkEntry, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkEntry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkEntry, struct hkContainerHeapAllocator>::pushBack(struct hkEntry const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UhkEntry@@UhkContainerHeapAllocator@@@@QAAXABUhkEntry@@@Z");
//};

//public: void hkArray<struct hkEntry, struct hkContainerHeapAllocator>::insertAt(int, struct hkEntry const &)
//{
//    mangled_ppc("?insertAt@?$hkArray@UhkEntry@@UhkContainerHeapAllocator@@@@QAAXHABUhkEntry@@@Z");
//};

//public: hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>::hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@UShapeInfo@hkpMeshWeldingUtility@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>::~hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@UShapeInfo@hkpMeshWeldingUtility@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::pushBack(struct hkpMeshWeldingUtility::ShapeInfo const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UShapeInfo@hkpMeshWeldingUtility@@UhkContainerHeapAllocator@@@@QAAXABUShapeInfo@hkpMeshWeldingUtility@@@Z");
//};

//public: class hkBool hkLocalArray<struct hkpMeshWeldingUtility::ShapeInfo>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@UShapeInfo@hkpMeshWeldingUtility@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UShapeInfo@hkpMeshWeldingUtility@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkEntry>::hkArrayBase<struct hkEntry>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkEntry@@@@QAA@XZ");
//};

//public: struct hkEntry & hkArrayBase<struct hkEntry>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkEntry@@@@QAAAAUhkEntry@@H@Z");
//};

//public: int hkArrayBase<struct hkEntry>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkEntry>::_pushBack(class hkMemoryAllocator &, struct hkEntry const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UhkEntry@@@@QAAXAAVhkMemoryAllocator@@ABUhkEntry@@@Z");
//};

//public: void hkArrayBase<struct hkEntry>::_insertAt(class hkMemoryAllocator &, int, struct hkEntry const &)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UhkEntry@@@@QAAXAAVhkMemoryAllocator@@HABUhkEntry@@@Z");
//};

//public: hkArray<struct hkEntry, struct hkContainerHeapAllocator>::~hkArray<struct hkEntry, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkEntry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkEntry>::~hkArrayBase<struct hkEntry>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkEntry@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<struct hkEntry>(struct hkEntry *, int)
//{
//    mangled_ppc("??$quickSort@UhkEntry@@@hkAlgorithm@@YAXPAUhkEntry@@H@Z");
//};

//public: hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QAA@XZ");
//};

//public: struct hkpMeshWeldingUtility::ShapeInfo & hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QAAAAUShapeInfo@hkpMeshWeldingUtility@@H@Z");
//};

//public: int hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::_pushBack(class hkMemoryAllocator &, struct hkpMeshWeldingUtility::ShapeInfo const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QAAXAAVhkMemoryAllocator@@ABUShapeInfo@hkpMeshWeldingUtility@@@Z");
//};

//public: hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UShapeInfo@hkpMeshWeldingUtility@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::~hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QAA@XZ");
//};

//struct hkpMeshWeldingUtility::ShapeInfo * hkAllocateStack<struct hkpMeshWeldingUtility::ShapeInfo>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UShapeInfo@hkpMeshWeldingUtility@@@@YAPAUShapeInfo@hkpMeshWeldingUtility@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkpMeshWeldingUtility::ShapeInfo>(struct hkpMeshWeldingUtility::ShapeInfo *)
//{
//    mangled_ppc("??$hkDeallocateStack@UShapeInfo@hkpMeshWeldingUtility@@@@YAXPAUShapeInfo@hkpMeshWeldingUtility@@@Z");
//};

//public: void hkArray<struct hkEntry, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkEntry@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpMeshWeldingUtility::ShapeInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UShapeInfo@hkpMeshWeldingUtility@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkEntry>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkEntry>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkEntry@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkEntry>::_insertAt(class hkMemoryAllocator &, int, struct hkEntry const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UhkEntry@@@@QAAXAAVhkMemoryAllocator@@HPBUhkEntry@@H@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkEntry>(struct hkEntry *, int, struct hkEntry const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UhkEntry@@@hkArrayUtil@@SAXPAUhkEntry@@HABU1@U?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkEntry, class hkAlgorithm::less<struct hkEntry> >(struct hkEntry *, int, class hkAlgorithm::less<struct hkEntry>)
//{
//    mangled_ppc("??$quickSort@UhkEntry@@V?$less@UhkEntry@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUhkEntry@@HV?$less@UhkEntry@@@0@@Z");
//};

//public: int hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpMeshWeldingUtility::ShapeInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UShapeInfo@hkpMeshWeldingUtility@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpMeshWeldingUtility::ShapeInfo>(struct hkpMeshWeldingUtility::ShapeInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UShapeInfo@hkpMeshWeldingUtility@@@hkArrayUtil@@SAXPAUShapeInfo@hkpMeshWeldingUtility@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkpMeshWeldingUtility::ShapeInfo>(struct hkpMeshWeldingUtility::ShapeInfo *, int, struct hkpMeshWeldingUtility::ShapeInfo const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UShapeInfo@hkpMeshWeldingUtility@@@hkArrayUtil@@SAXPAUShapeInfo@hkpMeshWeldingUtility@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpMeshWeldingUtility::ShapeInfo::ShapeInfo(struct hkpMeshWeldingUtility::ShapeInfo const &)
//{
//    mangled_ppc("??0ShapeInfo@hkpMeshWeldingUtility@@QAA@ABU01@@Z");
//};

//public: void hkArrayBase<struct hkEntry>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkEntry@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkEntry>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkEntry const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@UhkEntry@@@@QAAXAAVhkMemoryAllocator@@HHPBUhkEntry@@H@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkEntry, class hkAlgorithm::less<struct hkEntry> >(struct hkEntry *, int, int, class hkAlgorithm::less<struct hkEntry>)
//{
//    mangled_ppc("??$quickSortRecursive@UhkEntry@@V?$less@UhkEntry@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUhkEntry@@HHV?$less@UhkEntry@@@0@@Z");
//};

//public: int hkAlgorithm::less<struct hkEntry>::operator()(struct hkEntry const &, struct hkEntry const &)
//{
//    mangled_ppc("??R?$less@UhkEntry@@@hkAlgorithm@@QAAHABUhkEntry@@0@Z");
//};

//public: void hkArrayBase<struct hkEntry>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkEntry@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkEntry>(struct hkEntry *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkEntry@@@hkArrayUtil@@SAXPAUhkEntry@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkEntry>(struct hkEntry *, int, struct hkEntry const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UhkEntry@@@hkArrayUtil@@SAXPAUhkEntry@@HPBU1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkAabb::includePoint(class hkVector4const &)
//{
//    mangled_ppc("?includePoint@hkAabb@@QAAXABVhkVector4@@@Z");
//};

