/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum hkResult hkpInertiaTensorComputer::computeSphereVolumeMassProperties(float, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeSphereSurfaceMassProperties(float, float, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeBoxSurfaceMassProperties(class hkVector4const &, float, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeTriangleSurfaceMassProperties(class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeBoxVolumeMassProperties(class hkVector4const &, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeConvexHullMassProperties(struct hkStridedVertices const &, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeVertexHullVolumeMassProperties(float const *, int, int, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeVertexCloudMassProperties(float const *, int, int, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeCapsuleVolumeMassProperties(class hkVector4const &, class hkVector4const &, float, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeCylinderVolumeMassProperties(class hkVector4const &, class hkVector4const &, float, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeGeometrySurfaceMassProperties(struct hkGeometry const *, float, class hkBool, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::combineMassProperties(class hkArray<struct hkpMassElement, struct hkContainerHeapAllocator> const &, struct hkpMassProperties &);
// public: static void hkpInertiaTensorComputer::setShapeVolumeMassProperties(class hkpShape const *, float, class hkpRigidBodyCinfo &);
// public: static void hkpInertiaTensorComputer::setMassProperties(struct hkpMassProperties const &, class hkpRigidBodyCinfo &);
// public: static void hkpInertiaTensorComputer::setAndScaleToMass(struct hkpMassProperties const &, float, class hkpRigidBodyCinfo &);
// public: static void hkpInertiaTensorComputer::setAndScaleToDensity(struct hkpMassProperties const &, float, class hkpRigidBodyCinfo &);
// public: static void hkpInertiaTensorComputer::clipInertia(float, class hkpRigidBodyCinfo &);
// public: static void hkpInertiaTensorComputer::computeShapeVolumeMassProperties(class hkpShape const *, float, struct hkpMassProperties &);
// void computeRecursiveShapeVolumeMassProperties(class hkpShape const *, class hkTransform const &, float, struct hkpMassProperties &);
// public: static void hkpInertiaTensorComputer::shiftInertiaToCom(class hkVector4&, float, class hkMatrix3&);
// public: static void hkpInertiaTensorComputer::shiftInertiaFromCom(class hkVector4&, float, class hkMatrix3&);
// void scaleMassProperties(float, struct hkpMassProperties &);
// public: static void hkpInertiaTensorComputer::simplifyInertiaTensorToOrientedParticle(class hkMatrix3&);
// public: void InternalInertiaTensorComputer::compProjectionIntegrals(class hkVector4const *);
// public: void InternalInertiaTensorComputer::compFaceIntegrals(class hkVector4const *, class hkVector4const &);
// public: void InternalInertiaTensorComputer::compVolumeIntegrals(struct hkGeometry const *, class hkVector4const &);
// public: void InternalInertiaTensorComputer::computeInertialTensorInternal(float, float, class hkVector4&, class hkMatrix3&);
// public: static void InternalInertiaTensorComputer::compGeometryAabb(class hkVector4const *, int, class hkVector4&, class hkVector4&);
// public: static void hkpInertiaTensorComputer::computeGeometryVolumeMassProperties(struct hkGeometry const *, float, struct hkpMassProperties &);
// public: static enum hkResult hkpInertiaTensorComputer::computeGeometryVolumeMassPropertiesChecked(struct hkGeometry const *, float, struct hkpMassProperties &);
// public: static void hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree(class hkpConstraintInstance *const *, int, class hkpRigidBody *, float);
// float hkInertiaTensorComputer_optimizeInertiasOfConstraintTreeInt(class hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator> &, class hkpRigidBody *, float);
// public: static void hkpInertiaTensorComputer::convertInertiaTensorToPrincipleAxis(class hkMatrix3&, class hkRotation &);
// public: void hkpMassProperties::scaleToMass(float);
// public: void hkpMassProperties::scaleToDensity(float);
// public: static void hkpInertiaTensorComputer::calculatePrincipalAxis(class hkpShape const *, class hkMatrix3const &, class hkVector4&, class hkVector4&);
// public: hkGeometry::hkGeometry(void);
// public: hkQuaternion::hkQuaternion(class hkVector4const &, float);
// public: class hkVector4const & hkTransform::getColumn(int) const;
// public: struct hkpMassProperties & hkpMassProperties::operator=(struct hkpMassProperties const &);
// public: hkStridedVertices::hkStridedVertices(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &);
// public: void hkStridedVertices::set(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &);
// public: class hkVector4const & hkpCylinderShape::getVertex(int) const;
// public: class hkVector4const * hkpCylinderShape::getVertices(void) const;
// public: float InternalInertiaTensorComputer::sqr(float);
// public: float InternalInertiaTensorComputer::cube(float);
// float hkMath::min2(float, float);
// public: int hkVector4::getMajorAxis(void) const;
// public: class hkVector4& hkTransform::getColumn(int);
// public: hkArray<class hkVector4, struct hkContainerHeapAllocator>::hkArray<class hkVector4, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct hkGeometry::Triangle, struct hkContainerHeapAllocator>::hkArray<struct hkGeometry::Triangle, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::pushBack(struct hkpMassElement const &);
// public: struct hkpMassElement & hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>(void);
// public: void hkArray<float, struct hkContainerHeapAllocator>::setSize(int);
// public: hkInplaceArrayAligned16<struct hkpMassElement, 2>::~hkInplaceArrayAligned16<struct hkpMassElement, 2>(void);
// public: hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintInstance const *const &);
// public: hkLocalArray<class hkpConstraintInstance const *>::hkLocalArray<class hkpConstraintInstance const *>(int);
// public: hkLocalArray<class hkpConstraintInstance const *>::~hkLocalArray<class hkpConstraintInstance const *>(void);
// public: hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<class hkpConstraintInstance const *>::wasReallocated(void) const;
// public: hkArrayBase<class hkVector4>::hkArrayBase<class hkVector4>(void);
// public: void hkArrayBase<class hkVector4>::_setSize(class hkMemoryAllocator &, int);
// public: class hkVector4const * hkArrayBase<class hkVector4>::begin(void) const;
// public: class hkArray<class hkVector4, struct hkContainerHeapAllocator> & hkArray<class hkVector4, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &);
// public: hkArrayBase<struct hkGeometry::Triangle>::hkArrayBase<struct hkGeometry::Triangle>(void);
// public: struct hkGeometry::Triangle const & hkArrayBase<struct hkGeometry::Triangle>::operator[](int) const;
// public: void hkStridedVertices::set<class hkVector4>(class hkVector4const *, int);
// public: hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>::hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>(int);
// float * hkAddByteOffset<float>(float *, long);
// public: struct hkpMassElement const & hkArrayBase<struct hkpMassElement>::operator[](int) const;
// public: int hkArrayBase<struct hkpMassElement>::getSize(void) const;
// public: void hkArrayBase<struct hkpMassElement>::_pushBack(class hkMemoryAllocator &, struct hkpMassElement const &);
// public: struct hkpMassElement & hkArrayBase<struct hkpMassElement>::_expandOne(class hkMemoryAllocator &);
// public: hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>(int);
// public: void hkArrayBase<float>::_setSize(class hkMemoryAllocator &, int);
// public: hkInplaceArrayAligned16<struct hkpMassElement, 2>::hkInplaceArrayAligned16<struct hkpMassElement, 2>(int);
// public: hkArrayBase<class hkpConstraintInstance const *>::hkArrayBase<class hkpConstraintInstance const *>(void);
// public: class hkpConstraintInstance const *& hkArrayBase<class hkpConstraintInstance const *>::operator[](int);
// public: int hkArrayBase<class hkpConstraintInstance const *>::getSize(void) const;
// public: void hkArrayBase<class hkpConstraintInstance const *>::clear(void);
// public: void hkArrayBase<class hkpConstraintInstance const *>::removeAt(int);
// public: void hkArrayBase<class hkpConstraintInstance const *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintInstance const *const &);
// public: void hkArrayBase<class hkpConstraintInstance const *>::pushBackUnchecked(class hkpConstraintInstance const *const &);
// public: hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpConstraintInstance const *>::~hkArrayBase<class hkpConstraintInstance const *>(void);
// public: hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>(int);
// class hkpConstraintInstance const ** hkAllocateStack<class hkpConstraintInstance const *>(int, char const *);
// void hkDeallocateStack<class hkpConstraintInstance const *>(class hkpConstraintInstance const **);
// public: hkArray<class hkVector4, struct hkContainerHeapAllocator>::hkArray<class hkVector4, struct hkContainerHeapAllocator>(class hkVector4*, int, int);
// public: hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>(class hkpConstraintInstance const **, int, int);
// public: void hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<class hkVector4>::hkArrayBase<class hkVector4>(class hkVector4*, int, int);
// protected: class hkArrayBase<class hkVector4> & hkArrayBase<class hkVector4>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkVector4> const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkpMassElement>(struct hkpMassElement *, int, struct hkpMassElement const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpMassElement>(struct hkpMassElement *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<float>(float *, int, struct hkTraitBool<1>);
// public: hkArrayBase<class hkpConstraintInstance const *>::hkArrayBase<class hkpConstraintInstance const *>(class hkpConstraintInstance const **, int, int);
// public: int hkArrayBase<class hkpConstraintInstance const *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpConstraintInstance const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpConstraintInstance const *>(class hkpConstraintInstance const **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpConstraintInstance const *>(class hkpConstraintInstance const **, int, class hkpConstraintInstance const *const &, struct hkTraitBool<1>);
// public: hkpMassElement::hkpMassElement(struct hkpMassElement const &);
// public: hkpMassProperties::hkpMassProperties(struct hkpMassProperties const &);
// public: static void hkArrayBase<class hkVector4>::copy(class hkVector4*, class hkVector4const *, int);

//public: static enum hkResult hkpInertiaTensorComputer::computeSphereVolumeMassProperties(float, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeSphereVolumeMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@MMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeSphereSurfaceMassProperties(float, float, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeSphereSurfaceMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@MMMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeBoxSurfaceMassProperties(class hkVector4const &, float, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeBoxSurfaceMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABVhkVector4@@MMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeTriangleSurfaceMassProperties(class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeTriangleSurfaceMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABVhkVector4@@00MMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeBoxVolumeMassProperties(class hkVector4const &, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeBoxVolumeMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABVhkVector4@@MAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeConvexHullMassProperties(struct hkStridedVertices const &, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeConvexHullMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABUhkStridedVertices@@MAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeVertexHullVolumeMassProperties(float const *, int, int, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeVertexHullVolumeMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@PBMHHMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeVertexCloudMassProperties(float const *, int, int, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeVertexCloudMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@PBMHHMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeCapsuleVolumeMassProperties(class hkVector4const &, class hkVector4const &, float, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeCapsuleVolumeMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABVhkVector4@@0MMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeCylinderVolumeMassProperties(class hkVector4const &, class hkVector4const &, float, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeCylinderVolumeMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABVhkVector4@@0MMAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeGeometrySurfaceMassProperties(struct hkGeometry const *, float, class hkBool, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeGeometrySurfaceMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@PBUhkGeometry@@MVhkBool@@MAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::combineMassProperties(class hkArray<struct hkpMassElement, struct hkContainerHeapAllocator> const &, struct hkpMassProperties &)
//{
//    mangled_ppc("?combineMassProperties@hkpInertiaTensorComputer@@SA?AW4hkResult@@ABV?$hkArray@UhkpMassElement@@UhkContainerHeapAllocator@@@@AAUhkpMassProperties@@@Z");
//};

//public: static void hkpInertiaTensorComputer::setShapeVolumeMassProperties(class hkpShape const *, float, class hkpRigidBodyCinfo &)
//{
//    mangled_ppc("?setShapeVolumeMassProperties@hkpInertiaTensorComputer@@SAXPBVhkpShape@@MAAVhkpRigidBodyCinfo@@@Z");
//};

//public: static void hkpInertiaTensorComputer::setMassProperties(struct hkpMassProperties const &, class hkpRigidBodyCinfo &)
//{
//    mangled_ppc("?setMassProperties@hkpInertiaTensorComputer@@SAXABUhkpMassProperties@@AAVhkpRigidBodyCinfo@@@Z");
//};

//public: static void hkpInertiaTensorComputer::setAndScaleToMass(struct hkpMassProperties const &, float, class hkpRigidBodyCinfo &)
//{
//    mangled_ppc("?setAndScaleToMass@hkpInertiaTensorComputer@@SAXABUhkpMassProperties@@MAAVhkpRigidBodyCinfo@@@Z");
//};

//public: static void hkpInertiaTensorComputer::setAndScaleToDensity(struct hkpMassProperties const &, float, class hkpRigidBodyCinfo &)
//{
//    mangled_ppc("?setAndScaleToDensity@hkpInertiaTensorComputer@@SAXABUhkpMassProperties@@MAAVhkpRigidBodyCinfo@@@Z");
//};

//public: static void hkpInertiaTensorComputer::clipInertia(float, class hkpRigidBodyCinfo &)
//{
//    mangled_ppc("?clipInertia@hkpInertiaTensorComputer@@SAXMAAVhkpRigidBodyCinfo@@@Z");
//};

//public: static void hkpInertiaTensorComputer::computeShapeVolumeMassProperties(class hkpShape const *, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeShapeVolumeMassProperties@hkpInertiaTensorComputer@@SAXPBVhkpShape@@MAAUhkpMassProperties@@@Z");
//};

//void computeRecursiveShapeVolumeMassProperties(class hkpShape const *, class hkTransform const &, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeRecursiveShapeVolumeMassProperties@@YAXPBVhkpShape@@ABVhkTransform@@MAAUhkpMassProperties@@@Z");
//};

//public: static void hkpInertiaTensorComputer::shiftInertiaToCom(class hkVector4&, float, class hkMatrix3&)
//{
//    mangled_ppc("?shiftInertiaToCom@hkpInertiaTensorComputer@@SAXAAVhkVector4@@MAAVhkMatrix3@@@Z");
//};

//public: static void hkpInertiaTensorComputer::shiftInertiaFromCom(class hkVector4&, float, class hkMatrix3&)
//{
//    mangled_ppc("?shiftInertiaFromCom@hkpInertiaTensorComputer@@SAXAAVhkVector4@@MAAVhkMatrix3@@@Z");
//};

//void scaleMassProperties(float, struct hkpMassProperties &)
//{
//    mangled_ppc("?scaleMassProperties@@YAXMAAUhkpMassProperties@@@Z");
//};

//public: static void hkpInertiaTensorComputer::simplifyInertiaTensorToOrientedParticle(class hkMatrix3&)
//{
//    mangled_ppc("?simplifyInertiaTensorToOrientedParticle@hkpInertiaTensorComputer@@SAXAAVhkMatrix3@@@Z");
//};

//public: void InternalInertiaTensorComputer::compProjectionIntegrals(class hkVector4const *)
//{
//    mangled_ppc("?compProjectionIntegrals@InternalInertiaTensorComputer@@QAAXPBVhkVector4@@@Z");
//};

//public: void InternalInertiaTensorComputer::compFaceIntegrals(class hkVector4const *, class hkVector4const &)
//{
//    mangled_ppc("?compFaceIntegrals@InternalInertiaTensorComputer@@QAAXPBVhkVector4@@ABV2@@Z");
//};

//public: void InternalInertiaTensorComputer::compVolumeIntegrals(struct hkGeometry const *, class hkVector4const &)
//{
//    mangled_ppc("?compVolumeIntegrals@InternalInertiaTensorComputer@@QAAXPBUhkGeometry@@ABVhkVector4@@@Z");
//};

//public: void InternalInertiaTensorComputer::computeInertialTensorInternal(float, float, class hkVector4&, class hkMatrix3&)
//{
//    mangled_ppc("?computeInertialTensorInternal@InternalInertiaTensorComputer@@QAAXMMAAVhkVector4@@AAVhkMatrix3@@@Z");
//};

//public: static void InternalInertiaTensorComputer::compGeometryAabb(class hkVector4const *, int, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?compGeometryAabb@InternalInertiaTensorComputer@@SAXPBVhkVector4@@HAAV2@1@Z");
//};

//public: static void hkpInertiaTensorComputer::computeGeometryVolumeMassProperties(struct hkGeometry const *, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeGeometryVolumeMassProperties@hkpInertiaTensorComputer@@SAXPBUhkGeometry@@MAAUhkpMassProperties@@@Z");
//};

//public: static enum hkResult hkpInertiaTensorComputer::computeGeometryVolumeMassPropertiesChecked(struct hkGeometry const *, float, struct hkpMassProperties &)
//{
//    mangled_ppc("?computeGeometryVolumeMassPropertiesChecked@hkpInertiaTensorComputer@@SA?AW4hkResult@@PBUhkGeometry@@MAAUhkpMassProperties@@@Z");
//};

//public: static void hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree(class hkpConstraintInstance *const *, int, class hkpRigidBody *, float)
//{
//    mangled_ppc("?optimizeInertiasOfConstraintTree@hkpInertiaTensorComputer@@SAXPBQAVhkpConstraintInstance@@HPAVhkpRigidBody@@M@Z");
//};

//float hkInertiaTensorComputer_optimizeInertiasOfConstraintTreeInt(class hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator> &, class hkpRigidBody *, float)
//{
//    mangled_ppc("?hkInertiaTensorComputer_optimizeInertiasOfConstraintTreeInt@@YAMAAV?$hkArray@PBVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@PAVhkpRigidBody@@M@Z");
//};

//public: static void hkpInertiaTensorComputer::convertInertiaTensorToPrincipleAxis(class hkMatrix3&, class hkRotation &)
//{
//    mangled_ppc("?convertInertiaTensorToPrincipleAxis@hkpInertiaTensorComputer@@SAXAAVhkMatrix3@@AAVhkRotation@@@Z");
//};

//public: void hkpMassProperties::scaleToMass(float)
//{
//    mangled_ppc("?scaleToMass@hkpMassProperties@@QAAXM@Z");
//};

//public: void hkpMassProperties::scaleToDensity(float)
//{
//    mangled_ppc("?scaleToDensity@hkpMassProperties@@QAAXM@Z");
//};

//public: static void hkpInertiaTensorComputer::calculatePrincipalAxis(class hkpShape const *, class hkMatrix3const &, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?calculatePrincipalAxis@hkpInertiaTensorComputer@@SAXPBVhkpShape@@ABVhkMatrix3@@AAVhkVector4@@2@Z");
//};

//public: hkGeometry::hkGeometry(void)
//{
//    mangled_ppc("??0hkGeometry@@QAA@XZ");
//};

//public: hkQuaternion::hkQuaternion(class hkVector4const &, float)
//{
//    mangled_ppc("??0hkQuaternion@@QAA@ABVhkVector4@@M@Z");
//};

//public: class hkVector4const & hkTransform::getColumn(int) const
//{
//    mangled_ppc("?getColumn@hkTransform@@QBAABVhkVector4@@H@Z");
//};

//public: struct hkpMassProperties & hkpMassProperties::operator=(struct hkpMassProperties const &)
//{
//    mangled_ppc("??4hkpMassProperties@@QAAAAU0@ABU0@@Z");
//};

//public: hkStridedVertices::hkStridedVertices(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??0hkStridedVertices@@QAA@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStridedVertices::set(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?set@hkStridedVertices@@QAAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkVector4const & hkpCylinderShape::getVertex(int) const
//{
//    mangled_ppc("?getVertex@hkpCylinderShape@@QBAABVhkVector4@@H@Z");
//};

//public: class hkVector4const * hkpCylinderShape::getVertices(void) const
//{
//    mangled_ppc("?getVertices@hkpCylinderShape@@QBAPBVhkVector4@@XZ");
//};

//public: float InternalInertiaTensorComputer::sqr(float)
//{
//    mangled_ppc("?sqr@InternalInertiaTensorComputer@@QAAMM@Z");
//};

//public: float InternalInertiaTensorComputer::cube(float)
//{
//    mangled_ppc("?cube@InternalInertiaTensorComputer@@QAAMM@Z");
//};

//float hkMath::min2(float, float)
//{
//    mangled_ppc("?min2@hkMath@@YAMMM@Z");
//};

//public: int hkVector4::getMajorAxis(void) const
//{
//    mangled_ppc("?getMajorAxis@hkVector4@@QBAHXZ");
//};

//public: class hkVector4& hkTransform::getColumn(int)
//{
//    mangled_ppc("?getColumn@hkTransform@@QAAAAVhkVector4@@H@Z");
//};

//public: hkArray<class hkVector4, struct hkContainerHeapAllocator>::hkArray<class hkVector4, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkGeometry::Triangle, struct hkContainerHeapAllocator>::hkArray<struct hkGeometry::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UTriangle@hkGeometry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@VhkVector4@@$05UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UhkpMassElement@@$02UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::pushBack(struct hkpMassElement const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UhkpMassElement@@UhkContainerHeapAllocator@@@@QAAXABUhkpMassElement@@@Z");
//};

//public: struct hkpMassElement & hkArray<struct hkpMassElement, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkpMassElement@@UhkContainerHeapAllocator@@@@QAAAAUhkpMassElement@@XZ");
//};

//public: hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UhkpMassElement@@$00UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<float, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@MUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkInplaceArrayAligned16<struct hkpMassElement, 2>::~hkInplaceArrayAligned16<struct hkpMassElement, 2>(void)
//{
//    mangled_ppc("??1?$hkInplaceArrayAligned16@UhkpMassElement@@$01@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PBVhkpConstraintInstance@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintInstance const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAAXABQBVhkpConstraintInstance@@@Z");
//};

//public: hkLocalArray<class hkpConstraintInstance const *>::hkLocalArray<class hkpConstraintInstance const *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PBVhkpConstraintInstance@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkpConstraintInstance const *>::~hkLocalArray<class hkpConstraintInstance const *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PBVhkpConstraintInstance@@@@QAA@XZ");
//};

//public: hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PBVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<class hkpConstraintInstance const *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PBVhkpConstraintInstance@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArrayBase<class hkVector4>::hkArrayBase<class hkVector4>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkVector4@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkVector4>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkVector4const * hkArrayBase<class hkVector4>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkVector4@@@@QBAPBVhkVector4@@XZ");
//};

//public: class hkArray<class hkVector4, struct hkContainerHeapAllocator> & hkArray<class hkVector4, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: hkArrayBase<struct hkGeometry::Triangle>::hkArrayBase<struct hkGeometry::Triangle>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UTriangle@hkGeometry@@@@QAA@XZ");
//};

//public: struct hkGeometry::Triangle const & hkArrayBase<struct hkGeometry::Triangle>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UTriangle@hkGeometry@@@@QBAABUTriangle@hkGeometry@@H@Z");
//};

//public: void hkStridedVertices::set<class hkVector4>(class hkVector4const *, int)
//{
//    mangled_ppc("??$set@VhkVector4@@@hkStridedVertices@@QAAXPBVhkVector4@@H@Z");
//};

//public: hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>::hkInplaceArray<class hkVector4, 6, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@VhkVector4@@$05UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//float * hkAddByteOffset<float>(float *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@M@@YAPAMPAMJ@Z");
//};

//public: struct hkpMassElement const & hkArrayBase<struct hkpMassElement>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpMassElement@@@@QBAABUhkpMassElement@@H@Z");
//};

//public: int hkArrayBase<struct hkpMassElement>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkpMassElement@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpMassElement>::_pushBack(class hkMemoryAllocator &, struct hkpMassElement const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UhkpMassElement@@@@QAAXAAVhkMemoryAllocator@@ABUhkpMassElement@@@Z");
//};

//public: struct hkpMassElement & hkArrayBase<struct hkpMassElement>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkpMassElement@@@@QAAAAUhkpMassElement@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpMassElement, 3, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UhkpMassElement@@$02UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpMassElement, 1, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UhkpMassElement@@$00UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: void hkArrayBase<float>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@M@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkInplaceArrayAligned16<struct hkpMassElement, 2>::hkInplaceArrayAligned16<struct hkpMassElement, 2>(int)
//{
//    mangled_ppc("??0?$hkInplaceArrayAligned16@UhkpMassElement@@$01@@QAA@H@Z");
//};

//public: hkArrayBase<class hkpConstraintInstance const *>::hkArrayBase<class hkpConstraintInstance const *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PBVhkpConstraintInstance@@@@QAA@XZ");
//};

//public: class hkpConstraintInstance const *& hkArrayBase<class hkpConstraintInstance const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBVhkpConstraintInstance@@@@QAAAAPBVhkpConstraintInstance@@H@Z");
//};

//public: int hkArrayBase<class hkpConstraintInstance const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBVhkpConstraintInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintInstance const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBVhkpConstraintInstance@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpConstraintInstance const *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PBVhkpConstraintInstance@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkpConstraintInstance const *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintInstance const *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PBVhkpConstraintInstance@@@@QAAXAAVhkMemoryAllocator@@ABQBVhkpConstraintInstance@@@Z");
//};

//public: void hkArrayBase<class hkpConstraintInstance const *>::pushBackUnchecked(class hkpConstraintInstance const *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PBVhkpConstraintInstance@@@@QAAXABQBVhkpConstraintInstance@@@Z");
//};

//public: hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintInstance const *>::~hkArrayBase<class hkpConstraintInstance const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBVhkpConstraintInstance@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance const *, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PBVhkpConstraintInstance@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//class hkpConstraintInstance const ** hkAllocateStack<class hkpConstraintInstance const *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PBVhkpConstraintInstance@@@@YAPAPBVhkpConstraintInstance@@HPBD@Z");
//};

//void hkDeallocateStack<class hkpConstraintInstance const *>(class hkpConstraintInstance const **)
//{
//    mangled_ppc("??$hkDeallocateStack@PBVhkpConstraintInstance@@@@YAXPAPBVhkpConstraintInstance@@@Z");
//};

//public: hkArray<class hkVector4, struct hkContainerHeapAllocator>::hkArray<class hkVector4, struct hkContainerHeapAllocator>(class hkVector4*, int, int)
//{
//    mangled_ppc("??0?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAA@PAVhkVector4@@HH@Z");
//};

//public: hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>(class hkpConstraintInstance const **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PBVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAA@PAPBVhkpConstraintInstance@@HH@Z");
//};

//public: void hkArray<class hkpConstraintInstance const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<class hkVector4>::hkArrayBase<class hkVector4>(class hkVector4*, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkVector4@@@@QAA@PAVhkVector4@@HH@Z");
//};

//protected: class hkArrayBase<class hkVector4> & hkArrayBase<class hkVector4>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkVector4> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@VhkVector4@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkpMassElement>(struct hkpMassElement *, int, struct hkpMassElement const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UhkpMassElement@@@hkArrayUtil@@SAXPAUhkpMassElement@@HABU1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpMassElement>(struct hkpMassElement *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpMassElement@@@hkArrayUtil@@SAXPAUhkpMassElement@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<float>(float *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@M@hkArrayUtil@@SAXPAMHU?$hkTraitBool@$00@@@Z");
//};

//public: hkArrayBase<class hkpConstraintInstance const *>::hkArrayBase<class hkpConstraintInstance const *>(class hkpConstraintInstance const **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PBVhkpConstraintInstance@@@@QAA@PAPBVhkpConstraintInstance@@HH@Z");
//};

//public: int hkArrayBase<class hkpConstraintInstance const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBVhkpConstraintInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintInstance const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBVhkpConstraintInstance@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpConstraintInstance const *>(class hkpConstraintInstance const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBVhkpConstraintInstance@@@hkArrayUtil@@SAXPAPBVhkpConstraintInstance@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpConstraintInstance const *>(class hkpConstraintInstance const **, int, class hkpConstraintInstance const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBVhkpConstraintInstance@@@hkArrayUtil@@SAXPAPBVhkpConstraintInstance@@HABQBV1@U?$hkTraitBool@$00@@@Z");
//};

//public: hkpMassElement::hkpMassElement(struct hkpMassElement const &)
//{
//    mangled_ppc("??0hkpMassElement@@QAA@ABU0@@Z");
//};

//public: hkpMassProperties::hkpMassProperties(struct hkpMassProperties const &)
//{
//    mangled_ppc("??0hkpMassProperties@@QAA@ABU0@@Z");
//};

//public: static void hkArrayBase<class hkVector4>::copy(class hkVector4*, class hkVector4const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@VhkVector4@@@@SAXPAVhkVector4@@PBV2@H@Z");
//};

