/* ---------- headers */

#include "havok\hkinternal\hkGeometryUtility.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void hkGeometryUtility::createConvexGeometry(struct hkStridedVertices const &, struct hkGeometry &);
// public: static void hkGeometryUtility::createConvexGeometry(struct hkStridedVertices const &, struct hkGeometry &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &);
// public: static void hkGeometryUtility::createVerticesFromPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &);
// public: static void hkGeometryUtility::createGeometryFromPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, struct hkGeometry &);
// public: static void hkGeometryUtility::expandPlanes(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, float);
// public: static class hkBool hkGeometryUtility::getAxesFromCovariance(class hkMatrix3&, class hkVector4&, class hkVector4&, class hkVector4&);
// class hkBool makeEigenvectors(class hkMatrix3&, int);
// public: static void hkGeometryUtility::calcObb(struct hkStridedVertices const &, class hkVector4&, class hkTransform &, enum hkGeomObbMode);
// void getMeanAndCovariance(float const *, int, int, class hkMatrix3&, class hkVector4&, class hkBool);
// bool getIsBoxGeometry(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkVector4&, class hkTransform &, float);
// bool approxEquals(float const &, float const &, float);
// bool isMultOfXYorZ(class hkVector4const &, float);
// void makeOBBUsingAxes(float const *, int, int, class hkVector4&, class hkVector4const *, class hkVector4&);
// float doSteepestDescent(float const *, int, int, class hkVector4const *, class hkVector4*, int);
// float getVolumeFromAxes(float const *, int, int, class hkVector4const *);
// void getVolumeGradient(float const *, int, int, class hkVector4const *, float, class hkVector4*);
// void takeStepAxes(class hkVector4const *, class hkVector4*, float, class hkVector4*);
// float lineMinimize(float const *, int, int, class hkVector4const *, float, class hkVector4*, int);
// public: static class hkSphere hkGeometryUtility::createMinBoundingSphere(struct hkStridedVertices const &, float);
// class hkSphere miniSphereRecurseCall(class hkVector4*, int, int, float);
// class hkSphere makeSphere(class hkVector4const &, class hkVector4const &, float);
// class hkSphere makeSphere(class hkVector4const &, class hkVector4const &, class hkVector4const &, float);
// class hkSphere makeSphere(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, float);
// public: void hkPseudoRandomGenerator::getRandomVector01(class hkVector4&);
// public: float hkPseudoRandomGenerator::getRandReal01(void);
// public: void hkMatrix3::getCols(class hkVector4&, class hkVector4&, class hkVector4&) const;

//public: static void hkGeometryUtility::createConvexGeometry(struct hkStridedVertices const &, struct hkGeometry &)
//{
//    mangled_ppc("?createConvexGeometry@hkGeometryUtility@@SAXABUhkStridedVertices@@AAUhkGeometry@@@Z");
//};

//public: static void hkGeometryUtility::createConvexGeometry(struct hkStridedVertices const &, struct hkGeometry &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?createConvexGeometry@hkGeometryUtility@@SAXABUhkStridedVertices@@AAUhkGeometry@@AAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkGeometryUtility::createVerticesFromPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?createVerticesFromPlaneEquations@hkGeometryUtility@@SAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV2@@Z");
//};

//public: static void hkGeometryUtility::createGeometryFromPlaneEquations(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, struct hkGeometry &)
//{
//    mangled_ppc("?createGeometryFromPlaneEquations@hkGeometryUtility@@SAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAUhkGeometry@@@Z");
//};

//public: static void hkGeometryUtility::expandPlanes(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, float)
//{
//    mangled_ppc("?expandPlanes@hkGeometryUtility@@SAXAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: static class hkBool hkGeometryUtility::getAxesFromCovariance(class hkMatrix3&, class hkVector4&, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?getAxesFromCovariance@hkGeometryUtility@@SA?AVhkBool@@AAVhkMatrix3@@AAVhkVector4@@11@Z");
//};

//class hkBool makeEigenvectors(class hkMatrix3&, int)
//{
//    mangled_ppc("?makeEigenvectors@@YA?AVhkBool@@AAVhkMatrix3@@H@Z");
//};

//public: static void hkGeometryUtility::calcObb(struct hkStridedVertices const &, class hkVector4&, class hkTransform &, enum hkGeomObbMode)
//{
//    mangled_ppc("?calcObb@hkGeometryUtility@@SAXABUhkStridedVertices@@AAVhkVector4@@AAVhkTransform@@W4hkGeomObbMode@@@Z");
//};

//void getMeanAndCovariance(float const *, int, int, class hkMatrix3&, class hkVector4&, class hkBool)
//{
//    mangled_ppc("?getMeanAndCovariance@@YAXPBMHHAAVhkMatrix3@@AAVhkVector4@@VhkBool@@@Z");
//};

//bool getIsBoxGeometry(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkVector4&, class hkTransform &, float)
//{
//    mangled_ppc("?getIsBoxGeometry@@YA_NABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAVhkVector4@@AAVhkTransform@@M@Z");
//};

//bool approxEquals(float const &, float const &, float)
//{
//    mangled_ppc("?approxEquals@@YA_NABM0M@Z");
//};

//bool isMultOfXYorZ(class hkVector4const &, float)
//{
//    mangled_ppc("?isMultOfXYorZ@@YA_NABVhkVector4@@M@Z");
//};

//void makeOBBUsingAxes(float const *, int, int, class hkVector4&, class hkVector4const *, class hkVector4&)
//{
//    mangled_ppc("?makeOBBUsingAxes@@YAXPBMHHAAVhkVector4@@PBV1@1@Z");
//};

//float doSteepestDescent(float const *, int, int, class hkVector4const *, class hkVector4*, int)
//{
//    mangled_ppc("?doSteepestDescent@@YAMPBMHHPBVhkVector4@@PAV1@H@Z");
//};

//float getVolumeFromAxes(float const *, int, int, class hkVector4const *)
//{
//    mangled_ppc("?getVolumeFromAxes@@YAMPBMHHPBVhkVector4@@@Z");
//};

//void getVolumeGradient(float const *, int, int, class hkVector4const *, float, class hkVector4*)
//{
//    mangled_ppc("?getVolumeGradient@@YAXPBMHHPBVhkVector4@@MPAV1@@Z");
//};

//void takeStepAxes(class hkVector4const *, class hkVector4*, float, class hkVector4*)
//{
//    mangled_ppc("?takeStepAxes@@YAXPBVhkVector4@@PAV1@M1@Z");
//};

//float lineMinimize(float const *, int, int, class hkVector4const *, float, class hkVector4*, int)
//{
//    mangled_ppc("?lineMinimize@@YAMPBMHHPBVhkVector4@@MPAV1@H@Z");
//};

//public: static class hkSphere hkGeometryUtility::createMinBoundingSphere(struct hkStridedVertices const &, float)
//{
//    mangled_ppc("?createMinBoundingSphere@hkGeometryUtility@@SA?AVhkSphere@@ABUhkStridedVertices@@M@Z");
//};

//class hkSphere miniSphereRecurseCall(class hkVector4*, int, int, float)
//{
//    mangled_ppc("?miniSphereRecurseCall@@YA?AVhkSphere@@PAVhkVector4@@HHM@Z");
//};

//class hkSphere makeSphere(class hkVector4const &, class hkVector4const &, float)
//{
//    mangled_ppc("?makeSphere@@YA?AVhkSphere@@ABVhkVector4@@0M@Z");
//};

//class hkSphere makeSphere(class hkVector4const &, class hkVector4const &, class hkVector4const &, float)
//{
//    mangled_ppc("?makeSphere@@YA?AVhkSphere@@ABVhkVector4@@00M@Z");
//};

//class hkSphere makeSphere(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, float)
//{
//    mangled_ppc("?makeSphere@@YA?AVhkSphere@@ABVhkVector4@@000M@Z");
//};

//public: void hkPseudoRandomGenerator::getRandomVector01(class hkVector4&)
//{
//    mangled_ppc("?getRandomVector01@hkPseudoRandomGenerator@@QAAXAAVhkVector4@@@Z");
//};

//public: float hkPseudoRandomGenerator::getRandReal01(void)
//{
//    mangled_ppc("?getRandReal01@hkPseudoRandomGenerator@@QAAMXZ");
//};

//public: void hkMatrix3::getCols(class hkVector4&, class hkVector4&, class hkVector4&) const
//{
//    mangled_ppc("?getCols@hkMatrix3@@QBAXAAVhkVector4@@00@Z");
//};

