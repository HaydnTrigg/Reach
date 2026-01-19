/* ---------- headers */

#include "havok\hkinternal\hkgpConvexHull.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkgpConvexHull::`RTTI Complete Object Locator'; // "??_R4hkgpConvexHull@@6B@"
// hkgpConvexHull::`RTTI Class Hierarchy Descriptor'; // "??_R3hkgpConvexHull@@8"
// hkgpConvexHull::`RTTI Base Class Array'; // "??_R2hkgpConvexHull@@8"
// hkgpConvexHull::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkgpConvexHull@@8"
// const hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::`RTTI Complete Object Locator'; // "??_R4?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@6B@"
// hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::`RTTI Base Class Array'; // "??_R2?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// class hkgpConvexHull::`RTTI Type Descriptor'; // "??_R0?AVhkgpConvexHull@@@8"
// class hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::`RTTI Type Descriptor'; // "??_R0?AV?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@@8"
// unsigned int `public: __cdecl hkgpConvexHullImpl::hkgpConvexHullImpl(void)'::`2'::uidGen; // "?uidGen@?1???0hkgpConvexHullImpl@@QAA@XZ@4IA"
// struct hkgpConvexHullImpl::Edge const `public: static struct hkgpConvexHullImpl::Edge const & __cdecl hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::null(void)'::`2'::e; // "?e@?1??null@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@hkgpConvexHullImpl@@XZ@4U45@B"
// `public: static struct hkgpConvexHullImpl::Edge const & __cdecl hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::null(void)'::`2'::`local static guard'{2}; // "??_B?1??null@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@hkgpConvexHullImpl@@XZ@51"

// public: hkgpConvexHull::BuildConfig::BuildConfig(void);
// public: hkgpConvexHull::SimplifyConfig::SimplifyConfig(void);
// public: hkgpConvexHull::AbsoluteScaleConfig::AbsoluteScaleConfig(void);
// public: hkgpConvexHull::hkgpConvexHull(void);
// public: virtual hkgpConvexHull::~hkgpConvexHull(void);
// public: void hkgpConvexHull::reset(void);
// public: class hkgpConvexHull * hkgpConvexHull::clone(void) const;
// public: void *& hkgpConvexHull::userData(void) const;
// public: struct hkgpConvexHull::IUserObject *& hkgpConvexHull::userObject(void) const;
// public: void hkgpConvexHull::deleteUserObject(void);
// public: unsigned int hkgpConvexHull::uid(void) const;
// public: int hkgpConvexHull::build(class hkVector4const *, int, struct hkgpConvexHull::BuildConfig const &);
// public: int hkgpConvexHull::build(struct hkStridedVertices const &, struct hkgpConvexHull::BuildConfig const &);
// public: int hkgpConvexHull::buildPlanar(class hkVector4const *, int, class hkVector4const &, struct hkgpConvexHull::BuildConfig const &);
// public: int hkgpConvexHull::buildPlanar(struct hkStridedVertices const &, class hkVector4const &, struct hkgpConvexHull::BuildConfig const &);
// public: int hkgpConvexHull::buildFromPlanes(class hkVector4const *, int, struct hkgpConvexHull::BuildConfig const &);
// public: int hkgpConvexHull::buildFromPlanes(class hkVector4const *, int, class hkVector4const &, struct hkgpConvexHull::BuildConfig const &);
// public: void hkgpConvexHull::simplify(struct hkgpConvexHull::SimplifyConfig const &);
// public: void hkgpConvexHull::ensureContainment(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &);
// public: bool hkgpConvexHull::decimateVertices(int, bool);
// public: bool hkgpConvexHull::expandByPlanarMargin(float);
// public: void hkgpConvexHull::absoluteScale(float, struct hkgpConvexHull::AbsoluteScaleConfig const &);
// public: void hkgpConvexHull::buildIndices(float, bool);
// public: enum hkResult hkgpConvexHull::buildMassProperties(void);
// public: bool hkgpConvexHull::isVertexUsed(class hkVector4const &) const;
// public: bool hkgpConvexHull::isPointInside(class hkVector4const &, bool, float) const;
// public: bool hkgpConvexHull::clipLine(class hkVector4const &, class hkVector4const &, float &, float &, float) const;
// public: float hkgpConvexHull::maximumDistanceToPlanes(class hkVector4const &) const;
// public: struct hkgpConvexHull::BuildConfig const & hkgpConvexHull::getConfiguration(void) const;
// public: int hkgpConvexHull::getDimensions(void) const;
// public: class hkAabb hkgpConvexHull::getBoundingBox(enum hkgpConvexHull::Inputs, float, float) const;
// public: void hkgpConvexHull::getOrientedBoundingBox(class hkVector4&, class hkTransform &) const;
// public: void hkgpConvexHull::getOrientedRectangle(class hkVector4const &, class hkVector4&, class hkTransform &) const;
// public: class hkVector4 hkgpConvexHull::getProjectionAxis(void) const;
// public: class hkVector4 hkgpConvexHull::getProjectionPlane(void) const;
// public: int hkgpConvexHull::getNumPlanes(void) const;
// public: class hkVector4const & hkgpConvexHull::getPlane(int) const;
// public: int hkgpConvexHull::getNumVertices(void) const;
// public: struct hkgpConvexHull::Vertex * hkgpConvexHull::getFirstVertex(void) const;
// public: int hkgpConvexHull::getIndex(struct hkgpConvexHull::Vertex const *) const;
// public: struct hkgpConvexHull::Vertex * hkgpConvexHull::getNext(struct hkgpConvexHull::Vertex const *) const;
// public: class hkVector4 hkgpConvexHull::getPosition(struct hkgpConvexHull::Vertex const *) const;
// public: class hkVector4const & hkgpConvexHull::getSourcePosition(struct hkgpConvexHull::Vertex const *) const;
// public: int hkgpConvexHull::getNumTriangles(void) const;
// public: struct hkgpConvexHull::Triangle * hkgpConvexHull::getFirstTriangle(void) const;
// public: int hkgpConvexHull::getIndex(struct hkgpConvexHull::Triangle const *) const;
// public: struct hkgpConvexHull::Triangle * hkgpConvexHull::getNext(struct hkgpConvexHull::Triangle const *) const;
// public: int hkgpConvexHull::getPlaneIndex(struct hkgpConvexHull::Triangle const *) const;
// public: class hkVector4 hkgpConvexHull::getPlaneEquation(struct hkgpConvexHull::Triangle const *) const;
// public: struct hkgpConvexHull::Vertex * hkgpConvexHull::getVertex(struct hkgpConvexHull::Triangle const *, int) const;
// public: struct hkgpConvexHull::Triangle * hkgpConvexHull::getNeighbour(struct hkgpConvexHull::Triangle *, int) const;
// public: float hkgpConvexHull::getWidth(class hkVector4const &) const;
// public: float hkgpConvexHull::getMinimumDistanceFromPlane(class hkVector4const &) const;
// public: float hkgpConvexHull::getMaximumDistanceFromPlane(class hkVector4const &) const;
// public: void hkgpConvexHull::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: void hkgpConvexHull::getNearestVertex(enum hkgpConvexHull::Inputs, class hkVector4const &, class hkVector4&) const;
// public: void hkgpConvexHull::getFarthestVertex(enum hkgpConvexHull::Inputs, class hkVector4const &, class hkVector4&) const;
// public: class hkVector4const & hkgpConvexHull::getCentroid(void) const;
// public: float hkgpConvexHull::getVolume(void) const;
// public: float hkgpConvexHull::getSurfaceArea(void) const;
// public: float hkgpConvexHull::getEdgeLengths(void) const;
// public: float hkgpConvexHull::getSphericity(void) const;
// public: void hkgpConvexHull::getLocalInertia(class hkTransform &, class hkVector4&) const;
// public: class hkMatrix3const & hkgpConvexHull::getWorldInertia(void) const;
// public: class hkVector4const & hkgpConvexHull::getCenterOfMass(void) const;
// public: class hkVector4 hkgpConvexHull::getMajorPlane(void) const;
// public: void hkgpConvexHull::getMajorPlanes(class hkVector4*const) const;
// public: enum hkgpConvexHull::Side hkgpConvexHull::classify(class hkVector4const &, float, float *) const;
// public: enum hkgpConvexHull::Side hkgpConvexHull::splitByPlane(class hkVector4const &, class hkgpConvexHull **, class hkgpConvexHull **, float) const;
// public: void hkgpConvexHull::subdivide(int, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float) const;
// public: void hkgpConvexHull::fetchPositions(enum hkgpConvexHull::Inputs, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: void hkgpConvexHull::fetchPlanes(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: void hkgpConvexHull::fetchBevelPlanes(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: int hkgpConvexHull::generateIndexedFaces(enum hkgpConvexHull::Inputs, class hkArray<unsigned char, struct hkContainerHeapAllocator> &, class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const;
// public: int hkgpConvexHull::generateIndexedFaces(enum hkgpConvexHull::Inputs, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &) const;
// public: void hkgpConvexHull::generateVertexAdjacencyGraph(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &) const;
// public: void hkgpConvexHull::generateGeometry(enum hkgpConvexHull::Inputs, struct hkGeometry &) const;
// public: static void hkgpConvexHull::booleanSplit(class hkgpConvexHull const *, class hkgpConvexHull const *, class hkgpConvexHull **, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> *, float);
// public: static bool hkgpConvexHull::booleanIntersection(class hkgpConvexHull const *, class hkgpConvexHull const *, class hkgpConvexHull *&, float);
// public: static bool hkgpConvexHull::booleanSubtraction(class hkgpConvexHull const *, class hkgpConvexHull const *, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float);
// public: static bool hkgpConvexHull::booleanSubtraction(class hkgpConvexHull const *, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float);
// public: static float hkgpConvexHull::findBestUnion(class hkgpConvexHull const *, class hkgpConvexHull const *, struct hkgpConvexHull::IBooleanFunction const &, class hkgpConvexHull *&, class hkgpConvexHull *&);
// public: static class hkgpConvexHull * hkgpConvexHull::createCompound(enum hkgpConvexHull::Inputs, class hkgpConvexHull const *const *, int);
// public: static class hkgpConvexHull * hkgpConvexHull::createCompound(enum hkgpConvexHull::Inputs, class hkgpConvexHull const *, class hkgpConvexHull const *);
// public: static void hkgpConvexHull::createRandomSamples(class hkgpConvexHull const *, class hkPseudoRandomGenerator &, int, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &);
// public: static void hkgpConvexHull::createVoronoiCells(class hkgpConvexHull const *, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float);
// public: static void hkgpConvexHull::createVoronoiEdges(class hkgpConvexHull const *, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float);
// public: static void hkgpConvexHull::createVoronoiFeatures(class hkgpConvexHull const *, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float);
// merged_8476F928;
// public: static void hkgpConvexHull::operator delete(void *);
// public: static void * hkgpConvexHullImpl::operator new(unsigned int);
// public: hkgpConvexHullImpl::hkgpConvexHullImpl(void);
// public: void hkgpConvexHullImpl::reset(bool);
// public: hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>(void);
// merged_8476FD40;
// public: void * hkgpConvexHullImpl::`scalar deleting destructor'(unsigned int);
// public: static void hkgpConvexHullImpl::operator delete(void *);
// public: hkgpConvexHullImpl::~hkgpConvexHullImpl(void);
// public: static void * hkgpConvexHull::operator new(unsigned int);
// public: class hkgpConvexHullImpl * hkgpConvexHullImpl::clone(void) const;
// public: hkgpConvexHullImpl::Edge::Edge(struct hkgpConvexHullImpl::Triangle *, int);
// public: hkgpConvexHullImpl::Edge::Edge(unsigned long);
// public: struct hkgpConvexHullImpl::Vertex & hkgpConvexHullImpl::Vertex::operator=(struct hkgpConvexHullImpl::Vertex const &);
// public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>(void);
// public: hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>(void);
// public: struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex> & hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::operator=(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex> const &);
// public: int hkgpConvexHullImpl::build(class hkVector4const *, int, bool, class hkgpConvexHullImpl const *);
// public: hkgpConvexHullImpl::Vertex::Vertex(void);
// bool operator!=(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &);
// bool operator==(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &);
// public: static int hkgpConvexHullImpl::orientation(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &);
// public: static void hkgpConvexHullImpl::makeVertex(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex *);
// public: static class hkVector4 hkgpConvexHullImpl::planeFromTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &, bool);
// public: struct hkgpConvexHullImpl::Vertex hkgpConvexHullImpl::transform(class hkVector4const &) const;
// public: struct hkgpConvexHullImpl::Vertex hkgpConvexHullImpl::transformChecked(class hkVector4const &, bool &) const;
// public: static int hkgpConvexHullImpl::round(float);
// public: void hkgpConvexHullImpl::projectOnMajorAxis(class hkVector4const &);
// public: bool hkgpConvexHullImpl::flushPending(void);
// public: hkgpConvexHullImpl::Plane::Plane(void);
// public: hkgpConvexHullImpl::Triangle::Triangle(void);
// public: static __int64 hkgpConvexHullImpl::distanceToPlane(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Plane const &);
// public: static bool hkgpConvexHullImpl::makePlane(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Plane &);
// public: static bool hkgpConvexHullImpl::makeTriangle(struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Triangle *);
// public: class hkVector4 hkgpConvexHullImpl::transform(struct hkgpConvexHullImpl::Vertex const &) const;
// public: bool hkgpConvexHullImpl::insert(struct hkgpConvexHullImpl::Vertex const &);
// public: struct hkgpConvexHullImpl::Triangle * hkgpConvexHullImpl::locateBoundaryExhaustive(struct hkgpConvexHullImpl::Vertex const &) const;
// public: static struct hkgpConvexHullImpl::Edge hkgpConvexHullImpl::nextHorizon(struct hkgpConvexHullImpl::Edge const &);
// public: void hkgpConvexHullImpl::clearHorizon(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Edge const &, struct hkgpConvexHullImpl::Edge &);
// public: struct hkgpConvexHullImpl::Plane const & hkgpConvexHullImpl::Edge::plane(void) const;
// public: void hkgpConvexHullImpl::removeTriangle(struct hkgpConvexHullImpl::Triangle *);
// public: void hkgpConvexHullImpl::buildIndices(void);
// public: enum hkResult hkgpConvexHullImpl::buildMassProperties(void);
// public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>(void);
// public: hkgpConvexHullImpl::Vertex::Vertex(struct hkgpConvexHullImpl::Vertex const &);
// public: hkgpConvexHullImpl::Triangle::~Triangle(void);
// public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex> const &);
// public: void hkMatrix3::multiplyVector(class hkVector4const &, class hkVector4&) const;
// public: void hkgpConvexHullImpl::simplify(struct hkgpConvexHull::SimplifyConfig const &);
// public: static float hkGeometryProcessing::triangleArea2(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkgpConvexHullImpl::mustHaveIndex(void) const;
// public: float hkgpConvexHullImpl::edgeLengthSquared(struct hkgpConvexHullImpl::Triangle const *, int) const;
// public: bool hkgpConvexHullImpl::decimateVertices(int, bool);
// public: hkgpConvexHullImpl::FanIncrementAndCheck::FanIncrementAndCheck(void);
// public: void hkgpConvexHullImpl::mushHaveDimention(int) const;
// public: void hkgpConvexHullImpl::ensureContainment(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &);
// public: static class hkVector4 hkgpConvexHullImpl::negate(class hkVector4const &);
// public: static void hkgpConvexHullImpl::scaleAboutPlane(class hkVector4const &, float, class hkMatrix4&);
// public: float hkgpConvexHullImpl::maxDistance(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkMatrix4const &, class hkVector4&) const;
// public: bool hkgpConvexHullImpl::isPointInside(class hkVector4const &, bool, float) const;
// public: bool hkgpConvexHullImpl::clipLine(class hkVector4const &, class hkVector4const &, float &, float &, float) const;
// public: void hkgpConvexHullImpl::getOrientedBoundingBox(class hkVector4&, class hkTransform &) const;
// public: float hkgpConvexHullImpl::getSpan(class hkVector4const &, float &, float &) const;
// public: void hkgpConvexHullImpl::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: float hkgpConvexHullImpl::getOrientedRectangle(class hkVector4const &, class hkVector4&, class hkTransform &) const;
// public: bool hkgpConvexHullImpl::Edge::samePlane(void) const;
// public: void hkgpConvexHullImpl::mustHaveMassProperties(void) const;
// public: float hkgpConvexHullImpl::getEdgeLengths(void) const;
// float hkMath::pow(float, float);
// public: void hkgpConvexHullImpl::generateVertexAdjacencyGraph(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &) const;
// public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>(void);
// public: void hkPseudoRandomGenerator::getRandomVector11(class hkVector4&);
// public: float hkPseudoRandomGenerator::getRandReal11(void);
// public: class hkSimdReal hkVector4::distanceToSquared3(class hkVector4const &) const;
// public: hkgpConvexHullImpl::RadialSort::RadialSort(class hkVector4const &);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::setSize(int, class hkVector4const &);
// public: class hkVector4& hkArray<class hkVector4, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void) const;
// public: struct hkgpConvexHullImpl::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void);
// public: struct hkgpConvexHullImpl::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::prev(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(void);
// public: struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item & hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::operator=(struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &);
// protected: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>(void);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::~Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>(void);
// public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::vertex(int) const;
// public: struct hkgpConvexHullImpl::Vertex *& hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::vertex(int);
// public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void) const;
// public: struct hkgpConvexHullImpl::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void);
// public: struct hkgpConvexHullImpl::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::prev(void);
// public: hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>(struct hkgpConvexHullImpl::Triangle *, unsigned int);
// public: hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>(unsigned long);
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::next(void) const;
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::prev(void) const;
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::link(void) const;
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::nextCcw(void) const;
// public: struct hkgpConvexHullImpl::Triangle * hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::triangle(void) const;
// public: unsigned long hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::uid(void) const;
// public: struct hkgpConvexHullImpl::Vertex *& hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::start(void) const;
// public: struct hkgpConvexHullImpl::Vertex *& hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::end(void) const;
// public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::isValid(void) const;
// public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::isMaster(void) const;
// public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::isNaked(void) const;
// public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::operator!=(struct hkgpConvexHullImpl::Edge const &) const;
// public: static void hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::operator delete(void *);
// public: struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::getEdgeIterator(void) const;
// public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >(void);
// public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::getFirst(void) const;
// public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::getLast(void) const;
// public: int hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >(void);
// public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::getFirst(void) const;
// public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::getLast(void) const;
// public: int hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>(void);
// public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::insert(struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *);
// public: struct hkgpConvexHullImpl::Vertex * hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *) const;
// public: void hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::reserve(int);
// public: hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::insert(unsigned long, unsigned long);
// public: unsigned long hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::getWithDefault(unsigned long, unsigned long) const;
// public: enum hkResult hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::remove(unsigned long);
// public: void hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArray<int, struct hkContainerHeapAllocator>::reserve(int);
// public: hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: struct hkgpConvexHullImpl::SortedEdge & hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform>::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform>(class hkgpConvexHullImpl *);
// public: hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int);
// public: struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator & hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::operator++(void);
// public: struct hkgpConvexHullImpl::Edge hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::operator()(void) const;
// public: struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator const * hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::operator struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator const *(void) const;
// public: hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::pushBack(class hkgpConvexHull *const &);
// public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::insert(struct hkgpConvexHullImpl::Vertex *, int);
// public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpConvexHullImpl::Vertex *, int) const;
// public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::getSize(void) const;
// public: void hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::reserve(int);
// public: static bool hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::isOrdered(struct hkgpConvexHullImpl::Vertex const *, struct hkgpConvexHullImpl::Vertex const *);
// public: int hkgpConvexHullImpl::Vertex::compare(struct hkgpConvexHullImpl::Vertex const &) const;
// public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>(void);
// public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::invalidate(void);
// public: bool hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::hasReferences(void) const;
// public: unsigned long & hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::link(int);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(void);
// private: hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::EdgeIterator(struct hkgpConvexHullImpl::Edge);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: unsigned long hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::link(int) const;
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: void hkArrayBase<class hkVector4>::_reserveExactly(class hkMemoryAllocator &, int);
// public: void hkArrayBase<class hkVector4>::_setSize(class hkMemoryAllocator &, int, class hkVector4const &);
// public: class hkVector4& hkArrayBase<class hkVector4>::_expandOne(class hkMemoryAllocator &);
// void hkAlgorithm::swap<int>(int &, int &);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// protected: static unsigned int hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::ip1mod3(unsigned int);
// protected: static unsigned int hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::ip2mod3(unsigned int);
// public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::bind(struct hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *> const &) const;
// public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::unbind(void) const;
// public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpConvexHullImpl::Vertex const &);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::release(struct hkgpConvexHullImpl::Vertex *);
// public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpConvexHullImpl::Triangle const &);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::release(struct hkgpConvexHullImpl::Triangle *);
// public: virtual hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::~hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >(void);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >(void);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: void hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::reset(void);
// public: hkArrayBase<struct hkgpConvexHullImpl::Vertex>::hkArrayBase<struct hkgpConvexHullImpl::Vertex>(void);
// public: struct hkgpConvexHullImpl::Vertex const & hkArrayBase<struct hkgpConvexHullImpl::Vertex>::operator[](int) const;
// public: struct hkgpConvexHullImpl::Vertex & hkArrayBase<struct hkgpConvexHullImpl::Vertex>::operator[](int);
// public: int hkArrayBase<struct hkgpConvexHullImpl::Vertex>::getSize(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::clear(void);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::removeAt(int);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::popBack(int);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::~hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpConvexHullImpl::Vertex>::~hkArrayBase<struct hkgpConvexHullImpl::Vertex>(void);
// public: void hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::hkArrayBase<struct hkGeometryProcessing::TransposedVectors>(void);
// public: int hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::getSize(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::clear(void);
// public: hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::~hkArrayBase<struct hkGeometryProcessing::TransposedVectors>(void);
// public: static __int64 hkgpConvexHullImpl::mul_32x32<__int64>(int, int);
// float hkMath::min2<float>(float, float);
// float hkMath::max2<float>(float, float);
// public: void hkgpConvexHullImpl::swapCoordinates<0, 2>(void);
// public: void hkgpConvexHullImpl::swapCoordinates<1, 2>(void);
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::Vertex>(struct hkgpConvexHullImpl::Vertex *, int);
// void hkAlgorithm::swap<struct hkgpConvexHullImpl::Vertex *>(struct hkgpConvexHullImpl::Vertex *&, struct hkgpConvexHullImpl::Vertex *&);
// public: void hkgpConvexHullImpl::fetchWorldPositions<struct hkgpConvexHullImpl::PositionAsSource>(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: static class hkVector4const & hkgpConvexHullImpl::PositionAsSource::get(class hkgpConvexHullImpl const *, struct hkgpConvexHullImpl::Vertex const *);
// public: void hkgpConvexHullImpl::buildIndices<struct hkgpConvexHullImpl::PositionAsTransform>(void);
// public: static class hkVector4 hkgpConvexHullImpl::PositionAsTransform::get(class hkgpConvexHullImpl const *, struct hkgpConvexHullImpl::Vertex const *);
// public: int hkArrayBase<int>::indexOf(int const &, int, int) const;
// public: int hkgpConvexHullImpl::generateIndexedFaces<int, int>(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, bool);
// public: void hkgpConvexHullImpl::getSupportingVertex<struct hkgpConvexHullImpl::PositionAsSource>(class hkMatrix4const &, class hkVector4const &, class hkVector4&) const;
// public: hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>(void);
// public: struct hkgpConvexHullImpl::SortedEdge & hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::operator[](int);
// public: int hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::getSize(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::clear(void);
// public: void hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::_reserveExactly(class hkMemoryAllocator &, int);
// public: struct hkgpConvexHullImpl::SortedEdge & hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::~hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>(void);
// public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::applyFan<struct hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform> >(struct hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform> &) const;
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedEdge>(struct hkgpConvexHullImpl::SortedEdge *, int);
// public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::applyFan<struct hkgpConvexHullImpl::FanIncrementAndCheck>(struct hkgpConvexHullImpl::FanIncrementAndCheck &) const;
// public: bool hkgpConvexHullImpl::FanIncrementAndCheck::operator()(struct hkgpConvexHullImpl::Edge);
// public: enum hkResult hkgpConvexHullImpl::buildMassProperties<struct hkgpConvexHullImpl::PositionAsTransform>(void);
// public: static void hkgpConvexHullImpl::accumulateMass(class hkMatrix3const &, int, int, int, float, class hkVector4&, class hkVector4&);
// public: static void hkgpConvexHullImpl::translateInertia(float, class hkVector4const &, class hkVector4const &, class hkMatrix3&);
// public: hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >(void);
// public: class hkArray<int, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::operator[](int);
// public: int hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::~hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::~hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >(void);
// private: void hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::next(void);
// public: void hkgpConvexHullImpl::getNearestVertex<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, class hkVector4&) const;
// public: void hkgpConvexHullImpl::getNearestVertex<struct hkgpConvexHullImpl::PositionAsTransform>(class hkVector4const &, class hkVector4&) const;
// public: void hkgpConvexHullImpl::getFarthestVertex<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, class hkVector4&) const;
// public: void hkgpConvexHullImpl::getFarthestVertex<struct hkgpConvexHullImpl::PositionAsTransform>(class hkVector4const &, class hkVector4&) const;
// public: class hkVector4const & hkgpConvexHullImpl::getCentroid<struct hkgpConvexHullImpl::PositionAsSource>(void) const;
// public: enum hkgpConvexHull::Side hkgpConvexHullImpl::classify<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, float, int *, float *) const;
// public: enum hkgpConvexHull::Side hkgpConvexHullImpl::splitByPlane<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, class hkgpConvexHull **, class hkgpConvexHull **, float) const;
// public: hkArrayBase<class hkgpConvexHull *>::hkArrayBase<class hkgpConvexHull *>(void);
// public: class hkgpConvexHull *const & hkArrayBase<class hkgpConvexHull *>::operator[](int) const;
// public: class hkgpConvexHull *& hkArrayBase<class hkgpConvexHull *>::operator[](int);
// public: int hkArrayBase<class hkgpConvexHull *>::getSize(void) const;
// public: void hkArrayBase<class hkgpConvexHull *>::clear(void);
// public: void hkArrayBase<class hkgpConvexHull *>::removeAt(int);
// public: void hkArrayBase<class hkgpConvexHull *>::_pushBack(class hkMemoryAllocator &, class hkgpConvexHull *const &);
// public: hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::~hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkgpConvexHull *>::~hkArrayBase<class hkgpConvexHull *>(void);
// public: void hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::swap(class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &);
// public: void hkgpConvexHullImpl::fetchWorldPositions<struct hkgpConvexHullImpl::PositionAsTransform>(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: void hkgpConvexHullImpl::buildBevelPlanes<struct hkgpConvexHullImpl::PositionAsTransform>(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: int hkgpConvexHullImpl::generateIndexedFaces<unsigned char, unsigned short>(class hkArray<unsigned char, struct hkContainerHeapAllocator> &, class hkArray<unsigned short, struct hkContainerHeapAllocator> &, bool);
// void hkAlgorithm::quickSort<class hkVector4, struct hkgpConvexHullImpl::RadialSort>(class hkVector4*, int, struct hkgpConvexHullImpl::RadialSort);
// public: class hkSimdReal hkgpConvexHullImpl::maximumVertexDistanceSquaredFrom<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &) const;
// public: hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::optimizeCapacity(int, int);
// public: struct hkgpConvexHullImpl::Vertex * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpConvexHullImpl::Vertex const &);
// public: static void * hkgpConvexHullImpl::Vertex::operator new(unsigned int, void *);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkgpConvexHullImpl::Triangle * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpConvexHullImpl::Triangle const &);
// public: static void * hkgpConvexHullImpl::Triangle::operator new(unsigned int, void *);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: static struct hkgpConvexHullImpl::Edge const & hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::null(void);
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::turnCcw(void) const;
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::turnCw(void) const;
// public: int hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::index(void) const;
// public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::self(void) const;
// public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::canBind(struct hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *> const &) const;
// public: void hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: bool hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform>::operator()(struct hkgpConvexHullImpl::Edge);
// public: static float hkGeometryProcessing::tetrahedronVolume6(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>(void);
// public: void hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::reserveExactly(int);
// public: hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::insert(struct hkgpConvexHullImpl::Triangle *, int);
// public: int hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpConvexHullImpl::Triangle *, int) const;
// public: void hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::reserve(int);
// public: hkArray<class hkVector4, struct hkContainerTempAllocator>::hkArray<class hkVector4, struct hkContainerTempAllocator>(void);
// public: void hkArray<class hkVector4, struct hkContainerTempAllocator>::setSize(int);
// public: hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>(void);
// public: void hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::pushBack(struct hkgpConvexHullImpl::Edge const &);
// public: hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::reserve(int);
// public: hkgpConvexHullImpl::Triangle::Triangle(struct hkgpConvexHullImpl::Triangle const &);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>(struct hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *> const &);
// protected: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item const &);
// public: struct hkgpConvexHullImpl::Vertex *& hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::apex(void) const;
// public: void hkArrayBase<class hkVector4>::_optimizeCapacity(class hkMemoryAllocator &, int, int);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::release(struct hkgpConvexHullImpl::Vertex *);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::clear(void);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::release(struct hkgpConvexHullImpl::Triangle *);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::clear(void);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::reset(void);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::reset(void);
// public: int hkArrayBase<struct hkgpConvexHullImpl::Vertex>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::Vertex>(struct hkgpConvexHullImpl::Vertex *, int, struct hkTraitBool<0>);
// void hkMemUtil::memCpyOneAligned<64, 16>(void *, void const *);
// public: static void hkArrayUtil::construct<struct hkgpConvexHullImpl::Vertex>(struct hkgpConvexHullImpl::Vertex *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::TransposedVectors>(struct hkGeometryProcessing::TransposedVectors *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::Vertex, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex> >(struct hkgpConvexHullImpl::Vertex *, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex>);
// public: hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>(void);
// public: struct hkgpConvexHullImpl::SortedTriangle & hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::operator[](int);
// public: int hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::getSize(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::_reserveExactly(class hkMemoryAllocator &, int);
// public: struct hkgpConvexHullImpl::SortedTriangle * hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::expandByUnchecked(int);
// public: hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::~hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>(void);
// public: hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::~hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>(void);
// public: hkArray<class hkVector4, struct hkContainerTempAllocator>::~hkArray<class hkVector4, struct hkContainerTempAllocator>(void);
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedTriangle>(struct hkgpConvexHullImpl::SortedTriangle *, int);
// public: class hkVector4 hkgpConvexHullImpl::planeFromTriangle<struct hkgpConvexHullImpl::PositionAsTransform>(struct hkgpConvexHullImpl::Triangle const *, bool) const;
// public: hkArrayBase<struct hkgpConvexHullImpl::Edge>::hkArrayBase<struct hkgpConvexHullImpl::Edge>(void);
// public: struct hkgpConvexHullImpl::Edge & hkArrayBase<struct hkgpConvexHullImpl::Edge>::back(void);
// public: int hkArrayBase<struct hkgpConvexHullImpl::Edge>::getSize(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::clear(void);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::popBack(int);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::_pushBack(class hkMemoryAllocator &, struct hkgpConvexHullImpl::Edge const &);
// public: hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::~hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>(void);
// public: hkArrayBase<struct hkgpConvexHullImpl::Edge>::~hkArrayBase<struct hkgpConvexHullImpl::Edge>(void);
// public: class hkVector4const & hkgpConvexHullImpl::getCentroid<struct hkgpConvexHullImpl::PositionAsTransform>(void) const;
// public: hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::hkArrayBase<struct hkgpConvexHullImpl::Triangle *>(void);
// public: struct hkgpConvexHullImpl::Triangle *& hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::operator[](int);
// public: int hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::getSize(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::pushBackUnchecked(struct hkgpConvexHullImpl::Triangle *const &);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::_reserve(class hkMemoryAllocator &, int);
// public: hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::~hkArrayBase<struct hkgpConvexHullImpl::Triangle *>(void);
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::Triangle *, struct hkgpConvexHullImpl::Triangle::SortByPlaneId>(struct hkgpConvexHullImpl::Triangle **, int, struct hkgpConvexHullImpl::Triangle::SortByPlaneId);
// public: int hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::SortedEdge>(struct hkgpConvexHullImpl::SortedEdge *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkgpConvexHullImpl::SortedEdge>(struct hkgpConvexHullImpl::SortedEdge *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedEdge, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge> >(struct hkgpConvexHullImpl::SortedEdge *, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge>);
// public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkArray<int, struct hkContainerHeapAllocator> >(class hkArray<int, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkArray<int, struct hkContainerHeapAllocator> >(class hkArray<int, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<class hkgpConvexHull *>::getCapacity(void) const;
// public: void hkArrayBase<class hkgpConvexHull *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkgpConvexHull *>(class hkgpConvexHull **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkgpConvexHull *>(class hkgpConvexHull **, int, class hkgpConvexHull *const &, struct hkTraitBool<1>);
// class hkSimdReal hkMath::max2<class hkSimdReal>(class hkSimdReal, class hkSimdReal);
// void hkAlgorithm::quickSortRecursive<class hkVector4, struct hkgpConvexHullImpl::RadialSort>(class hkVector4*, int, int, struct hkgpConvexHullImpl::RadialSort);
// public: bool hkgpConvexHullImpl::RadialSort::operator()(class hkVector4const &, class hkVector4const &) const;
// public: void * hkgpConvexHullImpl::Triangle::`scalar deleting destructor'(unsigned int);
// public: static void hkgpConvexHullImpl::Triangle::operator delete(void *);
// public: hkgpConvexHullImpl::SortedEdge::SortedEdge(void);
// public: void * hkArray<int, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1>::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1>(void);
// public: hkgpConvexHullImpl::Edge::Edge(void);
// public: hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>(void);
// public: bool hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::needRelease(void) const;
// public: bool hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::needRelease(void) const;
// public: static void hkArrayBase<int>::operator delete(void *);
// public: void hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkVector4, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: int hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::getCapacity(void) const;
// void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::Vertex, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex> >(struct hkgpConvexHullImpl::Vertex *, int, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex>);
// public: int hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct hkgpConvexHullImpl::SortedTriangle>(struct hkgpConvexHullImpl::SortedTriangle *, int, struct hkTraitBool<0>);
// void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedTriangle, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle> >(struct hkgpConvexHullImpl::SortedTriangle *, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle>);
// public: int hkArrayBase<struct hkgpConvexHullImpl::Edge>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::Edge>(struct hkgpConvexHullImpl::Edge *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpConvexHullImpl::Edge>(struct hkgpConvexHullImpl::Edge *, int, struct hkgpConvexHullImpl::Edge const &, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpConvexHullImpl::Triangle *>(struct hkgpConvexHullImpl::Triangle **, int, struct hkgpConvexHullImpl::Triangle *const &, struct hkTraitBool<1>);
// void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::Triangle *, struct hkgpConvexHullImpl::Triangle::SortByPlaneId>(struct hkgpConvexHullImpl::Triangle **, int, int, struct hkgpConvexHullImpl::Triangle::SortByPlaneId);
// public: bool hkgpConvexHullImpl::Triangle::SortByPlaneId::operator()(struct hkgpConvexHullImpl::Triangle const *, struct hkgpConvexHullImpl::Triangle const *) const;
// void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::SortedEdge, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge> >(struct hkgpConvexHullImpl::SortedEdge *, int, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge>);
// public: int hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::getCapacity(void) const;
// public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::clear(void);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: int hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex>::operator()(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &);
// bool operator<(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &);
// public: int hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge>::operator()(struct hkgpConvexHullImpl::SortedEdge const &, struct hkgpConvexHullImpl::SortedEdge const &);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: bool hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1>::operator<(struct hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1> const &) const;
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::clear(void);
// void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::SortedTriangle, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle> >(struct hkgpConvexHullImpl::SortedTriangle *, int, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle>);
// public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::clear(void);
// public: int hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle>::operator()(struct hkgpConvexHullImpl::SortedTriangle const &, struct hkgpConvexHullImpl::SortedTriangle const &);
// public: bool hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Triangle *, float, 1>::operator<(struct hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Triangle *, float, 1> const &) const;
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::SortedTriangle>(struct hkgpConvexHullImpl::SortedTriangle *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::Triangle *>(struct hkgpConvexHullImpl::Triangle **, int, struct hkTraitBool<1>);

//public: hkgpConvexHull::BuildConfig::BuildConfig(void)
//{
//    mangled_ppc("??0BuildConfig@hkgpConvexHull@@QAA@XZ");
//};

//public: hkgpConvexHull::SimplifyConfig::SimplifyConfig(void)
//{
//    mangled_ppc("??0SimplifyConfig@hkgpConvexHull@@QAA@XZ");
//};

//public: hkgpConvexHull::AbsoluteScaleConfig::AbsoluteScaleConfig(void)
//{
//    mangled_ppc("??0AbsoluteScaleConfig@hkgpConvexHull@@QAA@XZ");
//};

//public: hkgpConvexHull::hkgpConvexHull(void)
//{
//    mangled_ppc("??0hkgpConvexHull@@QAA@XZ");
//};

//public: virtual hkgpConvexHull::~hkgpConvexHull(void)
//{
//    mangled_ppc("??1hkgpConvexHull@@UAA@XZ");
//};

//public: void hkgpConvexHull::reset(void)
//{
//    mangled_ppc("?reset@hkgpConvexHull@@QAAXXZ");
//};

//public: class hkgpConvexHull * hkgpConvexHull::clone(void) const
//{
//    mangled_ppc("?clone@hkgpConvexHull@@QBAPAV1@XZ");
//};

//public: void *& hkgpConvexHull::userData(void) const
//{
//    mangled_ppc("?userData@hkgpConvexHull@@QBAAAPAXXZ");
//};

//public: struct hkgpConvexHull::IUserObject *& hkgpConvexHull::userObject(void) const
//{
//    mangled_ppc("?userObject@hkgpConvexHull@@QBAAAPAUIUserObject@1@XZ");
//};

//public: void hkgpConvexHull::deleteUserObject(void)
//{
//    mangled_ppc("?deleteUserObject@hkgpConvexHull@@QAAXXZ");
//};

//public: unsigned int hkgpConvexHull::uid(void) const
//{
//    mangled_ppc("?uid@hkgpConvexHull@@QBAIXZ");
//};

//public: int hkgpConvexHull::build(class hkVector4const *, int, struct hkgpConvexHull::BuildConfig const &)
//{
//    mangled_ppc("?build@hkgpConvexHull@@QAAHPBVhkVector4@@HABUBuildConfig@1@@Z");
//};

//public: int hkgpConvexHull::build(struct hkStridedVertices const &, struct hkgpConvexHull::BuildConfig const &)
//{
//    mangled_ppc("?build@hkgpConvexHull@@QAAHABUhkStridedVertices@@ABUBuildConfig@1@@Z");
//};

//public: int hkgpConvexHull::buildPlanar(class hkVector4const *, int, class hkVector4const &, struct hkgpConvexHull::BuildConfig const &)
//{
//    mangled_ppc("?buildPlanar@hkgpConvexHull@@QAAHPBVhkVector4@@HABV2@ABUBuildConfig@1@@Z");
//};

//public: int hkgpConvexHull::buildPlanar(struct hkStridedVertices const &, class hkVector4const &, struct hkgpConvexHull::BuildConfig const &)
//{
//    mangled_ppc("?buildPlanar@hkgpConvexHull@@QAAHABUhkStridedVertices@@ABVhkVector4@@ABUBuildConfig@1@@Z");
//};

//public: int hkgpConvexHull::buildFromPlanes(class hkVector4const *, int, struct hkgpConvexHull::BuildConfig const &)
//{
//    mangled_ppc("?buildFromPlanes@hkgpConvexHull@@QAAHPBVhkVector4@@HABUBuildConfig@1@@Z");
//};

//public: int hkgpConvexHull::buildFromPlanes(class hkVector4const *, int, class hkVector4const &, struct hkgpConvexHull::BuildConfig const &)
//{
//    mangled_ppc("?buildFromPlanes@hkgpConvexHull@@QAAHPBVhkVector4@@HABV2@ABUBuildConfig@1@@Z");
//};

//public: void hkgpConvexHull::simplify(struct hkgpConvexHull::SimplifyConfig const &)
//{
//    mangled_ppc("?simplify@hkgpConvexHull@@QAAXABUSimplifyConfig@1@@Z");
//};

//public: void hkgpConvexHull::ensureContainment(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?ensureContainment@hkgpConvexHull@@QAAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: bool hkgpConvexHull::decimateVertices(int, bool)
//{
//    mangled_ppc("?decimateVertices@hkgpConvexHull@@QAA_NH_N@Z");
//};

//public: bool hkgpConvexHull::expandByPlanarMargin(float)
//{
//    mangled_ppc("?expandByPlanarMargin@hkgpConvexHull@@QAA_NM@Z");
//};

//public: void hkgpConvexHull::absoluteScale(float, struct hkgpConvexHull::AbsoluteScaleConfig const &)
//{
//    mangled_ppc("?absoluteScale@hkgpConvexHull@@QAAXMABUAbsoluteScaleConfig@1@@Z");
//};

//public: void hkgpConvexHull::buildIndices(float, bool)
//{
//    mangled_ppc("?buildIndices@hkgpConvexHull@@QAAXM_N@Z");
//};

//public: enum hkResult hkgpConvexHull::buildMassProperties(void)
//{
//    mangled_ppc("?buildMassProperties@hkgpConvexHull@@QAA?AW4hkResult@@XZ");
//};

//public: bool hkgpConvexHull::isVertexUsed(class hkVector4const &) const
//{
//    mangled_ppc("?isVertexUsed@hkgpConvexHull@@QBA_NABVhkVector4@@@Z");
//};

//public: bool hkgpConvexHull::isPointInside(class hkVector4const &, bool, float) const
//{
//    mangled_ppc("?isPointInside@hkgpConvexHull@@QBA_NABVhkVector4@@_NM@Z");
//};

//public: bool hkgpConvexHull::clipLine(class hkVector4const &, class hkVector4const &, float &, float &, float) const
//{
//    mangled_ppc("?clipLine@hkgpConvexHull@@QBA_NABVhkVector4@@0AAM1M@Z");
//};

//public: float hkgpConvexHull::maximumDistanceToPlanes(class hkVector4const &) const
//{
//    mangled_ppc("?maximumDistanceToPlanes@hkgpConvexHull@@QBAMABVhkVector4@@@Z");
//};

//public: struct hkgpConvexHull::BuildConfig const & hkgpConvexHull::getConfiguration(void) const
//{
//    mangled_ppc("?getConfiguration@hkgpConvexHull@@QBAABUBuildConfig@1@XZ");
//};

//public: int hkgpConvexHull::getDimensions(void) const
//{
//    mangled_ppc("?getDimensions@hkgpConvexHull@@QBAHXZ");
//};

//public: class hkAabb hkgpConvexHull::getBoundingBox(enum hkgpConvexHull::Inputs, float, float) const
//{
//    mangled_ppc("?getBoundingBox@hkgpConvexHull@@QBA?AVhkAabb@@W4Inputs@1@MM@Z");
//};

//public: void hkgpConvexHull::getOrientedBoundingBox(class hkVector4&, class hkTransform &) const
//{
//    mangled_ppc("?getOrientedBoundingBox@hkgpConvexHull@@QBAXAAVhkVector4@@AAVhkTransform@@@Z");
//};

//public: void hkgpConvexHull::getOrientedRectangle(class hkVector4const &, class hkVector4&, class hkTransform &) const
//{
//    mangled_ppc("?getOrientedRectangle@hkgpConvexHull@@QBAXABVhkVector4@@AAV2@AAVhkTransform@@@Z");
//};

//public: class hkVector4 hkgpConvexHull::getProjectionAxis(void) const
//{
//    mangled_ppc("?getProjectionAxis@hkgpConvexHull@@QBA?AVhkVector4@@XZ");
//};

//public: class hkVector4 hkgpConvexHull::getProjectionPlane(void) const
//{
//    mangled_ppc("?getProjectionPlane@hkgpConvexHull@@QBA?AVhkVector4@@XZ");
//};

//public: int hkgpConvexHull::getNumPlanes(void) const
//{
//    mangled_ppc("?getNumPlanes@hkgpConvexHull@@QBAHXZ");
//};

//public: class hkVector4const & hkgpConvexHull::getPlane(int) const
//{
//    mangled_ppc("?getPlane@hkgpConvexHull@@QBAABVhkVector4@@H@Z");
//};

//public: int hkgpConvexHull::getNumVertices(void) const
//{
//    mangled_ppc("?getNumVertices@hkgpConvexHull@@QBAHXZ");
//};

//public: struct hkgpConvexHull::Vertex * hkgpConvexHull::getFirstVertex(void) const
//{
//    mangled_ppc("?getFirstVertex@hkgpConvexHull@@QBAPAUVertex@1@XZ");
//};

//public: int hkgpConvexHull::getIndex(struct hkgpConvexHull::Vertex const *) const
//{
//    mangled_ppc("?getIndex@hkgpConvexHull@@QBAHPBUVertex@1@@Z");
//};

//public: struct hkgpConvexHull::Vertex * hkgpConvexHull::getNext(struct hkgpConvexHull::Vertex const *) const
//{
//    mangled_ppc("?getNext@hkgpConvexHull@@QBAPAUVertex@1@PBU21@@Z");
//};

//public: class hkVector4 hkgpConvexHull::getPosition(struct hkgpConvexHull::Vertex const *) const
//{
//    mangled_ppc("?getPosition@hkgpConvexHull@@QBA?AVhkVector4@@PBUVertex@1@@Z");
//};

//public: class hkVector4const & hkgpConvexHull::getSourcePosition(struct hkgpConvexHull::Vertex const *) const
//{
//    mangled_ppc("?getSourcePosition@hkgpConvexHull@@QBAABVhkVector4@@PBUVertex@1@@Z");
//};

//public: int hkgpConvexHull::getNumTriangles(void) const
//{
//    mangled_ppc("?getNumTriangles@hkgpConvexHull@@QBAHXZ");
//};

//public: struct hkgpConvexHull::Triangle * hkgpConvexHull::getFirstTriangle(void) const
//{
//    mangled_ppc("?getFirstTriangle@hkgpConvexHull@@QBAPAUTriangle@1@XZ");
//};

//public: int hkgpConvexHull::getIndex(struct hkgpConvexHull::Triangle const *) const
//{
//    mangled_ppc("?getIndex@hkgpConvexHull@@QBAHPBUTriangle@1@@Z");
//};

//public: struct hkgpConvexHull::Triangle * hkgpConvexHull::getNext(struct hkgpConvexHull::Triangle const *) const
//{
//    mangled_ppc("?getNext@hkgpConvexHull@@QBAPAUTriangle@1@PBU21@@Z");
//};

//public: int hkgpConvexHull::getPlaneIndex(struct hkgpConvexHull::Triangle const *) const
//{
//    mangled_ppc("?getPlaneIndex@hkgpConvexHull@@QBAHPBUTriangle@1@@Z");
//};

//public: class hkVector4 hkgpConvexHull::getPlaneEquation(struct hkgpConvexHull::Triangle const *) const
//{
//    mangled_ppc("?getPlaneEquation@hkgpConvexHull@@QBA?AVhkVector4@@PBUTriangle@1@@Z");
//};

//public: struct hkgpConvexHull::Vertex * hkgpConvexHull::getVertex(struct hkgpConvexHull::Triangle const *, int) const
//{
//    mangled_ppc("?getVertex@hkgpConvexHull@@QBAPAUVertex@1@PBUTriangle@1@H@Z");
//};

//public: struct hkgpConvexHull::Triangle * hkgpConvexHull::getNeighbour(struct hkgpConvexHull::Triangle *, int) const
//{
//    mangled_ppc("?getNeighbour@hkgpConvexHull@@QBAPAUTriangle@1@PAU21@H@Z");
//};

//public: float hkgpConvexHull::getWidth(class hkVector4const &) const
//{
//    mangled_ppc("?getWidth@hkgpConvexHull@@QBAMABVhkVector4@@@Z");
//};

//public: float hkgpConvexHull::getMinimumDistanceFromPlane(class hkVector4const &) const
//{
//    mangled_ppc("?getMinimumDistanceFromPlane@hkgpConvexHull@@QBAMABVhkVector4@@@Z");
//};

//public: float hkgpConvexHull::getMaximumDistanceFromPlane(class hkVector4const &) const
//{
//    mangled_ppc("?getMaximumDistanceFromPlane@hkgpConvexHull@@QBAMABVhkVector4@@@Z");
//};

//public: void hkgpConvexHull::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@hkgpConvexHull@@QBAXABVhkVector4@@AAV2@@Z");
//};

//public: void hkgpConvexHull::getNearestVertex(enum hkgpConvexHull::Inputs, class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getNearestVertex@hkgpConvexHull@@QBAXW4Inputs@1@ABVhkVector4@@AAV3@@Z");
//};

//public: void hkgpConvexHull::getFarthestVertex(enum hkgpConvexHull::Inputs, class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getFarthestVertex@hkgpConvexHull@@QBAXW4Inputs@1@ABVhkVector4@@AAV3@@Z");
//};

//public: class hkVector4const & hkgpConvexHull::getCentroid(void) const
//{
//    mangled_ppc("?getCentroid@hkgpConvexHull@@QBAABVhkVector4@@XZ");
//};

//public: float hkgpConvexHull::getVolume(void) const
//{
//    mangled_ppc("?getVolume@hkgpConvexHull@@QBAMXZ");
//};

//public: float hkgpConvexHull::getSurfaceArea(void) const
//{
//    mangled_ppc("?getSurfaceArea@hkgpConvexHull@@QBAMXZ");
//};

//public: float hkgpConvexHull::getEdgeLengths(void) const
//{
//    mangled_ppc("?getEdgeLengths@hkgpConvexHull@@QBAMXZ");
//};

//public: float hkgpConvexHull::getSphericity(void) const
//{
//    mangled_ppc("?getSphericity@hkgpConvexHull@@QBAMXZ");
//};

//public: void hkgpConvexHull::getLocalInertia(class hkTransform &, class hkVector4&) const
//{
//    mangled_ppc("?getLocalInertia@hkgpConvexHull@@QBAXAAVhkTransform@@AAVhkVector4@@@Z");
//};

//public: class hkMatrix3const & hkgpConvexHull::getWorldInertia(void) const
//{
//    mangled_ppc("?getWorldInertia@hkgpConvexHull@@QBAABVhkMatrix3@@XZ");
//};

//public: class hkVector4const & hkgpConvexHull::getCenterOfMass(void) const
//{
//    mangled_ppc("?getCenterOfMass@hkgpConvexHull@@QBAABVhkVector4@@XZ");
//};

//public: class hkVector4 hkgpConvexHull::getMajorPlane(void) const
//{
//    mangled_ppc("?getMajorPlane@hkgpConvexHull@@QBA?AVhkVector4@@XZ");
//};

//public: void hkgpConvexHull::getMajorPlanes(class hkVector4*const) const
//{
//    mangled_ppc("?getMajorPlanes@hkgpConvexHull@@QBAXQAVhkVector4@@@Z");
//};

//public: enum hkgpConvexHull::Side hkgpConvexHull::classify(class hkVector4const &, float, float *) const
//{
//    mangled_ppc("?classify@hkgpConvexHull@@QBA?AW4Side@1@ABVhkVector4@@MPAM@Z");
//};

//public: enum hkgpConvexHull::Side hkgpConvexHull::splitByPlane(class hkVector4const &, class hkgpConvexHull **, class hkgpConvexHull **, float) const
//{
//    mangled_ppc("?splitByPlane@hkgpConvexHull@@QBA?AW4Side@1@ABVhkVector4@@PAPAV1@1M@Z");
//};

//public: void hkgpConvexHull::subdivide(int, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float) const
//{
//    mangled_ppc("?subdivide@hkgpConvexHull@@QBAXHAAV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: void hkgpConvexHull::fetchPositions(enum hkgpConvexHull::Inputs, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?fetchPositions@hkgpConvexHull@@QBAXW4Inputs@1@AAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkgpConvexHull::fetchPlanes(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?fetchPlanes@hkgpConvexHull@@QBAXAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkgpConvexHull::fetchBevelPlanes(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?fetchBevelPlanes@hkgpConvexHull@@QBAXMAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkgpConvexHull::generateIndexedFaces(enum hkgpConvexHull::Inputs, class hkArray<unsigned char, struct hkContainerHeapAllocator> &, class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?generateIndexedFaces@hkgpConvexHull@@QBAHW4Inputs@1@AAV?$hkArray@EUhkContainerHeapAllocator@@@@AAV?$hkArray@GUhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkgpConvexHull::generateIndexedFaces(enum hkgpConvexHull::Inputs, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?generateIndexedFaces@hkgpConvexHull@@QBAHW4Inputs@1@AAV?$hkArray@HUhkContainerHeapAllocator@@@@1@Z");
//};

//public: void hkgpConvexHull::generateVertexAdjacencyGraph(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?generateVertexAdjacencyGraph@hkgpConvexHull@@QBAXAAV?$hkArray@HUhkContainerHeapAllocator@@@@0@Z");
//};

//public: void hkgpConvexHull::generateGeometry(enum hkgpConvexHull::Inputs, struct hkGeometry &) const
//{
//    mangled_ppc("?generateGeometry@hkgpConvexHull@@QBAXW4Inputs@1@AAUhkGeometry@@@Z");
//};

//public: static void hkgpConvexHull::booleanSplit(class hkgpConvexHull const *, class hkgpConvexHull const *, class hkgpConvexHull **, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> *, float)
//{
//    mangled_ppc("?booleanSplit@hkgpConvexHull@@SAXPBV1@0PAPAV1@PAV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: static bool hkgpConvexHull::booleanIntersection(class hkgpConvexHull const *, class hkgpConvexHull const *, class hkgpConvexHull *&, float)
//{
//    mangled_ppc("?booleanIntersection@hkgpConvexHull@@SA_NPBV1@0AAPAV1@M@Z");
//};

//public: static bool hkgpConvexHull::booleanSubtraction(class hkgpConvexHull const *, class hkgpConvexHull const *, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float)
//{
//    mangled_ppc("?booleanSubtraction@hkgpConvexHull@@SA_NPBV1@0AAV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: static bool hkgpConvexHull::booleanSubtraction(class hkgpConvexHull const *, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float)
//{
//    mangled_ppc("?booleanSubtraction@hkgpConvexHull@@SA_NPBV1@ABV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@AAV2@M@Z");
//};

//public: static float hkgpConvexHull::findBestUnion(class hkgpConvexHull const *, class hkgpConvexHull const *, struct hkgpConvexHull::IBooleanFunction const &, class hkgpConvexHull *&, class hkgpConvexHull *&)
//{
//    mangled_ppc("?findBestUnion@hkgpConvexHull@@SAMPBV1@0ABUIBooleanFunction@1@AAPAV1@2@Z");
//};

//public: static class hkgpConvexHull * hkgpConvexHull::createCompound(enum hkgpConvexHull::Inputs, class hkgpConvexHull const *const *, int)
//{
//    mangled_ppc("?createCompound@hkgpConvexHull@@SAPAV1@W4Inputs@1@PBQBV1@H@Z");
//};

//public: static class hkgpConvexHull * hkgpConvexHull::createCompound(enum hkgpConvexHull::Inputs, class hkgpConvexHull const *, class hkgpConvexHull const *)
//{
//    mangled_ppc("?createCompound@hkgpConvexHull@@SAPAV1@W4Inputs@1@PBV1@1@Z");
//};

//public: static void hkgpConvexHull::createRandomSamples(class hkgpConvexHull const *, class hkPseudoRandomGenerator &, int, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?createRandomSamples@hkgpConvexHull@@SAXPBV1@AAVhkPseudoRandomGenerator@@HAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkgpConvexHull::createVoronoiCells(class hkgpConvexHull const *, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float)
//{
//    mangled_ppc("?createVoronoiCells@hkgpConvexHull@@SAXPBV1@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: static void hkgpConvexHull::createVoronoiEdges(class hkgpConvexHull const *, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float)
//{
//    mangled_ppc("?createVoronoiEdges@hkgpConvexHull@@SAXPBV1@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: static void hkgpConvexHull::createVoronoiFeatures(class hkgpConvexHull const *, class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &, float)
//{
//    mangled_ppc("?createVoronoiFeatures@hkgpConvexHull@@SAXPBV1@ABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@2M@Z");
//};

//merged_8476F928
//{
//    mangled_ppc("merged_8476F928");
//};

//public: static void hkgpConvexHull::operator delete(void *)
//{
//    mangled_ppc("??3hkgpConvexHull@@SAXPAX@Z");
//};

//public: static void * hkgpConvexHullImpl::operator new(unsigned int)
//{
//    mangled_ppc("??2hkgpConvexHullImpl@@SAPAXI@Z");
//};

//public: hkgpConvexHullImpl::hkgpConvexHullImpl(void)
//{
//    mangled_ppc("??0hkgpConvexHullImpl@@QAA@XZ");
//};

//public: void hkgpConvexHullImpl::reset(bool)
//{
//    mangled_ppc("?reset@hkgpConvexHullImpl@@QAAX_N@Z");
//};

//public: hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//merged_8476FD40
//{
//    mangled_ppc("merged_8476FD40");
//};

//public: void * hkgpConvexHullImpl::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkgpConvexHullImpl@@QAAPAXI@Z");
//};

//public: static void hkgpConvexHullImpl::operator delete(void *)
//{
//    mangled_ppc("??3hkgpConvexHullImpl@@SAXPAX@Z");
//};

//public: hkgpConvexHullImpl::~hkgpConvexHullImpl(void)
//{
//    mangled_ppc("??1hkgpConvexHullImpl@@QAA@XZ");
//};

//public: static void * hkgpConvexHull::operator new(unsigned int)
//{
//    mangled_ppc("??2hkgpConvexHull@@SAPAXI@Z");
//};

//public: class hkgpConvexHullImpl * hkgpConvexHullImpl::clone(void) const
//{
//    mangled_ppc("?clone@hkgpConvexHullImpl@@QBAPAV1@XZ");
//};

//public: hkgpConvexHullImpl::Edge::Edge(struct hkgpConvexHullImpl::Triangle *, int)
//{
//    mangled_ppc("??0Edge@hkgpConvexHullImpl@@QAA@PAUTriangle@1@H@Z");
//};

//public: hkgpConvexHullImpl::Edge::Edge(unsigned long)
//{
//    mangled_ppc("??0Edge@hkgpConvexHullImpl@@QAA@K@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex & hkgpConvexHullImpl::Vertex::operator=(struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("??4Vertex@hkgpConvexHullImpl@@QAAAAU01@ABU01@@Z");
//};

//public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@PAU12@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@KKUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex> & hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::operator=(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex> const &)
//{
//    mangled_ppc("??4?$Vertex@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@@hkgpAbstractMeshDefinitions@@QAAAAU01@ABU01@@Z");
//};

//public: int hkgpConvexHullImpl::build(class hkVector4const *, int, bool, class hkgpConvexHullImpl const *)
//{
//    mangled_ppc("?build@hkgpConvexHullImpl@@QAAHPBVhkVector4@@H_NPBV1@@Z");
//};

//public: hkgpConvexHullImpl::Vertex::Vertex(void)
//{
//    mangled_ppc("??0Vertex@hkgpConvexHullImpl@@QAA@XZ");
//};

//bool operator!=(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("??9@YA_NABUVertex@hkgpConvexHullImpl@@0@Z");
//};

//bool operator==(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("??8@YA_NABUVertex@hkgpConvexHullImpl@@0@Z");
//};

//public: static int hkgpConvexHullImpl::orientation(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("?orientation@hkgpConvexHullImpl@@SAHABUVertex@1@00@Z");
//};

//public: static void hkgpConvexHullImpl::makeVertex(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex *)
//{
//    mangled_ppc("?makeVertex@hkgpConvexHullImpl@@SAXABUVertex@1@PAU21@@Z");
//};

//public: static class hkVector4 hkgpConvexHullImpl::planeFromTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &, bool)
//{
//    mangled_ppc("?planeFromTriangle@hkgpConvexHullImpl@@SA?AVhkVector4@@ABV2@00_N@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex hkgpConvexHullImpl::transform(class hkVector4const &) const
//{
//    mangled_ppc("?transform@hkgpConvexHullImpl@@QBA?AUVertex@1@ABVhkVector4@@@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex hkgpConvexHullImpl::transformChecked(class hkVector4const &, bool &) const
//{
//    mangled_ppc("?transformChecked@hkgpConvexHullImpl@@QBA?AUVertex@1@ABVhkVector4@@AA_N@Z");
//};

//public: static int hkgpConvexHullImpl::round(float)
//{
//    mangled_ppc("?round@hkgpConvexHullImpl@@SAHM@Z");
//};

//public: void hkgpConvexHullImpl::projectOnMajorAxis(class hkVector4const &)
//{
//    mangled_ppc("?projectOnMajorAxis@hkgpConvexHullImpl@@QAAXABVhkVector4@@@Z");
//};

//public: bool hkgpConvexHullImpl::flushPending(void)
//{
//    mangled_ppc("?flushPending@hkgpConvexHullImpl@@QAA_NXZ");
//};

//public: hkgpConvexHullImpl::Plane::Plane(void)
//{
//    mangled_ppc("??0Plane@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: hkgpConvexHullImpl::Triangle::Triangle(void)
//{
//    mangled_ppc("??0Triangle@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: static __int64 hkgpConvexHullImpl::distanceToPlane(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Plane const &)
//{
//    mangled_ppc("?distanceToPlane@hkgpConvexHullImpl@@SA_JABUVertex@1@ABUPlane@1@@Z");
//};

//public: static bool hkgpConvexHullImpl::makePlane(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Plane &)
//{
//    mangled_ppc("?makePlane@hkgpConvexHullImpl@@SA_NABUVertex@1@00AAUPlane@1@@Z");
//};

//public: static bool hkgpConvexHullImpl::makeTriangle(struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Triangle *)
//{
//    mangled_ppc("?makeTriangle@hkgpConvexHullImpl@@SA_NPAUVertex@1@00PAUTriangle@1@@Z");
//};

//public: class hkVector4 hkgpConvexHullImpl::transform(struct hkgpConvexHullImpl::Vertex const &) const
//{
//    mangled_ppc("?transform@hkgpConvexHullImpl@@QBA?AVhkVector4@@ABUVertex@1@@Z");
//};

//public: bool hkgpConvexHullImpl::insert(struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("?insert@hkgpConvexHullImpl@@QAA_NABUVertex@1@@Z");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkgpConvexHullImpl::locateBoundaryExhaustive(struct hkgpConvexHullImpl::Vertex const &) const
//{
//    mangled_ppc("?locateBoundaryExhaustive@hkgpConvexHullImpl@@QBAPAUTriangle@1@ABUVertex@1@@Z");
//};

//public: static struct hkgpConvexHullImpl::Edge hkgpConvexHullImpl::nextHorizon(struct hkgpConvexHullImpl::Edge const &)
//{
//    mangled_ppc("?nextHorizon@hkgpConvexHullImpl@@SA?AUEdge@1@ABU21@@Z");
//};

//public: void hkgpConvexHullImpl::clearHorizon(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Edge const &, struct hkgpConvexHullImpl::Edge &)
//{
//    mangled_ppc("?clearHorizon@hkgpConvexHullImpl@@QAAXABUVertex@1@ABUEdge@1@AAU31@@Z");
//};

//public: struct hkgpConvexHullImpl::Plane const & hkgpConvexHullImpl::Edge::plane(void) const
//{
//    mangled_ppc("?plane@Edge@hkgpConvexHullImpl@@QBAABUPlane@2@XZ");
//};

//public: void hkgpConvexHullImpl::removeTriangle(struct hkgpConvexHullImpl::Triangle *)
//{
//    mangled_ppc("?removeTriangle@hkgpConvexHullImpl@@QAAXPAUTriangle@1@@Z");
//};

//public: void hkgpConvexHullImpl::buildIndices(void)
//{
//    mangled_ppc("?buildIndices@hkgpConvexHullImpl@@QAAXXZ");
//};

//public: enum hkResult hkgpConvexHullImpl::buildMassProperties(void)
//{
//    mangled_ppc("?buildMassProperties@hkgpConvexHullImpl@@QAA?AW4hkResult@@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>(void)
//{
//    mangled_ppc("??0?$Vertex@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpConvexHullImpl::Vertex::Vertex(struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("??0Vertex@hkgpConvexHullImpl@@QAA@ABU01@@Z");
//};

//public: hkgpConvexHullImpl::Triangle::~Triangle(void)
//{
//    mangled_ppc("??1Triangle@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex> const &)
//{
//    mangled_ppc("??0?$Vertex@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@@hkgpAbstractMeshDefinitions@@QAA@ABU01@@Z");
//};

//public: void hkMatrix3::multiplyVector(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?multiplyVector@hkMatrix3@@QBAXABVhkVector4@@AAV2@@Z");
//};

//public: void hkgpConvexHullImpl::simplify(struct hkgpConvexHull::SimplifyConfig const &)
//{
//    mangled_ppc("?simplify@hkgpConvexHullImpl@@QAAXABUSimplifyConfig@hkgpConvexHull@@@Z");
//};

//public: static float hkGeometryProcessing::triangleArea2(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?triangleArea2@hkGeometryProcessing@@SAMABVhkVector4@@00@Z");
//};

//public: void hkgpConvexHullImpl::mustHaveIndex(void) const
//{
//    mangled_ppc("?mustHaveIndex@hkgpConvexHullImpl@@QBAXXZ");
//};

//public: float hkgpConvexHullImpl::edgeLengthSquared(struct hkgpConvexHullImpl::Triangle const *, int) const
//{
//    mangled_ppc("?edgeLengthSquared@hkgpConvexHullImpl@@QBAMPBUTriangle@1@H@Z");
//};

//public: bool hkgpConvexHullImpl::decimateVertices(int, bool)
//{
//    mangled_ppc("?decimateVertices@hkgpConvexHullImpl@@QAA_NH_N@Z");
//};

//public: hkgpConvexHullImpl::FanIncrementAndCheck::FanIncrementAndCheck(void)
//{
//    mangled_ppc("??0FanIncrementAndCheck@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: void hkgpConvexHullImpl::mushHaveDimention(int) const
//{
//    mangled_ppc("?mushHaveDimention@hkgpConvexHullImpl@@QBAXH@Z");
//};

//public: void hkgpConvexHullImpl::ensureContainment(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?ensureContainment@hkgpConvexHullImpl@@QAAXABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static class hkVector4 hkgpConvexHullImpl::negate(class hkVector4const &)
//{
//    mangled_ppc("?negate@hkgpConvexHullImpl@@SA?AVhkVector4@@ABV2@@Z");
//};

//public: static void hkgpConvexHullImpl::scaleAboutPlane(class hkVector4const &, float, class hkMatrix4&)
//{
//    mangled_ppc("?scaleAboutPlane@hkgpConvexHullImpl@@SAXABVhkVector4@@MAAVhkMatrix4@@@Z");
//};

//public: float hkgpConvexHullImpl::maxDistance(class hkArray<class hkVector4, struct hkContainerHeapAllocator> const &, class hkMatrix4const &, class hkVector4&) const
//{
//    mangled_ppc("?maxDistance@hkgpConvexHullImpl@@QBAMABV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@ABVhkMatrix4@@AAVhkVector4@@@Z");
//};

//public: bool hkgpConvexHullImpl::isPointInside(class hkVector4const &, bool, float) const
//{
//    mangled_ppc("?isPointInside@hkgpConvexHullImpl@@QBA_NABVhkVector4@@_NM@Z");
//};

//public: bool hkgpConvexHullImpl::clipLine(class hkVector4const &, class hkVector4const &, float &, float &, float) const
//{
//    mangled_ppc("?clipLine@hkgpConvexHullImpl@@QBA_NABVhkVector4@@0AAM1M@Z");
//};

//public: void hkgpConvexHullImpl::getOrientedBoundingBox(class hkVector4&, class hkTransform &) const
//{
//    mangled_ppc("?getOrientedBoundingBox@hkgpConvexHullImpl@@QBAXAAVhkVector4@@AAVhkTransform@@@Z");
//};

//public: float hkgpConvexHullImpl::getSpan(class hkVector4const &, float &, float &) const
//{
//    mangled_ppc("?getSpan@hkgpConvexHullImpl@@QBAMABVhkVector4@@AAM1@Z");
//};

//public: void hkgpConvexHullImpl::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@hkgpConvexHullImpl@@QBAXABVhkVector4@@AAV2@@Z");
//};

//public: float hkgpConvexHullImpl::getOrientedRectangle(class hkVector4const &, class hkVector4&, class hkTransform &) const
//{
//    mangled_ppc("?getOrientedRectangle@hkgpConvexHullImpl@@QBAMABVhkVector4@@AAV2@AAVhkTransform@@@Z");
//};

//public: bool hkgpConvexHullImpl::Edge::samePlane(void) const
//{
//    mangled_ppc("?samePlane@Edge@hkgpConvexHullImpl@@QBA_NXZ");
//};

//public: void hkgpConvexHullImpl::mustHaveMassProperties(void) const
//{
//    mangled_ppc("?mustHaveMassProperties@hkgpConvexHullImpl@@QBAXXZ");
//};

//public: float hkgpConvexHullImpl::getEdgeLengths(void) const
//{
//    mangled_ppc("?getEdgeLengths@hkgpConvexHullImpl@@QBAMXZ");
//};

//float hkMath::pow(float, float)
//{
//    mangled_ppc("?pow@hkMath@@YAMMM@Z");
//};

//public: void hkgpConvexHullImpl::generateVertexAdjacencyGraph(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?generateVertexAdjacencyGraph@hkgpConvexHullImpl@@QBAXAAV?$hkArray@HUhkContainerHeapAllocator@@@@0@Z");
//};

//public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkPseudoRandomGenerator::getRandomVector11(class hkVector4&)
//{
//    mangled_ppc("?getRandomVector11@hkPseudoRandomGenerator@@QAAXAAVhkVector4@@@Z");
//};

//public: float hkPseudoRandomGenerator::getRandReal11(void)
//{
//    mangled_ppc("?getRandReal11@hkPseudoRandomGenerator@@QAAMXZ");
//};

//public: class hkSimdReal hkVector4::distanceToSquared3(class hkVector4const &) const
//{
//    mangled_ppc("?distanceToSquared3@hkVector4@@QBA?AVhkSimdReal@@ABV1@@Z");
//};

//public: hkgpConvexHullImpl::RadialSort::RadialSort(class hkVector4const &)
//{
//    mangled_ppc("??0RadialSort@hkgpConvexHullImpl@@QAA@ABVhkVector4@@@Z");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::setSize(int, class hkVector4const &)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXHABVhkVector4@@@Z");
//};

//public: class hkVector4& hkArray<class hkVector4, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAAAVhkVector4@@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void) const
//{
//    mangled_ppc("?next@Item@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void)
//{
//    mangled_ppc("?next@Item@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::prev(void)
//{
//    mangled_ppc("?prev@Item@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(void)
//{
//    mangled_ppc("??0Item@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item & hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::operator=(struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??4Item@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAU012@ABU012@@Z");
//};

//protected: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??0Item@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@IAA@ABU012@@Z");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>(void)
//{
//    mangled_ppc("??0?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::~Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>(void)
//{
//    mangled_ppc("??1?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::vertex(int) const
//{
//    mangled_ppc("?vertex@?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBAPAUVertex@hkgpConvexHullImpl@@H@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex *& hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::vertex(int)
//{
//    mangled_ppc("?vertex@?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@hkgpConvexHullImpl@@H@Z");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void) const
//{
//    mangled_ppc("?next@Item@?$List@UTriangle@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUTriangle@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void)
//{
//    mangled_ppc("?next@Item@?$List@UTriangle@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUTriangle@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::prev(void)
//{
//    mangled_ppc("?prev@Item@?$List@UTriangle@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUTriangle@hkgpConvexHullImpl@@XZ");
//};

//public: hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>(struct hkgpConvexHullImpl::Triangle *, unsigned int)
//{
//    mangled_ppc("??0?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@PAUTriangle@hkgpConvexHullImpl@@I@Z");
//};

//public: hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>(unsigned long)
//{
//    mangled_ppc("??0?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@K@Z");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::next(void) const
//{
//    mangled_ppc("?next@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::prev(void) const
//{
//    mangled_ppc("?prev@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::link(void) const
//{
//    mangled_ppc("?link@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::nextCcw(void) const
//{
//    mangled_ppc("?nextCcw@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::triangle(void) const
//{
//    mangled_ppc("?triangle@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAPAUTriangle@hkgpConvexHullImpl@@XZ");
//};

//public: unsigned long hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::uid(void) const
//{
//    mangled_ppc("?uid@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAKXZ");
//};

//public: struct hkgpConvexHullImpl::Vertex *& hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::start(void) const
//{
//    mangled_ppc("?start@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex *& hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::end(void) const
//{
//    mangled_ppc("?end@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::isValid(void) const
//{
//    mangled_ppc("?isValid@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::isMaster(void) const
//{
//    mangled_ppc("?isMaster@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::isNaked(void) const
//{
//    mangled_ppc("?isNaked@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::operator!=(struct hkgpConvexHullImpl::Edge const &) const
//{
//    mangled_ppc("??9?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NABUEdge@hkgpConvexHullImpl@@@Z");
//};

//public: static void hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::getEdgeIterator(void) const
//{
//    mangled_ppc("?getEdgeIterator@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QBA?AUEdgeIterator@1@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::getFirst(void) const
//{
//    mangled_ppc("?getFirst@?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::getLast(void) const
//{
//    mangled_ppc("?getLast@?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: int hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAHXZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::getFirst(void) const
//{
//    mangled_ppc("?getFirst@?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUTriangle@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::getLast(void) const
//{
//    mangled_ppc("?getLast@?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUTriangle@hkgpConvexHullImpl@@XZ");
//};

//public: int hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAHXZ");
//};

//public: hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UVertex@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UVertex@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UVertex@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UTransposedVectors@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@PAU12@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::insert(struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@PAU12@UhkContainerHeapAllocator@@@@QAAHPAUVertex@hkgpConvexHullImpl@@0@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@PAU12@UhkContainerHeapAllocator@@@@QBAPAUVertex@hkgpConvexHullImpl@@PAU23@0@Z");
//};

//public: void hkPointerMap<struct hkgpConvexHullImpl::Vertex *, struct hkgpConvexHullImpl::Vertex *, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@PAU12@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@KKUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::insert(unsigned long, unsigned long)
//{
//    mangled_ppc("?insert@?$hkPointerMap@KKUhkContainerHeapAllocator@@@@QAAHKK@Z");
//};

//public: unsigned long hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::getWithDefault(unsigned long, unsigned long) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@KKUhkContainerHeapAllocator@@@@QBAKKK@Z");
//};

//public: enum hkResult hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::remove(unsigned long)
//{
//    mangled_ppc("?remove@?$hkPointerMap@KKUhkContainerHeapAllocator@@@@QAA?AW4hkResult@@K@Z");
//};

//public: void hkPointerMap<unsigned long, unsigned long, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkPointerMap@KKUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<int, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@HUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@USortedEdge@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@USortedEdge@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkgpConvexHullImpl::SortedEdge & hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@USortedEdge@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAAAUSortedEdge@hkgpConvexHullImpl@@XZ");
//};

//public: hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform>::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform>(class hkgpConvexHullImpl *)
//{
//    mangled_ppc("??0?$FanVolume@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QAA@PAV1@@Z");
//};

//public: hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkArray@HUhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@V?$hkArray@HUhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator & hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::operator++(void)
//{
//    mangled_ppc("??EEdgeIterator@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAAAAU01@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::operator()(void) const
//{
//    mangled_ppc("??REdgeIterator@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator const * hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::operator struct hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator const *(void) const
//{
//    mangled_ppc("??BEdgeIterator@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QBAPBU01@XZ");
//};

//public: hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::pushBack(class hkgpConvexHull *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@QAAXABQAVhkgpConvexHull@@@Z");
//};

//public: hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::insert(struct hkgpConvexHullImpl::Vertex *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAAHPAUVertex@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpConvexHullImpl::Vertex *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QBAHPAUVertex@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void hkPointerMap<struct hkgpConvexHullImpl::Vertex *, int, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkPointerMap@PAUVertex@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: static bool hkgpAbstractMeshDefinitions::Vertex<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex>::isOrdered(struct hkgpConvexHullImpl::Vertex const *, struct hkgpConvexHullImpl::Vertex const *)
//{
//    mangled_ppc("?isOrdered@?$Vertex@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@@hkgpAbstractMeshDefinitions@@SA_NPBUVertex@hkgpConvexHullImpl@@0@Z");
//};

//public: int hkgpConvexHullImpl::Vertex::compare(struct hkgpConvexHullImpl::Vertex const &) const
//{
//    mangled_ppc("?compare@Vertex@hkgpConvexHullImpl@@QBAHABU12@@Z");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: bool hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::hasReferences(void) const
//{
//    mangled_ppc("?hasReferences@?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBA_NXZ");
//};

//public: unsigned long & hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::link(int)
//{
//    mangled_ppc("?link@?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAAAKH@Z");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(void)
//{
//    mangled_ppc("??0Item@?$List@UTriangle@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//private: hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::EdgeIterator(struct hkgpConvexHullImpl::Edge)
//{
//    mangled_ppc("??0EdgeIterator@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@AAA@UEdge@hkgpConvexHullImpl@@@Z");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: unsigned long hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::link(int) const
//{
//    mangled_ppc("?link@?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBAKH@Z");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkVector4>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<class hkVector4>::_setSize(class hkMemoryAllocator &, int, class hkVector4const &)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@HABVhkVector4@@@Z");
//};

//public: class hkVector4& hkArrayBase<class hkVector4>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkVector4@@@@QAAAAVhkVector4@@AAVhkMemoryAllocator@@@Z");
//};

//void hkAlgorithm::swap<int>(int &, int &)
//{
//    mangled_ppc("??$swap@H@hkAlgorithm@@YAXAAH0@Z");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//protected: static unsigned int hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::ip1mod3(unsigned int)
//{
//    mangled_ppc("?ip1mod3@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@KAII@Z");
//};

//protected: static unsigned int hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::ip2mod3(unsigned int)
//{
//    mangled_ppc("?ip2mod3@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@KAII@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::bind(struct hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *> const &) const
//{
//    mangled_ppc("?bind@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXABU12@@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::unbind(void) const
//{
//    mangled_ppc("?unbind@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXXZ");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("?allocate@?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAPAUVertex@hkgpConvexHullImpl@@ABU34@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::release(struct hkgpConvexHullImpl::Vertex *)
//{
//    mangled_ppc("?release@?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUVertex@hkgpConvexHullImpl@@@Z");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpConvexHullImpl::Triangle const &)
//{
//    mangled_ppc("?allocate@?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAPAUTriangle@hkgpConvexHullImpl@@ABU34@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::release(struct hkgpConvexHullImpl::Triangle *)
//{
//    mangled_ppc("?release@?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUTriangle@hkgpConvexHullImpl@@@Z");
//};

//public: virtual hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::~hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@UAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: void hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::reset(void)
//{
//    mangled_ppc("?reset@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::Vertex>::hkArrayBase<struct hkgpConvexHullImpl::Vertex>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::Vertex const & hkArrayBase<struct hkgpConvexHullImpl::Vertex>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QBAABUVertex@hkgpConvexHullImpl@@H@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex & hkArrayBase<struct hkgpConvexHullImpl::Vertex>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAAAUVertex@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::Vertex>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::~hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UVertex@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::Vertex>::~hkArrayBase<struct hkgpConvexHullImpl::Vertex>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkgpConvexHullImpl::Vertex, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UVertex@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::hkArrayBase<struct hkGeometryProcessing::TransposedVectors>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UTransposedVectors@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::~hkArrayBase<struct hkGeometryProcessing::TransposedVectors>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: static __int64 hkgpConvexHullImpl::mul_32x32<__int64>(int, int)
//{
//    mangled_ppc("??$mul_32x32@_J@hkgpConvexHullImpl@@SA_JHH@Z");
//};

//float hkMath::min2<float>(float, float)
//{
//    mangled_ppc("??$min2@M@hkMath@@YAMMM@Z");
//};

//float hkMath::max2<float>(float, float)
//{
//    mangled_ppc("??$max2@M@hkMath@@YAMMM@Z");
//};

//public: void hkgpConvexHullImpl::swapCoordinates<0, 2>(void)
//{
//    mangled_ppc("??$swapCoordinates@$0A@$01@hkgpConvexHullImpl@@QAAXXZ");
//};

//public: void hkgpConvexHullImpl::swapCoordinates<1, 2>(void)
//{
//    mangled_ppc("??$swapCoordinates@$00$01@hkgpConvexHullImpl@@QAAXXZ");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::Vertex>(struct hkgpConvexHullImpl::Vertex *, int)
//{
//    mangled_ppc("??$quickSort@UVertex@hkgpConvexHullImpl@@@hkAlgorithm@@YAXPAUVertex@hkgpConvexHullImpl@@H@Z");
//};

//void hkAlgorithm::swap<struct hkgpConvexHullImpl::Vertex *>(struct hkgpConvexHullImpl::Vertex *&, struct hkgpConvexHullImpl::Vertex *&)
//{
//    mangled_ppc("??$swap@PAUVertex@hkgpConvexHullImpl@@@hkAlgorithm@@YAXAAPAUVertex@hkgpConvexHullImpl@@0@Z");
//};

//public: void hkgpConvexHullImpl::fetchWorldPositions<struct hkgpConvexHullImpl::PositionAsSource>(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("??$fetchWorldPositions@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static class hkVector4const & hkgpConvexHullImpl::PositionAsSource::get(class hkgpConvexHullImpl const *, struct hkgpConvexHullImpl::Vertex const *)
//{
//    mangled_ppc("?get@PositionAsSource@hkgpConvexHullImpl@@SAABVhkVector4@@PBV2@PBUVertex@2@@Z");
//};

//public: void hkgpConvexHullImpl::buildIndices<struct hkgpConvexHullImpl::PositionAsTransform>(void)
//{
//    mangled_ppc("??$buildIndices@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QAAXXZ");
//};

//public: static class hkVector4 hkgpConvexHullImpl::PositionAsTransform::get(class hkgpConvexHullImpl const *, struct hkgpConvexHullImpl::Vertex const *)
//{
//    mangled_ppc("?get@PositionAsTransform@hkgpConvexHullImpl@@SA?AVhkVector4@@PBV2@PBUVertex@2@@Z");
//};

//public: int hkArrayBase<int>::indexOf(int const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@H@@QBAHABHHH@Z");
//};

//public: int hkgpConvexHullImpl::generateIndexedFaces<int, int>(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, bool)
//{
//    mangled_ppc("??$generateIndexedFaces@HH@hkgpConvexHullImpl@@QAAHAAV?$hkArray@HUhkContainerHeapAllocator@@@@0_N@Z");
//};

//public: void hkgpConvexHullImpl::getSupportingVertex<struct hkgpConvexHullImpl::PositionAsSource>(class hkMatrix4const &, class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("??$getSupportingVertex@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXABVhkMatrix4@@ABVhkVector4@@AAV2@@Z");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::SortedEdge & hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAAAAUSortedEdge@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkgpConvexHullImpl::SortedEdge & hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAAAAUSortedEdge@hkgpConvexHullImpl@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@USortedEdge@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::~hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::applyFan<struct hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform> >(struct hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform> &) const
//{
//    mangled_ppc("??$applyFan@U?$FanVolume@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXAAU?$FanVolume@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedEdge>(struct hkgpConvexHullImpl::SortedEdge *, int)
//{
//    mangled_ppc("??$quickSort@USortedEdge@hkgpConvexHullImpl@@@hkAlgorithm@@YAXPAUSortedEdge@hkgpConvexHullImpl@@H@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::applyFan<struct hkgpConvexHullImpl::FanIncrementAndCheck>(struct hkgpConvexHullImpl::FanIncrementAndCheck &) const
//{
//    mangled_ppc("??$applyFan@UFanIncrementAndCheck@hkgpConvexHullImpl@@@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXAAUFanIncrementAndCheck@hkgpConvexHullImpl@@@Z");
//};

//public: bool hkgpConvexHullImpl::FanIncrementAndCheck::operator()(struct hkgpConvexHullImpl::Edge)
//{
//    mangled_ppc("??RFanIncrementAndCheck@hkgpConvexHullImpl@@QAA_NUEdge@1@@Z");
//};

//public: enum hkResult hkgpConvexHullImpl::buildMassProperties<struct hkgpConvexHullImpl::PositionAsTransform>(void)
//{
//    mangled_ppc("??$buildMassProperties@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QAA?AW4hkResult@@XZ");
//};

//public: static void hkgpConvexHullImpl::accumulateMass(class hkMatrix3const &, int, int, int, float, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?accumulateMass@hkgpConvexHullImpl@@SAXABVhkMatrix3@@HHHMAAVhkVector4@@1@Z");
//};

//public: static void hkgpConvexHullImpl::translateInertia(float, class hkVector4const &, class hkVector4const &, class hkMatrix3&)
//{
//    mangled_ppc("?translateInertia@hkgpConvexHullImpl@@SAXMABVhkVector4@@0AAVhkMatrix3@@@Z");
//};

//public: hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: class hkArray<int, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAAAV?$hkArray@HUhkContainerHeapAllocator@@@@H@Z");
//};

//public: int hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::~hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkArray@HUhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::~hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//private: void hkgpAbstractMesh<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkContainerHeapAllocator>::EdgeIterator::next(void)
//{
//    mangled_ppc("?next@EdgeIterator@?$hkgpAbstractMesh@UEdge@hkgpConvexHullImpl@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@AAAXXZ");
//};

//public: void hkgpConvexHullImpl::getNearestVertex<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("??$getNearestVertex@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXABVhkVector4@@AAV1@@Z");
//};

//public: void hkgpConvexHullImpl::getNearestVertex<struct hkgpConvexHullImpl::PositionAsTransform>(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("??$getNearestVertex@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXABVhkVector4@@AAV1@@Z");
//};

//public: void hkgpConvexHullImpl::getFarthestVertex<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("??$getFarthestVertex@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXABVhkVector4@@AAV1@@Z");
//};

//public: void hkgpConvexHullImpl::getFarthestVertex<struct hkgpConvexHullImpl::PositionAsTransform>(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("??$getFarthestVertex@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXABVhkVector4@@AAV1@@Z");
//};

//public: class hkVector4const & hkgpConvexHullImpl::getCentroid<struct hkgpConvexHullImpl::PositionAsSource>(void) const
//{
//    mangled_ppc("??$getCentroid@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAABVhkVector4@@XZ");
//};

//public: enum hkgpConvexHull::Side hkgpConvexHullImpl::classify<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, float, int *, float *) const
//{
//    mangled_ppc("??$classify@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBA?AW4Side@hkgpConvexHull@@ABVhkVector4@@MPAHPAM@Z");
//};

//public: enum hkgpConvexHull::Side hkgpConvexHullImpl::splitByPlane<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &, class hkgpConvexHull **, class hkgpConvexHull **, float) const
//{
//    mangled_ppc("??$splitByPlane@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBA?AW4Side@hkgpConvexHull@@ABVhkVector4@@PAPAV2@1M@Z");
//};

//public: hkArrayBase<class hkgpConvexHull *>::hkArrayBase<class hkgpConvexHull *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkgpConvexHull@@@@QAA@XZ");
//};

//public: class hkgpConvexHull *const & hkArrayBase<class hkgpConvexHull *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkgpConvexHull@@@@QBAABQAVhkgpConvexHull@@H@Z");
//};

//public: class hkgpConvexHull *& hkArrayBase<class hkgpConvexHull *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkgpConvexHull@@@@QAAAAPAVhkgpConvexHull@@H@Z");
//};

//public: int hkArrayBase<class hkgpConvexHull *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkgpConvexHull@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkgpConvexHull *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkgpConvexHull@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkgpConvexHull *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAVhkgpConvexHull@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkgpConvexHull *>::_pushBack(class hkMemoryAllocator &, class hkgpConvexHull *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkgpConvexHull@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkgpConvexHull@@@Z");
//};

//public: hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::~hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkgpConvexHull *>::~hkArrayBase<class hkgpConvexHull *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkgpConvexHull@@@@QAA@XZ");
//};

//public: void hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::swap(class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: void hkgpConvexHullImpl::fetchWorldPositions<struct hkgpConvexHullImpl::PositionAsTransform>(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("??$fetchWorldPositions@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkgpConvexHullImpl::buildBevelPlanes<struct hkgpConvexHullImpl::PositionAsTransform>(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("??$buildBevelPlanes@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAXMAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkgpConvexHullImpl::generateIndexedFaces<unsigned char, unsigned short>(class hkArray<unsigned char, struct hkContainerHeapAllocator> &, class hkArray<unsigned short, struct hkContainerHeapAllocator> &, bool)
//{
//    mangled_ppc("??$generateIndexedFaces@EG@hkgpConvexHullImpl@@QAAHAAV?$hkArray@EUhkContainerHeapAllocator@@@@AAV?$hkArray@GUhkContainerHeapAllocator@@@@_N@Z");
//};

//void hkAlgorithm::quickSort<class hkVector4, struct hkgpConvexHullImpl::RadialSort>(class hkVector4*, int, struct hkgpConvexHullImpl::RadialSort)
//{
//    mangled_ppc("??$quickSort@VhkVector4@@URadialSort@hkgpConvexHullImpl@@@hkAlgorithm@@YAXPAVhkVector4@@HURadialSort@hkgpConvexHullImpl@@@Z");
//};

//public: class hkSimdReal hkgpConvexHullImpl::maximumVertexDistanceSquaredFrom<struct hkgpConvexHullImpl::PositionAsSource>(class hkVector4const &) const
//{
//    mangled_ppc("??$maximumVertexDistanceSquaredFrom@UPositionAsSource@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBA?AVhkSimdReal@@ABVhkVector4@@@Z");
//};

//public: hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUTriangle@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkVector4, struct hkContainerHeapAllocator>::optimizeCapacity(int, int)
//{
//    mangled_ppc("?optimizeCapacity@?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@QAAXHH@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUVertex@hkgpConvexHullImpl@@ABU34@@Z");
//};

//public: static void * hkgpConvexHullImpl::Vertex::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Vertex@hkgpConvexHullImpl@@SAPAXIPAX@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkgpConvexHullImpl::Triangle * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpConvexHullImpl::Triangle const &)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUTriangle@hkgpConvexHullImpl@@ABU34@@Z");
//};

//public: static void * hkgpConvexHullImpl::Triangle::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Triangle@hkgpConvexHullImpl@@SAPAXIPAX@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: static struct hkgpConvexHullImpl::Edge const & hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::null(void)
//{
//    mangled_ppc("?null@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::turnCcw(void) const
//{
//    mangled_ppc("?turnCcw@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::turnCw(void) const
//{
//    mangled_ppc("?turnCw@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: int hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::index(void) const
//{
//    mangled_ppc("?index@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAHXZ");
//};

//public: struct hkgpConvexHullImpl::Edge hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::self(void) const
//{
//    mangled_ppc("?self@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::canBind(struct hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *> const &) const
//{
//    mangled_ppc("?canBind@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NABU12@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UTransposedVectors@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::SortedEdge, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@USortedEdge@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: bool hkgpConvexHullImpl::FanVolume<struct hkgpConvexHullImpl::PositionAsTransform>::operator()(struct hkgpConvexHullImpl::Edge)
//{
//    mangled_ppc("??R?$FanVolume@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QAA_NUEdge@1@@Z");
//};

//public: static float hkGeometryProcessing::tetrahedronVolume6(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?tetrahedronVolume6@hkGeometryProcessing@@SAMABVhkVector4@@000@Z");
//};

//public: void hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkArray@HUhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@USortedTriangle@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@USortedTriangle@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUTriangle@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::insert(struct hkgpConvexHullImpl::Triangle *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUTriangle@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAAHPAUTriangle@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpConvexHullImpl::Triangle *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUTriangle@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QBAHPAUTriangle@hkgpConvexHullImpl@@H@Z");
//};

//public: void hkPointerMap<struct hkgpConvexHullImpl::Triangle *, int, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkPointerMap@PAUTriangle@hkgpConvexHullImpl@@HUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkVector4, struct hkContainerTempAllocator>::hkArray<class hkVector4, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkVector4@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkVector4, struct hkContainerTempAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkVector4@@UhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UEdge@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::pushBack(struct hkgpConvexHullImpl::Edge const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UEdge@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAAXABUEdge@hkgpConvexHullImpl@@@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUTriangle@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@PAUTriangle@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@GUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkgpConvexHullImpl::Triangle::Triangle(struct hkgpConvexHullImpl::Triangle const &)
//{
//    mangled_ppc("??0Triangle@hkgpConvexHullImpl@@QAA@ABU01@@Z");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *>(struct hkgpAbstractMeshDefinitions::Triangle<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkgpConvexHullImpl::Vertex *> const &)
//{
//    mangled_ppc("??0?$Triangle@U0hkgpConvexHullImpl@@U0hkgpConvexHull@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@ABU01@@Z");
//};

//protected: hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHull::Triangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??0Item@?$List@UTriangle@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@IAA@ABU012@@Z");
//};

//public: struct hkgpConvexHullImpl::Vertex *& hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::apex(void) const
//{
//    mangled_ppc("?apex@?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@hkgpConvexHullImpl@@XZ");
//};

//public: void hkArrayBase<class hkVector4>::_optimizeCapacity(class hkMemoryAllocator &, int, int)
//{
//    mangled_ppc("?_optimizeCapacity@?$hkArrayBase@VhkVector4@@@@QAAXAAVhkMemoryAllocator@@HH@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::release(struct hkgpConvexHullImpl::Vertex *)
//{
//    mangled_ppc("?release@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAUVertex@hkgpConvexHullImpl@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::release(struct hkgpConvexHullImpl::Triangle *)
//{
//    mangled_ppc("?release@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAUTriangle@hkgpConvexHullImpl@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::reset(void)
//{
//    mangled_ppc("?reset@?$List@UVertex@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHull::Vertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator> >::reset(void)
//{
//    mangled_ppc("?reset@?$List@UTriangle@hkgpConvexHullImpl@@UItem@?$List@UVertex@hkgpConvexHullImpl@@U1hkgpConvexHull@@U?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::Vertex>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Vertex>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UVertex@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::Vertex>(struct hkgpConvexHullImpl::Vertex *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UVertex@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUVertex@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkMemUtil::memCpyOneAligned<64, 16>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$0EA@$0BA@@hkMemUtil@@YAXPAXPBX@Z");
//};

//public: static void hkArrayUtil::construct<struct hkgpConvexHullImpl::Vertex>(struct hkgpConvexHullImpl::Vertex *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UVertex@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUVertex@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::TransposedVectors>(struct hkGeometryProcessing::TransposedVectors *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UTransposedVectors@hkGeometryProcessing@@@hkArrayUtil@@SAXPAUTransposedVectors@hkGeometryProcessing@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::Vertex, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex> >(struct hkgpConvexHullImpl::Vertex *, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex>)
//{
//    mangled_ppc("??$quickSort@UVertex@hkgpConvexHullImpl@@V?$less@UVertex@hkgpConvexHullImpl@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUVertex@hkgpConvexHullImpl@@HV?$less@UVertex@hkgpConvexHullImpl@@@0@@Z");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::SortedTriangle & hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAAAAUSortedTriangle@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkgpConvexHullImpl::SortedTriangle * hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::expandByUnchecked(int)
//{
//    mangled_ppc("?expandByUnchecked@?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAAPAUSortedTriangle@hkgpConvexHullImpl@@H@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::~hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@USortedTriangle@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::~hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: hkArray<class hkVector4, struct hkContainerTempAllocator>::~hkArray<class hkVector4, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkVector4@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedTriangle>(struct hkgpConvexHullImpl::SortedTriangle *, int)
//{
//    mangled_ppc("??$quickSort@USortedTriangle@hkgpConvexHullImpl@@@hkAlgorithm@@YAXPAUSortedTriangle@hkgpConvexHullImpl@@H@Z");
//};

//public: class hkVector4 hkgpConvexHullImpl::planeFromTriangle<struct hkgpConvexHullImpl::PositionAsTransform>(struct hkgpConvexHullImpl::Triangle const *, bool) const
//{
//    mangled_ppc("??$planeFromTriangle@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBA?AVhkVector4@@PBUTriangle@0@_N@Z");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::Edge>::hkArrayBase<struct hkgpConvexHullImpl::Edge>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::Edge & hkArrayBase<struct hkgpConvexHullImpl::Edge>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAAAAUEdge@hkgpConvexHullImpl@@XZ");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::Edge>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::_pushBack(class hkMemoryAllocator &, struct hkgpConvexHullImpl::Edge const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@ABUEdge@hkgpConvexHullImpl@@@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::~hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UEdge@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::Edge>::~hkArrayBase<struct hkgpConvexHullImpl::Edge>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: class hkVector4const & hkgpConvexHullImpl::getCentroid<struct hkgpConvexHullImpl::PositionAsTransform>(void) const
//{
//    mangled_ppc("??$getCentroid@UPositionAsTransform@hkgpConvexHullImpl@@@hkgpConvexHullImpl@@QBAABVhkVector4@@XZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::hkArrayBase<struct hkgpConvexHullImpl::Triangle *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//public: struct hkgpConvexHullImpl::Triangle *& hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAAAAPAUTriangle@hkgpConvexHullImpl@@H@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::pushBackUnchecked(struct hkgpConvexHullImpl::Triangle *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAAXABQAUTriangle@hkgpConvexHullImpl@@@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUTriangle@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::~hkArrayBase<struct hkgpConvexHullImpl::Triangle *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::Triangle *, struct hkgpConvexHullImpl::Triangle::SortByPlaneId>(struct hkgpConvexHullImpl::Triangle **, int, struct hkgpConvexHullImpl::Triangle::SortByPlaneId)
//{
//    mangled_ppc("??$quickSort@PAUTriangle@hkgpConvexHullImpl@@USortByPlaneId@12@@hkAlgorithm@@YAXPAPAUTriangle@hkgpConvexHullImpl@@HUSortByPlaneId@12@@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::SortedEdge>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@USortedEdge@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::SortedEdge>(struct hkgpConvexHullImpl::SortedEdge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@USortedEdge@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUSortedEdge@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkgpConvexHullImpl::SortedEdge>(struct hkgpConvexHullImpl::SortedEdge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@USortedEdge@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUSortedEdge@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedEdge, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge> >(struct hkgpConvexHullImpl::SortedEdge *, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge>)
//{
//    mangled_ppc("??$quickSort@USortedEdge@hkgpConvexHullImpl@@V?$less@USortedEdge@hkgpConvexHullImpl@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUSortedEdge@hkgpConvexHullImpl@@HV?$less@USortedEdge@hkgpConvexHullImpl@@@0@@Z");
//};

//public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkArray<int, struct hkContainerHeapAllocator> >(class hkArray<int, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkArray@HUhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@HUhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkArray<int, struct hkContainerHeapAllocator> >(class hkArray<int, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@V?$hkArray@HUhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@HUhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<class hkgpConvexHull *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkgpConvexHull@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkgpConvexHull *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkgpConvexHull@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkgpConvexHull *>(class hkgpConvexHull **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkgpConvexHull@@@hkArrayUtil@@SAXPAPAVhkgpConvexHull@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkgpConvexHull *>(class hkgpConvexHull **, int, class hkgpConvexHull *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkgpConvexHull@@@hkArrayUtil@@SAXPAPAVhkgpConvexHull@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//class hkSimdReal hkMath::max2<class hkSimdReal>(class hkSimdReal, class hkSimdReal)
//{
//    mangled_ppc("??$max2@VhkSimdReal@@@hkMath@@YA?AVhkSimdReal@@V1@0@Z");
//};

//void hkAlgorithm::quickSortRecursive<class hkVector4, struct hkgpConvexHullImpl::RadialSort>(class hkVector4*, int, int, struct hkgpConvexHullImpl::RadialSort)
//{
//    mangled_ppc("??$quickSortRecursive@VhkVector4@@URadialSort@hkgpConvexHullImpl@@@hkAlgorithm@@YAXPAVhkVector4@@HHURadialSort@hkgpConvexHullImpl@@@Z");
//};

//public: bool hkgpConvexHullImpl::RadialSort::operator()(class hkVector4const &, class hkVector4const &) const
//{
//    mangled_ppc("??RRadialSort@hkgpConvexHullImpl@@QBA_NABVhkVector4@@0@Z");
//};

//public: void * hkgpConvexHullImpl::Triangle::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GTriangle@hkgpConvexHullImpl@@QAAPAXI@Z");
//};

//public: static void hkgpConvexHullImpl::Triangle::operator delete(void *)
//{
//    mangled_ppc("??3Triangle@hkgpConvexHullImpl@@SAXPAX@Z");
//};

//public: hkgpConvexHullImpl::SortedEdge::SortedEdge(void)
//{
//    mangled_ppc("??0SortedEdge@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: void * hkArray<int, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@HUhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1>::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1>(void)
//{
//    mangled_ppc("??0?$SortedValue@UEdge@hkgpConvexHullImpl@@M$0?0@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: hkgpConvexHullImpl::Edge::Edge(void)
//{
//    mangled_ppc("??0Edge@hkgpConvexHullImpl@@QAA@XZ");
//};

//public: hkgpTopology::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>::Edge<struct hkgpConvexHullImpl::Edge, struct hkgpConvexHullImpl::Vertex, struct hkgpConvexHullImpl::Triangle, struct hkgpConvexHullImpl::Vertex *>(void)
//{
//    mangled_ppc("??0?$Edge@U0hkgpConvexHullImpl@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@XZ");
//};

//public: bool hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::needRelease(void) const
//{
//    mangled_ppc("?needRelease@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QBA_NXZ");
//};

//public: bool hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::needRelease(void) const
//{
//    mangled_ppc("?needRelease@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QBA_NXZ");
//};

//public: static void hkArrayBase<int>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@H@@SAXPAX@Z");
//};

//public: void hkArray<struct hkgpConvexHullImpl::SortedTriangle, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@USortedTriangle@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkVector4, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkVector4@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Edge, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UEdge@hkgpConvexHullImpl@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkgpConvexHullImpl::Triangle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUTriangle@hkgpConvexHullImpl@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QBAHXZ");
//};

//void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::Vertex, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex> >(struct hkgpConvexHullImpl::Vertex *, int, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex>)
//{
//    mangled_ppc("??$quickSortRecursive@UVertex@hkgpConvexHullImpl@@V?$less@UVertex@hkgpConvexHullImpl@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUVertex@hkgpConvexHullImpl@@HHV?$less@UVertex@hkgpConvexHullImpl@@@0@@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkgpConvexHullImpl::SortedTriangle>(struct hkgpConvexHullImpl::SortedTriangle *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@USortedTriangle@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUSortedTriangle@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkgpConvexHullImpl::SortedTriangle, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle> >(struct hkgpConvexHullImpl::SortedTriangle *, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle>)
//{
//    mangled_ppc("??$quickSort@USortedTriangle@hkgpConvexHullImpl@@V?$less@USortedTriangle@hkgpConvexHullImpl@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUSortedTriangle@hkgpConvexHullImpl@@HV?$less@USortedTriangle@hkgpConvexHullImpl@@@0@@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::Edge>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Edge>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UEdge@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::Edge>(struct hkgpConvexHullImpl::Edge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UEdge@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUEdge@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpConvexHullImpl::Edge>(struct hkgpConvexHullImpl::Edge *, int, struct hkgpConvexHullImpl::Edge const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UEdge@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUEdge@hkgpConvexHullImpl@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpConvexHullImpl::Triangle *>(struct hkgpConvexHullImpl::Triangle **, int, struct hkgpConvexHullImpl::Triangle *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUTriangle@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAPAUTriangle@hkgpConvexHullImpl@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::Triangle *, struct hkgpConvexHullImpl::Triangle::SortByPlaneId>(struct hkgpConvexHullImpl::Triangle **, int, int, struct hkgpConvexHullImpl::Triangle::SortByPlaneId)
//{
//    mangled_ppc("??$quickSortRecursive@PAUTriangle@hkgpConvexHullImpl@@USortByPlaneId@12@@hkAlgorithm@@YAXPAPAUTriangle@hkgpConvexHullImpl@@HHUSortByPlaneId@12@@Z");
//};

//public: bool hkgpConvexHullImpl::Triangle::SortByPlaneId::operator()(struct hkgpConvexHullImpl::Triangle const *, struct hkgpConvexHullImpl::Triangle const *) const
//{
//    mangled_ppc("??RSortByPlaneId@Triangle@hkgpConvexHullImpl@@QBA_NPBU12@0@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::SortedEdge, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge> >(struct hkgpConvexHullImpl::SortedEdge *, int, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge>)
//{
//    mangled_ppc("??$quickSortRecursive@USortedEdge@hkgpConvexHullImpl@@V?$less@USortedEdge@hkgpConvexHullImpl@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUSortedEdge@hkgpConvexHullImpl@@HHV?$less@USortedEdge@hkgpConvexHullImpl@@@0@@Z");
//};

//public: int hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAXXZ");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: int hkAlgorithm::less<struct hkgpConvexHullImpl::Vertex>::operator()(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("??R?$less@UVertex@hkgpConvexHullImpl@@@hkAlgorithm@@QAAHABUVertex@hkgpConvexHullImpl@@0@Z");
//};

//bool operator<(struct hkgpConvexHullImpl::Vertex const &, struct hkgpConvexHullImpl::Vertex const &)
//{
//    mangled_ppc("??M@YA_NABUVertex@hkgpConvexHullImpl@@0@Z");
//};

//public: int hkAlgorithm::less<struct hkgpConvexHullImpl::SortedEdge>::operator()(struct hkgpConvexHullImpl::SortedEdge const &, struct hkgpConvexHullImpl::SortedEdge const &)
//{
//    mangled_ppc("??R?$less@USortedEdge@hkgpConvexHullImpl@@@hkAlgorithm@@QAAHABUSortedEdge@hkgpConvexHullImpl@@0@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: bool hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1>::operator<(struct hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Edge, float, -1> const &) const
//{
//    mangled_ppc("??M?$SortedValue@UEdge@hkgpConvexHullImpl@@M$0?0@hkgpConvexHullImpl@@QBA_NABU01@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::SortedTriangle>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@USortedTriangle@hkgpConvexHullImpl@@@@QAAXXZ");
//};

//void hkAlgorithm::quickSortRecursive<struct hkgpConvexHullImpl::SortedTriangle, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle> >(struct hkgpConvexHullImpl::SortedTriangle *, int, int, class hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle>)
//{
//    mangled_ppc("??$quickSortRecursive@USortedTriangle@hkgpConvexHullImpl@@V?$less@USortedTriangle@hkgpConvexHullImpl@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUSortedTriangle@hkgpConvexHullImpl@@HHV?$less@USortedTriangle@hkgpConvexHullImpl@@@0@@Z");
//};

//public: void hkArrayBase<struct hkgpConvexHullImpl::Triangle *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUTriangle@hkgpConvexHullImpl@@@@QAAXXZ");
//};

//public: int hkAlgorithm::less<struct hkgpConvexHullImpl::SortedTriangle>::operator()(struct hkgpConvexHullImpl::SortedTriangle const &, struct hkgpConvexHullImpl::SortedTriangle const &)
//{
//    mangled_ppc("??R?$less@USortedTriangle@hkgpConvexHullImpl@@@hkAlgorithm@@QAAHABUSortedTriangle@hkgpConvexHullImpl@@0@Z");
//};

//public: bool hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Triangle *, float, 1>::operator<(struct hkgpConvexHullImpl::SortedValue<struct hkgpConvexHullImpl::Triangle *, float, 1> const &) const
//{
//    mangled_ppc("??M?$SortedValue@PAUTriangle@hkgpConvexHullImpl@@M$00@hkgpConvexHullImpl@@QBA_NABU01@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UVertex@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpConvexHullImpl::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UTriangle@hkgpConvexHullImpl@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::SortedTriangle>(struct hkgpConvexHullImpl::SortedTriangle *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@USortedTriangle@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAUSortedTriangle@hkgpConvexHullImpl@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpConvexHullImpl::Triangle *>(struct hkgpConvexHullImpl::Triangle **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUTriangle@hkgpConvexHullImpl@@@hkArrayUtil@@SAXPAPAUTriangle@hkgpConvexHullImpl@@HU?$hkTraitBool@$00@@@Z");
//};

