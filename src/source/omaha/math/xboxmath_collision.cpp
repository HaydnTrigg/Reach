/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void ComputeBoundingSphereFromPoints(struct Sphere *, unsigned int, struct _XMFLOAT3const *, unsigned int);
// void ComputeBoundingAxisAlignedBoxFromPoints(struct AxisAlignedBox *, unsigned int, struct _XMFLOAT3const *, unsigned int);
// void ComputeBoundingOrientedBoxFromPoints(struct OrientedBox *, unsigned int, struct _XMFLOAT3const *, unsigned int);
// int CalculateEigenVectorsFromCovarianceMatrix(float, float, float, float, float, float, struct __vector4*, struct __vector4*, struct __vector4*);
// int SolveCubic(float, float, float, float *, float *, float *);
// int CalculateEigenVectors(float, float, float, float, float, float, float, float, float, struct __vector4*, struct __vector4*, struct __vector4*);
// struct __vector4 CalculateEigenVector(float, float, float, float, float, float, float);
// void ComputeFrustumFromProjection(struct Frustum *, struct _XMMATRIX *);
// void ComputePlanesFromFrustum(struct Frustum const *, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*);
// struct __vector4 TransformPlane(struct __vector4, struct __vector4, struct __vector4);
// void TransformSphere(struct Sphere *, struct Sphere const *, float, struct __vector4, struct __vector4);
// int XMQuaternionIsUnit(struct __vector4);
// void TransformAxisAlignedBox(struct AxisAlignedBox *, struct AxisAlignedBox const *, float, struct __vector4, struct __vector4);
// void TransformOrientedBox(struct OrientedBox *, struct OrientedBox const *, float, struct __vector4, struct __vector4);
// void TransformFrustum(struct Frustum *, struct Frustum const *, float, struct __vector4, struct __vector4);
// int IntersectPointSphere(struct __vector4, struct Sphere const *);
// int IntersectPointAxisAlignedBox(struct __vector4, struct AxisAlignedBox const *);
// int IntersectPointOrientedBox(struct __vector4, struct OrientedBox const *);
// int IntersectPointFrustum(struct __vector4, struct Frustum const *);
// int IntersectRayTriangle(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, float *);
// int XMVector3IsUnit(struct __vector4);
// int IntersectRaySphere(struct __vector4, struct __vector4, struct Sphere const *, float *);
// int IntersectRayAxisAlignedBox(struct __vector4, struct __vector4, struct AxisAlignedBox const *, float *);
// int XMVector3AnyTrue(struct __vector4);
// int IntersectRayOrientedBox(struct __vector4, struct __vector4, struct OrientedBox const *, float *);
// int IntersectTriangleTriangle(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// int XMVector3AllTrue(struct __vector4);
// int IntersectTriangleSphere(struct __vector4, struct __vector4, struct __vector4, struct Sphere const *);
// struct __vector4 PointOnLineSegmentNearestPoint(struct __vector4, struct __vector4, struct __vector4);
// struct __vector4 PointOnPlaneInsideTriangle(struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// int IntersectTriangleAxisAlignedBox(struct __vector4, struct __vector4, struct __vector4, struct AxisAlignedBox const *);
// int IntersectTriangleOrientedBox(struct __vector4, struct __vector4, struct __vector4, struct OrientedBox const *);
// int IntersectSphereSphere(struct Sphere const *, struct Sphere const *);
// int IntersectSphereAxisAlignedBox(struct Sphere const *, struct AxisAlignedBox const *);
// int IntersectSphereOrientedBox(struct Sphere const *, struct OrientedBox const *);
// int IntersectAxisAlignedBoxAxisAlignedBox(struct AxisAlignedBox const *, struct AxisAlignedBox const *);
// int IntersectAxisAlignedBoxOrientedBox(struct AxisAlignedBox const *, struct OrientedBox const *);
// public: OrientedBox::OrientedBox(void);
// int IntersectOrientedBoxOrientedBox(struct OrientedBox const *, struct OrientedBox const *);
// int IntersectTriangleFrustum(struct __vector4, struct __vector4, struct __vector4, struct Frustum const *);
// int IntersectSphereFrustum(struct Sphere const *, struct Frustum const *);
// int IntersectAxisAlignedBoxFrustum(struct AxisAlignedBox const *, struct Frustum const *);
// int IntersectOrientedBoxFrustum(struct OrientedBox const *, struct Frustum const *);
// int IntersectFrustumFrustum(struct Frustum const *, struct Frustum const *);
// int IntersectTriangle6Planes(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// void FastIntersectTrianglePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// int IntersectSphere6Planes(struct Sphere const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// int IntersectAxisAlignedBox6Planes(struct AxisAlignedBox const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// void FastIntersectAxisAlignedBoxPlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// int IntersectOrientedBox6Planes(struct OrientedBox const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// void FastIntersectOrientedBoxPlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// int IntersectFrustum6Planes(struct Frustum const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// void FastIntersectFrustumPlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// int IntersectTrianglePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// int XMPlaneIsUnit(struct __vector4);
// int IntersectSpherePlane(struct Sphere const *, struct __vector4);
// int IntersectAxisAlignedBoxPlane(struct AxisAlignedBox const *, struct __vector4);
// int IntersectOrientedBoxPlane(struct OrientedBox const *, struct __vector4);
// int IntersectFrustumPlane(struct Frustum const *, struct __vector4);
// public: struct __vector4 XMVECTORF32::operator struct __vector4(void) const;
// public: struct __vector4 XMVECTORI32::operator struct __vector4(void) const;
// public: struct __vector4 XMVECTORU32::operator struct __vector4(void) const;
// struct __vector4 XMLoadFloat(float const *);
// void XMStoreFloat(float *, struct __vector4);
// void XMStoreFloat3(struct _XMFLOAT3*, struct __vector4);
// void XMStoreFloat4(struct _XMFLOAT4*, struct __vector4);
// struct __vector4 XMVectorReplicatePtr(float const *);
// struct __vector4 XMVectorSplatX(struct __vector4);
// struct __vector4 XMVectorSplatY(struct __vector4);
// struct __vector4 XMVectorSplatZ(struct __vector4);
// struct __vector4 XMVectorSetX(struct __vector4, float);
// struct __vector4 XMVectorSetY(struct __vector4, float);
// struct __vector4 XMVectorSetZ(struct __vector4, float);
// struct __vector4 XMVectorSelect(struct __vector4, struct __vector4, struct __vector4);
// struct __vector4 XMVectorGreaterR(unsigned int *, struct __vector4, struct __vector4);
// struct __vector4 XMVectorGreaterOrEqual(struct __vector4, struct __vector4);
// struct __vector4 XMVectorInBounds(struct __vector4, struct __vector4);
// struct __vector4 XMVectorMin(struct __vector4, struct __vector4);
// struct __vector4 XMVectorMax(struct __vector4, struct __vector4);
// struct __vector4 XMVectorAndCInt(struct __vector4, struct __vector4);
// struct __vector4 XMVectorSqrt(struct __vector4);
// struct __vector4 XMVectorAbs(struct __vector4);
// int XMVector3Greater(struct __vector4, struct __vector4);
// unsigned int XMVector3GreaterR(struct __vector4, struct __vector4);
// int XMVector3LessOrEqual(struct __vector4, struct __vector4);
// int XMVector3InBounds(struct __vector4, struct __vector4);
// unsigned int XMVector3InBoundsR(struct __vector4, struct __vector4);
// struct __vector4 XMVector3Cross(struct __vector4, struct __vector4);
// struct __vector4 XMVector3LengthSq(struct __vector4);
// struct __vector4 XMVector3Length(struct __vector4);
// struct __vector4 XMVector3Rotate(struct __vector4, struct __vector4);
// struct __vector4 XMVector3InverseRotate(struct __vector4, struct __vector4);
// struct __vector4 XMVector3TransformNormal(struct __vector4, struct _XMMATRIX);
// int XMVector4NotEqualInt(struct __vector4, struct __vector4);
// int XMVector4Greater(struct __vector4, struct __vector4);
// int XMVector4GreaterOrEqual(struct __vector4, struct __vector4);
// int XMVector4Less(struct __vector4, struct __vector4);
// int XMVector4LessOrEqual(struct __vector4, struct __vector4);
// struct __vector4 XMVector4Length(struct __vector4);
// struct __vector4& operator*=(struct __vector4&, struct __vector4);
// struct _XMMATRIX XMMatrixRotationQuaternion(struct __vector4);
// struct __vector4 XMQuaternionMultiply(struct __vector4, struct __vector4);
// struct __vector4 XMQuaternionNormalize(struct __vector4);
// struct __vector4 XMVector4Normalize(struct __vector4);
// struct __vector4 XMQuaternionConjugate(struct __vector4);
// struct __vector4 XMQuaternionRotationMatrix(struct _XMMATRIX);
// struct __vector4 XMPlaneNormalize(struct __vector4);

//void ComputeBoundingSphereFromPoints(struct Sphere *, unsigned int, struct _XMFLOAT3const *, unsigned int)
//{
//    mangled_ppc("?ComputeBoundingSphereFromPoints@@YAXPAUSphere@@IPBU_XMFLOAT3@@I@Z");
//};

//void ComputeBoundingAxisAlignedBoxFromPoints(struct AxisAlignedBox *, unsigned int, struct _XMFLOAT3const *, unsigned int)
//{
//    mangled_ppc("?ComputeBoundingAxisAlignedBoxFromPoints@@YAXPAUAxisAlignedBox@@IPBU_XMFLOAT3@@I@Z");
//};

//void ComputeBoundingOrientedBoxFromPoints(struct OrientedBox *, unsigned int, struct _XMFLOAT3const *, unsigned int)
//{
//    mangled_ppc("?ComputeBoundingOrientedBoxFromPoints@@YAXPAUOrientedBox@@IPBU_XMFLOAT3@@I@Z");
//};

//int CalculateEigenVectorsFromCovarianceMatrix(float, float, float, float, float, float, struct __vector4*, struct __vector4*, struct __vector4*)
//{
//    mangled_ppc("?CalculateEigenVectorsFromCovarianceMatrix@@YAHMMMMMMPAU__vector4@@00@Z");
//};

//int SolveCubic(float, float, float, float *, float *, float *)
//{
//    mangled_ppc("?SolveCubic@@YAHMMMPAM00@Z");
//};

//int CalculateEigenVectors(float, float, float, float, float, float, float, float, float, struct __vector4*, struct __vector4*, struct __vector4*)
//{
//    mangled_ppc("?CalculateEigenVectors@@YAHMMMMMMMMMPAU__vector4@@00@Z");
//};

//struct __vector4 CalculateEigenVector(float, float, float, float, float, float, float)
//{
//    mangled_ppc("?CalculateEigenVector@@YA?AU__vector4@@MMMMMMM@Z");
//};

//void ComputeFrustumFromProjection(struct Frustum *, struct _XMMATRIX *)
//{
//    mangled_ppc("?ComputeFrustumFromProjection@@YAXPAUFrustum@@PAU_XMMATRIX@@@Z");
//};

//void ComputePlanesFromFrustum(struct Frustum const *, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*)
//{
//    mangled_ppc("?ComputePlanesFromFrustum@@YAXPBUFrustum@@PAU__vector4@@11111@Z");
//};

//struct __vector4 TransformPlane(struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?TransformPlane@@YA?AU__vector4@@U1@00@Z");
//};

//void TransformSphere(struct Sphere *, struct Sphere const *, float, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?TransformSphere@@YAXPAUSphere@@PBU1@MU__vector4@@2@Z");
//};

//int XMQuaternionIsUnit(struct __vector4)
//{
//    mangled_ppc("?XMQuaternionIsUnit@@YAHU__vector4@@@Z");
//};

//void TransformAxisAlignedBox(struct AxisAlignedBox *, struct AxisAlignedBox const *, float, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?TransformAxisAlignedBox@@YAXPAUAxisAlignedBox@@PBU1@MU__vector4@@2@Z");
//};

//void TransformOrientedBox(struct OrientedBox *, struct OrientedBox const *, float, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?TransformOrientedBox@@YAXPAUOrientedBox@@PBU1@MU__vector4@@2@Z");
//};

//void TransformFrustum(struct Frustum *, struct Frustum const *, float, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?TransformFrustum@@YAXPAUFrustum@@PBU1@MU__vector4@@2@Z");
//};

//int IntersectPointSphere(struct __vector4, struct Sphere const *)
//{
//    mangled_ppc("?IntersectPointSphere@@YAHU__vector4@@PBUSphere@@@Z");
//};

//int IntersectPointAxisAlignedBox(struct __vector4, struct AxisAlignedBox const *)
//{
//    mangled_ppc("?IntersectPointAxisAlignedBox@@YAHU__vector4@@PBUAxisAlignedBox@@@Z");
//};

//int IntersectPointOrientedBox(struct __vector4, struct OrientedBox const *)
//{
//    mangled_ppc("?IntersectPointOrientedBox@@YAHU__vector4@@PBUOrientedBox@@@Z");
//};

//int IntersectPointFrustum(struct __vector4, struct Frustum const *)
//{
//    mangled_ppc("?IntersectPointFrustum@@YAHU__vector4@@PBUFrustum@@@Z");
//};

//int IntersectRayTriangle(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, float *)
//{
//    mangled_ppc("?IntersectRayTriangle@@YAHU__vector4@@0000PAM@Z");
//};

//int XMVector3IsUnit(struct __vector4)
//{
//    mangled_ppc("?XMVector3IsUnit@@YAHU__vector4@@@Z");
//};

//int IntersectRaySphere(struct __vector4, struct __vector4, struct Sphere const *, float *)
//{
//    mangled_ppc("?IntersectRaySphere@@YAHU__vector4@@0PBUSphere@@PAM@Z");
//};

//int IntersectRayAxisAlignedBox(struct __vector4, struct __vector4, struct AxisAlignedBox const *, float *)
//{
//    mangled_ppc("?IntersectRayAxisAlignedBox@@YAHU__vector4@@0PBUAxisAlignedBox@@PAM@Z");
//};

//int XMVector3AnyTrue(struct __vector4)
//{
//    mangled_ppc("?XMVector3AnyTrue@@YAHU__vector4@@@Z");
//};

//int IntersectRayOrientedBox(struct __vector4, struct __vector4, struct OrientedBox const *, float *)
//{
//    mangled_ppc("?IntersectRayOrientedBox@@YAHU__vector4@@0PBUOrientedBox@@PAM@Z");
//};

//int IntersectTriangleTriangle(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectTriangleTriangle@@YAHU__vector4@@00000@Z");
//};

//int XMVector3AllTrue(struct __vector4)
//{
//    mangled_ppc("?XMVector3AllTrue@@YAHU__vector4@@@Z");
//};

//int IntersectTriangleSphere(struct __vector4, struct __vector4, struct __vector4, struct Sphere const *)
//{
//    mangled_ppc("?IntersectTriangleSphere@@YAHU__vector4@@00PBUSphere@@@Z");
//};

//struct __vector4 PointOnLineSegmentNearestPoint(struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?PointOnLineSegmentNearestPoint@@YA?AU__vector4@@U1@00@Z");
//};

//struct __vector4 PointOnPlaneInsideTriangle(struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?PointOnPlaneInsideTriangle@@YA?AU__vector4@@U1@000@Z");
//};

//int IntersectTriangleAxisAlignedBox(struct __vector4, struct __vector4, struct __vector4, struct AxisAlignedBox const *)
//{
//    mangled_ppc("?IntersectTriangleAxisAlignedBox@@YAHU__vector4@@00PBUAxisAlignedBox@@@Z");
//};

//int IntersectTriangleOrientedBox(struct __vector4, struct __vector4, struct __vector4, struct OrientedBox const *)
//{
//    mangled_ppc("?IntersectTriangleOrientedBox@@YAHU__vector4@@00PBUOrientedBox@@@Z");
//};

//int IntersectSphereSphere(struct Sphere const *, struct Sphere const *)
//{
//    mangled_ppc("?IntersectSphereSphere@@YAHPBUSphere@@0@Z");
//};

//int IntersectSphereAxisAlignedBox(struct Sphere const *, struct AxisAlignedBox const *)
//{
//    mangled_ppc("?IntersectSphereAxisAlignedBox@@YAHPBUSphere@@PBUAxisAlignedBox@@@Z");
//};

//int IntersectSphereOrientedBox(struct Sphere const *, struct OrientedBox const *)
//{
//    mangled_ppc("?IntersectSphereOrientedBox@@YAHPBUSphere@@PBUOrientedBox@@@Z");
//};

//int IntersectAxisAlignedBoxAxisAlignedBox(struct AxisAlignedBox const *, struct AxisAlignedBox const *)
//{
//    mangled_ppc("?IntersectAxisAlignedBoxAxisAlignedBox@@YAHPBUAxisAlignedBox@@0@Z");
//};

//int IntersectAxisAlignedBoxOrientedBox(struct AxisAlignedBox const *, struct OrientedBox const *)
//{
//    mangled_ppc("?IntersectAxisAlignedBoxOrientedBox@@YAHPBUAxisAlignedBox@@PBUOrientedBox@@@Z");
//};

//public: OrientedBox::OrientedBox(void)
//{
//    mangled_ppc("??0OrientedBox@@QAA@XZ");
//};

//int IntersectOrientedBoxOrientedBox(struct OrientedBox const *, struct OrientedBox const *)
//{
//    mangled_ppc("?IntersectOrientedBoxOrientedBox@@YAHPBUOrientedBox@@0@Z");
//};

//int IntersectTriangleFrustum(struct __vector4, struct __vector4, struct __vector4, struct Frustum const *)
//{
//    mangled_ppc("?IntersectTriangleFrustum@@YAHU__vector4@@00PBUFrustum@@@Z");
//};

//int IntersectSphereFrustum(struct Sphere const *, struct Frustum const *)
//{
//    mangled_ppc("?IntersectSphereFrustum@@YAHPBUSphere@@PBUFrustum@@@Z");
//};

//int IntersectAxisAlignedBoxFrustum(struct AxisAlignedBox const *, struct Frustum const *)
//{
//    mangled_ppc("?IntersectAxisAlignedBoxFrustum@@YAHPBUAxisAlignedBox@@PBUFrustum@@@Z");
//};

//int IntersectOrientedBoxFrustum(struct OrientedBox const *, struct Frustum const *)
//{
//    mangled_ppc("?IntersectOrientedBoxFrustum@@YAHPBUOrientedBox@@PBUFrustum@@@Z");
//};

//int IntersectFrustumFrustum(struct Frustum const *, struct Frustum const *)
//{
//    mangled_ppc("?IntersectFrustumFrustum@@YAHPBUFrustum@@0@Z");
//};

//int IntersectTriangle6Planes(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectTriangle6Planes@@YAHU__vector4@@00000000@Z");
//};

//void FastIntersectTrianglePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectTrianglePlane@@YAXU__vector4@@000AAU1@1@Z");
//};

//int IntersectSphere6Planes(struct Sphere const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectSphere6Planes@@YAHPBUSphere@@U__vector4@@11111@Z");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//int IntersectAxisAlignedBox6Planes(struct AxisAlignedBox const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectAxisAlignedBox6Planes@@YAHPBUAxisAlignedBox@@U__vector4@@11111@Z");
//};

//void FastIntersectAxisAlignedBoxPlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectAxisAlignedBoxPlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//int IntersectOrientedBox6Planes(struct OrientedBox const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectOrientedBox6Planes@@YAHPBUOrientedBox@@U__vector4@@11111@Z");
//};

//void FastIntersectOrientedBoxPlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectOrientedBoxPlane@@YAXU__vector4@@00000AAU1@1@Z");
//};

//int IntersectFrustum6Planes(struct Frustum const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectFrustum6Planes@@YAHPBUFrustum@@U__vector4@@11111@Z");
//};

//void FastIntersectFrustumPlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectFrustumPlane@@YAXU__vector4@@00000000AAU1@1@Z");
//};

//int IntersectTrianglePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?IntersectTrianglePlane@@YAHU__vector4@@000@Z");
//};

//int XMPlaneIsUnit(struct __vector4)
//{
//    mangled_ppc("?XMPlaneIsUnit@@YAHU__vector4@@@Z");
//};

//int IntersectSpherePlane(struct Sphere const *, struct __vector4)
//{
//    mangled_ppc("?IntersectSpherePlane@@YAHPBUSphere@@U__vector4@@@Z");
//};

//int IntersectAxisAlignedBoxPlane(struct AxisAlignedBox const *, struct __vector4)
//{
//    mangled_ppc("?IntersectAxisAlignedBoxPlane@@YAHPBUAxisAlignedBox@@U__vector4@@@Z");
//};

//int IntersectOrientedBoxPlane(struct OrientedBox const *, struct __vector4)
//{
//    mangled_ppc("?IntersectOrientedBoxPlane@@YAHPBUOrientedBox@@U__vector4@@@Z");
//};

//int IntersectFrustumPlane(struct Frustum const *, struct __vector4)
//{
//    mangled_ppc("?IntersectFrustumPlane@@YAHPBUFrustum@@U__vector4@@@Z");
//};

//public: struct __vector4 XMVECTORF32::operator struct __vector4(void) const
//{
//    mangled_ppc("??BXMVECTORF32@@QBA?AU__vector4@@XZ");
//};

//public: struct __vector4 XMVECTORI32::operator struct __vector4(void) const
//{
//    mangled_ppc("??BXMVECTORI32@@QBA?AU__vector4@@XZ");
//};

//public: struct __vector4 XMVECTORU32::operator struct __vector4(void) const
//{
//    mangled_ppc("??BXMVECTORU32@@QBA?AU__vector4@@XZ");
//};

//struct __vector4 XMLoadFloat(float const *)
//{
//    mangled_ppc("?XMLoadFloat@@YA?AU__vector4@@PBM@Z");
//};

//void XMStoreFloat(float *, struct __vector4)
//{
//    mangled_ppc("?XMStoreFloat@@YAXPAMU__vector4@@@Z");
//};

//void XMStoreFloat3(struct _XMFLOAT3*, struct __vector4)
//{
//    mangled_ppc("?XMStoreFloat3@@YAXPAU_XMFLOAT3@@U__vector4@@@Z");
//};

//void XMStoreFloat4(struct _XMFLOAT4*, struct __vector4)
//{
//    mangled_ppc("?XMStoreFloat4@@YAXPAU_XMFLOAT4@@U__vector4@@@Z");
//};

//struct __vector4 XMVectorReplicatePtr(float const *)
//{
//    mangled_ppc("?XMVectorReplicatePtr@@YA?AU__vector4@@PBM@Z");
//};

//struct __vector4 XMVectorSplatX(struct __vector4)
//{
//    mangled_ppc("?XMVectorSplatX@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorSplatY(struct __vector4)
//{
//    mangled_ppc("?XMVectorSplatY@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorSplatZ(struct __vector4)
//{
//    mangled_ppc("?XMVectorSplatZ@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorSetX(struct __vector4, float)
//{
//    mangled_ppc("?XMVectorSetX@@YA?AU__vector4@@U1@M@Z");
//};

//struct __vector4 XMVectorSetY(struct __vector4, float)
//{
//    mangled_ppc("?XMVectorSetY@@YA?AU__vector4@@U1@M@Z");
//};

//struct __vector4 XMVectorSetZ(struct __vector4, float)
//{
//    mangled_ppc("?XMVectorSetZ@@YA?AU__vector4@@U1@M@Z");
//};

//struct __vector4 XMVectorSelect(struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorSelect@@YA?AU__vector4@@U1@00@Z");
//};

//struct __vector4 XMVectorGreaterR(unsigned int *, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorGreaterR@@YA?AU__vector4@@PAIU1@1@Z");
//};

//struct __vector4 XMVectorGreaterOrEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorGreaterOrEqual@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorInBounds(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorInBounds@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorMin(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorMin@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorMax(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorMax@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorAndCInt(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorAndCInt@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorSqrt(struct __vector4)
//{
//    mangled_ppc("?XMVectorSqrt@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorAbs(struct __vector4)
//{
//    mangled_ppc("?XMVectorAbs@@YA?AU__vector4@@U1@@Z");
//};

//int XMVector3Greater(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3Greater@@YAHU__vector4@@0@Z");
//};

//unsigned int XMVector3GreaterR(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3GreaterR@@YAIU__vector4@@0@Z");
//};

//int XMVector3LessOrEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3LessOrEqual@@YAHU__vector4@@0@Z");
//};

//int XMVector3InBounds(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3InBounds@@YAHU__vector4@@0@Z");
//};

//unsigned int XMVector3InBoundsR(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3InBoundsR@@YAIU__vector4@@0@Z");
//};

//struct __vector4 XMVector3Cross(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3Cross@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVector3LengthSq(struct __vector4)
//{
//    mangled_ppc("?XMVector3LengthSq@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVector3Length(struct __vector4)
//{
//    mangled_ppc("?XMVector3Length@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVector3Rotate(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3Rotate@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVector3InverseRotate(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector3InverseRotate@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVector3TransformNormal(struct __vector4, struct _XMMATRIX)
//{
//    mangled_ppc("?XMVector3TransformNormal@@YA?AU__vector4@@U1@U_XMMATRIX@@@Z");
//};

//int XMVector4NotEqualInt(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4NotEqualInt@@YAHU__vector4@@0@Z");
//};

//int XMVector4Greater(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4Greater@@YAHU__vector4@@0@Z");
//};

//int XMVector4GreaterOrEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4GreaterOrEqual@@YAHU__vector4@@0@Z");
//};

//int XMVector4Less(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4Less@@YAHU__vector4@@0@Z");
//};

//int XMVector4LessOrEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4LessOrEqual@@YAHU__vector4@@0@Z");
//};

//struct __vector4 XMVector4Length(struct __vector4)
//{
//    mangled_ppc("?XMVector4Length@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4& operator*=(struct __vector4&, struct __vector4)
//{
//    mangled_ppc("??X@YAAAU__vector4@@AAU0@U0@@Z");
//};

//struct _XMMATRIX XMMatrixRotationQuaternion(struct __vector4)
//{
//    mangled_ppc("?XMMatrixRotationQuaternion@@YA?AU_XMMATRIX@@U__vector4@@@Z");
//};

//struct __vector4 XMQuaternionMultiply(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMQuaternionMultiply@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMQuaternionNormalize(struct __vector4)
//{
//    mangled_ppc("?XMQuaternionNormalize@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVector4Normalize(struct __vector4)
//{
//    mangled_ppc("?XMVector4Normalize@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMQuaternionConjugate(struct __vector4)
//{
//    mangled_ppc("?XMQuaternionConjugate@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMQuaternionRotationMatrix(struct _XMMATRIX)
//{
//    mangled_ppc("?XMQuaternionRotationMatrix@@YA?AU__vector4@@U_XMMATRIX@@@Z");
//};

//struct __vector4 XMPlaneNormalize(struct __vector4)
//{
//    mangled_ppc("?XMPlaneNormalize@@YA?AU__vector4@@U1@@Z");
//};

